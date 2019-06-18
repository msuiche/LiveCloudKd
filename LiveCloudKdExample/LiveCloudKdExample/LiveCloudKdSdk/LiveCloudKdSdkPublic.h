#ifndef __SDKPUBLIC_H__
#define __SDKPUBLIC_H__

#ifdef __cplusplus
extern "C" {
#endif 

#define DLLEXPORT       __declspec(dllexport)

#ifdef LIVECLOUDKDSDK_EXPORTS
	#define FUNCTION_TYPE DLLEXPORT
#else
    #define FUNCTION_TYPE DECLSPEC_IMPORT
#endif

#include <windows.h>      
#include <stdio.h>
//#include <wdbgexts.h>
#include "ntdefs.h"
#include <tlhelp32.h> //EPROCESS defs
#include <stdlib.h> //intrinsic functions


#include "HyperV/vid.h"
#include "LiveCloudKdSdkMisc.h"


//
//Read memory method for all operations. Must be defined in SdkGetPartitions call.
//

extern READ_MEMORY_METHOD g_MemoryInterfaceType;

//
// Resume VM using powershell
//

FUNCTION_TYPE
BOOLEAN
SdkResumeVm(
	_In_ LPCWSTR pVmName
);

//
// Suspend VM using powershell
//

FUNCTION_TYPE
BOOLEAN
SdkSuspendVm(
	_In_ LPCWSTR pVmName
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
//Common function for reading memory. In dependency of Method read guest Hyper-V memory using different  variants
//		ReadInterfaceWinHv,                  
//		ReadInterfaceHvmmDrvInternal,		 
//		ReadInterfaceVidDll (only for testing purposes)				  
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmReadVmMemory(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 ReadByteCount,
	_Inout_ PVOID ClientBuffer,
	_In_ READ_MEMORY_METHOD Method
);

//
// Read register from guest OS. 
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmReadVpRegister(ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_REGISTER_NAME RegisterCode,
	_Inout_ PHV_REGISTER_VALUE RegisterValue
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
// Patch vid.sys driver. Can be used for ReadInterfaceVidDll access method. For testing purposes only.
//

FUNCTION_TYPE
BOOLEAN SdkHvmmPatchPsGetCurrentProcess(
    _In_ ULONG64 VmwpPid,  //Pid of vmwp.exe
    _In_ ULONG64 ParentProcessPid //PID of LiveCloudKd.exe (NULL) or other process: kd.exe, for instance
);

//
// Restore patch vid.sys driver. Can be used for ReadInterfaceVidDll access method. For testing purposes only.
//

FUNCTION_TYPE
BOOLEAN	SdkHvmmRestorePsGetCurrentProcess();

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
// Query internal information from vid.sys using hvmm.sys driver
//

FUNCTION_TYPE
BOOLEAN
SdkHvmmVidQueryInformation(
	_In_ PHVDD_PARTITION PartitionEntry,
    _In_ VID_INFORMATION_CLASS VidInformationClass,
    _Out_ PVOID VidInformation
);

#ifdef __cplusplus
};
#endif

#endif //#ifndef __SDKPUBLIC_H__