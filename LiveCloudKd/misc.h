#ifndef __MISC_H__
#define __MISC_H__

typedef struct tdVIDDLL_FUNCTIONS {
    BOOL
    (WINAPI *VidReadMemoryBlockPageRange)(
        __in PT_HANDLE Partition,
        __in MB_HANDLE MemoryBlock,
        __in MB_PAGE_INDEX StartMbp,
        __in UINT64 MbpCount,
        __out_bcount(BufferSize)
        PVOID ClientBuffer,
        __in UINT64 BufferSize
    );

    BOOL
    (WINAPI *VidWriteMemoryBlockPageRange)(
        __in PT_HANDLE Partition,
        __in MB_HANDLE MemoryBlock,
        __in MB_PAGE_INDEX StartMbp,
        __in UINT64 MbpCount,
        __in_bcount(BufferSize)
        PVOID ClientBuffer,
        __in UINT64 BufferSize
    );

    BOOL
    (WINAPI *VidTranslateGvaToGpa)(
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

    BOOL
    (WINAPI *VidGetVirtualProcessorState)(
        __in PT_HANDLE Partition,
        __in VID_PROCESSOR_INDEX ProcessorIndex,
        __in_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_CODE* ProcessorStateCodeArray,
        __in UINT8 ProcessorStateCodeCount,
        __out_ecount(ProcessorStateCodeCount)
        VID_VP_STATE_VALUE* ProcessorStateOutputArray
    );
    
    BOOL
    (WINAPI * VidGetHvPartitionId)(
        __in PT_HANDLE Partition,
        __out PHV_PARTITION_ID PartitionId
    );

    BOOL
    (WINAPI *VidGetPartitionFriendlyName)(
            __in PT_HANDLE PartitionHandle,
            __out_ecount(FriendlyNameLengthInChars) WCHAR* FriendlyName,
            __in UINT32 FriendlyNameLengthInChars
     );
} VIDDLL_FUNCTIONS, *PVIDDLL_FUNCTIONS;

typedef struct tdNTDDLL_FUNCTIONS {
    NTSTATUS
    (NTAPI *NtQuerySystemInformation)(
        _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
        _Out_writes_bytes_opt_(SystemInformationLength) PVOID SystemInformation,
        _In_ ULONG SystemInformationLength,
        _Out_opt_ PULONG ReturnLength
    );

    NTSTATUS
    (NTAPI *NtOpenProcess)(
        _Out_ PHANDLE ProcessHandle,
        _In_ ACCESS_MASK DesiredAccess,
        _In_ POBJECT_ATTRIBUTES ObjectAttributes,
        _In_opt_ PCLIENT_ID ClientId
    );

    NTSTATUS
    (NTAPI *NtDuplicateObject)(
        _In_ HANDLE SourceProcessHandle,
        _In_ HANDLE SourceHandle,
        _In_opt_ HANDLE TargetProcessHandle,
        _Out_opt_ PHANDLE TargetHandle,
        _In_ ACCESS_MASK DesiredAccess,
        _In_ ULONG HandleAttributes,
        _In_ ULONG Options
    );

    NTSTATUS
    (NTAPI *NtQueryObject)(
        _In_opt_ HANDLE Handle,
        _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
        _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
        _In_ ULONG ObjectInformationLength,
        _Out_opt_ PULONG ReturnLength
    );

    NTSTATUS
    (NTAPI *NtAllocateVirtualMemory)(
        _In_ HANDLE ProcessHandle,
        _Inout_ _At_(*BaseAddress, _Readable_bytes_(*RegionSize) _Writable_bytes_(*RegionSize) _Post_readable_byte_size_(*RegionSize)) PVOID *BaseAddress,
        _In_ ULONG_PTR ZeroBits,
        _Inout_ PSIZE_T RegionSize,
        _In_ ULONG AllocationType,
        _In_ ULONG Protect
    );
} NTDDLL_FUNCTIONS, *PNTDDLL_FUNCTIONS;

BOOLEAN
ImportGlobalFunctions(
    VOID
);

extern VIDDLL_FUNCTIONS g_VidDll;
extern NTDDLL_FUNCTIONS g_NtDll;

#endif