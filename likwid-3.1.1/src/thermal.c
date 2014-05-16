/*
 * =======================================================================================
 *
 *      Filename:  thermal.c
 *
 *      Description:  Module implementing Intel TM/TM2 interface
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

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <types.h>
#include <thermal.h>
#include <cpuid.h>

/* #####   EXPORTED VARIABLES   ########################################### */

ThermalInfo thermal_info;

/* #####   FUNCTION DEFINITIONS  -  LOCAL TO THIS SOURCE FILE   ########### */



/* #####   FUNCTION DEFINITIONS  -  EXPORTED FUNCTIONS   ################## */

void thermal_init(int cpuId)
{
    uint64_t flags=0ULL;

    if ( cpuid_hasFeature(TM2) )
    {
        flags = msr_read(cpuId, IA32_THERM_STATUS);

        if ( flags & 0x1 )
        {
            thermal_info.highT = 1;
        }
        else
        {
            thermal_info.highT = 0;
        }

        thermal_info.resolution =  extractBitField(flags,4,27);

        flags = 0ULL;
        flags = msr_read(cpuId, MSR_TEMPERATURE_TARGET);
        thermal_info.activationT =  extractBitField(flags,8,16);
    }
}

