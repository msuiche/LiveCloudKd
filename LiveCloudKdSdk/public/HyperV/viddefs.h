/*++

Copyright (c) Microsoft Corporation

Module Name:

    VidDefs.h

Abstract:

    This module contains the common definitions for Vid.sys shared by 
    the driver, user mode Vid clients and kernel mode Vid clients.

Author:

    John Gregg (jgregg) 06-Jun-2005

--*/

#pragma once

#include "hvgdk.h"

//
// SPT growth unit (128 pages at a time).
//
#define VID_SPT_DEPOSIT_SIZE_KB                 (128 * 4)

//
// Define an interface Guid for the VID device class.
//
// This Guid is used to register an instance so the the VID node is 
// by VID (both user mode and kernel mode) clients.
//
// {7896e901-fe60-446e-828d-d65920654a23}
//
DEFINE_GUID(GUID_DEVICEINTERFACE_VID,
                  0x7896e901, 0xfe60, 0x446e, 0x82, 0x8d, 
                  0xd6, 0x59, 0x20, 0x65, 0x4a, 0x23);


//
// The maximum size, in characters, of a Vid object name (Partition or Message 
// Queue).
//
#define VID_MAX_OBJECT_NAME_CHAR_COUNT 256

//
// The maximum number of threads which can be concurrently handling
// messages on one queue.
//
// The max concurrency is limited by the 32-bit bitmasks used in the dispatch
// interface to manage the exchange buffer (less one for a blocking flag).
//
#define VID_QUEUE_MAX_CONCURRENCY \
    (31)

//
// The maximum number of virtual processors supported on a Partition.
//
// Note: The hypervisor allows 64 VPs per partition (HV_MAX_VP_INDEX + 1) and
// the VID's VP related APIs enforce this limit; however, the VID's internal
// implementation only allows 31 VPs (VID_QUEUE_MAX_CONCURRENCY; the limitation
// is in the message slot and message queue / dispatch interface code).
//
// Note:  The current POR for max VP support in V1 is between 4 and 8 VPs per
// partition.  Current POR for Windows 7/8 is to support 64 LPs, but will
// likely still only call for at most 4, 8, or 16 VPs per partition.
//
// Eventually, need to refactor the VID to handle more VPs (up to 32 or 64).
// For the short term, arrays of LPs/VPs exposed in public APIs / IOCTLs should
// be sized to allow at least 64, but internal VID structures and VP related
// API parameter checking should enforce the actual VID limitation (31).  This
// may lead to some confusion as the stats APIs accept arrays sized for
// VID_MAX_PROCESSORS_PER_PARTITION elements.
//
#define VID_MAX_PROCESSORS_PER_PARTITION    ((VID_PROCESSOR_INDEX)(HV_MAX_VP_INDEX + 1))

#define VID_VP_COUNT_MAX_INTERNAL           (VID_QUEUE_MAX_CONCURRENCY)

// 
//
// A partition handle and a queue handle are handles to a file object 
// returned from the Win32 function CreateFile).
//
typedef HANDLE PT_HANDLE;
typedef HANDLE QUEUE_HANDLE;
typedef UINT32 VID_PHYSICAL_NODE_INDEX, *PVID_PHYSICAL_NODE_INDEX;
typedef UINT32 VID_LOGICAL_PROCESSOR_INDEX, *PVID_LOGICAL_PROCESSOR_INDEX;


#define VID_PAGE_SIZE 4096

//
// The following are internal VID handles that don't correspond to Win32 file 
// handles.
//
typedef UINT64 HANDLER_REF;
typedef PVOID TIMER_REF;
typedef PVOID MB_HANDLE;
typedef PVOID RG_HANDLE;


#define INVALID_HANDLER_REF (HANDLER_REF)(-1)
#define INVALID_TIMER_REF (TIMER_REF)(-1)
#define INVALID_MB_HANDLE (MB_HANDLE)(-1)
#define INVALID_RG_HANDLE (RG_HANDLE)(-1)

//
// VID public types and enumerations.
//
typedef UINT16  VID_IO_PORT_ADDRESS;
typedef UINT32  VID_MSR_ADDRESS;
typedef UINT32  VID_PROCESSOR_INDEX;
typedef UINT32  VID_MESSAGE_SLOT_INDEX;

//
// FUTURE-kbroas-2007/10/23:  This should probably be defined as: ((UINT32)-1).
//
// However, the handler code relies on this specific value being packed into
// the 64-bit handler ref (along with other fields and bit flags, etc.).
// Should eventually convert this to a ((UINT32)-1) and update the handler ref
// code to handle the conversion when accessing handler refs.
//
#define VID_ALL_PROCESSORS 0xFFFF

