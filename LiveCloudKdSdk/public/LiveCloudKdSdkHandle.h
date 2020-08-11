#pragma once

#ifndef __SDKHANDLE_H__
#define __SDKHANDLE_H__

#ifdef __cplusplus
extern "C" {
#endif 

#ifdef LIVECLOUDKDSDK_EXPORTS
#define FUNCTION_TYPE DLLEXPORT
#else
#define FUNCTION_TYPE DECLSPEC_IMPORT
#endif

#include "LiveCloudKdSdkEnumPublic.h"
#include <windows.h>    

//
//Next functions are wrappers for non-C languages
//

//
//Enumerate active Hyper-V partitions, table of handle is returned
//

FUNCTION_TYPE PULONG64 SdkGetPartitionsHandle(_Inout_ PULONG PartitionTableCount, _In_ READ_MEMORY_METHOD Method, _In_ BOOLEAN LoadDriver);

//
//Get information form Partition object, using handle
//

FUNCTION_TYPE BOOLEAN SdkQueryInformation(
	_In_ ULONG64 PartitionIntHandle,
	_In_ HVDD_INFORMATION_CLASS HvddInformationClass,
	_Inout_ PVOID HvddInformation
);

//
//Handle wrappers for known function
//

FUNCTION_TYPE BOOLEAN SdkFillHvddPartitionStructureHandle(_In_ ULONG64 PartitionIntHandle);
FUNCTION_TYPE BOOLEAN SdkHvmmReadPhysicalMemoryHandle(_In_ ULONG64 PartitionIntHandle, _In_ UINT64 StartPosition, _In_ UINT64 ReadByteCount, _Inout_ PVOID ClientBuffer, _In_ READ_MEMORY_METHOD Method);
FUNCTION_TYPE BOOLEAN SdkMmReadVirtualAddressHandle(_In_ ULONG64 PartitionIntHandle, _In_ ULONG64 Va, _Out_ PVOID Buffer, _In_ ULONG Size);
FUNCTION_TYPE BOOLEAN SdkControlVmStateHandle(_In_ ULONG64 PartitionIntHandle, _In_ VM_STATE_ACTION Action, _In_ SUSPEND_RESUME_METHOD ActionMethod);

#ifdef __cplusplus
};
#endif

#endif //#ifndef __SDKPUBLIC_H__