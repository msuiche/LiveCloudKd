#ifndef _NTDEFS_H_
#define _NTDEFS_H_

typedef LARGE_INTEGER PHYSICAL_ADDRESS;

#define PAGE_SIZE 0x1000

#ifndef _NTDEF_
typedef _Return_type_success_(return >= 0) LONG NTSTATUS;
typedef NTSTATUS* PNTSTATUS;
#endif
#define STATUS_SUCCESS (0x00000000)
#define STATUS_INFO_LENGTH_MISMATCH 0xC0000004

#define InitializeObjectAttributes(p, n, a, r, s) { \
    (p)->Length = sizeof(OBJECT_ATTRIBUTES); \
    (p)->RootDirectory = r; \
    (p)->Attributes = a; \
    (p)->ObjectName = n; \
    (p)->SecurityDescriptor = s; \
    (p)->SecurityQualityOfService = NULL; \
    }

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;

typedef struct _OBJECT_NAME_INFORMATION
{
    UNICODE_STRING Name;
} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;

typedef struct _OBJECT_TYPE_INFORMATION
{
    UNICODE_STRING TypeName;
    ULONG TotalNumberOfObjects;
    ULONG TotalNumberOfHandles;
    ULONG TotalPagedPoolUsage;
    ULONG TotalNonPagedPoolUsage;
    ULONG TotalNamePoolUsage;
    ULONG TotalHandleTableUsage;
    ULONG HighWaterNumberOfObjects;
    ULONG HighWaterNumberOfHandles;
    ULONG HighWaterPagedPoolUsage;
    ULONG HighWaterNonPagedPoolUsage;
    ULONG HighWaterNamePoolUsage;
    ULONG HighWaterHandleTableUsage;
    ULONG InvalidAttributes;
    GENERIC_MAPPING GenericMapping;
    ULONG ValidAccessMask;
    BOOLEAN SecurityRequired;
    BOOLEAN MaintainHandleCount;
    UCHAR TypeIndex; // since WINBLUE
    CHAR ReservedByte;
    ULONG PoolType;
    ULONG DefaultPagedPoolCharge;
    ULONG DefaultNonPagedPoolCharge;
} OBJECT_TYPE_INFORMATION, *POBJECT_TYPE_INFORMATION;