typedef enum _VID_PROCESSOR_STATUS
{
    VidProcessorStatusStopped = 0x0,
    VidProcessorStatusRunning,
    VidProcessorStatusSuspended,

    VidProcessorStatusUndefined = 0xFFFF
} VID_PROCESSOR_STATUS;

//
// Types used to get and set Vp state.  These types
// currently map 1-to-1 with hypervisor registers, but allow
// the possibility of future VID state.
//
typedef HV_REGISTER_NAME VID_VP_STATE_CODE, *PVID_VP_STATE_CODE;
typedef HV_REGISTER_VALUE VID_VP_STATE_VALUE, *PVID_VP_STATE_VALUE;

//
// VID_VP_STATE_COUNT_XXX
//
// Virtual processor state name/value (register) counts.
//
// _BATCH   - The number of VP states that can be processed (sent to WinHv)
//      using a local capture buffer in a single batch.  This value should be
//      small enough to allow arrays of state codes (4 bytes) and values (16
//      bytes) to fit easily on the stack.  So, ((BATCH * (4)) + (BATCH * 16))
//      should probably be less than 1 KB, yet large enough to accommodate
//      requests made by performance sensitive code (e.g. the emulator) with
//      the fewest number of WinHv-Hv calls.
//
// _MAX     - The max number of VP register states that can be processed in a
//      single IOCTL request -- enforces a sane limit on memory probes,
//      prevents a possible infinite loop, etc.  Note that these state counts
//      are stored in UINT8 values -- (max of 255).
//
#define VID_VP_STATE_COUNT_BATCH        (32)
#define VID_VP_STATE_COUNT_MAX          (128)

//
// Flags used by VidSetupPartition
//
//  ..._ENABLE_DEBUGGING - Enable Viridian Unified Debugging (VUD) (see
//      hypervisor TLFS).
//
//  ..._NUMA_NODES_REQUIRED - NUMA node specification is required (if
//      specified) and node spanning is not allowed.
//
#define VID_PARTITION_PROPERTY_FLAG_ENABLE_DEBUGGING        (1 << 0)
#define VID_PARTITION_PROPERTY_FLAG_NUMA_NODES_REQUIRED     (1 << 1)

//
// Flags used by VidCreateMessageQueue
//
#define VID_QUEUE_ORDER_NOT_ENFORCED  (1 << 0)

//
// Flags used by VidHandleAndGetNextMessage()
//
#define VID_GET_NEXT_MESSAGE          (1 << 0)
#define VID_HANDLE_MESSAGE            (1 << 1)

//
// Flags used by VidRegisterXxxHandler()
//
#define VID_HANDLER_READ              (1 << 0)
#define VID_HANDLER_WRITE             (1 << 1)
#define VID_HANDLER_IO_PORT_8BIT      (1 << 2)
#define VID_HANDLER_IO_PORT_16BIT     (1 << 3)
#define VID_HANDLER_IO_PORT_32BIT     (1 << 4)
#define VID_HANDLER_CATCH_ALL         (1 << 5)

//
// Flags used by VSMM_PARENT_PARTITION_MAPPING structure
//
// VID_PPM_FLAG_BIG_APERTURE indicates the mapping is a part of the big aperture.
// It is ok to map pages in a big aperture despite the underlying memory block 
// being protected; however, Read/Write the protected memory block range is still
// disallowed. There is no notification sent to user mode on big aperture creation.
//
#define VID_PPM_FLAG_BIG_APERTURE     (1 << 0)

//
// VSMM related public definitions.
//
typedef UINT64 MB_PAGE_INDEX;
typedef UINT64 GUEST_PHYSICAL_PAGE_INDEX;
typedef UINT64 GUEST_PHYSICAL_ADDRESS;

typedef enum _VID_ACCESS_TYPE
{
    VidAccessInvalid = 0x00,
    VidAccessReadOnly,
    VidAccessReadWrite
} VID_ACCESS_TYPE;

#define VID_INVALID_NUMA_NODE_MASK 0UI64

//
// This structure describes a sequence of pages for bulk
// locking and unlocking.
//
typedef struct _VID_BULK_LOCK_RANGE
{
    UINT32      ByteCount;
    UINT32      ByteOffset;
    UINT64      PfnArray[1];
} VID_BULK_LOCK_RANGE, *PVID_BULK_LOCK_RANGE;

//
// Flags values used in VidCreateMemoryBlockGpaRange().
// 
#define VID_ROM_GPA_PAGE_RANGE                  0x0000000000000001
#define VID_MEMORY_BLOCK_PRIMARY_GPA_PAGE_RANGE 0x0000000000000002


