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

#define ROUND_PAGE(x) ((x + PAGE_SIZE) & ~(PAGE_SIZE - 1))
typedef enum _MACHINE_TYPE {
    MACHINE_UNKNOW = 0,
    MACHINE_X86 = 1,
    MACHINE_AMD64 = 2
} MACHINE_TYPE, *PMACHINE_TYPE;

typedef struct _EXCALIBUR_DATA {
    ULONG     MachineType;
    ULONG     NtVersion;
    ULONG     MajorVersion;
    ULONG     MinorVersion;
    ULONG     NtBuildNumber;
    ULONGLONG DirectoryTableBase;
    BOOL      PaeEnabled;

    ULONGLONG KernelBase;
    ULONG     SizeOfKernelImage;
    GUID      KernelGuid;

    ULONGLONG KdDebuggerDataBlock;

    ULONGLONG KiProcessorBlock;
    ULONG     NumberProcessors;

    ULONGLONG MmPfnDatabase;
    ULONGLONG PsLoadedModuleList;
    ULONGLONG PsActiveProcessHead;
    ULONGLONG PspCidTable;
} EXCALIBUR_DATA, *PEXCALIBUR_DATA;

#define MAX_PROCESSORS 256
