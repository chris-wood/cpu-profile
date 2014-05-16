/*
 * =======================================================================================
 *
 *      Filename:  perfmon_ivybridge_counters.h
 *
 *      Description: Counter header file of perfmon module for Ivy Bridge.
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

#define NUM_COUNTERS_CORE_IVYBRIDGE 8
#define NUM_COUNTERS_UNCORE_IVYBRIDGE 60
#define NUM_COUNTERS_IVYBRIDGE 85

static PerfmonCounterMap ivybridge_counter_map[NUM_COUNTERS_IVYBRIDGE] = {
    /* Fixed Counters: instructions retired, cycles unhalted core */
    {"FIXC0", PMC0, FIXED, MSR_PERF_FIXED_CTR_CTRL, MSR_PERF_FIXED_CTR0, 0, 0},
    {"FIXC1", PMC1, FIXED, MSR_PERF_FIXED_CTR_CTRL, MSR_PERF_FIXED_CTR1, 0, 0},
    {"FIXC2", PMC2, FIXED, MSR_PERF_FIXED_CTR_CTRL, MSR_PERF_FIXED_CTR2, 0, 0},
    /* PMC Counters: 4 48bit wide */
    {"PMC0", PMC3, PMC, MSR_PERFEVTSEL0, MSR_PMC0, 0, 0},
    {"PMC1", PMC4, PMC, MSR_PERFEVTSEL1, MSR_PMC1, 0, 0},
    {"PMC2", PMC5, PMC, MSR_PERFEVTSEL2, MSR_PMC2, 0, 0},
    {"PMC3", PMC6, PMC, MSR_PERFEVTSEL3, MSR_PMC3, 0, 0},
    /* Temperature Sensor*/
    {"TMP0", PMC7, THERMAL, 0, 0, 0, 0},
    /* RAPL counters */
    {"PWR0", PMC8, POWER, 0, MSR_PKG_ENERGY_STATUS, 0, 0},
    {"PWR1", PMC9, POWER, 0, MSR_PP0_ENERGY_STATUS, 0, 0},
    {"PWR2", PMC10, POWER, 0, MSR_PP1_ENERGY_STATUS, 0, 0},
    {"PWR3", PMC11, POWER, 0, MSR_DRAM_ENERGY_STATUS, 0, 0},
    /* CBOX counters */
    {"CBOX0C0", PMC12, CBOX0, MSR_UNC_C0_PMON_CTL0, MSR_UNC_C0_PMON_CTR0, 0, 0},
    {"CBOX0C1", PMC13, CBOX0, MSR_UNC_C0_PMON_CTL1, MSR_UNC_C0_PMON_CTR1, 0, 0},
    {"CBOX0C2", PMC14, CBOX0, MSR_UNC_C0_PMON_CTL2, MSR_UNC_C0_PMON_CTR2, 0, 0},
    {"CBOX0C3", PMC15, CBOX0, MSR_UNC_C0_PMON_CTL3, MSR_UNC_C0_PMON_CTR3, 0, 0},
    {"CBOX1C0", PMC16, CBOX1, MSR_UNC_C1_PMON_CTL0, MSR_UNC_C1_PMON_CTR0, 0, 0},
    {"CBOX1C1", PMC17, CBOX1, MSR_UNC_C1_PMON_CTL1, MSR_UNC_C1_PMON_CTR1, 0, 0},
    {"CBOX1C2", PMC18, CBOX1, MSR_UNC_C1_PMON_CTL2, MSR_UNC_C1_PMON_CTR2, 0, 0},
    {"CBOX1C3", PMC19, CBOX1, MSR_UNC_C1_PMON_CTL3, MSR_UNC_C1_PMON_CTR3, 0, 0},
    {"CBOX2C0", PMC20, CBOX2, MSR_UNC_C2_PMON_CTL0, MSR_UNC_C2_PMON_CTR0, 0, 0},
    {"CBOX2C1", PMC21, CBOX2, MSR_UNC_C2_PMON_CTL1, MSR_UNC_C2_PMON_CTR1, 0, 0},
    {"CBOX2C2", PMC22, CBOX2, MSR_UNC_C2_PMON_CTL2, MSR_UNC_C2_PMON_CTR2, 0, 0},
    {"CBOX2C3", PMC23, CBOX2, MSR_UNC_C2_PMON_CTL3, MSR_UNC_C2_PMON_CTR3, 0, 0},
    {"CBOX3C0", PMC24, CBOX3, MSR_UNC_C3_PMON_CTL0, MSR_UNC_C3_PMON_CTR0, 0, 0},
    {"CBOX3C1", PMC25, CBOX3, MSR_UNC_C3_PMON_CTL1, MSR_UNC_C3_PMON_CTR1, 0, 0},
    {"CBOX3C2", PMC26, CBOX3, MSR_UNC_C3_PMON_CTL2, MSR_UNC_C3_PMON_CTR2, 0, 0},
    {"CBOX3C3", PMC27, CBOX3, MSR_UNC_C3_PMON_CTL3, MSR_UNC_C3_PMON_CTR3, 0, 0},
    {"CBOX4C0", PMC28, CBOX4, MSR_UNC_C4_PMON_CTL0, MSR_UNC_C4_PMON_CTR0, 0, 0},
    {"CBOX4C1", PMC29, CBOX4, MSR_UNC_C4_PMON_CTL1, MSR_UNC_C4_PMON_CTR1, 0, 0},
    {"CBOX4C2", PMC30, CBOX4, MSR_UNC_C4_PMON_CTL2, MSR_UNC_C4_PMON_CTR2, 0, 0},
    {"CBOX4C3", PMC31, CBOX4, MSR_UNC_C4_PMON_CTL3, MSR_UNC_C4_PMON_CTR3, 0, 0},
    {"CBOX5C0", PMC32, CBOX5, MSR_UNC_C5_PMON_CTL0, MSR_UNC_C5_PMON_CTR0, 0, 0},
    {"CBOX5C1", PMC33, CBOX5, MSR_UNC_C5_PMON_CTL1, MSR_UNC_C5_PMON_CTR1, 0, 0},
    {"CBOX5C2", PMC34, CBOX5, MSR_UNC_C5_PMON_CTL2, MSR_UNC_C5_PMON_CTR2, 0, 0},
    {"CBOX5C3", PMC35, CBOX5, MSR_UNC_C5_PMON_CTL3, MSR_UNC_C5_PMON_CTR3, 0, 0},
    {"CBOX6C0", PMC36, CBOX6, MSR_UNC_C6_PMON_CTL0, MSR_UNC_C6_PMON_CTR0, 0, 0},
    {"CBOX6C1", PMC37, CBOX6, MSR_UNC_C6_PMON_CTL1, MSR_UNC_C6_PMON_CTR1, 0, 0},
    {"CBOX6C2", PMC38, CBOX6, MSR_UNC_C6_PMON_CTL2, MSR_UNC_C6_PMON_CTR2, 0, 0},
    {"CBOX6C3", PMC39, CBOX6, MSR_UNC_C6_PMON_CTL3, MSR_UNC_C6_PMON_CTR3, 0, 0},
    {"CBOX7C0", PMC40, CBOX7, MSR_UNC_C7_PMON_CTL0, MSR_UNC_C7_PMON_CTR0, 0, 0},
    {"CBOX7C1", PMC41, CBOX7, MSR_UNC_C7_PMON_CTL1, MSR_UNC_C7_PMON_CTR1, 0, 0},
    {"CBOX7C2", PMC42, CBOX7, MSR_UNC_C7_PMON_CTL2, MSR_UNC_C7_PMON_CTR2, 0, 0},
    {"CBOX7C3", PMC43, CBOX7, MSR_UNC_C7_PMON_CTL3, MSR_UNC_C7_PMON_CTR3, 0, 0},
    {"CBOX8C0", PMC44, CBOX8, MSR_UNC_C8_PMON_CTL0, MSR_UNC_C8_PMON_CTR0, 0, 0},
    {"CBOX8C1", PMC45, CBOX8, MSR_UNC_C8_PMON_CTL1, MSR_UNC_C8_PMON_CTR1, 0, 0},
    {"CBOX8C2", PMC46, CBOX8, MSR_UNC_C8_PMON_CTL2, MSR_UNC_C8_PMON_CTR2, 0, 0},
    {"CBOX8C3", PMC47, CBOX8, MSR_UNC_C8_PMON_CTL3, MSR_UNC_C8_PMON_CTR3, 0, 0},
    {"CBOX9C0", PMC48, CBOX9, MSR_UNC_C9_PMON_CTL0, MSR_UNC_C9_PMON_CTR0, 0, 0},
    {"CBOX9C1", PMC49, CBOX9, MSR_UNC_C9_PMON_CTL1, MSR_UNC_C9_PMON_CTR1, 0, 0},
    {"CBOX9C2", PMC50, CBOX9, MSR_UNC_C9_PMON_CTL2, MSR_UNC_C9_PMON_CTR2, 0, 0},
    {"CBOX9C3", PMC51, CBOX9, MSR_UNC_C9_PMON_CTL3, MSR_UNC_C9_PMON_CTR3, 0, 0},
    {"CBOX9C0", PMC52, CBOX10, MSR_UNC_C10_PMON_CTL0, MSR_UNC_C10_PMON_CTR0, 0, 0},
    {"CBOX9C1", PMC53, CBOX10, MSR_UNC_C10_PMON_CTL1, MSR_UNC_C10_PMON_CTR1, 0, 0},
    {"CBOX9C2", PMC54, CBOX10, MSR_UNC_C10_PMON_CTL2, MSR_UNC_C10_PMON_CTR2, 0, 0},
    {"CBOX9C3", PMC55, CBOX10, MSR_UNC_C10_PMON_CTL3, MSR_UNC_C10_PMON_CTR3, 0, 0},
    {"CBOX9C0", PMC56, CBOX11, MSR_UNC_C11_PMON_CTL0, MSR_UNC_C11_PMON_CTR0, 0, 0},
    {"CBOX9C1", PMC57, CBOX11, MSR_UNC_C11_PMON_CTL1, MSR_UNC_C11_PMON_CTR1, 0, 0},
    {"CBOX9C2", PMC58, CBOX11, MSR_UNC_C11_PMON_CTL2, MSR_UNC_C11_PMON_CTR2, 0, 0},
    {"CBOX9C3", PMC59, CBOX11, MSR_UNC_C11_PMON_CTL3, MSR_UNC_C11_PMON_CTR3, 0, 0},
    /* IMC Counters: 4 48bit wide per memory channel, split in two reads */
    {"MBOX0C0",PMC60, MBOX0, PCI_UNC_MC_PMON_CTL_0, PCI_UNC_MC_PMON_CTR_0_A, PCI_UNC_MC_PMON_CTR_0_B, PCI_IMC_DEVICE_CH_0},
    {"MBOX1C0",PMC61, MBOX0, PCI_UNC_MC_PMON_CTL_1, PCI_UNC_MC_PMON_CTR_1_A, PCI_UNC_MC_PMON_CTR_1_B, PCI_IMC_DEVICE_CH_0},
    {"MBOX2C0",PMC62, MBOX0, PCI_UNC_MC_PMON_CTL_2, PCI_UNC_MC_PMON_CTR_2_A, PCI_UNC_MC_PMON_CTR_2_B, PCI_IMC_DEVICE_CH_0},
    {"MBOX3C0",PMC63, MBOX0, PCI_UNC_MC_PMON_CTL_3, PCI_UNC_MC_PMON_CTR_3_A, PCI_UNC_MC_PMON_CTR_3_B, PCI_IMC_DEVICE_CH_0},
    {"MBOX0C1",PMC64, MBOX1, PCI_UNC_MC_PMON_CTL_0, PCI_UNC_MC_PMON_CTR_0_A, PCI_UNC_MC_PMON_CTR_0_B, PCI_IMC_DEVICE_CH_1},
    {"MBOX1C1",PMC65, MBOX1, PCI_UNC_MC_PMON_CTL_1, PCI_UNC_MC_PMON_CTR_1_A, PCI_UNC_MC_PMON_CTR_1_B, PCI_IMC_DEVICE_CH_1},
    {"MBOX2C1",PMC66, MBOX1, PCI_UNC_MC_PMON_CTL_2, PCI_UNC_MC_PMON_CTR_2_A, PCI_UNC_MC_PMON_CTR_2_B, PCI_IMC_DEVICE_CH_1},
    {"MBOX3C1",PMC67, MBOX1, PCI_UNC_MC_PMON_CTL_3, PCI_UNC_MC_PMON_CTR_3_A, PCI_UNC_MC_PMON_CTR_3_B, PCI_IMC_DEVICE_CH_1},
    {"MBOX0C2",PMC68, MBOX2, PCI_UNC_MC_PMON_CTL_0, PCI_UNC_MC_PMON_CTR_0_A, PCI_UNC_MC_PMON_CTR_0_B, PCI_IMC_DEVICE_CH_2},
    {"MBOX1C2",PMC69, MBOX2, PCI_UNC_MC_PMON_CTL_1, PCI_UNC_MC_PMON_CTR_1_A, PCI_UNC_MC_PMON_CTR_1_B, PCI_IMC_DEVICE_CH_2},
    {"MBOX2C2",PMC70, MBOX2, PCI_UNC_MC_PMON_CTL_2, PCI_UNC_MC_PMON_CTR_2_A, PCI_UNC_MC_PMON_CTR_2_B, PCI_IMC_DEVICE_CH_2},
    {"MBOX3C2",PMC71, MBOX2, PCI_UNC_MC_PMON_CTL_3, PCI_UNC_MC_PMON_CTR_3_A, PCI_UNC_MC_PMON_CTR_3_B, PCI_IMC_DEVICE_CH_2},
    {"MBOX0C3",PMC72, MBOX3, PCI_UNC_MC_PMON_CTL_0, PCI_UNC_MC_PMON_CTR_0_A, PCI_UNC_MC_PMON_CTR_0_B, PCI_IMC_DEVICE_CH_3},
    {"MBOX1C3",PMC73, MBOX3, PCI_UNC_MC_PMON_CTL_1, PCI_UNC_MC_PMON_CTR_1_A, PCI_UNC_MC_PMON_CTR_1_B, PCI_IMC_DEVICE_CH_3},
    {"MBOX2C3",PMC74, MBOX3, PCI_UNC_MC_PMON_CTL_2, PCI_UNC_MC_PMON_CTR_2_A, PCI_UNC_MC_PMON_CTR_2_B, PCI_IMC_DEVICE_CH_3},
    {"MBOX3C3",PMC75, MBOX3, PCI_UNC_MC_PMON_CTL_3, PCI_UNC_MC_PMON_CTR_3_A, PCI_UNC_MC_PMON_CTR_3_B, PCI_IMC_DEVICE_CH_3},
    {"MBOXFIX",PMC76, MBOXFIX, 0, PCI_UNC_MC_PMON_FIXED_CTR_A, PCI_UNC_MC_PMON_FIXED_CTR_B, PCI_UNC_MC_PMON_FIXED_CTL},
    /* QPI counters four 48bit  wide per port, split in two reads */
    {"SBOX0P0",PMC77, SBOX0, PCI_UNC_QPI_PMON_CTL_0, PCI_UNC_QPI_PMON_CTR_0_A, PCI_UNC_QPI_PMON_CTR_0_B, PCI_QPI_DEVICE_PORT_0},
    {"SBOX1P0",PMC78, SBOX0, PCI_UNC_QPI_PMON_CTL_1, PCI_UNC_QPI_PMON_CTR_1_A, PCI_UNC_QPI_PMON_CTR_1_B, PCI_QPI_DEVICE_PORT_0},
    {"SBOX2P0",PMC79, SBOX0, PCI_UNC_QPI_PMON_CTL_2, PCI_UNC_QPI_PMON_CTR_2_A, PCI_UNC_QPI_PMON_CTR_2_B, PCI_QPI_DEVICE_PORT_0},
    {"SBOX3P0",PMC80, SBOX0, PCI_UNC_QPI_PMON_CTL_3, PCI_UNC_QPI_PMON_CTR_3_A, PCI_UNC_QPI_PMON_CTR_3_B, PCI_QPI_DEVICE_PORT_0},
    {"SBOX0P1",PMC81, SBOX1, PCI_UNC_QPI_PMON_CTL_0, PCI_UNC_QPI_PMON_CTR_0_A, PCI_UNC_QPI_PMON_CTR_0_B, PCI_QPI_DEVICE_PORT_1},
    {"SBOX1P1",PMC82, SBOX1, PCI_UNC_QPI_PMON_CTL_1, PCI_UNC_QPI_PMON_CTR_1_A, PCI_UNC_QPI_PMON_CTR_1_B, PCI_QPI_DEVICE_PORT_1},
    {"SBOX2P1",PMC83, SBOX1, PCI_UNC_QPI_PMON_CTL_2, PCI_UNC_QPI_PMON_CTR_2_A, PCI_UNC_QPI_PMON_CTR_2_B, PCI_QPI_DEVICE_PORT_1},
    {"SBOX3P1",PMC84, SBOX1, PCI_UNC_QPI_PMON_CTL_3, PCI_UNC_QPI_PMON_CTR_3_A, PCI_UNC_QPI_PMON_CTR_3_B, PCI_QPI_DEVICE_PORT_1}
};


