/*++

Copyright (c) Microsoft Corporation

Module Name:

    Vid.h

Abstract:

    Header file for the VID user-mode interface layer, Vid.dll.         

Author:

    John Gregg (jgregg) 08-Jun-2005

--*/

#pragma once

#if !defined(_VID_DLL_)
    #define VIDDLLAPI DECLSPEC_IMPORT
#else
    #define VIDDLLAPI 
#endif

#include "viddefs.h"

//
// The following is required in order to make sure the C++ compiler doesn't 
// mangle the functions exported from Vid.dll.
//
#ifdef __cplusplus
extern "C"
{
#endif

//
// This is a wrapper for the queue handle
// which contains the user mode VA of the
// client exchange buffer.
//
typedef struct _VID_QUEUE_HANDLE
{
    QUEUE_HANDLE   FileHandle;
    PVOID          ExchangeBufferContext;
    UINT32         ConcurrencyLevel;
} VID_QUEUE_HANDLE, *PVID_QUEUE_HANDLE;
    
static const VID_QUEUE_HANDLE INVALID_VID_QUEUE_HANDLE 
             = { INVALID_HANDLE_VALUE, NULL, 0 };

#define VID_QUEUE_HANDLE_IS_EQUAL(h1, h2) \
        (h1.FileHandle == h2.FileHandle)

typedef struct _VID_MESSAGE_SLOT_HANDLE
{
    PVID_MESSAGE_EXCHANGE_BUFFER ExchangeBuffer;
    VID_MESSAGE_SLOT_INDEX SlotIndex;
} VID_MESSAGE_SLOT_HANDLE, *PVID_MESSAGE_SLOT_HANDLE;

static const VID_MESSAGE_SLOT_HANDLE INVALID_VID_MESSAGE_SLOT_HANDLE 
            = { NULL, (VID_MESSAGE_SLOT_INDEX)-1 };

#ifndef _TEST_VID_

//
// Partition related API.
//
VIDDLLAPI
PT_HANDLE
WINAPI 
VidCreatePartition(
    __in_ecount(PartitionNameSizeInChars) WCHAR* PartitionName,
    __in UINT32 PartitionNameSizeInChars,
    __in UINT32 ProcessorCount,
    __in UINT64 NumaNodeMask
    );


VIDDLLAPI
PT_HANDLE
WINAPI 
VidCreatePartitionEx(
    __in_ecount(PartitionNameSizeInChars) WCHAR* PartitionName,
    __in UINT32 PartitionNameSizeInChars,
    __in UINT32 ProcessorCount,
    __in UINT64 MemoryEstimateInPages,
    __in UINT64 NumaNodeMask,
    __in UINT32 Flags,
    __out UINT64* AssignedNumaNodeMask
    );


VIDDLLAPI 
BOOL 
WINAPI
VidDeletePartition(
    __in PT_HANDLE Partition
    );


VIDDLLAPI 
BOOL 
WINAPI
VidTrimPartitionMemory(
    __in PT_HANDLE Partition
    );


//
// Virtual processor related API.
//
VIDDLLAPI
BOOL
WINAPI
VidAddVirtualProcessor(
    __in PT_HANDLE Partition,
    __out VID_PROCESSOR_INDEX* NewProcessorIndex
    );


VIDDLLAPI
BOOL
WINAPI
VidRemoveVirtualProcessor(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex
    );


VIDDLLAPI 
BOOL
WINAPI
VidStartVirtualProcessor(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex
    );


VIDDLLAPI 
BOOL
WINAPI
VidStopVirtualProcessor(
    __in     PT_HANDLE Partition,
    __in     VID_PROCESSOR_INDEX ProcessorIndex,
    __in_opt PVOID UserContext,
    __in     VID_QUEUE_HANDLE MessageQueue
    );


VIDDLLAPI 
BOOL
WINAPI
VidGetVirtualProcessorRunningStatus(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __out VID_PROCESSOR_STATUS* ProcessorStatus 
    );


VIDDLLAPI 
BOOL 
WINAPI
VidGetVirtualProcessorState(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_CODE* ProcessorStateCodeArray,
    __in UINT8 ProcessorStateCodeCount,
    __out_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_VALUE* ProcessorStateOutputArray            
    );


VIDDLLAPI 
BOOL 
WINAPI
VidSetVirtualProcessorState(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_CODE* ProcessorStateCodeArray,
    __in UINT8 ProcessorStateCodeCount,
    __in_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_VALUE* ProcessorStateInputArray
    );


VIDDLLAPI
BOOL
WINAPI
VidAssertVirtualProcessorInterrupt(
    __in PT_HANDLE Partition,
    __in HV_INTERRUPT_CONTROL InterruptControl,
    __in UINT64 DestinationAddress,
    __in HV_INTERRUPT_VECTOR InterruptVector,
    __in UINT32 Flags
    );


VIDDLLAPI 
BOOL
WINAPI
VidClearVirtualProcessorInterrupt(
    __in PT_HANDLE Partition
    );

VIDDLLAPI
BOOL
WINAPI
VidRegisterCpuidHandler(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in VID_QUEUE_HANDLE MessageQueue,
    __in UINT32 CpuidFunction,
    __in PVOID UserContext,
    __out HANDLER_REF * HandlerRef
    );

VIDDLLAPI
BOOL
WINAPI
VidRegisterLegacyFpErrorHandler(
    __in PT_HANDLE Partition,
    __in VID_QUEUE_HANDLE MessageQueue,
    __in UINT32 Flags,
    __in PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );

//
// Client notifications related API.
//
VIDDLLAPI
VID_QUEUE_HANDLE
WINAPI
VidCreateMessageQueueEx(
    __in PT_HANDLE PartitionHandle,
    __in_ecount(QueueNameSizeInChars) 
         WCHAR* QueueName,
    __in UINT32 QueueNameSizeInChars,
    __in UINT32 Flags,
    __in UINT32 ConcurrencyLevel,
    __in VID_QUEUE_HANDLE QueueGroup
    );

VIDDLLAPI
VID_QUEUE_HANDLE
WINAPI
VidCreateMessageQueue(
    __in PT_HANDLE PartitionHandle,
    __in_ecount(QueueNameSizeInChars) 
         WCHAR* QueueName,
    __in UINT32 QueueNameSizeInChars,
    __in UINT32 Flags
    );

VIDDLLAPI 
BOOL
WINAPI
VidDeleteMessageQueue(
    __in VID_QUEUE_HANDLE MessageQueue
    );


VIDDLLAPI 
BOOL
WINAPI
VidRegisterIoPortHandler(
    __in  PT_HANDLE Partition,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  VID_IO_PORT_ADDRESS PortRangeBegin,
    __in  VID_IO_PORT_ADDRESS PortRangeEnd,
    __in  UINT32 Flags,
    __in  PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );


VIDDLLAPI 
BOOL
WINAPI
VidRegisterMsrHandler(
    __in  PT_HANDLE Partition,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );


VIDDLLAPI 
BOOL
WINAPI
VidRegisterExceptionHandler(
    __in  PT_HANDLE Partition,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  UINT8 ExceptionVector,
    __in  UINT32 Flags,
    __in  PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );


VIDDLLAPI
BOOL
WINAPI
VidRegisterTripleFaultHandler(
    __in  PT_HANDLE Partition,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  UINT32 Flags,
    __in  PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );


VIDDLLAPI
BOOL
WINAPI
VidRegisterApicEoiHandler(
    __in  PT_HANDLE Partition,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  UINT32 Flags,
    __in  PVOID UserContext,
    __out HANDLER_REF* HandlerRef
    );


VIDDLLAPI
BOOL
WINAPI
VidUnregisterHandler(
    __in PT_HANDLE Partition,
    __in HANDLER_REF HandlerRef
    );


VIDDLLAPI
BOOL
WINAPI
VidHandleMessageAndGetNextMessage(
    __in      VID_QUEUE_HANDLE MessageQueue,
    __in      UINT32 Flags,
    __in      PVID_MSG_RETURN_DATA MessageReturnData,
    __out     PVID_MSG_DATA MessageData,
    __in_opt  LPOVERLAPPED Overlapped
    );

VIDDLLAPI
BOOL
WINAPI
VidHandleMessageAndGetNextMessageEx(
    __in      VID_QUEUE_HANDLE MessageQueue,
    __in      UINT32 Flags,
    __inout  VID_MSG_RETURN_DATA** MessageReturnData,
    __out_opt VID_MSG_DATA** MessageData,
    __in      UINT32 Timeout
    );

VIDDLLAPI
BOOL
WINAPI
VidMessageSlotHandleAndGetNext(
    __in PT_HANDLE PartitionHandle,
    __in VID_MESSAGE_SLOT_INDEX MessageSlotIndex,
    __in UINT32 Flags,
    __in UINT32 Timeout
    );

VIDDLLAPI
BOOL
WINAPI
VidMessageSlotMap(
    __in PT_HANDLE PartitionHandle,
    __out PVID_MESSAGE_SLOT_HANDLE MessageSlotHandle,
    __in VID_MESSAGE_SLOT_INDEX MessageSlotIndex
    );

//
// Save and Restore API.
//
VIDDLLAPI
BOOL
WINAPI
VidSavePartitionState(
    __in PT_HANDLE  Partition,
    __in UINT32     Flags,
    __out_bcount(*SavedStateBlobSize) 
         PVID_SAVED_STATE_DESCRIPTOR SavedStateBlob,
    __inout UINT32* SavedStateBlobSize
);

VIDDLLAPI
BOOL
WINAPI
VidRestorePartitionState(
    __in PT_HANDLE Partition,
    __in UINT32 Flags,
    __in_bcount(SavedStateBlobSize) 
         PVID_SAVED_STATE_DESCRIPTOR SavedStateBlob,
    __in UINT32 SavedStateBlobSize
);

//
// Scheduling APIs
//
VIDDLLAPI
BOOL
WINAPI
VidSetCpuReserve(
    __in PT_HANDLE Partition,
    __in UINT32 CpuReserve
);

VIDDLLAPI
BOOL
WINAPI
VidSetCpuCap(
    __in PT_HANDLE Partition,
    __in UINT32 CpuCap
);

VIDDLLAPI
BOOL
WINAPI
VidSetRelativeWeight(
    __in PT_HANDLE Partition,
    __in UINT32 Weight
    );
    
//
// Partition Property APIs
//
VIDDLLAPI
BOOL
WINAPI
VidGetPartitionProperty(
    __in PT_HANDLE Partition,
    __in UINT64 PropertyCode,
    __out UINT64* PropertyValue
    );

VIDDLLAPI
BOOL
WINAPI
VidSetPartitionProperty(
    __in PT_HANDLE Partition,
    __in UINT64 PropertyCode,
    __in UINT64 PropertyValue
    );

//VIDDLLAPI // was removed in Win 10 1709 and above
//BOOL
//WINAPI
//VidGetPartitionFriendlyName(
//    __in PT_HANDLE PartitionHandle,
//    __out_ecount(FriendlyNameLengthInChars) WCHAR* FriendlyName,
//    __in UINT32 FriendlyNameLengthInChars
//    );

VIDDLLAPI
BOOL
WINAPI
VidSetPartitionFriendlyName(
    __in PT_HANDLE PartitionHandle,
    __in_ecount(FriendlyNameLengthInChars) const WCHAR* FriendlyName,
    __in UINT32 FriendlyNameLengthInChars
    );

//
// Timer APIs
//
VIDDLLAPI
BOOL
WINAPI
VidCreateTimer(
    __in PT_HANDLE Partition,
    __in VID_QUEUE_HANDLE QueueHandle,
    __in PVOID UserContext,
    __out TIMER_REF * TimerRef
    );
    
VIDDLLAPI
BOOL
WINAPI
VidGetCurrentReferenceTime(
    __in PT_HANDLE Partition,
    __out HV_NANO100_TIME * CurrentTime
    );

VIDDLLAPI
BOOL
WINAPI
VidSetAbsoluteTimer(
    __in PT_HANDLE Partition,
    __in TIMER_REF TimerRef,
    __in HV_NANO100_TIME SignalTime
    );

VIDDLLAPI
BOOL
WINAPI
VidCancelTimer(
    __in PT_HANDLE Partition,
    __in TIMER_REF TimerRef
    );

VIDDLLAPI
BOOL
WINAPI
VidDeleteTimer(
    __in PT_HANDLE Partition,
    __in TIMER_REF TimerRef
    );
        

//
// Debugging related API.
//
VIDDLLAPI
BOOL
WINAPI
VidSingleStepVirtualProcessor(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in VID_QUEUE_HANDLE MessageQueue
    );


VIDDLLAPI
BOOL
WINAPI
VidRegisterSoftwareBreakpoint(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in UINT64 BreakpointAddress,
    __in UINT32 Flags,
    __in PVOID UserContext,
    __in VID_QUEUE_HANDLE MessageQueue
    );


VIDDLLAPI 
BOOL
WINAPI
VidUnregisterSoftwareBreakpoint(
    __in PT_HANDLE Partition,
    __in VID_PROCESSOR_INDEX ProcessorIndex,
    __in UINT64 BreakpointAddress
    );


VIDDLLAPI
BOOL
WINAPI
VidGetHvPartitionId(
    __in PT_HANDLE Partition,
    __out PHV_PARTITION_ID PartitionId
    );

//
// Performance statistics-related API.
//
// FUTURE-jgregg-1/24/2006: Some of these
// currently call the HV directly; they should 
// be updated to tie into the perflib providers.
//
VIDDLLAPI
HANDLE
WINAPI
VidOpenStatisticsHandle();

VIDDLLAPI
BOOL
WINAPI
VidCloseStatisticsHandle(
    __in HANDLE StatsHandle
    );

VIDDLLAPI
BOOL
WINAPI
VidGetVidStatistics(
    __in HANDLE StatsHandle,
    __inout PUINT32 BufferSize,
    __out_bcount(*BufferSize) PUINT64 StatsBuffer
    );

VIDDLLAPI
BOOL
WINAPI
VidGetPartitionStatistics(
    __in PT_HANDLE PartitionHandle,
    __inout PUINT32 BufferSize,
    __out_bcount(*BufferSize) PUINT64 StatsBuffer
    );

VIDDLLAPI
BOOL
WINAPI
VidGetQueueStatistics(
    __in VID_QUEUE_HANDLE QueueHandle,
    __inout PUINT32 BufferSize,
    __out_bcount(*BufferSize) PUINT64 StatsBuffer
    );

VIDDLLAPI
BOOL
WINAPI
VidGetNumaNodeStatistics(
    __in HANDLE StatsHandle,
    __in UINT32 NodeIndex,
    __inout PUINT32 BufferSize,
    __out_bcount(*BufferSize) PUINT64 StatsBuffer
    );

VIDDLLAPI
BOOL
WINAPI
VidGetPartitionIds(
    __in HANDLE StatsHandle,
    __out PHV_PARTITION_ID ParentPartitionId,
    __inout UINT32* Count,
    __out_opt PHV_PARTITION_ID ChildPartitionIds,
    __inout UINT32* NameBufferSize,
    __out_ecount_opt(*NameBufferSize) PWSTR NameBuffer
    );

VIDDLLAPI
BOOL
WINAPI
VidGetHvVpRuntime(
    __in HANDLE StatsHandle,
    __in HV_PARTITION_ID PartitionId,
    __in VID_PROCESSOR_INDEX VpIndex,
    __out UINT64 * HvRunTime
    );

VIDDLLAPI
BOOL
WINAPI
VidGetHvRuntimeForAllLps(
    __in HANDLE StatsHandle,
    __out UINT32* LpCount,
    __out UINT64* LpMask,
    __out_bcount(LpRuntimesSizeInBytes) UINT64* LpRuntimes,
    __in UINT32 LpRuntimesSizeInBytes
    );

VIDDLLAPI
BOOL
WINAPI
VidGetHvRuntimeForAllVps(
    __in HANDLE StatsHandle,
    __in HV_PARTITION_ID PartitionId,
    __out UINT32* VpCount,
    __out_bcount(VpRuntimesSizeInBytes) UINT64* VpRuntimes,
    __in UINT32 VpRuntimesSizeInBytes
    );

VIDDLLAPI
BOOL
WINAPI
VidGetHvLogicalProcessorRuntime(
    __in HANDLE StatsHandle,
    __in UINT32 LogicalProcessorIndex,
    __out UINT64* HvRuntime,
    __out UINT64* HvHypervisorTime,
    __out UINT64* HvGlobalTime
    );

VIDDLLAPI
BOOL
WINAPI
VidGetHvMemoryBalance(
    __in PT_HANDLE PartitionHandle,
    __out UINT64 * PagesAvailable,
    __out UINT64 * PagesInUse
    );

VIDDLLAPI
BOOL
WINAPI
VidMapHvGlobalStatsPage(
    __in HANDLE StatsHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex,
    __out PVOID * UserMapping
    );

VIDDLLAPI
BOOL
WINAPI
VidUnmapHvGlobalStatsPage(
    __in HANDLE StatsHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex
    );

VIDDLLAPI
BOOL
WINAPI
VidMapHvRootStatsPage(
    __in HANDLE StatsHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex,
    __out PVOID * UserMapping
    );

VIDDLLAPI
BOOL
WINAPI
VidUnmapHvRootStatsPage(
    __in HANDLE StatsHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex
    );

VIDDLLAPI
BOOL
WINAPI
VidMapHvLocalStatsPage(
    __in PT_HANDLE PartitionHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex,
    __out PVOID * UserMapping
    );

VIDDLLAPI
BOOL
WINAPI
VidUnmapHvLocalStatsPage(
    __in PT_HANDLE PartitionHandle,
    __in BOOLEAN UseIndex,
    __in UINT32 Index,
    __in UINT8 ReservedIndex
    );

//
// Partition HV Memory pool policy API.
//
VIDDLLAPI
BOOL
WINAPI
VidSetHvMemoryPolicy(
    __in PT_HANDLE PartitionHandle,
    __in UINT64 DepositBlockSizeKb,
    __in UINT64 SptPoolSize
    );

//
// Partition memory management related API.
//
VIDDLLAPI 
BOOL
WINAPI
VidCreateMemoryBlock(
    __in  PT_HANDLE Partition,
    __in  UINT64 PageCountTotal,
    __in  UINT64 PageCountValid,
    __in_ecount(PagingFileNameSizeInChars) 
         WCHAR* PagingFileName,
    __in  UINT32 PagingFileNameSizeInChars,
    __in  PSID PagingFileAccessSid,
    __in  UINT64 Flags,    
    __in_bcount(BackingBitmapBufferSizeInBytes)
        PULONG BackingPresenceBitmap,
    __in  ULONG BackingBitmapBufferSizeInBytes,
    __out UINT64* SystemAvailablePages,
    __out MB_HANDLE* NewMemoryBlock
    );


VIDDLLAPI
BOOL
WINAPI
VidDestroyMemoryBlock(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock
    );


VIDDLLAPI
BOOL
WINAPI
VidSetMemoryBlockMinWorkingSet(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in UINT64 MinWorkingSetSize,
    __in_ecount(PagingFileNameSizeInChars) 
         WCHAR* PagingFileName,
    __in  UINT32 PagingFileNameSizeInChars,
    __in  PSID PagingFileAccessSid
    );


VIDDLLAPI
BOOL
WINAPI
VidSetMemoryBlockProperty(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in UINT64 Property,
    __in BOOL SetProperty
    );


VIDDLLAPI
BOOL
WINAPI
VidQueryMemoryBlockMbpCount(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __out UINT64* PageCountTotal,
    __out UINT64* PageCountValid
    );


VIDDLLAPI
BOOL
WINAPI
VidScanMemoryBlockForSharedPages(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock
    );


VIDDLLAPI
BOOL
WINAPI
VidProtectMemoryBlockPages(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock
    );


VIDDLLAPI
BOOL
WINAPI
VidUnprotectMemoryBlockPages(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock
    );


VIDDLLAPI
BOOL
WINAPI
VidCreateMemoryBlockGpaRange(
    __in  PT_HANDLE Partition,
    __in  MB_HANDLE MemoryBlock,
    __in  GUEST_PHYSICAL_PAGE_INDEX StartPage,
    __in  UINT64 RangePageCount,
    __in  MB_PAGE_INDEX StartMbp,
    __in  UINT64 Flags,
    __out RG_HANDLE* NewGpaRange
    );


VIDDLLAPI
BOOL
WINAPI
VidCreateMmioGpaRange(
    __in  PT_HANDLE Partition,
    __in  GUEST_PHYSICAL_PAGE_INDEX StartPage,
    __in  UINT64 RangePageCount,
    __in  VID_QUEUE_HANDLE MessageQueue,
    __in  PVOID ClientContext,
    __out RG_HANDLE* NewGpaRange
    );


VIDDLLAPI 
BOOL
WINAPI
VidDestroyGpaRange(
    __in PT_HANDLE Partition,
    __in RG_HANDLE GpaRange
    );


VIDDLLAPI 
BOOL
WINAPI
VidSetMemoryBlockNotificationQueue(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in VID_QUEUE_HANDLE MessageQueue,
    __in PVOID ClientContext
    );


VIDDLLAPI 
BOOL
WINAPI
VidSetMemoryBlockClientNotifications(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in MB_PAGE_INDEX StartMbp,
    __in UINT64 MbpCount,
    __in UINT32 NotificationMask
    );


VIDDLLAPI 
BOOL
WINAPI
VidMapMemoryBlockPageRange(
    __in  PT_HANDLE Partition,
    __in  MB_HANDLE MemoryBlock,
    __in  MB_PAGE_INDEX StartMbp,
    __in  UINT64 MbpCount,
    __in  VID_ACCESS_TYPE DesiredAccess,
    __in  UINT32 Flags,    
    __out VOID** UserMappingAddress
    );


VIDDLLAPI 
BOOL
WINAPI
VidUnmapMemoryBlockPageRangeBulk(
    __in PT_HANDLE Partition,
    __in_ecount(UserMappingAddressCount) PVOID* UserMappingAddressList,
    __in UINT32 UserMappingAddressCount
    );


VIDDLLAPI 
BOOL
WINAPI
VidReadMemoryBlockPageRange(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in MB_PAGE_INDEX StartMbp,
    __in UINT64 MbpCount,
    __out_bcount(BufferSize) 
         PVOID ClientBuffer,
    __in UINT64 BufferSize
    );


VIDDLLAPI 
BOOL
WINAPI
VidWriteMemoryBlockPageRange(
    __in PT_HANDLE Partition,
    __in MB_HANDLE MemoryBlock,
    __in MB_PAGE_INDEX StartMbp,
    __in UINT64 MbpCount,
    __in_bcount(BufferSize) 
         PVOID ClientBuffer,
    __in UINT64 BufferSize
    );

VIDDLLAPI
BOOL
WINAPI
VidTranslateGvaToGpa(
    __in PT_HANDLE Partition,
    __in HV_VP_INDEX VpIndex,
    __in HV_TRANSLATE_GVA_CONTROL_FLAGS ControlFlags,
    __in HV_GVA_PAGE_NUMBER GvaPage,
    __out PHV_TRANSLATE_GVA_RESULT TranslationResult,
    __out PHV_GPA_PAGE_NUMBER GpaPage,
    __out PVOID* MmioContext,
    __out PVOID* MemoryBlockContext,
    __out UINT64* MemoryBlockPageIndex,
    __out UINT64* MemoryBlockGpaRangeFlags
    );

//
// These interfaces are used as hooks for testing.
// They should not be in the retail product.
//

#ifdef DBG
VIDDLLAPI
BOOL
WINAPI
VidDebugHandleIntercept(
    __in PT_HANDLE Partition,
    __in_bcount(MessageSize) PVOID HvInterceptMessage,
    __in UINT32 MessageSize,
    __out PVID_MSG_DATA OutgoingMessageData
    );

VIDDLLAPI
BOOL
WINAPI
VidDebugFlushQueue(
    __in VID_QUEUE_HANDLE Queue
    );

#endif // DBG

#endif // _TEST_VID_

#ifdef __cplusplus
}
#endif
