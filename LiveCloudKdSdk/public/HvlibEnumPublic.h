#pragma once

#ifndef __SDKENUMP_H__
#define __SDKENUMP_H__

#ifdef __cplusplus
extern "C" {
#endif 

#define PAGE_SIZE 0x1000
#define MAX_PROCESSORS 256 //use for host and guest OS processor's count limitation
#define MAX_NUMBER_OF_RUNS_BYTES 0x4000 //also used in MAX_NUMBER_OF_RUNS calc in device_hvmm.c
#define KD_DEBUGGER_BLOCK_PAGE_SIZE 0x500 //correlation with KDDEBUGGER_DATA64 struct size
#define ROUND_PAGE(x) ((x + PAGE_SIZE) & ~(PAGE_SIZE - 1))
#define MZ_HEADER 0x905A4D
#define MAX_FILE_SOURCE_DMP_PATH 0x50

typedef enum _GUEST_TYPE {
	MmUknown,
	MmStandard, // standard Windows with KDBG structure
	MmNonKdbgPartition, // for hvix memory area, and, probably, isloated securekernel, if needed
	MmHyperV // Special for hvix/hvax memory
} GUEST_TYPE;

typedef enum _MEMORY_ACCESS_TYPE {
	MmPhysicalMemory,
	MmVirtualMemory,
	MmAccessRtCore64,
} MEMORY_ACCESS_TYPE;

typedef enum _VTL_LEVEL {
	Vtl0 = 0,
	Vtl1 = 1,
	BadVtl = 2
} VTL_LEVEL, *PVTL_LEVEL;

typedef enum _MACHINE_TYPE {
	MACHINE_UNKNOWN = 0,
	MACHINE_X86 = 1,
	MACHINE_AMD64 = 2
} MACHINE_TYPE, *PMACHINE_TYPE;

typedef enum _HVMM_INFORMATION_CLASS {
	InfoKdbgData,					//0. Return pointer to PKDDEBUGGER_DATA64
	InfoPartitionFriendlyName,		//1. Return pointer to WCHAR Partition friendly name
	InfoPartitionId,				//2. Return pointer to ULONG64 PartitionId
	InfoVmtypeString,				//3. Return pointer to WCHAR VmTypeString
	InfoStructure,					//4. Return pointer to PHVMM_PARTITION
	InfoKiProcessorBlock,			//5. Return pointer to ULONG64 PHVMM_PARTITION-EXCALIBUR_DATA.KiProcessorBlock
	InfoMmMaximumPhysicalPage,		//6. Return pointer to ULONG64 PHVMM_PARTITION-EXCALIBUR_DATA.MmMaximumPhysicalPage
	InfoKPCR,						//7. Return pointer to array KiExcaliburData.KPCRVa. It contains array of KPCR for every logical processor
	InfoNumberOfCPU,				//8. Return PHVMM_PARTITION-EXCALIBUR_DATA.NumberProcessors
	InfoKDBGPa,						//9. Return PartitionEntry->KiExcaliburData.KdDebuggerDataBlockPa.QuadPart
	InfoNumberOfRuns,				//10. PartitionEntry->KiExcaliburData.KernelBase
	InfoKernelBase,
	InfoMmPfnDatabase,
	InfoPsLoadedModuleList,
	InfoPsActiveProcessHead,
	InfoNtBuildNumber,
	InfoNtBuildNumberVA,
	InfoDirectoryTableBase,
	InfoRun,
	InfoKdbgDataBlockArea,
	InfoVmGuidString,
	InfoPartitionHandle,
	InfoKdbgContext,
	InfoKdVersionBlock,
	InfoMmPhysicalMemoryBlock,
	InfoNumberOfPages,
	InfoIdleKernelStack,
	InfoSizeOfKdDebuggerData,
	InfoCpuContextVa,
	InfoSize,
	InfoMemoryBlockCount,
	InfoSuspendedCores,
	InfoSuspendedWorker,
	InfoIsContainer,
	InfoIsNeedVmwpSuspend,
	InfoGuestOsType,
	InfoSettingsCrashDumpEmulation,
	InfoSettingsUseDecypheredKdbg,
	InfoBuilLabBuffer,
	//Special set values
	InfoSetMemoryBlock,
	InfoEnlVmcsPointer
} HVMM_INFORMATION_CLASS;

typedef enum _VM_STATE_ACTION {
	SuspendVm,
	ResumeVm
} VM_STATE_ACTION;

typedef enum _SUSPEND_RESUME_METHOD {
	SuspendResumeUnsupported,
	SuspendResumePowershell,
	SuspendResumeWriteSpecRegister
} SUSPEND_RESUME_METHOD;

typedef enum _WRITE_MEMORY_METHOD {
	WriteInterfaceWinHv,                 //0
	WriteInterfaceHvmmDrvInternal,		 //1
	WriteInterfaceUnsupported			 //2
} WRITE_MEMORY_METHOD;

typedef enum _READ_MEMORY_METHOD {
	ReadInterfaceWinHv,                  //0
	ReadInterfaceHvmmDrvInternal,		 //1
	ReadInterfaceUnsupported			 //2
} READ_MEMORY_METHOD;


typedef struct _VM_OPERATIONS_CONFIG {
	READ_MEMORY_METHOD ReadMethod;
	WRITE_MEMORY_METHOD WriteMethod;
	SUSPEND_RESUME_METHOD SuspendMethod;
	ULONG64 LogLevel;
	BOOLEAN ForceFreezeCPU;
	BOOLEAN PausePartition;
	HANDLE ExdiConsoleHandle;
	BOOLEAN ReloadDriver;
	BOOLEAN PFInjection;
	BOOLEAN NestedScan;
	BOOLEAN UseDebugApiStopProcess;
	BOOLEAN SimpleMemory;
	BOOLEAN ReplaceDecypheredKDBG;
	BOOLEAN FullCrashDumpEmulation;
	BOOLEAN EnumGuestOsBuild;
} VM_OPERATIONS_CONFIG, * PVM_OPERATIONS_CONFIG;

//
// Read memory method for all operations. Must be defined in SdkGetPartitions call.
//


#ifdef __cplusplus
};
#endif

#endif //#ifndef __SDKPUBLIC_H__