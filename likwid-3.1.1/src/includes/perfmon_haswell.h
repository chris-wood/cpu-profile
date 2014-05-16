/*
 * =======================================================================================
 *
 *      Filename:  perfmon_haswell.h
 *
 *      Description:  Header File of perfmon module for Haswell.
 *
 *      Version:   3.1.1
 *      Released:  12.2.2014
 *
 *      Author:  Jan Treibig (jt), jan.treibig@gmail.com
 *      Project:  likwid
 *
 *      Copyright (C) 2014 Jan Treibig
 *
 *      This program is free software: you can redistribute it and/or modify it under
 *      the terms of the GNU General Public License as published by the Free Software
 *      Foundation, either version 3 of the License, or (at your option) any later
 *      version.
 *
 *      This program is distributed in the hope that it will be useful, but WITHOUT ANY
 *      WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 *      PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along with
 *      this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * =======================================================================================
 */

#include <perfmon_haswell_events.h>
#include <perfmon_haswell_groups.h>
#include <perfmon_haswell_counters.h>

static int perfmon_numCountersHaswell = NUM_COUNTERS_HASWELL;
static int perfmon_numGroupsHaswell = NUM_GROUPS_HASWELL;
static int perfmon_numArchEventsHaswell = NUM_ARCH_EVENTS_HASWELL;


#define OFFSET_PMC 3

void perfmon_init_haswell(PerfmonThread *thread)
{
    uint64_t flags = 0x0ULL;
    int cpu_id = thread->processorId;

    /* Initialize registers */
    msr_write(cpu_id, MSR_PERF_FIXED_CTR_CTRL, 0x0ULL);
    msr_write(cpu_id, MSR_PERFEVTSEL0, 0x0ULL);
    msr_write(cpu_id, MSR_PERFEVTSEL1, 0x0ULL);
    msr_write(cpu_id, MSR_PERFEVTSEL2, 0x0ULL);
    msr_write(cpu_id, MSR_PERFEVTSEL3, 0x0ULL);
    msr_write(cpu_id, MSR_PMC0, 0x0ULL);
    msr_write(cpu_id, MSR_PMC1, 0x0ULL);
    msr_write(cpu_id, MSR_PMC2, 0x0ULL);
    msr_write(cpu_id, MSR_PMC3, 0x0ULL);
    msr_write(cpu_id, MSR_PERF_FIXED_CTR0, 0x0ULL);
    msr_write(cpu_id, MSR_PERF_FIXED_CTR1, 0x0ULL);
    msr_write(cpu_id, MSR_PERF_FIXED_CTR2, 0x0ULL);
    msr_write(cpu_id, MSR_PERF_GLOBAL_CTRL, 0x0ULL);
    msr_write(cpu_id, MSR_PERF_GLOBAL_OVF_CTRL, 0x0ULL);
    msr_write(cpu_id, MSR_PEBS_ENABLE, 0x0ULL);

    /* initialize fixed counters
     * FIXED 0: Instructions retired
     * FIXED 1: Clocks unhalted core
     * FIXED 2: Clocks unhalted ref */
    msr_write(cpu_id, MSR_PERF_FIXED_CTR_CTRL, 0x222ULL);

    /* Preinit of PERFEVSEL registers */
    flags |= (1<<22);  /* enable flag */
    flags |= (1<<16);  /* user mode flag */

    msr_write(cpu_id, MSR_PERFEVTSEL0, flags);
    msr_write(cpu_id, MSR_PERFEVTSEL1, flags);
    msr_write(cpu_id, MSR_PERFEVTSEL2, flags);
    msr_write(cpu_id, MSR_PERFEVTSEL3, flags);

    if ((socket_lock[affinity_core2node_lookup[cpu_id]] == cpu_id) ||
            lock_acquire((int*) &socket_lock[affinity_core2node_lookup[cpu_id]], cpu_id))
    {

    }

}

void perfmon_setupCounterThread_haswell(
        int thread_id,
        PerfmonEvent* event,
        PerfmonCounterIndex index)
{
    int haveLock = 0;
    uint64_t flags;
    uint32_t uflags;
    uint64_t reg = haswell_counter_map[index].configRegister;
    int cpu_id = perfmon_threadData[thread_id].processorId;
    perfmon_threadData[thread_id].counters[index].init = TRUE;

    if ((socket_lock[affinity_core2node_lookup[cpu_id]] == cpu_id))
    {
        haveLock = 1;
    }

    switch (haswell_counter_map[index].type)
    {
        case PMC:

            flags = msr_read(cpu_id,reg);
            flags &= ~(0xFFFFU);   /* clear lower 16bits */

            /* Intel with standard 8 bit event mask: [7:0] */
            flags |= (event->umask<<8) + event->eventId;

            if (event->cfgBits != 0) /* set custom cfg and cmask */
            {
                flags &= ~(0xFFFFU<<16);  /* clear upper 16bits */
                flags |= ((event->cmask<<8) + event->cfgBits)<<16;
            }

            if (perfmon_verbose)
            {
                printf("[%d] perfmon_setup_counter PMC: Write Register 0x%llX , Flags: 0x%llX \n",
                        cpu_id,
                        LLU_CAST reg,
                        LLU_CAST flags);
            }

            msr_write(cpu_id, reg , flags);
            break;

        case FIXED:
            break;

        case POWER:
            break;

        default:
            /* should never be reached */
            break;
    }
}

