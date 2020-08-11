#pragma once

#ifndef __SDKENUMP_H__
#define __SDKENUMP_H__

#ifdef __cplusplus
extern "C" {
#endif 

typedef enum _HVDD_INFORMATION_CLASS {
	HvddKdbgData,					//0. Return pointer to PKDDEBUGGER_DATA64
	HvddPartitionFrienldyName,		//1. Return pointer to WCHAR Partition friendly name
	HvddPartitionId,				//2. Return pointer to ULONG64 PartitionId
	HvddVmtypeString,				//3. Return pointer to WCHAR VmTypeString
	HvddStructure,					//4. Return pointer to PHVDD_PARTITION
	HvddKiProcessorBlock,			//5. Return pointer to ULONG64 PHVDD_PARTITION-EXCALIBUR_DATA.KiProcessorBlock
	HvddMmMaximumPhysicalPage		//6. Return pointer to ULONG64 PHVDD_PARTITION-EXCALIBUR_DATA.MmMaximumPhysicalPage
} HVDD_INFORMATION_CLASS;

typedef enum _VM_STATE_ACTION {
	SuspendVm,
	ResumeVm
} VM_STATE_ACTION;

typedef enum _SUSPEND_RESUME_METHOD {
	SuspendResumePowershell,
	SuspendResumeWriteSpecRegister
} SUSPEND_RESUME_METHOD;

typedef enum _WRITE_MEMORY_METHOD {
	WriteInterfaceWinHv,                 //0
	WriteInterfaceHvmmDrvInternal,		 //1
	WriteInterfaceVidDll,				 //2
	WriteInterfaceVidAux,				 //4
	WriteInterfaceUnsupported			 //5
} WRITE_MEMORY_METHOD;

typedef enum _READ_MEMORY_METHOD {
	ReadInterfaceWinHv,                  //0
	ReadInterfaceHvmmDrvInternal,		 //1
	ReadInterfaceVidDll,				 //2
	ReadInterfaceVidAux,				 //3
	ReadInterfaceUnsupported			 //4
} READ_MEMORY_METHOD;

#ifdef __cplusplus
};
#endif

#endif //#ifndef __SDKPUBLIC_H__