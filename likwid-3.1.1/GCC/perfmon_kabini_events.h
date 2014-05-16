/* DONT TOUCH: GENERATED FILE! */

#define NUM_ARCH_EVENTS_KABINI 391

static PerfmonEvent  kabini_arch_events[NUM_ARCH_EVENTS_KABINI] = {
 {"FPU_PIPE_ASSIGNMENT_PIPE_0",
   "PMC", 
   0x00,0x01,0,0}
, {"FPU_PIPE_ASSIGNMENT_PIPE_1",
   "PMC", 
   0x00,0x02,0,0}
, {"FP_SCHEDULER_EMPTY",
   "PMC", 
   0x01,0x00,0,0}
, {"DISPATCHED_FAST_FPU",
   "PMC", 
   0x02,0x00,0,0}
, {"RETIRED_FLOPS_DOUBLE_DIV",
   "PMC", 
   0x03,0x40,0,0}
, {"RETIRED_FLOPS_DOUBLE_MUL",
   "PMC", 
   0x03,0x20,0,0}
, {"RETIRED_FLOPS_DOUBLE_ADD",
   "PMC", 
   0x03,0x10,0,0}
, {"RETIRED_FLOPS_DOUBLE_ALL",
   "PMC", 
   0x03,0x70,0,0}
, {"RETIRED_FLOPS_SINGLE_DIV",
   "PMC", 
   0x03,0x04,0,0}
, {"RETIRED_FLOPS_SINGLE_MUL",
   "PMC", 
   0x03,0x02,0,0}
, {"RETIRED_FLOPS_SINGLE_ADD",
   "PMC", 
   0x03,0x01,0,0}
, {"RETIRED_FLOPS_SINGLE_ALL",
   "PMC", 
   0x03,0x07,0,0}
, {"RETIRED_SERIALIZING_OPS_SSE_BOTTOM",
   "PMC", 
   0x05,0x00,0,0}
, {"RETIRED_SERIALIZING_OPS_SSE_CONTROL",
   "PMC", 
   0x05,0x01,0,0}
, {"RETIRED_SERIALIZING_OPS_X87_BOTTOM",
   "PMC", 
   0x05,0x02,0,0}
, {"RETIRED_SERIALIZING_OPS_X87_CONTROL",
   "PMC", 
   0x05,0x04,0,0}
, {"RETIRED_X87_FLOPS_ADD",
   "PMC", 
   0x11,0x00,0,0}
, {"RETIRED_X87_FLOPS_MUL",
   "PMC", 
   0x11,0x01,0,0}
, {"RETIRED_X87_FLOPS_DIV",
   "PMC", 
   0x11,0x02,0,0}
, {"SEGMENT_REGISTER_LOADS_ES",
   "PMC", 
   0x20,0x00,0,0}
, {"SEGMENT_REGISTER_LOADS_CS",
   "PMC", 
   0x20,0x01,0,0}
, {"SEGMENT_REGISTER_LOADS_SS",
   "PMC", 
   0x20,0x02,0,0}
, {"SEGMENT_REGISTER_LOADS_DS",
   "PMC", 
   0x20,0x04,0,0}
, {"SEGMENT_REGISTER_LOADS_FS",
   "PMC", 
   0x20,0x10,0,0}
, {"SEGMENT_REGISTER_LOADS_GS",
   "PMC", 
   0x20,0x20,0,0}
, {"SEGMENT_REGISTER_LOADS_HS",
   "PMC", 
   0x20,0x40,0,0}
, {"PIPELINE_RESTART_SELFMOD_CODE",
   "PMC", 
   0x21,0x00,0,0}
, {"PIPELINE_RESTART_PROBE_HIT_INV",
   "PMC", 
   0x22,0x00,0,0}
, {"PIPELINE_RESTART_PROBE_HIT_FILLS",
   "PMC", 
   0x22,0x01,0,0}
, {"LOCKED_OPERATION_CYCLES_TO_UNLCOK",
   "PMC", 
   0x24,0x04,0,0}
, {"LOCKED_OPERATION_CYCLES_TO_BUS_LOCK",
   "PMC", 
   0x24,0x02,0,0}
, {"LOCKED_OPERATION_LOCKED_INSTR",
   "PMC", 
   0x24,0x01,0,0}
, {"CLFLUSH_RETIRED",
   "PMC", 
   0x26,0x00,0,0}
, {"CPUID_RETIRED",
   "PMC", 
   0x27,0x00,0,0}
, {"LS_DISPATCH_LOADS",
   "PMC", 
   0x29,0x01,0,0}
, {"LS_DISPATCH_STORES",
   "PMC", 
   0x29,0x02,0,0}
, {"LS_DISPATCH_LOAD_OP_STORES",
   "PMC", 
   0x29,0x04,0,0}
, {"CANCELED_STORE_FORWARD_ADDR_MISMATCH",
   "PMC", 
   0x2A,0x01,0,0}
, {"CANCELED_STORE_FORWARD_SMALL_STORES",
   "PMC", 
   0x2A,0x02,0,0}
, {"CANCELED_STORE_FORWARD_MISALIGNED_STORES",
   "PMC", 
   0x2A,0x04,0,0}
, {"DATA_CACHE_ACCESSES",
   "PMC", 
   0x40,0x00,0,0}
, {"DATA_CACHE_MISSES",
   "PMC", 
   0x41,0x00,0,0}
, {"DATA_CACHE_REFILLS_NONCACHED",
   "PMC", 
   0x42,0x01,0,0}
, {"DATA_CACHE_REFILLS_SHARED",
   "PMC", 
   0x42,0x02,0,0}
, {"DATA_CACHE_REFILLS_EXCLUSIVE",
   "PMC", 
   0x42,0x04,0,0}
, {"DATA_CACHE_REFILLS_OWNED",
   "PMC", 
   0x42,0x08,0,0}
, {"DATA_CACHE_REFILLS_MODIFIED",
   "PMC", 
   0x42,0x10,0,0}
, {"DATA_CACHE_REFILLS_ALL",
   "PMC", 
   0x42,0x1E,0,0}
, {"DATA_CACHE_REFILLS_NB_NONCACHED",
   "PMC", 
   0x43,0x01,0,0}
, {"DATA_CACHE_REFILLS_NB_SHARED",
   "PMC", 
   0x43,0x02,0,0}
, {"DATA_CACHE_REFILLS_NB_EXCLUSIVE",
   "PMC", 
   0x43,0x04,0,0}
, {"DATA_CACHE_REFILLS_NB_OWNED",
   "PMC", 
   0x43,0x08,0,0}
, {"DATA_CACHE_REFILLS_NB_MODIFIED",
   "PMC", 
   0x43,0x10,0,0}
, {"DATA_CACHE_REFILLS_NB_ALL",
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
, {"DATA_CACHE_EVICTED_ALL",
   "PMC", 
   0x44,0x1F,0,0}
, {"L2_DTLB_HIT",
   "PMC", 
   0x45,0x00,0,0}
, {"L2_DTLB_HIT_ALL",
   "PMC", 
   0x45,0x01,0,0}
, {"DTLB_MISS_STORE_L1",
   "PMC", 
   0x46,0x01,0,0}
, {"DTLB_MISS_LOAD_L1",
   "PMC", 
   0x46,0x02,0,0}
, {"DTLB_MISS_STORE_L2",
   "PMC", 
   0x46,0x04,0,0}
, {"DTLB_MISS_LOAD_L2",
   "PMC", 
   0x46,0x08,0,0}
, {"DTLB_MISS_ALL",
   "PMC", 
   0x46,0x0F,0,0}
, {"PREFETCH_INSTR_DISPATCHED_LOAD",
   "PMC", 
   0x4B,0x01,0,0}
, {"PREFETCH_INSTR_DISPATCHED_STORE",
   "PMC", 
   0x4B,0x02,0,0}
, {"PREFETCH_INSTR_DISPATCHED_NTA",
   "PMC", 
   0x4B,0x04,0,0}
, {"DCACHE_LOCK_MISS",
   "PMC", 
   0x4C,0x02,0,0}
, {"DTLB_L1_HIT_4K",
   "PMC", 
   0x4D,0x01,0,0}
, {"DTLB_L1_HIT_2M",
   "PMC", 
   0x4D,0x02,0,0}
, {"INEFFECTIVE_PREFETCHES_DATA_CACHE",
   "PMC", 
   0x52,0x01,0,0}
, {"INEFFECTIVE_PREFETCHES_PENDING_FILL",
   "PMC", 
   0x52,0x02,0,0}
, {"INEFFECTIVE_PREFETCHES_NO_MAB",
   "PMC", 
   0x52,0x04,0,0}
, {"INEFFECTIVE_PREFETCHES_L2_HIT",
   "PMC", 
   0x52,0x08,0,0}
, {"GLOBAL_TLB_FLUSH",
   "PMC", 
   0x54,0x00,0,0}
, {"GLOBAL_READ_BLOCK_OPS_READ",
   "PMC", 
   0x62,0x01,0,0}
, {"GLOBAL_READ_BLOCK_OPS_RDBLK_MOD",
   "PMC", 
   0x62,0x02,0,0}
, {"GLOBAL_READ_BLOCK_OPS_RDBLK_SHARED",
   "PMC", 
   0x62,0x04,0,0}
, {"GLOBAL_READ_BLOCK_OPS_RDBLKSPEC",
   "PMC", 
   0x62,0x08,0,0}
, {"GLOBAL_READ_BLOCK_OPS_RDBLKSPEC_MOD",
   "PMC", 
   0x62,0x10,0,0}
, {"GLOBAL_READ_BLOCK_OPS_SPEC_SHARED",
   "PMC", 
   0x62,0x20,0,0}
, {"MEMORY_REQUESTS_UC",
   "PMC", 
   0x65,0x01,0,0}
, {"MEMORY_REQUESTS_WC",
   "PMC", 
   0x65,0x02,0,0}
, {"MEMORY_REQUESTS_SS",
   "PMC", 
   0x65,0x80,0,0}
, {"DATA_PREFETCHER_ATTEMPTS",
   "PMC", 
   0x67,0x02,0,0}
, {"DATA_PREFETCHER_HIT_MAB",
   "PMC", 
   0x67,0x08,0,0}
, {"MAB_REQ",
   "PMC", 
   0x68,0x00,0,0}
, {"MAB_WAIT",
   "PMC", 
   0x69,0x00,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_EXCLUSIVE",
   "PMC", 
   0x6C,0x01,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_MODIFIED",
   "PMC", 
   0x6C,0x02,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_SHARED",
   "PMC", 
   0x6C,0x04,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_OWNED",
   "PMC", 
   0x6C,0x08,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_DATA_ERROR",
   "PMC", 
   0x6C,0x10,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_CHANGE_TO_DIRTY",
   "PMC", 
   0x6C,0x20,0,0}
, {"RESPONSE_ON_CACHE_REFILLS_UNCACHEABLE",
   "PMC", 
   0x6C,0x40,0,0}
, {"DATA_WRITTEN_LINE_EVICTION",
   "PMC", 
   0x6D,0x01,0,0}
, {"DATA_WRITTEN_INSN_ATTR__EVICTION",
   "PMC", 
   0x6D,0x02,0,0}
, {"DATA_WRITTEN_BYTE_ENABLE_UNCACHEABLE_IO_STORE",
   "PMC", 
   0x6D,0x04,0,0}
, {"DATA_WRITTEN_UNCACHEABLE_IO_STORE",
   "PMC", 
   0x6D,0x08,0,0}
, {"DATA_WRITTEN_BYTE_ENABLE_WRITE_COMBINE_FLUSH",
   "PMC", 
   0x6D,0x10,0,0}
, {"DATA_WRITTEN_WRITE_COMBINE_FLUSH",
   "PMC", 
   0x6D,0x20,0,0}
, {"CACHE_CROSS_INVALIDATES_DC_IC",
   "PMC", 
   0x75,0x01,0,0}
, {"CACHE_CROSS_INVALIDATES_DC_DC",
   "PMC", 
   0x75,0x02,0,0}
, {"CACHE_CROSS_INVALIDATES_IC_IC",
   "PMC", 
   0x75,0x04,0,0}
, {"CACHE_CROSS_INVALIDATES_IC_DC",
   "PMC", 
   0x75,0x08,0,0}
, {"CACHE_CROSS_INVALIDATES_IC_HITS_DC",
   "PMC", 
   0x75,0x10,0,0}
, {"CACHE_CROSS_INVALIDATES_DC_PROBE_REJ_EARLY",
   "PMC", 
   0x75,0x20,0,0}
, {"CACHE_CROSS_INVALIDATES_DC_PROBE_REJ_LATE",
   "PMC", 
   0x75,0x40,0,0}
, {"CPU_CLOCKS_UNHALTED",
   "PMC", 
   0x76,0x00,0,0}
, {"PDC_MISS_HOST_PDE",
   "PMC", 
   0x162,0x01,0,0}
, {"PDC_MISS_HOST_PDPE",
   "PMC", 
   0x162,0x02,0,0}
, {"PDC_MISS_HOST_PML4E",
   "PMC", 
   0x162,0x04,0,0}
, {"PDC_MISS_GUEST_PDE",
   "PMC", 
   0x162,0x10,0,0}
, {"PDC_MISS_GUEST_PDPE",
   "PMC", 
   0x162,0x20,0,0}
, {"PDC_MISS_GUEST_PML4E",
   "PMC", 
   0x162,0x40,0,0}
, {"INSTRUCTION_CACHE_FETCHES",
   "PMC", 
   0x080,0x00,0,0}
, {"INSTRUCTION_CACHE_MISSES",
   "PMC", 
   0x081,0x00,0,0}
, {"INSTRUCTION_CACHE_L2_REFILLS",
   "PMC", 
   0x082,0x00,0,0}
, {"INSTRUCTION_CACHE_SYSTEM_REFILLS",
   "PMC", 
   0x083,0x00,0,0}
, {"ITLB_L1_MISS_L2_HIT",
   "PMC", 
   0x084,0x00,0,0}
, {"ITLB_L1_MISS_L2_MISS_4KB",
   "PMC", 
   0x085,0x01,0,0}
, {"ITLB_L1_MISS_L2_MISS_2MB",
   "PMC", 
   0x085,0x02,0,0}
, {"INSTRUCTION_FETCH_STALL",
   "PMC", 
   0x087,0x00,0,0}
, {"RETURN_STACK_HITS",
   "PMC", 
   0x088,0x00,0,0}
, {"RETURN_STACK_OVERFLOWS",
   "PMC", 
   0x089,0x00,0,0}
, {"INSTRUCTION_CACHE_VICTIMS",
   "PMC", 
   0x08B,0x00,0,0}
, {"ICACHE_LINES_INVALIDATED_LS_PROBE",
   "PMC", 
   0x8C,0x01,0,0}
, {"ICACHE_LINES_INVALIDATED_BU_PROBE",
   "PMC", 
   0x8C,0x02,0,0}
, {"ITLB_RELOADS",
   "PMC", 
   0x099,0x00,0,0}
, {"ITLB_RELOADS_ABORTED",
   "PMC", 
   0x09A,0x00,0,0}
, {"RETIRED_INDIR_BRANCH",
   "PMC", 
   0x19A,0x01,0,0}
, {"RETIRED_INDIR_MISPRED_BRANCH",
   "PMC", 
   0x19A,0x02,0,0}
, {"RETIRED_INSTRUCTIONS",
   "PMC", 
   0x0C0,0x00,0,0}
, {"RETIRED_UOPS",
   "PMC", 
   0x0C1,0x00,0,0}
, {"RETIRED_BRANCH_INSTR",
   "PMC", 
   0x0C2,0x00,0,0}
, {"RETIRED_MISPREDICTED_BRANCH_INSTR",
   "PMC", 
   0x0C3,0x00,0,0}
, {"RETIRED_TAKEN_BRANCH_INSTR",
   "PMC", 
   0x0C4,0x00,0,0}
, {"RETIRED_TAKEN_MISPREDICTED_BRANCH_INSTR",
   "PMC", 
   0x0C5,0x00,0,0}
, {"RETIRED_FAR_CONTROL_TRANSFERS",
   "PMC", 
   0x0C6,0x00,0,0}
, {"RETIRED_BRANCH_RESYNCS",
   "PMC", 
   0x0C7,0x00,0,0}
, {"RETIRED_NEAR_RETURNS",
   "PMC", 
   0x0C8,0x00,0,0}
, {"RETIRED_NEAR_RETURNS_MISPRED",
   "PMC", 
   0x0C9,0x00,0,0}
, {"RETIRED_INDIRECT_BRANCHES_MISPRED",
   "PMC", 
   0x0CA,0x00,0,0}
, {"RETIRED_FP_INSTRUCTIONS_X87_MMX",
   "PMC", 
   0x0CB,0x01,0,0}
, {"RETIRED_FP_INSTRUCTIONS_SSE",
   "PMC", 
   0x0CB,0x02,0,0}
, {"RETIRED_FP_INSTRUCTIONS_ALL",
   "PMC", 
   0x0CB,0x03,0,0}
, {"INTERRUPTS_MASKED_CYCLES",
   "PMC", 
   0x0CD,0x00,0,0}
, {"INTERRUPTS_MASKED_CYCLES_INTERRUPTS_",
   "PMC", 
   0x0CE,0x00,0,0}
, {"INTERRUPTS_TAKEN",
   "PMC", 
   0x0CF,0x00,0,0}
, {"FPU_EXCEPTION_X87_MICROFAULTS",
   "PMC", 
   0x0DB,0x01,0,0}
, {"FPU_EXCEPTION_SSE_RETYPE__MICROFAULTS",
   "PMC", 
   0x0DB,0x02,0,0}
, {"FPU_EXCEPTION_SSE_RECLASS_MICROFAULTS",
   "PMC", 
   0x0DB,0x04,0,0}
, {"FPU_EXCEPTION_SSE_X87_MICROTRAPS",
   "PMC", 
   0x0DB,0x08,0,0}
, {"FPU_EXCEPTION_ALL",
   "PMC", 
   0x0DB,0x0F,0,0}
, {"IBS_OPS",
   "PMC", 
   0x1CF,0x0,0,0}
, {"IBS_RETIRED_OPS",
   "PMC", 
   0x1D0,0x0,0,0}
, {"UNC_MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MEM_HIGH",
   "UPMC", 
   0x0E4,0x01,0,0}
, {"UNC_MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MEM_MED",
   "UPMC", 
   0x0E4,0x02,0,0}
, {"UNC_MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION__DCQ",
   "UPMC", 
   0x0E4,0x04,0,0}
, {"UNC_MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_DCQ_SATURATED",
   "UPMC", 
   0x0E4,0x20,0,0}
, {"UNC_THERMAL_STATUS_HTC_TRIP_POINT_CROSSED",
   "UPMC", 
   0x0E8,0x04,0,0}
, {"UNC_THERMAL_STATUS_HTCP_INACTIVE",
   "UPMC", 
   0x0E8,0x20,0,0}
, {"UNC_THERMAL_STATUS_HTCP_ACTIVE",
   "UPMC", 
   0x0E8,0x40,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_LOCAL_CPU_MEM",
   "UPMC", 
   0x0E9,0xA8,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_LOCAL_CPU_IO",
   "UPMC", 
   0x0E9,0xA4,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_LOCAL_IO_MEM",
   "UPMC", 
   0x0E9,0xA2,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_LOCAL_IO_IO",
   "UPMC", 
   0x0E9,0xA1,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_REMOTE_CPU_MEM",
   "UPMC", 
   0x0E9,0x98,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_REMOTE_CPU_IO",
   "UPMC", 
   0x0E9,0x94,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_REMOTE_IO_MEM",
   "UPMC", 
   0x0E9,0x92,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_LOCAL_REMOTE_IO_IO",
   "UPMC", 
   0x0E9,0x91,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_REMOTE_LOCAL_CPU_IO",
   "UPMC", 
   0x0E9,0x64,0,0}
, {"UNC_CPU_REQUEST_TO_MEMORY_REMOTE_LOCAL_IO_IO",
   "UPMC", 
   0x0E9,0x61,0,0}
, {"UNC_CACHE_BLOCK_COMMANDS_VICTIM_BLOCK",
   "UPMC", 
   0x0EA,0x01,0,0}
, {"UNC_CACHE_BLOCK_COMMANDS_READ_BLOCK",
   "UPMC", 
   0x0EA,0x04,0,0}
, {"UNC_CACHE_BLOCK_COMMANDS_READ_BLOCK_SHARED",
   "UPMC", 
   0x0EA,0x08,0,0}
, {"UNC_CACHE_BLOCK_COMMANDS_READ_BLOCK_MODIFIED",
   "UPMC", 
   0x0EA,0x10,0,0}
, {"UNC_CACHE_BLOCK_COMMANDS_CHANGE_TO_DIRTY",
   "UPMC", 
   0x0EA,0x20,0,0}
, {"UNC_SIZED_COMMANDS_NP_WR_BYTE",
   "UPMC", 
   0x0EB,0x01,0,0}
, {"UNC_SIZED_COMMANDS_NP_WR_DW",
   "UPMC", 
   0x0EB,0x02,0,0}
, {"UNC_SIZED_COMMANDS_P_WR_BYTE",
   "UPMC", 
   0x0EB,0x04,0,0}
, {"UNC_SIZED_COMMANDS_P_WR_DW",
   "UPMC", 
   0x0EB,0x08,0,0}
, {"UNC_SIZED_COMMANDS_RE_BYTE",
   "UPMC", 
   0x0EB,0x10,0,0}
, {"UNC_SIZED_COMMANDS_RE_DW",
   "UPMC", 
   0x0EB,0x20,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_PROBE_MISS",
   "UPMC", 
   0x0EC,0x01,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_PROBE_HIT_CLEAN",
   "UPMC", 
   0x0EC,0x02,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_PROBE_HIT_DIRTY_WITHOUT_CANCEL",
   "UPMC", 
   0x0EC,0x04,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_PROBE_HIT_DIRTY_WITH_CANCEL",
   "UPMC", 
   0x0EC,0x08,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_UPSTREAM_DISPLAY_READS",
   "UPMC", 
   0x0EC,0x10,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_UPSTREAM_NON_DISPLAY_READS",
   "UPMC", 
   0x0EC,0x20,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_UPSTREAM_ISOC_WRITED",
   "UPMC", 
   0x0EC,0x40,0,0}
, {"UNC_PROBE_RESPONSES_UPSTREAM_REQUESTS_UPSTREAM_NON_ISOC_WRITES",
   "UPMC", 
   0x0EC,0x80,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_0",
   "UPMC", 
   0x1E0,0x01,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_1",
   "UPMC", 
   0x1E0,0x02,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_2",
   "UPMC", 
   0x1E0,0x04,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_3",
   "UPMC", 
   0x1E0,0x08,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_4",
   "UPMC", 
   0x1E0,0x10,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_5",
   "UPMC", 
   0x1E0,0x20,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_6",
   "UPMC", 
   0x1E0,0x40,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_7",
   "UPMC", 
   0x1E0,0x80,0,0}
, {"UNC_CPU_TO_DRAM_LOCAL_TO_ALL",
   "UPMC", 
   0x1E0,0xFF,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_0",
   "UPMC", 
   0x1E1,0x01,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_1",
   "UPMC", 
   0x1E1,0x02,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_2",
   "UPMC", 
   0x1E1,0x04,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_3",
   "UPMC", 
   0x1E1,0x08,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_4",
   "UPMC", 
   0x1E1,0x10,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_5",
   "UPMC", 
   0x1E1,0x20,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_6",
   "UPMC", 
   0x1E1,0x40,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_7",
   "UPMC", 
   0x1E1,0x80,0,0}
, {"UNC_IO_TO_DRAM_LOCAL_TO_ALL",
   "UPMC", 
   0x1E1,0xFF,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_TO_0",
   "UPMC", 
   0x1E2,0x11,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_MOD_TO_0",
   "UPMC", 
   0x1E2,0x12,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_SHARED_TO_0",
   "UPMC", 
   0x1E2,0x14,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_DIRTY_TO_0",
   "UPMC", 
   0x1E2,0x18,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_ALL_TO_0",
   "UPMC", 
   0x1E2,0x1F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_TO_1",
   "UPMC", 
   0x1E2,0x21,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_MOD_TO_1",
   "UPMC", 
   0x1E2,0x22,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_SHARED_TO_1",
   "UPMC", 
   0x1E2,0x24,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_DIRTY_TO_1",
   "UPMC", 
   0x1E2,0x28,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_ALL_TO_1",
   "UPMC", 
   0x1E2,0x2F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_TO_2",
   "UPMC", 
   0x1E2,0x41,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_MOD_TO_2",
   "UPMC", 
   0x1E2,0x42,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_SHARED_TO_2",
   "UPMC", 
   0x1E2,0x44,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_DIRTY_TO_2",
   "UPMC", 
   0x1E2,0x48,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_ALL_TO_3",
   "UPMC", 
   0x1E2,0x4F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_TO_3",
   "UPMC", 
   0x1E2,0x81,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_MOD_TO_3",
   "UPMC", 
   0x1E2,0x82,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_READ_SHARED_TO_3",
   "UPMC", 
   0x1E2,0x84,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_DIRTY_TO_3",
   "UPMC", 
   0x1E2,0x88,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_A_ALL_TO_3",
   "UPMC", 
   0x1E2,0x8F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_TO_0",
   "UPMC", 
   0x1E3,0x11,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_MOD_TO_0",
   "UPMC", 
   0x1E3,0x12,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_SHARED_TO_0",
   "UPMC", 
   0x1E3,0x14,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_DIRTY_TO_0",
   "UPMC", 
   0x1E3,0x18,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_ALL_TO_0",
   "UPMC", 
   0x1E3,0x1F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_TO_1",
   "UPMC", 
   0x1E3,0x21,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_MOD_TO_1",
   "UPMC", 
   0x1E3,0x22,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_SHARED_TO_1",
   "UPMC", 
   0x1E3,0x24,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_DIRTY_TO_1",
   "UPMC", 
   0x1E3,0x28,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_ALL_TO_1",
   "UPMC", 
   0x1E3,0x2F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_TO_2",
   "UPMC", 
   0x1E3,0x41,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_MOD_TO_2",
   "UPMC", 
   0x1E3,0x42,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_SHARED_TO_2",
   "UPMC", 
   0x1E3,0x44,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_DIRTY_TO_2",
   "UPMC", 
   0x1E3,0x48,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_ALL_TO_2",
   "UPMC", 
   0x1E3,0x4F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_TO_3",
   "UPMC", 
   0x1E3,0x81,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_MOD_TO_3",
   "UPMC", 
   0x1E3,0x82,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_READ_SHARED_TO_3",
   "UPMC", 
   0x1E3,0x84,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_DIRTY_TO_3",
   "UPMC", 
   0x1E3,0x88,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_A_ALL_TO_3",
   "UPMC", 
   0x1E3,0x8F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_TO_4",
   "UPMC", 
   0x1E4,0x11,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_MOD_TO_4",
   "UPMC", 
   0x1E4,0x12,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_SHARED_TO_4",
   "UPMC", 
   0x1E4,0x14,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_DIRTY_TO_4",
   "UPMC", 
   0x1E4,0x18,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_ALL_TO_4",
   "UPMC", 
   0x1E4,0x1F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_TO_5",
   "UPMC", 
   0x1E4,0x21,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_MOD_TO_5",
   "UPMC", 
   0x1E4,0x22,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_SHARED_TO_5",
   "UPMC", 
   0x1E4,0x24,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_DIRTY_TO_5",
   "UPMC", 
   0x1E4,0x28,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_ALL_TO_5",
   "UPMC", 
   0x1E4,0x2F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_TO_6",
   "UPMC", 
   0x1E4,0x41,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_MOD_TO_6",
   "UPMC", 
   0x1E4,0x42,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_SHARED_TO_6",
   "UPMC", 
   0x1E4,0x44,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_DIRTY_TO_6",
   "UPMC", 
   0x1E4,0x48,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_ALL_TO_6",
   "UPMC", 
   0x1E4,0x4F,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_TO_7",
   "UPMC", 
   0x1E4,0x81,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_MOD_TO_7",
   "UPMC", 
   0x1E4,0x82,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_READ_SHARED_TO_7",
   "UPMC", 
   0x1E4,0x84,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_DIRTY_TO_7",
   "UPMC", 
   0x1E4,0x88,0,0}
, {"UNC_CPU_READ_CMD_LATENCY_B_ALL_TO_7",
   "UPMC", 
   0x1E4,0x8F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_TO_4",
   "UPMC", 
   0x1E5,0x11,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_MOD_TO_4",
   "UPMC", 
   0x1E5,0x12,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_SHARED_TO_4",
   "UPMC", 
   0x1E5,0x14,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_DIRTY_TO_4",
   "UPMC", 
   0x1E5,0x18,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_ALL_TO_4",
   "UPMC", 
   0x1E5,0x1F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_TO_5",
   "UPMC", 
   0x1E5,0x21,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_MOD_TO_5",
   "UPMC", 
   0x1E5,0x22,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_SHARED_TO_5",
   "UPMC", 
   0x1E5,0x24,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_DIRTY_TO_5",
   "UPMC", 
   0x1E5,0x28,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_ALL_TO_5",
   "UPMC", 
   0x1E5,0x2F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_TO_6",
   "UPMC", 
   0x1E5,0x41,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_MOD_TO_6",
   "UPMC", 
   0x1E5,0x42,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_SHARED_TO_6",
   "UPMC", 
   0x1E5,0x44,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_DIRTY_TO_6",
   "UPMC", 
   0x1E5,0x48,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_ALL_TO_6",
   "UPMC", 
   0x1E5,0x4F,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_TO_7",
   "UPMC", 
   0x1E5,0x81,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_MOD_TO_7",
   "UPMC", 
   0x1E5,0x82,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_READ_SHARED_TO_7",
   "UPMC", 
   0x1E5,0x84,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_DIRTY_TO_7",
   "UPMC", 
   0x1E5,0x88,0,0}
, {"UNC_CPU_READ_CMD_REQUESTS_B_ALL_TO_7",
   "UPMC", 
   0x1E5,0x8F,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_0",
   "UPMC", 
   0x1E6,0x11,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_0",
   "UPMC", 
   0x1E6,0x12,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_0",
   "UPMC", 
   0x1E6,0x14,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_0",
   "UPMC", 
   0x1E6,0x17,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_4",
   "UPMC", 
   0x1E6,0x19,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_4",
   "UPMC", 
   0x1E6,0x1A,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_4",
   "UPMC", 
   0x1E6,0x1C,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_4",
   "UPMC", 
   0x1E6,0x1F,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_1",
   "UPMC", 
   0x1E6,0x21,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_1",
   "UPMC", 
   0x1E6,0x22,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_1",
   "UPMC", 
   0x1E6,0x24,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_1",
   "UPMC", 
   0x1E6,0x27,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_5",
   "UPMC", 
   0x1E6,0x29,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_5",
   "UPMC", 
   0x1E6,0x2A,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_5",
   "UPMC", 
   0x1E6,0x2C,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_5",
   "UPMC", 
   0x1E6,0x2F,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_2",
   "UPMC", 
   0x1E6,0x41,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_2",
   "UPMC", 
   0x1E6,0x42,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_2",
   "UPMC", 
   0x1E6,0x44,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_2",
   "UPMC", 
   0x1E6,0x47,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_6",
   "UPMC", 
   0x1E6,0x49,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_6",
   "UPMC", 
   0x1E6,0x4A,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_6",
   "UPMC", 
   0x1E6,0x4C,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_6",
   "UPMC", 
   0x1E6,0x4F,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_3",
   "UPMC", 
   0x1E6,0x81,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_3",
   "UPMC", 
   0x1E6,0x82,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_3",
   "UPMC", 
   0x1E6,0x84,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_3",
   "UPMC", 
   0x1E6,0x87,0,0}
, {"UNC_CPU_CMD_LATENCY_READ_TO_7",
   "UPMC", 
   0x1E6,0x89,0,0}
, {"UNC_CPU_CMD_LATENCY_WRITE_TO_7",
   "UPMC", 
   0x1E6,0x8A,0,0}
, {"UNC_CPU_CMD_LATENCY_VICTIM_TO_7",
   "UPMC", 
   0x1E6,0x8C,0,0}
, {"UNC_CPU_CMD_LATENCY_ALL_TO_7",
   "UPMC", 
   0x1E6,0x8F,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_0",
   "UPMC", 
   0x1E7,0x11,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_0",
   "UPMC", 
   0x1E7,0x12,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_0",
   "UPMC", 
   0x1E7,0x14,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_0",
   "UPMC", 
   0x1E7,0x17,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_4",
   "UPMC", 
   0x1E7,0x19,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_4",
   "UPMC", 
   0x1E7,0x1A,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_4",
   "UPMC", 
   0x1E7,0x1C,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_4",
   "UPMC", 
   0x1E7,0x1F,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_1",
   "UPMC", 
   0x1E7,0x21,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_1",
   "UPMC", 
   0x1E7,0x22,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_1",
   "UPMC", 
   0x1E7,0x24,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_1",
   "UPMC", 
   0x1E7,0x27,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_5",
   "UPMC", 
   0x1E7,0x29,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_5",
   "UPMC", 
   0x1E7,0x2A,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_5",
   "UPMC", 
   0x1E7,0x2C,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_5",
   "UPMC", 
   0x1E7,0x2F,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_2",
   "UPMC", 
   0x1E7,0x41,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_2",
   "UPMC", 
   0x1E7,0x42,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_2",
   "UPMC", 
   0x1E7,0x44,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_2",
   "UPMC", 
   0x1E7,0x47,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_6",
   "UPMC", 
   0x1E7,0x49,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_6",
   "UPMC", 
   0x1E7,0x4A,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_6",
   "UPMC", 
   0x1E7,0x4C,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_6",
   "UPMC", 
   0x1E7,0x4F,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_3",
   "UPMC", 
   0x1E7,0x81,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_3",
   "UPMC", 
   0x1E7,0x82,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_3",
   "UPMC", 
   0x1E7,0x84,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_3",
   "UPMC", 
   0x1E7,0x87,0,0}
, {"UNC_CPU_CMD_REQUESTS_READ_TO_7",
   "UPMC", 
   0x1E7,0x89,0,0}
, {"UNC_CPU_CMD_REQUESTS_WRITE_TO_7",
   "UPMC", 
   0x1E7,0x8A,0,0}
, {"UNC_CPU_CMD_REQUESTS_VICTIM_TO_7",
   "UPMC", 
   0x1E7,0x8C,0,0}
, {"UNC_CPU_CMD_REQUESTS_ALL_TO_7",
   "UPMC", 
   0x1E7,0x8F,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_S",
   "UPMC", 
   0x1EB,0x01,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_E",
   "UPMC", 
   0x1EB,0x02,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_MUW_O",
   "UPMC", 
   0x1EB,0x04,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_M",
   "UPMC", 
   0x1EB,0x08,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_MISS",
   "UPMC", 
   0x1EB,0x10,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_DIRECT_PROBE",
   "UPMC", 
   0x1EB,0x20,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_TRACK_CHGTODIRTY",
   "UPMC", 
   0x1EB,0x40,0,0}
, {"EVENT_REQ_CACHE_STATUS_HIT_TRACK_RDBLKM",
   "UPMC", 
   0x1EB,0x80,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_WRITE_REQ_DCT",
   "UPMC", 
   0x1F0,0x01,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_READ_REQ_DCT",
   "UPMC", 
   0x1F0,0x02,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_PREFETCH_REQ_DCT",
   "UPMC", 
   0x1F0,0x04,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_32_SIZED_WRITES",
   "UPMC", 
   0x1F0,0x08,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_64_SIZED_WRITES",
   "UPMC", 
   0x1F0,0x10,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_32_SIZED_READS",
   "UPMC", 
   0x1F0,0x20,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_64_SIZED_READS",
   "UPMC", 
   0x1F0,0x40,0,0}
, {"UNC_MEMORY_CONTROLLER_REQUESTS_READ_WHILE_WRITE",
   "UPMC", 
   0x1F0,0x80,0,0}
, {"UNC_DRAM_ACCESS_DCT0_PAGE_HIT",
   "UPMC", 
   0x3EC,0x01,0,0}
, {"UNC_DRAM_ACCESS_DCT0_PAGE_MISS",
   "UPMC", 
   0x3EC,0x02,0,0}
, {"UNC_DRAM_ACCESS_DCT0_PAGE_CONFLICT",
   "UPMC", 
   0x3EC,0x04,0,0}
, {"UNC_DRAM_ACCESSES_DCT0_ALL",
   "UPMC", 
   0x3EC,0x07,0,0}
, {"UNC_DRAM_ACCESS_DCT1_PAGE_HIT",
   "UPMC", 
   0x3EC,0x08,0,0}
, {"UNC_DRAM_ACCESS_DCT2_PAGE_MISS",
   "UPMC", 
   0x3EC,0x10,0,0}
, {"UNC_DRAM_ACCESS_DCT3_PAGE_CONFLICT",
   "UPMC", 
   0x3EC,0x20,0,0}
, {"UNC_DRAM_ACCESSES_DCT1_ALL",
   "UPMC", 
   0x3EC,0x38,0,0}
, {"UNC_DRAM_CONTROLLER_PAGE_TABLE_OVERFLOW_DCT0",
   "UPMC", 
   0x3ED,0x1,0,0}
, {"UNC_DRAM_CONTROLLER_PAGE_TABLE_OVERFLOW_DCT1",
   "UPMC", 
   0x3ED,0x2,0,0}
, {"MEMORY_CONTROLLER_DRAM_CMD_SLOTS_MISSED_DCT0",
   "UPMC", 
   0x3EE,0x1,0,0}
, {"MEMORY_CONTROLLER_DRAM_CMD_SLOTS_MISSED_DCT1",
   "UPMC", 
   0x3EE,0x2,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT0_DIMM",
   "UPMC", 
   0x3EF,0x01,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT0_READ_TO_WRITE",
   "UPMC", 
   0x3EF,0x02,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT0_WRITE_TO_READ",
   "UPMC", 
   0x3EF,0x04,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT1_DIMM",
   "UPMC", 
   0x3EF,0x08,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT1_READ_TO_WRITE",
   "UPMC", 
   0x3EF,0x10,0,0}
, {"MEMORY_CONTROLLER_TURNAROUNDS_DCT1_WRITE_TO_READ",
   "UPMC", 
   0x3EF,0x20,0,0}
};