void perfmon_startCountersThread_haswell(int thread_id)
{
    int haveLock = 0;
    uint64_t flags = 0x0ULL;
    uint32_t uflags = 0x10000UL; /* Clear freeze bit */
    int cpu_id = perfmon_threadData[thread_id].processorId;

    if ((socket_lock[affinity_core2node_lookup[cpu_id]] == cpu_id))
    {
        haveLock = 1;
    }

    msr_write(cpu_id, MSR_PERF_GLOBAL_CTRL, 0x0ULL);

    for ( int i=0; i<perfmon_numCountersHaswell; i++ )
    {
        if (perfmon_threadData[thread_id].counters[i].init == TRUE)
        {
            switch (haswell_counter_map[i].type)
            {
                case PMC:
                    msr_write(cpu_id, haswell_counter_map[i].counterRegister, 0x0ULL);
                    flags |= (1<<(i-OFFSET_PMC));  /* enable counter */
                    break;

                case FIXED:
                    msr_write(cpu_id, haswell_counter_map[i].counterRegister, 0x0ULL);
                    flags |= (1ULL<<(i+32));  /* enable fixed counter */
                    break;

                case POWER:
                    if(haveLock)
                    {
                        perfmon_threadData[thread_id].counters[i].counterData =
                            power_read(cpu_id, haswell_counter_map[i].counterRegister);
                    }

                    break;

                default:
                    /* should never be reached */
                    break;
            }
        }
    }

    if (perfmon_verbose)
    {
        printf("perfmon_start_counters: Write Register 0x%X , \
                Flags: 0x%llX \n",MSR_PERF_GLOBAL_CTRL, LLU_CAST flags);
        printf("perfmon_start_counters: Write Register 0x%X , \
                Flags: 0x%llX \n",MSR_UNCORE_PERF_GLOBAL_CTRL, LLU_CAST uflags);
    }

    msr_write(cpu_id, MSR_PERF_GLOBAL_CTRL, flags);
    msr_write(cpu_id, MSR_PERF_GLOBAL_OVF_CTRL, 0x30000000FULL);
}

void perfmon_stopCountersThread_haswell(int thread_id)
{
    uint64_t flags;
    uint32_t uflags = 0x10100UL; /* Set freeze bit */
    uint64_t counter_result = 0x0ULL;
    int haveLock = 0;
    int cpu_id = perfmon_threadData[thread_id].processorId;

    if ((socket_lock[affinity_core2node_lookup[cpu_id]] == cpu_id))
    {
        haveLock = 1;
    }

    msr_write(cpu_id, MSR_PERF_GLOBAL_CTRL, 0x0ULL);

    for ( int i=0; i < perfmon_numCountersHaswell; i++ ) 
    {
        if (perfmon_threadData[thread_id].counters[i].init == TRUE) 
        {
            switch (haswell_counter_map[i].type)
            {
                case PMC:

                case FIXED:
                    perfmon_threadData[thread_id].counters[i].counterData =
                        msr_read(cpu_id, haswell_counter_map[i].counterRegister);
                    break;

                case POWER:
                    if(haveLock)
                    {
                        perfmon_threadData[thread_id].counters[i].counterData =
                            power_info.energyUnit *
                            ( power_read(cpu_id, haswell_counter_map[i].counterRegister) -
                              perfmon_threadData[thread_id].counters[i].counterData);
                    }
                    break;

                case THERMAL:
                        perfmon_threadData[thread_id].counters[i].counterData =
                             thermal_read(cpu_id);
                    break;

                default:
                    /* should never be reached */
                    break;
            }
        }
    }

    flags = msr_read(cpu_id,MSR_PERF_GLOBAL_STATUS);
    //    printf ("Status: 0x%llX \n", LLU_CAST flags);
    if ( (flags & 0x3) || (flags & (0x3ULL<<32)) ) 
    {
        printf ("Overflow occured \n");
    }
}

void perfmon_readCountersThread_haswell(int thread_id)
{
    uint64_t counter_result = 0x0ULL;
    int haveLock = 0;
    int cpu_id = perfmon_threadData[thread_id].processorId;

    if ((socket_lock[affinity_core2node_lookup[cpu_id]] == cpu_id))
    {
        haveLock = 1;
    }

    for ( int i=0; i<perfmon_numCountersHaswell; i++ )
    {
        if (perfmon_threadData[thread_id].counters[i].init == TRUE)
        {
            if ((haswell_counter_map[i].type == PMC) ||
                    (haswell_counter_map[i].type == FIXED))
            {
                perfmon_threadData[thread_id].counters[i].counterData =
                    msr_read(cpu_id, haswell_counter_map[i].counterRegister);
            }
            else
            {
                if(haveLock)
                {
                    switch (haswell_counter_map[i].type)
                    {
                        case POWER:
                            perfmon_threadData[thread_id].counters[i].counterData =
                                power_info.energyUnit *
                                power_read(cpu_id, haswell_counter_map[i].counterRegister);
                            break;

                        default:
                            /* should never be reached */
                            break;
                    }
                }
            }
        }
    }
}