//
// Value used to limit the number of PPMs which can be destroyed in a
// single VID call.
// 
#define VID_MAX_PPM_DESTROY_COUNT 256

//
// Flags values used in VidSetMemoryBlockClientNotifications().
// 
#define VID_MB_READ_NOTIFY              0x00000001
#define VID_MB_WRITE_NOTIFY             0x00000002

#define VID_APPLY_READ_SETTINGS         0x00010000
#define VID_APPLY_WRITE_SETTINGS        0x00020000

//
// Defines used to indicate MBP backing state. These can be used by user-mode
// and kernel mode components.
//

#define VID_MBP_UNBACKED                FALSE
#define VID_MBP_BACKED                  TRUE

#define VID_MBP_UNBACKED_NO_ACCESS      FALSE
#define VID_MBP_UNBACKED_ALLOW_ACCESS   TRUE

//
// Flags values used in VidCreateMemoryBlock. These flags can be set explicitly
// by the client when VidCreateMemoryBlock is invoked or implicitly by the
// VSMM.
//
#define VID_FLAG_ALLOW_NOTIFICATIONS_ON_LOCKED_MBPS             ((UINT64)0x1)

//
// Structures and definitions used by the Vid clients for handling / receiving 
// messages from the driver.
//
typedef UINT64 VID_MESSAGE_ID;
typedef LONG VID_MSG_STATUS_CODE;


#define EXCEPTION_INSTRUCTION_SIZE 16


//
// The largest batch read/write INS or OUTS that will
// be sent with a single message.  Larger guest operations
// will be sent using multiple messages.
//
#define VID_MAX_IO_STRING (4096)


//
// VID_MESSAGE_TYPE_MASK
//

#define     VID_MESSAGE_TYPE_MASK               0x00FFFFFFUL
#define     VID_MESSAGE_TYPE_FLAG_NO_RETURN     0x01000000UL
#define     VID_MESSAGE_TYPE_FLAG_INTERCEPT     0x02000000UL

//
// VID_MESSAGE_TYPE identifies a message embedded within the VID_MSG_DATA 
// structure.
//
// Note:  This must be kep in sync with the VID message type information array.
//
typedef enum _VID_MESSAGE_TYPE
{
    VidMessageInvalid               = 0x0000,

    //
    // Message types corresponding to hypervisor intercepts.
    //
    VidMessageCpuid                 = 0x0001 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageMmio                  = 0x0002 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageMbpAccess             = 0x0003,
    VidMessageMsr                   = 0x0004 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageIoPort                = 0x0005 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageException             = 0x0006 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageTripleFault           = 0x0007 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageApicEoi               = 0x0008 | VID_MESSAGE_TYPE_FLAG_INTERCEPT,
    VidMessageTimerExpired          = 0x0009,
    VidMessageLegacyFpError         = 0x000A | VID_MESSAGE_TYPE_FLAG_INTERCEPT,

    //
    // Message types corresponding to other monitored events.  These do not
    // require a return message.
    //
    VidMessageHandlerUnregistered   = 0x000B | VID_MESSAGE_TYPE_FLAG_NO_RETURN,
    VidMessageStopRequestComplete   = 0x000C | VID_MESSAGE_TYPE_FLAG_NO_RETURN,
    VidMessageMmioRangeDestroyed    = 0x000D | VID_MESSAGE_TYPE_FLAG_NO_RETURN,
    VidMessageMbCreate              = 0x000E,
    VidMessageMbDelete              = 0x000F | VID_MESSAGE_TYPE_FLAG_NO_RETURN,
    VidMessageApertureCacheFlush    = 0x0010 | VID_MESSAGE_TYPE_FLAG_NO_RETURN,

    // Must be last
    VidMessageTypeCount             = 0x0011

} VID_MESSAGE_TYPE;

//
// Message structures for CPUID.
//
typedef struct _VID_MSG_DATA_CPUID
{
    UINT32 CpuidFunction;
    
    //
    // The values in the registers when CPUID was executed.
    //
    UINT64 Rax;
    UINT64 Rbx;
    UINT64 Rdx;
    UINT64 Rcx;
    
    //
    // The values suggested by the hypervisor as the default
    // ones to be placed in the registers by CPUID.
    //
    UINT64 RaxDefaultReturn;
    UINT64 RbxDefaultReturn;
    UINT64 RdxDefaultReturn;
    UINT64 RcxDefaultReturn;
} VID_MSG_DATA_CPUID, *PVID_MSG_DATA_CPUID;

typedef struct _VID_MSG_RETURN_DATA_CPUID
{
    //
    // The values to be placed in the registers in order to
    // complete the CPUID instruction.
    //
    UINT64 Rax;
    UINT64 Rbx;
    UINT64 Rdx;
    UINT64 Rcx;
} VID_MSG_RETURN_DATA_CPUID, *PVID_MSG_RETURN_DATA_CPUID;

