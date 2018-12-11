#include "driver.h"

#define GET_MINOR_VERSION() (USHORT)(*NtBuildNumber & 0xFFFF)

ULONG
GetFsContextOffset(
    VOID
)
{
    // 0x78 - for Windows 10.1803. For Windows 2016 - 0x70 (but still works vid.dll). RtlGetVersion

#if 0
    if (GET_MINOR_VERSION() >= 1803) return 0x78;
#endif

    // TODO: Use BuildNumber

    return 0x78;
}

BOOLEAN
VidGetFriendlyPartitionName(
    _Out_ PCHAR pBuffer,
    _In_ ULONG len
)
{
    UINT64 hPartitionDeviceHandle;
    NTSTATUS Status;
    PFILE_OBJECT objVmPartition;
    UNICODE_STRING pVmName;

    hPartitionDeviceHandle = *(PUINT64)(pBuffer);
    DbgLog16("hPartitionDeviceHandle: ", hPartitionDeviceHandle);

    Status = ObReferenceObjectByHandle((HANDLE)hPartitionDeviceHandle,
        READ_CONTROL,
        *IoFileObjectType,
        KernelMode,
        &objVmPartition,
        NULL);

    if (!NT_SUCCESS(Status))
    {
        DbgLog("ObReferenceObjectByHandle failed. Status 0x%x", Status);
        return FALSE;
    }

    if (objVmPartition->FsContext != NULL)
    {
        RtlCopyMemory(pBuffer, ((PCHAR)objVmPartition->FsContext - 1 + GetFsContextOffset()), len);
        pVmName.Buffer = (PWCH)pBuffer;
        pVmName.Length = (USHORT)len;
        DbgPrintUStringString("Partition friendly name is ", pVmName);
        ObDereferenceObject(objVmPartition);
        return TRUE;
    }
    else
    {
        DbgPrintString("Object is NULL");
    }

    ObDereferenceObject(objVmPartition);

    return FALSE;
}