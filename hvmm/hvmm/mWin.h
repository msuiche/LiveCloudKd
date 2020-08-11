typedef enum _SYSTEM_INFORMATION_CLASS {   
  SystemBasicInformation,                // 0   
  SystemProcessorInformation,            // 1   
  SystemPerformanceInformation,          // 2  
  SystemTimeOfDayInformation,            // 3  
  SystemNotImplemented1,                 // 4  
  SystemProcessesAndThreadsInformation,  // 5  
  SystemCallCounts,                      // 6  
  SystemConfigurationInformation,        // 7  
  SystemProcessorTimes,                  // 8  
  SystemGlobalFlag,                      // 9  
  SystemNotImplemented2,                 // 10  
  SystemModuleInformation,               // 11  
  SystemLockInformation,                 // 12  
  SystemNotImplemented3,                 // 13  
  SystemNotImplemented4,                 // 14  
  SystemNotImplemented5,                 // 15  
  SystemHandleInformation,               // 16  
  SystemObjectInformation,               // 17  
  SystemPagefileInformation,             // 18  
  SystemInstructionEmulationCounts,      // 19  
  SystemInvalidInfoClass1,               // 20  
  SystemCacheInformation,                // 21  
  SystemPoolTagInformation,              // 22  
  SystemProcessorStatistics,             // 23  
  SystemDpcInformation,                  // 24  
  SystemNotImplemented6,                 // 25  
  SystemLoadImage,                       // 26  
  SystemUnloadImage,                     // 27  
  SystemTimeAdjustment,                  // 28  
  SystemNotImplemented7,                 // 29  
  SystemNotImplemented8,                 // 30  
  SystemNotImplemented9,                 // 31  
  SystemCrashDumpInformation,            // 32  
  SystemExceptionInformation,            // 33  
  SystemCrashDumpStateInformation,       // 34  
  SystemKernelDebuggerInformation,       // 35  
  SystemContextSwitchInformation,        // 36  
  SystemRegistryQuotaInformation,        // 37  
  SystemLoadAndCallImage,                // 38  
  SystemPrioritySeparation,              // 39  
  SystemNotImplemented10,                // 40  
  SystemNotImplemented11,                // 41  
  SystemInvalidInfoClass2,               // 42  
  SystemInvalidInfoClass3,               // 43  
  SystemTimeZoneInformation,             // 44  
  SystemLookasideInformation,            // 45  
  SystemSetTimeSlipEvent,                // 46  
  SystemCreateSession,                   // 47  
  SystemDeleteSession,                   // 48  
  SystemInvalidInfoClass4,               // 49  
  SystemRangeStartInformation,           // 50  
  SystemVerifierInformation,             // 51  
  SystemAddVerifier,                     // 52  
  SystemSessionProcessesInformation      // 53  
} SYSTEM_INFORMATION_CLASS;  

#define SystemProcessAndThreadInformation 5

typedef struct _SYSTEM_MODULE_INFORMATION_ENTRY
{
    ULONG  Unknown1;
    ULONG  Unknown2;
//#ifdef _WIN64
        //ULONG Unknown3;
        //ULONG Unknown4;
//#endif
    PVOID  Base;
    ULONG  Size;
    ULONG  Flags;
    USHORT  Index;
    USHORT  NameLength;
    USHORT  LoadCount;
    USHORT  PathLength;
    CHAR  ImageName[256];
} SYSTEM_MODULE_INFORMATION_ENTRY, *PSYSTEM_MODULE_INFORMATION_ENTRY;

typedef struct _SYSTEM_MODULE_INFORMATION
{
    ULONG Count;
    SYSTEM_MODULE_INFORMATION_ENTRY Module[1];
} SYSTEM_MODULE_INFORMATION, *PSYSTEM_MODULE_INFORMATION;


typedef struct _HVMM_DEVICE_EXTENSION
{
	PDEVICE_OBJECT	fdo;
	UNICODE_STRING	ustrSymLinkName;
} HVMM_DEVICE_EXTENSION, *PHVMM_DEVICE_EXTENSION;

typedef unsigned long       DWORD;
typedef unsigned short      WORD;

typedef struct _IMAGE_EXPORT_DIRECTORY {
    DWORD   Characteristics;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    DWORD   Name;
    DWORD   Base;
    DWORD   NumberOfFunctions;
    DWORD   NumberOfNames;
    DWORD   AddressOfFunctions;     // RVA from base of image
    DWORD   AddressOfNames;         // RVA from base of image
    DWORD   AddressOfNameOrdinals;  // RVA from base of image
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;


typedef struct _SYSTEM_THREAD_INFORMATION
{
	LARGE_INTEGER KernelTime;
	LARGE_INTEGER UserTime;
	LARGE_INTEGER CreateTime;
	ULONG WaitTime;
	PVOID StartAddress;
	CLIENT_ID ClientId;
	KPRIORITY Priority;
	LONG BasePriority;
	ULONG ContextSwitches;
	ULONG ThreadState;
	KWAIT_REASON WaitReason;
}SYSTEM_THREAD_INFORMATION, * PSYSTEM_THREAD_INFORMATION;

typedef struct _SYSTEM_PROCESS_INFORMATION
{
	ULONG NextEntryOffset;
	ULONG NumberOfThreads;
	LARGE_INTEGER WorkingSetPrivateSize;
	ULONG HardFaultCount;
	ULONG NumberOfThreadsHighWatermark;
	ULONGLONG CycleTime;
	LARGE_INTEGER CreateTime;
	LARGE_INTEGER UserTime;
	LARGE_INTEGER KernelTime;
	UNICODE_STRING ImageName;
	KPRIORITY BasePriority;
	HANDLE UniqueProcessId;
	HANDLE InheritedFromUniqueProcessId;
	ULONG HandleCount;
	ULONG SessionId;
	ULONG_PTR UniqueProcessKey;
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
	LARGE_INTEGER ReadOperationCount;
	LARGE_INTEGER WriteOperationCount;
	LARGE_INTEGER OtherOperationCount;
	LARGE_INTEGER ReadTransferCount;
	LARGE_INTEGER WriteTransferCount;
	LARGE_INTEGER OtherTransferCount;
	SYSTEM_THREAD_INFORMATION Threads[1];
}SYSTEM_PROCESS_INFORMATION, * PSYSTEM_PROCESS_INFORMATION;

NTSYSAPI NTSTATUS NTAPI ZwQuerySystemInformation( 
	IN SYSTEM_INFORMATION_CLASS SystemInformationClass, 
	IN OUT PVOID SystemInformation, 
	IN ULONG SystemInformationLength, 
	OUT PULONG ReturnLength OPTIONAL 
);

NTSYSAPI NTSTATUS NTAPI MmCopyVirtualMemory
(
	PEPROCESS SourceProcess,
	PVOID SourceAddress,
	PEPROCESS TargetProcess,
	PVOID TargetAddress,
	SIZE_T BufferSize,
	KPROCESSOR_MODE PreviousMode,
	PSIZE_T ReturnSize
);

PVOID
RtlImageDirectoryEntryToData(
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG Size
);

#define PAGE_SIZE 0x1000

#define WIN101803_FRIENDLY_NAME_OFFSET 0x78
#define WIN2016_FRIENDLY_NAME_OFFSET 0x70