//
// The maximum size, in bytes, of an MMIO read/write. This value dictates the 
// size of the VID message used for passing MMIO data.
//
#define VID_MAX_MMIO_ACCESS_SIZE 16


typedef struct _VID_MSG_DATA_MMIO
{
    GUEST_PHYSICAL_ADDRESS Gpa;
    UINT32 DataSize;
    BOOLEAN AccessIsWrite;

    BYTE WriteData[VID_MAX_MMIO_ACCESS_SIZE];

    //
    // If this field is set, the VID will allow the client to complete
    // the entire instruction and return InstructionCompleted = TRUE in
    // the return message.
    //
    BOOLEAN InstructionCompletionAllowed;
} VID_MSG_DATA_MMIO, *PVID_MSG_DATA_MMIO;


typedef struct _VID_MSG_DATA_MMIO_RANGE_DESTROYED
{
    UINT8 Reserved;
} VID_MSG_DATA_MMIO_RANGE_DESTROYED, *PVID_MSG_DATA_MMIO_RANGE_DESTROYED;


typedef struct _VID_MSG_RETURN_DATA_MMIO
{
    UINT32 ReadDataSize;
    BYTE ReadData[VID_MAX_MMIO_ACCESS_SIZE];

    //
    // If this field is set in the return data, the VID will not take
    // further action on this intercept but will simply complete it and
    // cause VP execution to resume.  This indicates the client has
    // completely handled the instruction and the VP state is already correct
    // for re-execution.
    // 
    BOOLEAN InstructionCompleted;
} VID_MSG_RETURN_DATA_MMIO, *PVID_MSG_RETURN_DATA_MMIO;

//
// Define the various reasons that can trigger an MBP client notification to 
// be sent to user mode.
//
typedef enum _VID_MBP_NOTIFICATION_REASON
{
    //
    // Notifications triggered when a kernel mode client locks an MBP for 
    // either read or read/write.
    //
    VidNotificationReasonLockForRead,
    VidNotificationReasonLockForReadWrite,

    //
    // Notifications triggered when a user mode client maps an MBP for 
    // either read or read/write.
    //
    VidNotificationReasonMapForRead,
    VidNotificationReasonMapForReadWrite,

    //
    // Notifications triggered when a Virtual Processor in a child Partition 
    // accesses a GPA page that maps to the MBP in question.
    //    
    VidNotificationReasonVpRead,
    VidNotificationReasonVpWrite,

    //
    // Number of MBP notification reason enumerations (for sanity checks)
    //
    VidNotificationReasonCount
} VID_MBP_NOTIFICATION_REASON;


//
// Represents a user mode client notification for a Memory Block Page.
//
typedef struct _VID_MSG_DATA_MBP_ACCESS
{
    VID_MBP_NOTIFICATION_REASON NotificationReason;
    
    MB_HANDLE MemoryBlock;
    MB_PAGE_INDEX MbpIndex;

    //
    // The following fields are only used in case the NotificationReason 
    // field is either VidNotificationReasonVpRead or 
    // VidNotificationReasonVpWrite.
    //
    GUEST_PHYSICAL_PAGE_INDEX GpaPageIndex;
} VID_MSG_DATA_MBP_ACCESS, *PVID_MSG_DATA_MBP_ACCESS;


typedef struct _VID_MSG_DATA_MSR
{
    UINT32 MsrAddress;
    BOOLEAN AccessIsWrite;

    union 
    {
        struct 
        {
            UINT32 LowPart;
            UINT32 HighPart;
        } u;

        UINT64 QuadPart;
    } WriteData;
} VID_MSG_DATA_MSR, *PVID_MSG_DATA_MSR;


typedef union _VID_MSG_RETURN_DATA_MSR
{
    struct 
    {
        UINT32 LowPart;
        UINT32 HighPart;
    } u;

    UINT64 QuadPart;
} VID_MSG_RETURN_DATA_MSR, *PVID_MSG_RETURN_DATA_MSR;


typedef struct _VID_MSG_DATA_IOPORT
{
    UINT16 PortAddress;
    UINT16 AccessSize;
    BOOLEAN AccessIsWrite;
    BOOLEAN AccessIsString;
    UINT16 AccessCount;
    
    //
    // If this field is set, the VID will allow the client to complete
    // the entire instruction and return InstructionCompleted = TRUE in
    // the return message.
    //
    BOOLEAN InstructionCompletionAllowed;

    //
    // Since the data payload is variable length, it should be at the end of
    // the message.
    //
    union 
    {
        UINT32 SingleWrite;
        UINT8 StringWrite[VID_MAX_IO_STRING];
    } WriteData;    

} VID_MSG_DATA_IOPORT, *PVID_MSG_DATA_IOPORT;


