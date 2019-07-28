#ifndef __SDKPUBLIC_H__
#define __SDKPUBLIC_H__

#ifdef __cplusplus
extern "C" {
#endif 

#define DLLEXPORT       __declspec(dllexport)

#include <windows.h>      
#include <stdio.h>
//#include <wdbgexts.h>
#include "ntdefs.h"
#include <tlhelp32.h> //EPROCESS defs
#include <stdlib.h> //intrinsic functions

#include "HyperV/vid.h"
#include "LiveCloudKdSdkMisc.h"
#include "LiveCloudKdSdkHandle.h"


//
//Read memory method for all operations. Must be defined in SdkGetPartitions call.
//

extern READ_MEMORY_METHOD g_MemoryReadInterfaceType;
extern WRITE_MEMORY_METHOD g_MemoryWriteInterfaceType;

//
// Resume or suspending VM (Action is SuspendVm or ResumeVm)
// ActionMethod is 	SuspendResumePowershell or SuspendResumeWriteSpecRegister
//

FUNCTION_TYPE
BOOLEAN
SdkControlVmState(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ VM_STATE_ACTION Action,
	_In_ SUSPEND_RESUME_METHOD ActionMethod
);

//
// Get architecture of guest VM (x86 or AMD64). Plugin support only AMD64 guest VMs
//
FUNCTION_TYPE
MACHINE_TYPE
SdkGetMachineType(
	_In_ PHVDD_PARTITION PartitionEntry
);

//
//Close and free all objects, when program is closing
//
FUNCTION_TYPE
BOOLEAN
SdkDestroyPartitions();


//
//Read KDBG and other useful information form guest Windows kernel and write it to HVDD_PARTITION structure. 
//Input is  PHVDD_PARTITION PartitionEntry with nonempty VidVmInfo field (it filled when SdkGetPartitions executed)
//
FUNCTION_TYPE
BOOLEAN
SdkFillHvddPartitionStructure(
	_Inout_ PHVDD_PARTITION PartitionEntry
);

//
//Enumerate active Hyper-V partitions.
//
FUNCTION_TYPE
PHVDD_PARTITION
SdkGetPartitions(
	_Inout_ PULONG PartitionTableCount,
	_In_ READ_MEMORY_METHOD Method,
	_In_ BOOLEAN LoadDriver
);

//
// Get friendly name of virtual machine partition object. For Full VM it equivalent for VM name. For WDAG and Windows Sandbox - 'Virtual machine'
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmGetPartitionFriendlyName(
	_Inout_ PHVDD_PARTITION PartitionEntry,
	_In_ HANDLE PartitionHandle
);

//
//Get physical address for specifying GVA
//

FUNCTION_TYPE
PHYSICAL_ADDRESS
SdkMmGetPhysicalAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va
);

//
//Read bytes from guest virtual address (Va) to (Buffer)
//

FUNCTION_TYPE
BOOLEAN
SdkMmReadVirtualAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va,
	_Out_ PVOID Buffer,
	_In_ ULONG Size //in bytes
);

//
//Write bytes to guest address space, sarting from (Va), data gets from (Buffer)
//		WriteInterfaceWinHv                  
//

FUNCTION_TYPE
BOOLEAN
SdkMmWriteVirtualAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va,
	_Out_ PVOID Buffer,
	_In_ ULONG Size
);

//
//Common function for reading physical memory. In dependency of Method read guest Hyper-V memory using different  variants
//		ReadInterfaceWinHv,                  
//		ReadInterfaceHvmmDrvInternal,		 
//		ReadInterfaceVidDll (only for testing purposes)	
//		ReadInterfaceVidAux
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmReadPhysicalMemory(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 ReadByteCount,
	_Inout_ PVOID ClientBuffer,
	_In_ READ_MEMORY_METHOD Method
);

//
//Common function for writing physical memory. In dependency of Method read guest Hyper-V memory using different variants
//		WriteInterfaceWinHv                  		  
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmWritePhysicalMemory(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 WrittenBytesCount,
	_In_ PVOID ClientBuffer,
	_In_ WRITE_MEMORY_METHOD Method
);

//
// Read guest OS registers. 
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmReadVpRegister(
	_In_ ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_REGISTER_NAME RegisterCode,
	_Inout_ PHV_REGISTER_VALUE RegisterValue
);

//
// Write guest OS registers.  
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmWriteVpRegister(
	_In_ ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_REGISTER_NAME RegisterCode,
	_In_ ULONG64 RegisterValue
);

//
// Translate guest virtual address (GVA) to guest physical address (GPA)
//

FUNCTION_TYPE
BOOLEAN 
SdkHvmmHvTranslateVA(
	_In_ ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_TRANSLATE_GVA_CONTROL_FLAGS ControlFlags,
	_In_ HV_GVA_PAGE_NUMBER GvaPage,
	_Inout_ PTRANSLATE_VA_RESULT TranslateResult
);

//
// Return GVA of guest OS KDBG structure and decyphered KDBG block to OutDbgBlock
//

FUNCTION_TYPE
ULONG64 
SdkKeFindDbgDataBlock(
    _Inout_ PHVDD_PARTITION PartitionEntry,
    _Inout_ PVOID OutDbgBlock
);

//
// Read guest OS memory using raw access
//

FUNCTION_TYPE
BOOLEAN SdkHvmmInternalReadMemory(
	_In_ HANDLE PartitionHandle,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 ReadByteCount,
	_Inout_ PVOID ClientBuffer
);

//
// Read guest OS memory using winhvr.sys interface
//

FUNCTION_TYPE
BOOLEAN SdkHvmmHvReadGPA(
    _In_ ULONG64 PartitionId,
    _In_ MB_PAGE_INDEX StartPosition, 
    _In_ UINT64 ReadByteCount,
    _Inout_ PVOID ClientBuffer
);

//
// Write guest OS memory using winhvr.sys interface
//

FUNCTION_TYPE
BOOLEAN SdkHvmmHvWriteGPA(
	_In_ ULONG64 PartitionId,
	_In_ MB_PAGE_INDEX StartPosition, 
	_In_ UINT64 WrittenBytesCount,
	_In_ PVOID ClientBuffer
);

//
// Get internal memory block info. Can be used for ReadInterfaceVidDll access method. For testing purposes only.
//

FUNCTION_TYPE
BOOLEAN SdkHvmmGetMemoryBlockInfoFromGPA(
    _Inout_ PGPAR_BLOCK_INFO pBlockIndexInfo
);

//
// Restore patch vid.sys driver. Can be used for ReadInterfaceVidDll access method. For testing purposes only.
//

FUNCTION_TYPE
BOOLEAN	SdkHvmmRestorePsGetCurrentProcess();

//
// Patch vid.sys driver. Can be used for ReadInterfaceVidDll access method. For testing purposes only.
//

FUNCTION_TYPE
BOOLEAN SdkHvmmPatchPsGetCurrentProcess(
	_In_ ULONG64 VmwpPid,  //Pid of vmwp.exe
	_In_ ULONG64 ParentProcessPid //PID of LiveCloudKd.exe (NULL) or other process: kd.exe, for instance
);


#ifdef __cplusplus
};
#endif

#endif //#ifndef __SDKPUBLIC_H__