/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - dbg.h

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#if 0

#define KD_DEBUGGER_BLOCK_PAGE_SIZE 0x10000
#define MAX_NUMBER_OF_RUNS_BYTES 0x10000 

#define ROUND_PAGE(x) ((x + PAGE_SIZE) & ~(PAGE_SIZE - 1))
typedef enum _MACHINE_TYPE {
    MACHINE_UNKNOW = 0,
    MACHINE_X86 = 1,
    MACHINE_AMD64 = 2
} MACHINE_TYPE, *PMACHINE_TYPE;

//typedef struct _PHYSICAL_MEMORY_RANGE {
//    UINT64 Start;
//    UINT64 Length;
//} PHYSICAL_MEMORY_RANGE, *PPHYSICAL_MEMORY_RANGE;

typedef struct _PHYSICAL_MEMORY_RUN
{
    ULONG64 BasePage;
    ULONG64 PageCount;
} PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN;

typedef struct _PHYSICAL_MEMORY_DESCRIPTOR
{
    ULONG32 NumberOfRuns;
    ULONG32 Padding;
    ULONG64 NumberOfPages;
    PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR;

typedef struct _EXCALIBUR_DATA {
	ULONG     MachineType;
	ULONG     NtVersion;
	ULONG     MajorVersion;
	ULONG     MinorVersion;
	ULONG     NtBuildNumber;
	ULONG64   NtBuildNumberVA;
	ULONGLONG DirectoryTableBase;
	BOOL      PaeEnabled;

	ULONGLONG KernelBase;
	ULONG     SizeOfKernelImage;
	GUID      KernelGuid;

	//ULONGLONG KdDebuggerDataBlock;
	PKDDEBUGGER_DATA64 KdDebuggerDataBlock;

	ULONGLONG KiProcessorBlock;

	ULONG     NumberProcessors;

	ULONGLONG MmPfnDatabase;
	ULONGLONG PsLoadedModuleList;
	ULONGLONG PsActiveProcessHead;
	ULONGLONG PspCidTable;
	PCONTEXT Context;
	PHYSICAL_ADDRESS KdDebuggerDataBlockPa;
	ULONG64 MmPhysicalMemoryBlock;
	ULONG64 MmMaximumPhysicalPage;
	USHORT OffsetPcrContainedPrcb;
	USHORT OffsetPrcbProcStateContext;
	USHORT OffsetPrcbProcStateSpecialReg;
	ULONG64 NumberOfRuns;
	ULONG64 NumberOfPages;
	CHAR KdDebuggerDataBlockBlock[KD_DEBUGGER_BLOCK_PAGE_SIZE];
	//CHAR RunsBlock[MAX_NUMBER_OF_RUNS_BYTES];
	PHYSICAL_MEMORY_RUN Run[MAX_NUMBER_OF_RUNS_BYTES];
} EXCALIBUR_DATA, *PEXCALIBUR_DATA;

#define MAX_PROCESSORS 256

#endif