typedef struct _VID_MSG_RETURN_DATA_IOPORT
{
    //
    // Sampling data.
    //
    UINT64 MessageReceiptTsc;
    UINT64 MessageReturnTsc;

    UINT16 DataSize;
    UINT16 DataCount;

    //
    // If this field is set in the return data, the VID will not take
    // further action on this intercept but will simply complete it and
    // cause VP execution to resume.  This indicates the client has
    // completely handled the instruction and the VP state is already correct
    // for re-execution.
    // 
    BOOLEAN InstructionCompleted;

    //
    // Since the data payload is variable length, it should be at the end of
    // the message.
    //
    union 
    {
        UINT32 Read;
        UINT8 StringRead[VID_MAX_IO_STRING];
    } Data;

} VID_MSG_RETURN_DATA_IOPORT, *PVID_MSG_RETURN_DATA_IOPORT;


typedef struct _VID_MSG_DATA_EXCEPTION
{
    UINT8 ExceptionVector;
    UINT32 ErrorCode;
    BOOLEAN ErrorCodeValid;
    UINT64 ExceptionParameter;
} VID_MSG_DATA_EXCEPTION, *PVID_MSG_DATA_EXCEPTION;

typedef struct _VID_MSG_RETURN_DATA_EXCEPTION
{
    BOOLEAN AdvanceIp;
} VID_MSG_RETURN_DATA_EXCEPTION, *PVID_MSG_RETURN_DATA_EXCEPTION;

typedef struct _VID_MSG_DATA_TRIPLEFAULT
{
    HV_MESSAGE_TYPE HvMessageType;
} VID_MSG_DATA_TRIPLEFAULT, *PVID_MSG_DATA_TRIPLEFAULT;

typedef struct _VID_MSG_RETURN_DATA_TRIPLEFAULT
{
    BOOLEAN StopVp;
} VID_MSG_RETURN_DATA_TRIPLEFAULT, *PVID_MSG_RETURN_DATA_TRIPLEFAULT;

typedef struct _VID_MSG_DATA_TIMER
{
    UINT64 ExpirationTime;
    UINT64 CurrentReferenceTime;
} VID_MSG_DATA_TIMER, *PVID_MSG_DATA_TIMER;

typedef struct _VID_MSG_DATA_HANDLER_UNREGISTER
{
    HANDLER_REF HandlerRef;
} VID_MSG_DATA_HANDLER_UNREGISTER, *PVID_MSG_DATA_HANDLER_UNREGISTER;

typedef struct _VID_MSG_DATA_STOP
{
    UINT8 Reserved;
} VID_MSG_DATA_STOP;

typedef struct _VID_MSG_DATA_SINGLESTEP
{
    UINT64 Rip;
} VID_MSG_DATA_SINGLESTEP, *PVID_MSG_DATA_SINGLESTEP;

typedef struct _VID_MSG_DATA_APIC_EOI
{
    HV_INTERRUPT_VECTOR InterruptVector;
} VID_MSG_DATA_APIC_EOI, *PVID_MSG_DATA_APIC_EOI;

typedef struct _VID_MSG_DATA_LEGACY_FP_ERROR
{
    HV_INTERRUPT_VECTOR InterruptVector;
} VID_MSG_DATA_LEGACY_FP_ERROR, *PVID_MSG_DATA_LEGACY_FP_ERROR;

typedef struct _VID_MSG_DATA_MB_CREATE
{
    UINT64 PageCount;
} VID_MSG_DATA_MB_CREATE, *PVID_MSG_DATA_MB_CREATE;

typedef struct _VID_MSG_RETURN_DATA_MB_CREATE
{
    MB_HANDLE MemoryBlock;
} VID_MSG_RETURN_DATA_MB_CREATE, *PVID_MSG_RETURN_DATA_MB_CREATE;

typedef struct _VID_MSG_DATA_MB_DELETE
{
    MB_HANDLE MemoryBlock;
} VID_MSG_DATA_MB_DELETE, *PVID_MSG_DATA_MB_DELETE;

typedef struct _VID_MSG_DATA_APERTURE_CACHE_FLUSH
{
    MB_HANDLE MemoryBlock;
} VID_MSG_DATA_APERTURE_CACHE_FLUSH, *PVID_MSG_DATA_APERTURE_CACHE_FLUSH;

