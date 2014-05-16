/* DONT TOUCH: GENERATED FILE! */

#define NUM_ARCH_EVENTS_K8 160

static PerfmonEvent  k8_arch_events[NUM_ARCH_EVENTS_K8] = {
 {"DISPATCHED_FP_OP_ADD_PIPE",
   "PMC", 
   0x00,0x01,0,0}
, {"DISPATCHED_FP_OP_MULTIPLY_PIPE",
   "PMC", 
   0x00,0x02,0,0}
, {"DISPATCHED_FP_OP_STORE_PIPE",
   "PMC", 
   0x00,0x04,0,0}
, {"DISPATCHED_FP_OP_ADD_PIPE_LOAD",
   "PMC", 
   0x00,0x08,0,0}
, {"DISPATCHED_FP_OP_MULTIPLY_PIPE_LOAD",
   "PMC", 
   0x00,0x10,0,0}
, {"DISPATCHED_FP_OP_STORE_PIPE_LOAD",
   "PMC", 
   0x00,0x20,0,0}
, {"FPU_EMPTY",
   "PMC", 
   0x01,0x00,0,0}
, {"DISPATCHED_FAST_FPU",
   "PMC", 
   0x02,0x00,0,0}
, {"SEGMENT_REGISTER_LOAD_ES",
   "PMC", 
   0x20,0x01,0,0}
, {"SEGMENT_REGISTER_LOAD_CS",
   "PMC", 
   0x20,0x02,0,0}
, {"SEGMENT_REGISTER_LOAD_SS",
   "PMC", 
   0x20,0x04,0,0}
, {"SEGMENT_REGISTER_LOAD_DS",
   "PMC", 
   0x20,0x08,0,0}
, {"SEGMENT_REGISTER_LOAD_FS",
   "PMC", 
   0x20,0x10,0,0}
, {"SEGMENT_REGISTER_LOAD_GS",
   "PMC", 
   0x20,0x20,0,0}
, {"SEGMENT_REGISTER_LOAD_HS",
   "PMC", 
   0x20,0x40,0,0}
, {"PIPELINE_RESTART_SELF_MOD",
   "PMC", 
   0x21,0x00,0,0}
, {"PIPELINE_RESTART_PROBE_HIT",
   "PMC", 
   0x22,0x00,0,0}
, {"LS_BUFFER_FULL",
   "PMC", 
   0x23,0x00,0,0}
, {"LOCKED_OPERATION_INSTRUCTIONS",
   "PMC", 
   0x24,0x01,0,0}
, {"LOCKED_OPERATION_SPECULATIVE_CYC",
   "PMC", 
   0x24,0x02,0,0}
, {"LOCKED_OPERATION_NON_SPECULATIVE_CYC",
   "PMC", 
   0x24,0x04,0,0}
, {"DATA_CACHE_ACCESSES",
   "PMC", 
   0x40,0x00,0,0}
, {"DATA_CACHE_MISSES",
   "PMC", 
   0x41,0x00,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE",
   "PMC", 
   0x42,0x01,0,0}
, {"DATA_CACHE_REFILLS_L2_SHARED",
   "PMC", 
   0x42,0x02,0,0}
, {"DATA_CACHE_REFILLS_L2_EXCLUSIVE",
   "PMC", 
   0x42,0x04,0,0}
, {"DATA_CACHE_REFILLS_L2_OWNED",
   "PMC", 
   0x42,0x08,0,0}
, {"DATA_CACHE_REFILLS_L2_MODIFIED",
   "PMC", 
   0x42,0x10,0,0}
, {"DATA_CACHE_REFILLS_L2_ALL",
   "PMC", 
   0x42,0x1F,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_INVALID",
   "PMC", 
   0x43,0x01,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_SHARED",
   "PMC", 
   0x43,0x02,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_EXCLUSIVE",
   "PMC", 
   0x43,0x04,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_OWNED",
   "PMC", 
   0x43,0x08,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_MODIFIED",
   "PMC", 
   0x43,0x10,0,0}
, {"DATA_CACHE_REFILLS_NORTHBRIDGE_ALL",
   "PMC", 
   0x43,0x1E,0,0}
, {"DATA_CACHE_EVICTED_INVALID",
   "PMC", 
   0x44,0x01,0,0}
, {"DATA_CACHE_EVICTED_SHARED",
   "PMC", 
   0x44,0x02,0,0}
, {"DATA_CACHE_EVICTED_EXCLUSIVE",
   "PMC", 
   0x44,0x04,0,0}
, {"DATA_CACHE_EVICTED_OWNED",
   "PMC", 
   0x44,0x08,0,0}
, {"DATA_CACHE_EVICTED_MODIFIED",
   "PMC", 
   0x44,0x10,0,0}
, {"DATA_CACHE_EVICTED_PREFETCH_NTA",
   "PMC", 
   0x44,0x20,0,0}
, {"DATA_CACHE_EVICTED_NOT_PREFETCH_NTA",
   "PMC", 
   0x44,0x40,0,0}
, {"DATA_CACHE_EVICTED_ALL",
   "PMC", 
   0x44,0x1F,0,0}
, {"DTLB_L2_HIT_4K",
   "PMC", 
   0x45,0x01,0,0}
, {"DTLB_L2_HIT_2M",
   "PMC", 
   0x45,0x02,0,0}
, {"DTLB_L2_HIT_1G",
   "PMC", 
   0x45,0x04,0,0}
, {"DTLB_L2_MISS_4K",
   "PMC", 
   0x46,0x01,0,0}
, {"DTLB_L2_MISS_2M",
   "PMC", 
   0x46,0x02,0,0}
, {"DTLB_L2_MISS_1G",
   "PMC", 
   0x46,0x04,0,0}
, {"MISALIGNED_ACCESS",
   "PMC", 
   0x47,0x00,0,0}
, {"LATE_CANCEL_ACCESS",
   "PMC", 
   0x48,0x00,0,0}
, {"EARLY_CANCEL_ACCESS",
   "PMC", 
   0x49,0x00,0,0}
, {"SINGLE_BIT_ERRORS_SCRUBBER",
   "PMC", 
   0x4A,0x01,0,0}
, {"SINGLE_BIT_ERRORS_PIGGYBACK",
   "PMC", 
   0x4A,0x02,0,0}
, {"SINGLE_BIT_ERRORS_LOAD_PIPE",
   "PMC", 
   0x4A,0x04,0,0}
, {"SINGLE_BIT_ERRORS_STORE_PIPE",
   "PMC", 
   0x4A,0x08,0,0}
, {"PREFETCH_INSTRUCTION_DISPATCHED_LOAD",
   "PMC", 
   0x4B,0x01,0,0}
, {"PREFETCH_INSTRUCTION_DISPATCHED_STORE",
   "PMC", 
   0x4B,0x02,0,0}
, {"PREFETCH_INSTRUCTION_DISPATCHED_NTA",
   "PMC", 
   0x4B,0x04,0,0}
, {"DCACHE_LOCK_MISS",
   "PMC", 
   0x4C,0x02,0,0}
, {"MEMORY_REQUEST_NON_CACHEABLE",
   "PMC", 
   0x65,0x01,0,0}
, {"MEMORY_REQUEST_WRITE_COMBINED",
   "PMC", 
   0x65,0x02,0,0}
, {"MEMORY_REQUEST_STREAMING_STORE",
   "PMC", 
   0x65,0x80,0,0}
, {"DATA_PREFETCHER_CANCELED",
   "PMC", 
   0x67,0x01,0,0}
, {"DATA_PREFETCHER_ATTEMPTS",
   "PMC", 
   0x67,0x02,0,0}
, {"NORTHBRIDGE_READ_RESPONSE_EXCLUSIVE",
   "PMC", 
   0x6C,0x01,0,0}
, {"NORTHBRIDGE_READ_RESPONSE_MODIFIED",
   "PMC", 
   0x6C,0x02,0,0}
, {"NORTHBRIDGE_READ_RESPONSE_SHARED",
   "PMC", 
   0x6C,0x04,0,0}
, {"QUADWORDS_WRITE_TRANSFERS",
   "PMC", 
   0x6D,0x01,0,0}
, {"L2_REQUESTS_ICACHE_FILL",
   "PMC", 
   0x7D,0x01,0,0}
, {"L2_REQUESTS_DCACHE_FILL",
   "PMC", 
   0x7D,0x02,0,0}
, {"L2_REQUESTS_TLBCACHE_FILL",
   "PMC", 
   0x7D,0x04,0,0}
, {"L2_REQUESTS_TAG_SNOOP_REQUEST",
   "PMC", 
   0x7D,0x08,0,0}
, {"L2_REQUESTS_CANCELLED_REQUEST",
   "PMC", 
   0x7D,0x10,0,0}
, {"L2_REQUESTS_ICACHE_FILL",
   "PMC", 
   0x7E,0x01,0,0}
, {"L2_REQUESTS_DCACHE_FILL",
   "PMC", 
   0x7E,0x02,0,0}
, {"L2_REQUESTS_TLB_WALK",
   "PMC", 
   0x7E,0x04,0,0}
, {"L2_FILL_VICTIMS",
   "PMC", 
   0x7F,0x01,0,0}
, {"L2_FILL_WRITEBACKS",
   "PMC", 
   0x7F,0x02,0,0}
, {"ICACHE_FETCHES",
   "PMC", 
   0x80,0x00,0,0}
, {"ICACHE_MISSES",
   "PMC", 
   0x81,0x00,0,0}
, {"ICACHE_REFILLS_L2",
   "PMC", 
   0x82,0x00,0,0}
, {"ICACHE_REFILLS_MEM",
   "PMC", 
   0x83,0x00,0,0}
, {"ITLB_L2_HIT",
   "PMC", 
   0x84,0x00,0,0}
, {"ITLB_L2_MISS_4K",
   "PMC", 
   0x85,0x01,0,0}
, {"ITLB_L2_MISS_2M",
   "PMC", 
   0x85,0x02,0,0}
, {"PIPELINE_RESTART_STREAM_PROBE",
   "PMC", 
   0x86,0x00,0,0}
, {"INSTRUCTION_FETCH_STALL",
   "PMC", 
   0x87,0x00,0,0}
, {"RETURN_STACK_HITS",
   "PMC", 
   0x88,0x00,0,0}
, {"RETURN_STACK_OVERFLOW",
   "PMC", 
   0x89,0x00,0,0}
, {"RETIRED_CLFLUSH",
   "PMC", 
   0x26,0x00,0,0}
, {"RETIRED_CPUID",
   "PMC", 
   0x26,0x00,0,0}
, {"CPU_CLOCKS_UNHALTED",
   "PMC", 
   0x76,0x00,0,0}
, {"INSTRUCTIONS_RETIRED",
   "PMC", 
   0xC0,0x00,0,0}
, {"UOPS_RETIRED",
   "PMC", 
   0xC1,0x00,0,0}
, {"BRANCH_RETIRED",
   "PMC", 
   0xC2,0x00,0,0}
, {"BRANCH_MISPREDICT_RETIRED",
   "PMC", 
   0xC3,0x00,0,0}
, {"BRANCH_TAKEN_RETIRED",
   "PMC", 
   0xC4,0x00,0,0}
, {"BRANCH_TAKEN_MISPREDICTED_RETIRED",
   "PMC", 
   0xC5,0x00,0,0}
, {"TRANSFER_FAR_CONTROL_RETIRED",
   "PMC", 
   0xC6,0x00,0,0}
, {"BRANCH_RESYNCS_RETIRED",
   "PMC", 
   0xC7,0x00,0,0}
, {"NEAR_RETURNS_RETIRED",
   "PMC", 
   0xC8,0x00,0,0}
, {"NEAR_RETURNS_MISPREDICTED_RETIRED",
   "PMC", 
   0xC9,0x00,0,0}
, {"BRANCH_INDIRECT_MISPREDICT_RETIRED",
   "PMC", 
   0xCA,0x00,0,0}
, {"INSTRUCTIONS_RETIRED_X87",
   "PMC", 
   0xCB,0x01,0,0}
, {"INSTRUCTIONS_RETIRED_MMX",
   "PMC", 
   0xCB,0x02,0,0}
, {"INSTRUCTIONS_RETIRED_SSE",
   "PMC", 
   0xCB,0x04,0,0}
, {"FASTPATH_RETIRED_0",
   "PMC", 
   0xCC,0x01,0,0}
, {"FASTPATH_RETIRED_1",
   "PMC", 
   0xCC,0x02,0,0}
, {"FASTPATH_RETIRED_2",
   "PMC", 
   0xCC,0x04,0,0}
, {"INTERRUPTS_MASKED_CYCLES",
   "PMC", 
   0xCE,0x00,0,0}
, {"INTERRUPTS_TAKEN",
   "PMC", 
   0xCF,0x00,0,0}
, {"DECODER_EMPTY_CYCLES",
   "PMC", 
   0xD0,0x00,0,0}
, {"DISPATCH_STALLS",
   "PMC", 
   0xD1,0x00,0,0}
, {"DISPATCH_STALLS_BRANCH",
   "PMC", 
   0xD2,0x00,0,0}
, {"DISPATCH_STALLS_SERIAL",
   "PMC", 
   0xD3,0x00,0,0}
, {"DISPATCH_STALLS_SEGMENT_LOAD",
   "PMC", 
   0xD4,0x00,0,0}
, {"DISPATCH_STALLS_ROB_FULL",
   "PMC", 
   0xD5,0x00,0,0}
, {"DISPATCH_STALLS_RES_FULL",
   "PMC", 
   0xD6,0x00,0,0}
, {"DISPATCH_STALLS_FPU_FULL",
   "PMC", 
   0xD7,0x00,0,0}
, {"DISPATCH_STALLS_LS_FULL",
   "PMC", 
   0xD8,0x00,0,0}
, {"DISPATCH_STALLS_ALL_QUIT",
   "PMC", 
   0xD9,0x00,0,0}
, {"DISPATCH_STALLS_DRAIN",
   "PMC", 
   0xDA,0x00,0,0}
, {"FPU_EXCEPTIONS_X87_RECLASS",
   "PMC", 
   0xDB,0x01,0,0}
, {"FPU_EXCEPTIONS_SSE_RETYPE",
   "PMC", 
   0xDB,0x02,0,0}
, {"FPU_EXCEPTIONS_SSE_RECLASS",
   "PMC", 
   0xDB,0x04,0,0}
, {"FPU_EXCEPTIONS_MICROTRAPS",
   "PMC", 
   0xDB,0x08,0,0}
, {"DRAM_ACCESSES_ALL",
   "PMC", 
   0xE0,0x00,0,0}
, {"DRAM_ACCESSES_PAGE_HIT",
   "PMC", 
   0xE0,0x01,0,0}
, {"DRAM_ACCESSES_PAGE_MISS",
   "PMC", 
   0xE0,0x02,0,0}
, {"DRAM_ACCESSES_PAGE_CONFLICT",
   "PMC", 
   0xE0,0x04,0,0}
, {"DRAM_PAGE_TABLE_OVERFLOW_ALL",
   "PMC", 
   0xE1,0x00,0,0}
, {"DRAM_CONTROLLER_TURNAROUNDS_CHIP_SELECT",
   "PMC", 
   0xE3,0x01,0,0}
, {"DRAM_CONTROLLER_TURNAROUNDS_READ_TO_WRITE",
   "PMC", 
   0xE3,0x02,0,0}
, {"DRAM_CONTROLLER_TURNAROUNDS_WRITE_TO_READ",
   "PMC", 
   0xE3,0x04,0,0}
, {"DRAM_CONTROLLER_BYPASS_SATURATION_HIGH",
   "PMC", 
   0xE4,0x01,0,0}
, {"DRAM_CONTROLLER_BYPASS_SATURATION_MEDIUM",
   "PMC", 
   0xE4,0x02,0,0}
, {"DRAM_CONTROLLER_BYPASS_SATURATION_DRAM_INTERFACE",
   "PMC", 
   0xE4,0x04,0,0}
, {"DRAM_CONTROLLER_BYPASS_SATURATION_DRAM_QUEUE",
   "PMC", 
   0xE4,0x08,0,0}
, {"DRAM_SIZED_BLOCKS_WRITES_32",
   "PMC", 
   0xE5,0x04,0,0}
, {"DRAM_SIZED_BLOCKS_WRITES_64",
   "PMC", 
   0xE5,0x08,0,0}
, {"DRAM_SIZED_BLOCKS_READS_32",
   "PMC", 
   0xE5,0x10,0,0}
, {"DRAM_SIZED_BLOCKS_READS_64",
   "PMC", 
   0xE5,0x20,0,0}
, {"CACHE_BLOCK_COMMANDS_VICTIM",
   "PMC", 
   0xEA,0x01,0,0}
, {"CACHE_BLOCK_COMMANDS_READ",
   "PMC", 
   0xEA,0x04,0,0}
, {"CACHE_BLOCK_COMMANDS_READ_SHARED",
   "PMC", 
   0xEA,0x08,0,0}
, {"CACHE_BLOCK_COMMANDS_READ_MODIFIED",
   "PMC", 
   0xEA,0x10,0,0}
, {"CACHE_BLOCK_COMMANDS_DIRTY",
   "PMC", 
   0xEA,0x20,0,0}
, {"HYPERTRANSPORT_LINK0_CMD_DWORD_SENT",
   "PMC", 
   0xF6,0x01,0,0}
, {"HYPERTRANSPORT_LINK0_DATA_DWORD_SENT",
   "PMC", 
   0xF6,0x02,0,0}
, {"HYPERTRANSPORT_LINK0_BUFFER_RELEASE_DWORD_SENT",
   "PMC", 
   0xF6,0x04,0,0}
, {"HYPERTRANSPORT_LINK0_IDLE",
   "PMC", 
   0xF6,0x08,0,0}
, {"HYPERTRANSPORT_LINK1_CMD_DWORD_SENT",
   "PMC", 
   0xF7,0x01,0,0}
, {"HYPERTRANSPORT_LINK1_DATA_DWORD_SENT",
   "PMC", 
   0xF7,0x02,0,0}
, {"HYPERTRANSPORT_LINK1_BUFFER_RELEASE_DWORD_SENT",
   "PMC", 
   0xF7,0x04,0,0}
, {"HYPERTRANSPORT_LINK1_IDLE",
   "PMC", 
   0xF7,0x08,0,0}
, {"HYPERTRANSPORT_LINK2_CMD_DWORD_SENT",
   "PMC", 
   0xF8,0x01,0,0}
, {"HYPERTRANSPORT_LINK2_DATA_DWORD_SENT",
   "PMC", 
   0xF8,0x02,0,0}
, {"HYPERTRANSPORT_LINK2_BUFFER_RELEASE_DWORD_SENT",
   "PMC", 
   0xF8,0x04,0,0}
, {"HYPERTRANSPORT_LINK2_IDLE",
   "PMC", 
   0xF8,0x08,0,0}
};
