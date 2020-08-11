#pragma once

#ifndef __SDKMISC_H__
#define __SDKMISC_H__

//
// Max length of Virtual Machine name in _VID_PARTITION structure
//

#define VID_PARTITION_FRIENDLY_NAME_MAX (256)

#define KD_DEBUGGER_BLOCK_PAGE_SIZE 0x10000
#define MAX_NUMBER_OF_RUNS_BYTES 0x10000 //must be corellated with MAX_NUMBER_OF_RUNS in device_hvvm.c

#define ROUND_PAGE(x) ((x + PAGE_SIZE) & ~(PAGE_SIZE - 1))
#define MAX_PROCESSORS 256

typedef struct _PHYSICAL_MEMORY_RUN
{
	ULONG64 BasePage;
	ULONG64 PageCount;
} PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN;

typedef enum _MACHINE_TYPE {
	MACHINE_UNKNOW = 0,
	MACHINE_X86 = 1,
	MACHINE_AMD64 = 2
} MACHINE_TYPE, *PMACHINE_TYPE;

typedef struct _EXCALIBUR_DATA {
	ULONG     MachineType;
	ULONG     NtVersion;
	ULONG     NtMajorVersion;
	ULONG     NtMinorVersion;
	ULONG     NtBuildNumber;
	ULONG64   NtBuildNumberVA;
	ULONGLONG DirectoryTableBase;
	BOOL      PaeEnabled;

	ULONGLONG KernelBase;
	ULONGLONG KdVersionBlock;
	ULONG     SizeOfKernelImage;
	GUID      KernelGuid;

	//ULONGLONG KdDebuggerDataBlock;
	PKDDEBUGGER_DATA64 KdDebuggerDataBlock;

	ULONGLONG KiProcessorBlock;
	ULONG64 KPCRVa[MAX_PROCESSORS];

	ULONG     NumberProcessors;
	//PVOID     VmwpNtDllBase;

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
	PHYSICAL_MEMORY_RUN Run[MAX_NUMBER_OF_RUNS_BYTES];
} EXCALIBUR_DATA, *PEXCALIBUR_DATA;


typedef enum _VID_INFORMATION_CLASS {
	VidMbBlockInfo,                  //0
} VID_INFORMATION_CLASS;



typedef enum _USR_VM_TYPE {
	UsrVidVmTypeUnknown = 0,
	UsrVidVmTypeContainer = 1,
	UsrVidVmTypeFullWin10VM = 2,
	UsrVidVmTypeFullWinSrvVMSecure = 3,
	UsrVidVmTypeFullWinSrvVM = 4,
	UsrVidVmTypeDockerHyperVContainerUserName = 5,
	UsrVidVmTypeDockerHyperVContainerGUID = 6,
	UsrVidVmTypeLinuxContainer = 7
} USR_VM_TYPE;

typedef struct _REGISTER_VP_INFO {
	ULONG64 PartitionId;
	HV_VP_INDEX VpIndex;
	HV_REGISTER_NAME RegisterCode;
	HV_REGISTER_VALUE RegisterValue;
} REGISTER_VP_INFO, * PREGISTER_VP_INFO;

typedef struct _TRANSLATE_VA_INFO {
	ULONG64 PartitionId;
	ULONG64 VpIndex;
	HV_TRANSLATE_GVA_CONTROL_FLAGS ControlFlags;
	HV_GVA_PAGE_NUMBER GvaPage;
} TRANSLATE_VA_INFO, *PTRANSLATE_VA_INFO;

typedef struct _TRANSLATE_VA_RESULT {
	HV_GPA_PAGE_NUMBER GpaPage;
	HV_TRANSLATE_GVA_RESULT TranslationResult;
} TRANSLATE_VA_RESULT, *PTRANSLATE_VA_RESULT;

typedef struct _VID_VM_INFO {
	WCHAR FriendlyName[VID_PARTITION_FRIENDLY_NAME_MAX];
	HV_PARTITION_ID PartitionId;
	USR_VM_TYPE VmType;
} VID_VM_INFO, *PVID_VM_INFO;

typedef struct _GPAR_BLOCK_INFO {
	HANDLE PartitionHandle;
	UINT64 GPA;
	MB_HANDLE MbHandle;
	UINT64 MemoryBlockPageIndex;
	UINT64 Count;
} GPAR_BLOCK_INFO, *PGPAR_BLOCK_INFO;

typedef struct _HVDD_MEMORY_BLOCK {
	MB_HANDLE MemoryHandle;
	USHORT Hits;
	BOOL IsMemoryBlock;
	ULONG64 PageCountTotal;
} HVDD_MEMORY_BLOCK, *PHVDD_MEMORY_BLOCK;

typedef struct _HVDD_PARTITION {
	HANDLE PartitionHandle;
	HANDLE WorkerHandle;
	HANDLE OriginalVidPartitionHandle;
	ULONG64 HvddHandle;
	BOOLEAN FillSuccess;
	ULONG WorkerPid;
	ULONG CurrentProcess;
	VID_VM_INFO VidVmInfo;
	WCHAR VmTypeString[50];
	ULONG MemoryBlockCount;
	ULONG MainMemoryBlockIndex;
	PHVDD_MEMORY_BLOCK MemoryBlockTable;
	EXCALIBUR_DATA KiExcaliburData;
} HVDD_PARTITION, *PHVDD_PARTITION;

typedef struct _PHYSICAL_MEMORY_DESCRIPTOR
{
	ULONG32 NumberOfRuns;
	ULONG32 Padding;
	ULONG64 NumberOfPages;
	PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR;

#define XMM_ALIGN16 __declspec(align(16)) 
#define XMM_ALIGN64 __declspec(align(64)) 

#endif