//
// Message information returned by the driver to a registered VID client.
//
typedef struct _VID_MSG_DATA
{
    VID_MESSAGE_ID MessageID;
    VID_MESSAGE_TYPE MessageType;
    UINT32 PayloadSizeInBytes;

    //
    // Sampling data.
    //
    UINT64 MessageReceiptTsc;

    PVOID UserContext;      // Used for all message types.
    UINT32 ProcessorIndex;  // Used for most message types.

    union
    {
        VID_MSG_DATA_CPUID Cpuid;
        VID_MSG_DATA_MMIO Mmio;
        VID_MSG_DATA_MBP_ACCESS MbpAccess;
        VID_MSG_DATA_MSR Msr;
        VID_MSG_DATA_IOPORT IoPort;
        VID_MSG_DATA_EXCEPTION Exception;
        VID_MSG_DATA_TRIPLEFAULT TripleFault;
        VID_MSG_DATA_APIC_EOI ApicEoi;
        VID_MSG_DATA_LEGACY_FP_ERROR LegacyFpError;
        VID_MSG_DATA_HANDLER_UNREGISTER HandlerUnregister;
        VID_MSG_DATA_STOP Stop;
        VID_MSG_DATA_TIMER Timer;
        VID_MSG_DATA_MMIO_RANGE_DESTROYED MmioRangeDestroyed;
        VID_MSG_DATA_MB_CREATE MbCreate;
        VID_MSG_DATA_MB_DELETE MbDelete;
        VID_MSG_DATA_APERTURE_CACHE_FLUSH ApertureCacheFlush;
    } Data;
} VID_MSG_DATA, *PVID_MSG_DATA;

typedef const PVID_MSG_DATA PCVID_MSG_DATA;

//
// Information sent to the driver by a VID client when handling a message.
//
typedef struct _VID_MSG_RETURN_DATA
{
    VID_MESSAGE_ID MessageID;
    VID_MSG_STATUS_CODE StatusCode;
    UINT32 PayloadSizeInBytes;

    //
    // Sampling data.
    //
    UINT64 MessageReturnTsc;

    union
    {
        VID_MSG_RETURN_DATA_CPUID Cpuid;
        VID_MSG_RETURN_DATA_MMIO Mmio;
        VID_MSG_RETURN_DATA_MSR Msr;
        VID_MSG_RETURN_DATA_IOPORT IoPort;
        VID_MSG_RETURN_DATA_EXCEPTION Exception;
        VID_MSG_RETURN_DATA_TRIPLEFAULT TripleFault;
        VID_MSG_RETURN_DATA_MB_CREATE MbCreate;
    } Data;
} VID_MSG_RETURN_DATA, *PVID_MSG_RETURN_DATA;

//
// A simple wrapper object which contains a data message and the return
// message, which is used to define shared communication memory for a message
// queue object.
//
// FUTURE-kbroas-2007/03/07:  To save memory (and increase the number of
// exchange buffer slots available), It may be possible to make a union of the
// data message and associated return data?  Can clients handle
// overwritting the message data?  Are there cases where both are used
// simultaneously?
//
typedef struct _VID_MESSAGE_EXCHANGE_BUFFER
{
    //
    // The outgoing message.
    //
    VID_MSG_DATA         DataMessage;

    //
    // The return message.
    //
    VID_MSG_RETURN_DATA  ReturnDataMessage;

} VID_MESSAGE_EXCHANGE_BUFFER, *PVID_MESSAGE_EXCHANGE_BUFFER;


//
// Flags for Save & Restore
//
#define VID_SAVE_STATE_HEADER_ONLY     (1 << 1)
#define VID_SAVE_STATE_PREFLIGHT_ONLY  (1 << 2)

//
// This structure defines the descriptor for VID partition saved states,
// which will occur at the beginning of all (otherwise opaque) saved 
// state blobs.
//
typedef struct _VID_SAVED_STATE_DESCRIPTOR
{
    //
    // Size of this descriptor structure.
    //
    UINT64 DescriptorSize;

    //
    // Size of the pre-data sections, which includes
    // the descriptor and header areas.
    //
    UINT64 HeaderSize;

    //
    // Total size of the blob, which includes descriptor,
    // header, and data areas.
    //
    UINT64 TotalSize;

} VID_SAVED_STATE_DESCRIPTOR, *PVID_SAVED_STATE_DESCRIPTOR;


typedef struct _VID_MESSAGE_INFO 
{
    UINT32 DataSendPayloadSizeInBytes;
    UINT32 DataRecvPayloadSizeInBytes;
} VID_MESSAGE_INFO, *PVID_MESSAGE_INFO;

#define     VID_MESSAGE_TYPE_INDEX(_MessageType) \
    ((((_MessageType) & VID_MESSAGE_TYPE_MASK) < VidMessageTypeCount) ? \
        ((_MessageType) & VID_MESSAGE_TYPE_MASK) : VidMessageInvalid)