typedef struct _OBJECT_ATTRIBUTES {
    ULONG           Length;
    HANDLE          RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG           Attributes;
    PVOID           SecurityDescriptor;
    PVOID           SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;

typedef enum _SYSTEM_INFORMATION_CLASS {
    SystemBasicInformation = 0,
    SystemProcessInformation = 5,
    SystemHandleInformation = 16
} SYSTEM_INFORMATION_CLASS;

typedef enum _OBJECT_INFORMATION_CLASS
{
    ObjectBasicInformation, // OBJECT_BASIC_INFORMATION
    ObjectNameInformation, // OBJECT_NAME_INFORMATION
    ObjectTypeInformation, // OBJECT_TYPE_INFORMATION
    ObjectTypesInformation, // OBJECT_TYPES_INFORMATION
    ObjectHandleFlagInformation, // OBJECT_HANDLE_FLAG_INFORMATION
    ObjectSessionInformation,
    ObjectSessionObjectInformation,
    MaxObjectInfoClass
} OBJECT_INFORMATION_CLASS;

typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

typedef enum _THREAD_STATE {
    StateInitialized,
    StateReady,
    StateRunning,
    StateStandby,
    StateTerminated,
    StateWait,
    StateTransition,
    StateUnknown
} THREAD_STATE;

typedef struct _VM_COUNTERS {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivatePageCount;
} VM_COUNTERS;

typedef struct _SYSTEM_THREAD {
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER CreateTime;
    ULONG WaitTime;
    LPVOID StartAddress;
    CLIENT_ID ClientId;
    DWORD Priority;
    LONG BasePriority;
    ULONG ContextSwitchCount;
    THREAD_STATE State;
    ULONG WaitReason;
} SYSTEM_THREAD;

typedef struct _SYSTEM_PROCESS_INFORMATION {
    ULONG NextEntryOffset;
    ULONG NumberOfThreads;
    LARGE_INTEGER Reserved[3];
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER KernelTime;
    UNICODE_STRING ImageName;
    DWORD BasePriority;
    HANDLE ProcessId;
    HANDLE ParentProcessId;
    ULONG HandleCount;
    ULONG Reserved2[2];
    VM_COUNTERS VMCounters;
    IO_COUNTERS IOCounters;
    SYSTEM_THREAD Threads[1];
} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION;

typedef struct _SYSTEM_BASIC_INFORMATION
{
    ULONG Reserved;
    ULONG TimerResolution;
    ULONG PageSize;
    ULONG NumberOfPhysicalPages;
    ULONG LowestPhysicalPageNumber;
    ULONG HighestPhysicalPageNumber;
    ULONG AllocationGranularity;
    ULONG_PTR MinimumUserModeAddress;
    ULONG_PTR MaximumUserModeAddress;
    ULONG_PTR ActiveProcessorsAffinityMask;
    CCHAR NumberOfProcessors;
} SYSTEM_BASIC_INFORMATION, *PSYSTEM_BASIC_INFORMATION;

typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO
{
    USHORT UniqueProcessId;
    USHORT CreatorBackTraceIndex;
    UCHAR ObjectTypeIndex;
    UCHAR HandleAttributes;
    USHORT HandleValue;
    PVOID Object;
    ULONG GrantedAccess;
} SYSTEM_HANDLE_TABLE_ENTRY_INFO, *PSYSTEM_HANDLE_TABLE_ENTRY_INFO;

typedef struct _SYSTEM_HANDLE_INFORMATION
{
    ULONG NumberOfHandles;
    SYSTEM_HANDLE_TABLE_ENTRY_INFO Handles[1];
} SYSTEM_HANDLE_INFORMATION, *PSYSTEM_HANDLE_INFORMATION;

//
//Copying form wdbgexts.h because of some matching unions in sdl files (in another project)
// must be removed, after problem will be solved
//

#define KDBG_TAG    'GBDK'

typedef struct _DBGKD_GET_VERSION64 {
	USHORT  MajorVersion;
	USHORT  MinorVersion;
	UCHAR   ProtocolVersion;
	UCHAR   KdSecondaryVersion; // Cannot be 'A' for compat with dump header
	USHORT  Flags;
	USHORT  MachineType;

	//
	// Protocol command support descriptions.
	// These allow the debugger to automatically
	// adapt to different levels of command support
	// in different kernels.
	//

	// One beyond highest packet type understood, zero based.
	UCHAR   MaxPacketType;
	// One beyond highest state change understood, zero based.
	UCHAR   MaxStateChange;
	// One beyond highest state manipulate message understood, zero based.
	UCHAR   MaxManipulate;

	// Kind of execution environment the kernel is running in,
	// such as a real machine or a simulator.  Written back
	// by the simulation if one exists.
	UCHAR   Simulation;

	USHORT  Unused[1];

	ULONG64 KernBase;
	ULONG64 PsLoadedModuleList;

	//
	// Components may register a debug data block for use by
	// debugger extensions.  This is the address of the list head.
	//
	// There will always be an entry for the debugger.
	//

	ULONG64 DebuggerDataList;

} DBGKD_GET_VERSION64, * PDBGKD_GET_VERSION64;

typedef struct _DBGKD_DEBUG_DATA_HEADER64 {

	//
	// Link to other blocks
	//

	LIST_ENTRY64 List;

	//
	// This is a unique tag to identify the owner of the block.
	// If your component only uses one pool tag, use it for this, too.
	//

	ULONG           OwnerTag;

	//
	// This must be initialized to the size of the data block,
	// including this structure.
	//

	ULONG           Size;

} DBGKD_DEBUG_DATA_HEADER64, * PDBGKD_DEBUG_DATA_HEADER64;

typedef struct _KDDEBUGGER_DATA64 {

	DBGKD_DEBUG_DATA_HEADER64 Header;

	//
	// Base address of kernel image
	//

	ULONG64   KernBase;

	//
	// DbgBreakPointWithStatus is a function which takes an argument
	// and hits a breakpoint.  This field contains the address of the
	// breakpoint instruction.  When the debugger sees a breakpoint
	// at this address, it may retrieve the argument from the first
	// argument register, or on x86 the eax register.
	//

	ULONG64   BreakpointWithStatus;       // address of breakpoint

	//
	// Address of the saved context record during a bugcheck
	//
	// N.B. This is an automatic in KeBugcheckEx's frame, and
	// is only valid after a bugcheck.
	//

	ULONG64   SavedContext;

	//
	// help for walking stacks with user callbacks:
	//

	//
	// The address of the thread structure is provided in the
	// WAIT_STATE_CHANGE packet.  This is the offset from the base of
	// the thread structure to the pointer to the kernel stack frame
	// for the currently active usermode callback.
	//

	USHORT  ThCallbackStack;            // offset in thread data

	//
	// these values are offsets into that frame:
	//

	USHORT  NextCallback;               // saved pointer to next callback frame
	USHORT  FramePointer;               // saved frame pointer

	//
	// pad to a quad boundary
	//
	USHORT  PaeEnabled : 1;

	//
	// Address of the kernel callout routine.
	//

	ULONG64   KiCallUserMode;             // kernel routine

	//
	// Address of the usermode entry point for callbacks.
	//

	ULONG64   KeUserCallbackDispatcher;   // address in ntdll


	//
	// Addresses of various kernel data structures and lists
	// that are of interest to the kernel debugger.
	//

	ULONG64   PsLoadedModuleList;
	ULONG64   PsActiveProcessHead;
	ULONG64   PspCidTable;

	ULONG64   ExpSystemResourcesList;
	ULONG64   ExpPagedPoolDescriptor;
	ULONG64   ExpNumberOfPagedPools;

	ULONG64   KeTimeIncrement;
	ULONG64   KeBugCheckCallbackListHead;
	ULONG64   KiBugcheckData;

	ULONG64   IopErrorLogListHead;

	ULONG64   ObpRootDirectoryObject;
	ULONG64   ObpTypeObjectType;

	ULONG64   MmSystemCacheStart;
	ULONG64   MmSystemCacheEnd;
	ULONG64   MmSystemCacheWs;

	ULONG64   MmPfnDatabase;
	ULONG64   MmSystemPtesStart;
	ULONG64   MmSystemPtesEnd;
	ULONG64   MmSubsectionBase;
	ULONG64   MmNumberOfPagingFiles;

	ULONG64   MmLowestPhysicalPage;
	ULONG64   MmHighestPhysicalPage;
	ULONG64   MmNumberOfPhysicalPages;

	ULONG64   MmMaximumNonPagedPoolInBytes;
	ULONG64   MmNonPagedSystemStart;
	ULONG64   MmNonPagedPoolStart;
	ULONG64   MmNonPagedPoolEnd;

	ULONG64   MmPagedPoolStart;
	ULONG64   MmPagedPoolEnd;
	ULONG64   MmPagedPoolInformation;
	ULONG64   MmPageSize;

	ULONG64   MmSizeOfPagedPoolInBytes;

	ULONG64   MmTotalCommitLimit;
	ULONG64   MmTotalCommittedPages;
	ULONG64   MmSharedCommit;
	ULONG64   MmDriverCommit;
	ULONG64   MmProcessCommit;
	ULONG64   MmPagedPoolCommit;
	ULONG64   MmExtendedCommit;

	ULONG64   MmZeroedPageListHead;
	ULONG64   MmFreePageListHead;
	ULONG64   MmStandbyPageListHead;
	ULONG64   MmModifiedPageListHead;
	ULONG64   MmModifiedNoWritePageListHead;
	ULONG64   MmAvailablePages;
	ULONG64   MmResidentAvailablePages;

	ULONG64   PoolTrackTable;
	ULONG64   NonPagedPoolDescriptor;

	ULONG64   MmHighestUserAddress;
	ULONG64   MmSystemRangeStart;
	ULONG64   MmUserProbeAddress;

	ULONG64   KdPrintCircularBuffer;
	ULONG64   KdPrintCircularBufferEnd;
	ULONG64   KdPrintWritePointer;
	ULONG64   KdPrintRolloverCount;

	ULONG64   MmLoadedUserImageList;

	// NT 5.1 Addition

	ULONG64   NtBuildLab;
	ULONG64   KiNormalSystemCall;

	// NT 5.0 hotfix addition

	ULONG64   KiProcessorBlock;
	ULONG64   MmUnloadedDrivers;
	ULONG64   MmLastUnloadedDriver;
	ULONG64   MmTriageActionTaken;
	ULONG64   MmSpecialPoolTag;
	ULONG64   KernelVerifier;
	ULONG64   MmVerifierData;
	ULONG64   MmAllocatedNonPagedPool;
	ULONG64   MmPeakCommitment;
	ULONG64   MmTotalCommitLimitMaximum;
	ULONG64   CmNtCSDVersion;

	// NT 5.1 Addition

	ULONG64   MmPhysicalMemoryBlock;
	ULONG64   MmSessionBase;
	ULONG64   MmSessionSize;
	ULONG64   MmSystemParentTablePage;

	// Server 2003 addition

	ULONG64   MmVirtualTranslationBase;

	USHORT    OffsetKThreadNextProcessor;
	USHORT    OffsetKThreadTeb;
	USHORT    OffsetKThreadKernelStack;
	USHORT    OffsetKThreadInitialStack;

	USHORT    OffsetKThreadApcProcess;
	USHORT    OffsetKThreadState;
	USHORT    OffsetKThreadBStore;
	USHORT    OffsetKThreadBStoreLimit;

	USHORT    SizeEProcess;
	USHORT    OffsetEprocessPeb;
	USHORT    OffsetEprocessParentCID;
	USHORT    OffsetEprocessDirectoryTableBase;

	USHORT    SizePrcb;
	USHORT    OffsetPrcbDpcRoutine;
	USHORT    OffsetPrcbCurrentThread;
	USHORT    OffsetPrcbMhz;

	USHORT    OffsetPrcbCpuType;
	USHORT    OffsetPrcbVendorString;
	USHORT    OffsetPrcbProcStateContext;
	USHORT    OffsetPrcbNumber;

	USHORT    SizeEThread;

	UCHAR     L1tfHighPhysicalBitIndex;  // Windows 10 19H1 Addition
	UCHAR     L1tfSwizzleBitIndex;       // Windows 10 19H1 Addition

	ULONG     Padding0;

	ULONG64   KdPrintCircularBufferPtr;
	ULONG64   KdPrintBufferSize;

	ULONG64   KeLoaderBlock;

	USHORT    SizePcr;
	USHORT    OffsetPcrSelfPcr;
	USHORT    OffsetPcrCurrentPrcb;
	USHORT    OffsetPcrContainedPrcb;

	USHORT    OffsetPcrInitialBStore;
	USHORT    OffsetPcrBStoreLimit;
	USHORT    OffsetPcrInitialStack;
	USHORT    OffsetPcrStackLimit;

	USHORT    OffsetPrcbPcrPage;
	USHORT    OffsetPrcbProcStateSpecialReg;
	USHORT    GdtR0Code;
	USHORT    GdtR0Data;

	USHORT    GdtR0Pcr;
	USHORT    GdtR3Code;
	USHORT    GdtR3Data;
	USHORT    GdtR3Teb;

	USHORT    GdtLdt;
	USHORT    GdtTss;
	USHORT    Gdt64R3CmCode;
	USHORT    Gdt64R3CmTeb;

	ULONG64   IopNumTriageDumpDataBlocks;
	ULONG64   IopTriageDumpDataBlocks;

	// Longhorn addition

	ULONG64   VfCrashDataBlock;
	ULONG64   MmBadPagesDetected;
	ULONG64   MmZeroedPageSingleBitErrorsDetected;

	// Windows 7 addition

	ULONG64   EtwpDebuggerData;
	USHORT    OffsetPrcbContext;

	// Windows 8 addition

	USHORT    OffsetPrcbMaxBreakpoints;
	USHORT    OffsetPrcbMaxWatchpoints;

	ULONG     OffsetKThreadStackLimit;
	ULONG     OffsetKThreadStackBase;
	ULONG     OffsetKThreadQueueListEntry;
	ULONG     OffsetEThreadIrpList;

	USHORT    OffsetPrcbIdleThread;
	USHORT    OffsetPrcbNormalDpcState;
	USHORT    OffsetPrcbDpcStack;
	USHORT    OffsetPrcbIsrStack;

	USHORT    SizeKDPC_STACK_FRAME;

	// Windows 8.1 Addition

	USHORT    OffsetKPriQueueThreadListHead;
	USHORT    OffsetKThreadWaitReason;

	// Windows 10 RS1 Addition

	USHORT    Padding1;
	ULONG64   PteBase;

	// Windows 10 RS5 Addition

	ULONG64   RetpolineStubFunctionTable;
	ULONG     RetpolineStubFunctionTableSize;
	ULONG     RetpolineStubOffset;
	ULONG     RetpolineStubSize;

} KDDEBUGGER_DATA64, * PKDDEBUGGER_DATA64;

NTSYSCALLAPI
NTSTATUS
NTAPI
NtQuerySystemInformation(
    _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
    _Out_writes_bytes_opt_(SystemInformationLength) PVOID SystemInformation,
    _In_ ULONG SystemInformationLength,
    _Out_opt_ PULONG ReturnLength
);

NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcess(
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PCLIENT_ID ClientId
);

NTSYSCALLAPI
NTSTATUS
NTAPI
NtDuplicateObject(
    _In_ HANDLE SourceProcessHandle,
    _In_ HANDLE SourceHandle,
    _In_opt_ HANDLE TargetProcessHandle,
    _Out_opt_ PHANDLE TargetHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Options
);

NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryObject(
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
);

NTSYSCALLAPI
NTSTATUS
NTAPI
NtQuerySystemInformation(
    _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
    _Out_writes_bytes_opt_(SystemInformationLength) PVOID SystemInformation,
    _In_ ULONG SystemInformationLength,
    _Out_opt_ PULONG ReturnLength
);

NTSYSCALLAPI
NTSTATUS
NTAPI
NtAllocateVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_(*BaseAddress, _Readable_bytes_(*RegionSize) _Writable_bytes_(*RegionSize) _Post_readable_byte_size_(*RegionSize)) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
);
#endif 