#define     VID_MESSAGE_INFO_GET(_MessageType) \
    (&VidMessageInfoArray[VID_MESSAGE_TYPE_INDEX(_MessageType)])

#define     VID_MESSAGE_INFO_GET_PROPERTY(_MessageType, _Property) \
    (VID_MESSAGE_INFO_GET(_MessageType)->_Property)

#define     VID_MESSAGE_INFO_GET_DATA_SEND_PAYLOAD_SIZE(_MessageType) \
    (VID_MESSAGE_INFO_GET_PROPERTY(_MessageType, DataSendPayloadSizeInBytes))

#define     VID_MESSAGE_INFO_GET_DATA_RECV_PAYLOAD_SIZE(_MessageType) \
    (VID_MESSAGE_INFO_GET_PROPERTY(_MessageType, DataRecvPayloadSizeInBytes))

#define     VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX \
    (sizeof(VID_MSG_DATA) - offsetof(VID_MSG_DATA, Data))

#define     VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX \
    (sizeof(VID_MSG_RETURN_DATA) - offsetof(VID_MSG_RETURN_DATA, Data))

//
// Copy full message for send data
//

#define     VID_MESSAGE_COPY_DATA_SEND_FULL(_DataSendDst, _DataSendSrc) \
    do \
    { \
        UINT32 payloadSizeInBytes; \
        ASSERT(_DataSendDst != NULL); \
        ASSERT(_DataSendSrc != NULL); \
        payloadSizeInBytes = (_DataSendSrc)->PayloadSizeInBytes; \
        ASSERT(payloadSizeInBytes <= \
            VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX); \
        if (payloadSizeInBytes > \
            VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX) \
        { \
            payloadSizeInBytes =  \
                VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX; \
        } \
        RtlCopyMemory( \
            (_DataSendDst), \
            (_DataSendSrc), \
            offsetof(VID_MSG_DATA, Data) + payloadSizeInBytes); \
    } while (0)

//
// Copy full message for receive / return data
//

#define     VID_MESSAGE_COPY_DATA_RECV_FULL(_DataRecvDst, _DataRecvSrc) \
    do \
    { \
        UINT32 payloadSizeInBytes; \
        ASSERT(_DataRecvDst != NULL); \
        ASSERT(_DataRecvSrc != NULL); \
        payloadSizeInBytes = (_DataRecvSrc)->PayloadSizeInBytes; \
        ASSERT(payloadSizeInBytes <= \
            VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX); \
        if (payloadSizeInBytes > \
            VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX) \
        { \
            payloadSizeInBytes =  \
                VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX; \
        } \
        RtlCopyMemory( \
            (_DataRecvDst), \
            (_DataRecvSrc), \
            offsetof(VID_MSG_RETURN_DATA, Data) + payloadSizeInBytes); \
    } while (0)

//
// Copy payload only for message send data
//

#define     VID_MESSAGE_COPY_DATA_SEND_PAYLOAD_ONLY(_DataSendDst, _DataSendSrc) \
    do \
    { \
        UINT32 payloadSizeInBytes; \
        ASSERT(_DataSendDst != NULL); \
        ASSERT(_DataSendSrc != NULL); \
        payloadSizeInBytes = (_DataSendSrc)->PayloadSizeInBytes; \
        ASSERT(payloadSizeInBytes <= \
            VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX); \
        if (payloadSizeInBytes > \
            VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX) \
        { \
            payloadSizeInBytes =  \
                VID_MESSAGE_DATA_SEND_PAYLOAD_SIZE_MAX; \
        } \
        if (payloadSizeInBytes) \
        { \
            RtlCopyMemory( \
                &(_DataSendDst)->Data, \
                &(_DataSendSrc)->Data, \
                payloadSizeInBytes); \
        } \
        (_DataSendDst)->PayloadSizeInBytes = payloadSizeInBytes; \
    } while (0)

//
// Copy payload only for message receive / return data
//

#define     VID_MESSAGE_COPY_DATA_RECV_PAYLOAD_ONLY(_DataRecvDst, _DataRecvSrc) \
    do \
    { \
        UINT32 payloadSizeInBytes; \
        ASSERT(_DataRecvDst != NULL); \
        ASSERT(_DataRecvSrc != NULL); \
        payloadSizeInBytes = (_DataRecvSrc)->PayloadSizeInBytes; \
        ASSERT(payloadSizeInBytes <= \
            VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX); \
        if (payloadSizeInBytes > \
            VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX) \
        { \
            payloadSizeInBytes =  \
                VID_MESSAGE_DATA_RECV_PAYLOAD_SIZE_MAX; \
        } \
        if (payloadSizeInBytes) \
        { \
            RtlCopyMemory( \
                &(_DataRecvDst)->Data, \
                &(_DataRecvSrc)->Data, \
                payloadSizeInBytes); \
        } \
        (_DataRecvDst)->PayloadSizeInBytes = payloadSizeInBytes; \
    } while (0)

//
// VID_PAGE_RANGE
//
// VID page ranges are used to compactly represent ranges of contiguous pages.
// Rather than consuming a full 64-bit PFN to represent a page, the 64-bit VID
// page range uses bit fields containing a starting page, contiguous page range
// count, and flags.
//
// Because the implementation or number of bits used for each sub-field may
// change, related accessor macros defined below should be used when
// manipulating page ranges.
//
// VID page ranges are used in the VID's kernel mode interface.  Therefore,
// care must be taken when making changes to these definitions as it will
// affect other modules.
//

#define VID_PAGE_RANGE_BITS_FOR_COUNT    (10)
#define VID_PAGE_RANGE_BITS_FOR_FLAGS    (2)
#define VID_PAGE_RANGE_BITS_FOR_START    (52)

#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int
typedef union _VID_PAGE_RANGE
{
    UINT64 AsUINT64;
    struct 
    {
        UINT64 Count : VID_PAGE_RANGE_BITS_FOR_COUNT;
        UINT64 Flags : VID_PAGE_RANGE_BITS_FOR_FLAGS;
        UINT64 Start : VID_PAGE_RANGE_BITS_FOR_START;
    };
} VID_PAGE_RANGE, *PVID_PAGE_RANGE;

C_ASSERT(sizeof(VID_PAGE_RANGE) == sizeof(UINT64));

#pragma warning(pop)

//
// VID_PAGE_RANGE_XXX
//
// INVALID - Invalid page range value
//
// GET - Get the full 64-bit value of the range.
//
// SET - Explicitly set the full 64-bit value of the range.
//
// ZERO - Zero / clear a range value.
//

#define VID_PAGE_RANGE_INVALID ((UINT64)0)

#define VID_PAGE_RANGE_GET(_PageRange_, _Value_) \
    ((_PageRange_).AsUINT64)

#define VID_PAGE_RANGE_SET(_PageRange_, _Value_) \
    ((_PageRange_).AsUINT64 = (_Value_))

#define VID_PAGE_RANGE_ZERO(_PageRange_) \
    VID_PAGE_RANGE_SET(_PageRange_, 0)

//
// VID_PAGE_RANGE_COUNT_XXX
//
// GET - Retrieve the range count.
//
// SET - Set the range count.
//
// MAX - The maximum range count / length.
//

#define VID_PAGE_RANGE_COUNT_GET(_PageRange_) \
    ((_PageRange_).Count)

#define VID_PAGE_RANGE_COUNT_SET(_PageRange_, _Count_) \
    (((_PageRange_).Count) = (_Count_))

#define VID_PAGE_RANGE_COUNT_MAX \
    ((1 << VID_PAGE_RANGE_BITS_FOR_COUNT) - 1)

//
// VID_PAGE_RANGE_FLAGS_XXX
//
// CHK - Check for the presence of a flag.
//
// CLR - Clear a flag.
//
// SET - Set a flag.
//
// ZERO - Zero all flags.
//

#define VID_PAGE_RANGE_FLAGS_CHK(_PageRange_, _Flag_) \
    ((_PageRange_).Flags & (_Flag_))

#define VID_PAGE_RANGE_FLAGS_CLR(_PageRange_, _Flag_) \
    ((_PageRange_).Flags &= ~(_Flag_))

#define VID_PAGE_RANGE_FLAGS_SET(_PageRange_, _Flag_) \
    ((_PageRange_).Flags |= (_Flag_))

#define VID_PAGE_RANGE_FLAGS_ZERO(_PageRange_) \
    ((_PageRange_).Flags = 0)

//
// 2 bits are reserved for range flags.
//
// Ballooned - Indicates that the referenced pages are removed / decommitted
//      via ballooning (and not DMAR).
//
// Reserved -  Reserved for future use.
//

typedef enum
{
    VidPageRangeFlagBallooned     = (1 << 0),
    VidPageRangeFlagReserved      = (1 << 1)
} VID_PAGE_RANGE_FLAG;

//
// VID_PAGE_RANGE_START_XXX
//
// GET - Get the range start (a page number).
//
// SET - Set the range start (a page number).
//

#define VID_PAGE_RANGE_START_GET(_PageRange_) \
    ((_PageRange_).Start)

#define VID_PAGE_RANGE_START_SET(_PageRange_, _Start_) \
    (((_PageRange_).Start) = (_Start_))
