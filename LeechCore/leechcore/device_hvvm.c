// device_hvmm.c : implementation of the Hyper-V Virtual Machines based on LiveCloudKd
// Please refer to the hvmm/ folder for more information or its original repository:
// https://github.com/comaeio/LiveCloudKd
//
// (c) Ulf Frisk, 2018
// Author: Ulf Frisk, pcileech@frizk.net
//
// (c) Arthur Khudyaev, 2019
// Author: Arthur Khudyaev, @gerhart_x
//
// (c) Matt Suiche, 2019
// Author: Matt Suiche, msuiche@comae.com
//

#include "device.h"
#include "memmap.h"
#include "util.h"
#include "device_hvvm.h"

#pragma pack(push, 2)

#define HVVM_MODE_IOSPACE 0
#define HVVM_MODE_PHYSICAL 1
#define HVVM_MODE_PTE 2
#define HVVM_MODE_PTE_PCI 3
#define HVVM_MODE_AUTO 99

#define HVVM_CTRL_IOCTRL CTL_CODE(0x22, 0x101, 0, 3)
#define HVVM_WRITE_ENABLE CTL_CODE(0x22, 0x102, 0, 3)
#define HVVM_INFO_IOCTRL CTL_CODE(0x22, 0x103, 0, 3)

#pragma pack(pop)

//-----------------------------------------------------------------------------
// OTHER (NON WINHVVM) TYPEDEFS AND DEFINES BELOW:
//-----------------------------------------------------------------------------

#define DEVICEHVVM_SERVICENAME      "hvmm"
#define DEVICEHVVM_MEMORYFILE       "\\\\.\\hvmm"
//#define DEVICEHVVM_DRIVERFILE       "\\??\\C:\\Distr\\Test\\MemProcFS-BH\\hvmm.sys"
 #define DEVICEHVVM_DRIVERFILE       "hvmm.sys"


//-----------------------------------------------------------------------------
// GENERAL FUNCTIONALITY BELOW:
//-----------------------------------------------------------------------------

VOID DeviceHVVM_ReadScatterMEM(_Inout_ PPMEM_IO_SCATTER_HEADER ppMEMs, _In_ DWORD cpMEMs)
{
    PDEVICE_CONTEXT_HVVM ctx = (PDEVICE_CONTEXT_HVVM)ctxDeviceMain->hDevice;
    DWORD i, cbToRead;
    PMEM_IO_SCATTER_HEADER pMEM;
    LARGE_INTEGER qwA_LI;
    BOOL fResultRead;
    for (i = 0; i < cpMEMs; i++) {
        pMEM = ppMEMs[i];

#if 0
        if (pMEM->cb == pMEM->cbMax) { continue; }

       // Additional checking is not needed. VidReadWriteBlock returns 0, when gets non-mapped memory blocks
        if (!MemMap_VerifyTranslateMEM(pMEM, NULL)) {
            if (pMEM->cbMax && (pMEM->cb < pMEM->cbMax)) {
                vprintfvvv("device_hvvm.c!DeviceHVLCKD_ReadScatterMEM: FAILED: no memory at address %016llx\n", pMEM->qwA);
            }
            continue;
        }
        if (pMEM->qwA >= ctx->paMax) { continue; }
#endif

        cbToRead = (DWORD)min(pMEM->cb, ctx->paMax - pMEM->qwA);
        qwA_LI.QuadPart = pMEM->qwA;
        //SetFilePointerEx(ctx->hFile, qwA_LI, NULL, FILE_BEGIN);
        //Replace 2

       // ReadFile(ctx->hFile, pMEM->pb, pMEM->cbMax, &pMEM->cb, NULL);
        fResultRead = HVVM_ReadFile(ctx->Partition, qwA_LI.QuadPart, pMEM->pb, pMEM->cbMax);

        if (fResultRead == TRUE) {
            pMEM->cb = pMEM->cbMax;
        }

        if (ctxDeviceMain->fVerboseExtraTlp) {
            vprintf(
                "device_pmem.c!DeviceHVVM_ReadScatterMEM: READ:\n" \
                "        offset=%016llx req_len=%08x rsp_len=%08x\n",
                pMEM->qwA,
                pMEM->cbMax,
                pMEM->cb
            );
            Util_PrintHexAscii(pMEM->pb, pMEM->cb, 0);
        }
    }
}

BOOL DeviceHVVM_GetOption(_In_ QWORD fOption, _Out_ PQWORD pqwValue)
{
    PDEVICE_CONTEXT_HVVM ctx = (PDEVICE_CONTEXT_HVVM)ctxDeviceMain->hDevice;

    if (fOption == LEECHCORE_OPT_MEMORYINFO_VALID) {
        *pqwValue = 1;
        return TRUE;
    }

    switch (fOption) {
        case LEECHCORE_OPT_MEMORYINFO_ADDR_MAX:
            *pqwValue = ctx->paMax;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_FLAG_32BIT:
            *pqwValue = 0; // only 64-bit supported currently
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_FLAG_PAE:
            *pqwValue = 0;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_VERSION_MINOR:
            *pqwValue = ctx->MemoryInfo.NtBuildNumber.HighPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_VERSION_MAJOR:
            *pqwValue = ctx->MemoryInfo.NtBuildNumber.LowPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_PFN:
            *pqwValue = ctx->MemoryInfo.PfnDataBase.QuadPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_PsLoadedModuleList:
            *pqwValue = ctx->MemoryInfo.PsLoadedModuleList.QuadPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_PsActiveProcessHead:
            *pqwValue = ctx->MemoryInfo.PsActiveProcessHead.QuadPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_MACHINE_IMAGE_TP:
            *pqwValue = IMAGE_FILE_MACHINE_AMD64; // only 64-bit supported currently
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_KERNELBASE:
            *pqwValue = ctx->MemoryInfo.KernBase.QuadPart;
            return TRUE;
            // FUTURE:
        case LEECHCORE_OPT_MEMORYINFO_OS_DTB:
            *pqwValue = ctx->MemoryInfo.CR3.QuadPart;
            return TRUE;
        case LEECHCORE_OPT_MEMORYINFO_OS_KERNELHINT:
            *pqwValue = 0ULL;
            return FALSE;
    }

    *pqwValue = 0;
    return FALSE;
}

/*
* Unload the winpmem kernel driver and also delete the driver-loading service.
*/
VOID DeviceHVVM_SvcClose()
{
    SC_HANDLE hSCM, hSvcLiveCloudKd;
    SERVICE_STATUS SvcStatus;

    // 1: shut down and delete service.
    if ((hSCM = OpenSCManager(NULL, NULL, SC_MANAGER_CREATE_SERVICE))) {
        hSvcLiveCloudKd = OpenServiceA(hSCM, DEVICEHVVM_SERVICENAME, SERVICE_ALL_ACCESS);

        if (hSvcLiveCloudKd) {
            ControlService(hSvcLiveCloudKd, SERVICE_CONTROL_STOP, &SvcStatus);
        }

        if (hSvcLiveCloudKd) { DeleteService(hSvcLiveCloudKd); }
        if (hSvcLiveCloudKd) { CloseServiceHandle(hSvcLiveCloudKd); }

        CloseServiceHandle(hSCM);
    }
}

/*
* Create the LiveCloudKd kernel driver loader service and load the kernel driver
* into the kernel. Upon fail it's guaranteed that no lingering service exists.
*/
BOOL DeviceHVVM_SvcStart()
{
    PDEVICE_CONTEXT_HVVM ctx = (PDEVICE_CONTEXT_HVVM)ctxDeviceMain->hDevice;
    DWORD dwWinErr;
    CHAR szDriverFile[MAX_PATH] = { 0 };
    FILE *pDriverFile = NULL;
    HMODULE hModuleLeechCore;

    SC_HANDLE hSCM = 0, hSvcLiveCloudKd = 0;

    // 1: verify that driver file exists.
    if (!_strnicmp("hvvm://", ctxDeviceMain->cfg.szDevice, 7)) {
		strcat_s(szDriverFile, _countof(szDriverFile), ctxDeviceMain->cfg.szDevice + 7);
    }
    else {
        hModuleLeechCore = LoadLibraryA("leechcore.dll");
        // NB! defaults to locating 'hvvm.sys' relative to the loaded
        // 'leechcore.dll' - if unable to locate library (for whatever reason)
        // defaults will be to try to loade relative to executable (NULL).
        Util_GetPathDll(szDriverFile, hModuleLeechCore);
        if (hModuleLeechCore) { FreeLibrary(hModuleLeechCore); }
        strcat_s(szDriverFile, _countof(szDriverFile), DEVICEHVVM_DRIVERFILE);
    }

    if (fopen_s(&pDriverFile, szDriverFile, "rb") || !pDriverFile) {
        vprintf(
            "DEVICE: ERROR: unable to locate the LiveCloudKd driver file '%s'.\n",
            szDriverFile);
        return FALSE;
    }

    fclose(pDriverFile);

    // 2: create and start service to load driver into kernel.
    if (!(hSCM = OpenSCManagerA(NULL, NULL, SC_MANAGER_CREATE_SERVICE))) {
        vprintf("DEVICE: ERROR: unable to load driver - not running as elevated administrator?\n");
        return FALSE;
    }

    hSvcLiveCloudKd = CreateServiceA(
        hSCM,
        DEVICEHVVM_SERVICENAME,
        DEVICEHVVM_SERVICENAME,
        SERVICE_ALL_ACCESS,
        SERVICE_KERNEL_DRIVER,
        SERVICE_DEMAND_START,
        SERVICE_ERROR_NORMAL,
        szDriverFile,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL);

    if (!hSvcLiveCloudKd) {
        if ((dwWinErr = GetLastError()) == ERROR_SERVICE_EXISTS) {
            hSvcLiveCloudKd = OpenServiceA(hSCM, DEVICEHVVM_SERVICENAME, SERVICE_ALL_ACCESS);
        }
        else {
            vprintf(
                "DEVICE: ERROR: Unable create service required to load driver.\n"
                "Is project executable running from the C:\\ drive ?\n");
            vprintfv("DEVICE: ERROR: LastError: 0x%08x\n", dwWinErr);
            CloseServiceHandle(hSCM);
            return FALSE;
        }
    }

    if (!StartServiceA(hSvcLiveCloudKd, 0, NULL) && ((dwWinErr = GetLastError()) != ERROR_SERVICE_ALREADY_RUNNING)) {
        vprintf(
            "DEVICE: ERROR: Unable to load driver into kernel.\n"
            "Is project executable running from the C:\\ drive ?\n");
        vprintfv("DEVICE: ERROR: LastError: 0x%08x\n", dwWinErr);
        CloseServiceHandle(hSvcLiveCloudKd);
        CloseServiceHandle(hSCM);
        DeviceHVVM_SvcClose();
        return FALSE;
    }

    CloseServiceHandle(hSvcLiveCloudKd);
    CloseServiceHandle(hSCM);

    // 3: open file handle

    ctx->hFile = CreateFileA(
        DEVICEHVVM_MEMORYFILE,
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);

    if (!ctx->hFile) {
        DeviceHVVM_SvcClose();
        return FALSE;
    }

    return TRUE;
}

/*
* Close the HVVM device and clean up both context and any kernel drivers.
*/
VOID DeviceHVVM_Close()
{
    PDEVICE_CONTEXT_HVVM ctx = (PDEVICE_CONTEXT_HVVM)ctxDeviceMain->hDevice;
    DeviceHVVM_SvcClose();

    if (ctx) {
        CloseHandle(ctx->hFile);
        MemMap_Close();
        LocalFree(ctx);
    }

    ctxDeviceMain->hDevice = 0;
}

BOOL DeviceHVVM_GetMemoryInformation()
{
    PDEVICE_CONTEXT_HVVM ctx = (PDEVICE_CONTEXT_HVVM)ctxDeviceMain->hDevice;
    DWORD i;
    // 1: retrieve information from hypervisor
    if (HVVMStart(ctx));

    // 2: sanity checks
    if (ctx->MemoryInfo.NumberOfRuns.QuadPart > MAX_NUMBER_OF_RUNS) {
        vprintf("DEVICE: ERROR: too many memory segments reported from LiveCloudKd driver. (%lli)\n", ctx->MemoryInfo.NumberOfRuns.QuadPart);
        return FALSE;
    }
    // 3: parse memory ranges
    MemMap_Initialize(0x0000ffffffffffff);
    for (i = 0; i < ctx->MemoryInfo.NumberOfRuns.QuadPart; i++) {
        if (!MemMap_AddRange(ctx->MemoryInfo.Run[i].start, ctx->MemoryInfo.Run[i].length, ctx->MemoryInfo.Run[i].start)) {
            vprintf("DEVICE: FAIL: unable to add range to memory map. (%016llx %016llx %016llx)\n", ctx->MemoryInfo.Run[i].start, ctx->MemoryInfo.Run[i].length, ctx->MemoryInfo.Run[i].start);
            return FALSE;
        }
    }

    MemMap_GetMaxAddress(&ctx->paMax);

    return TRUE;
}

BOOL DeviceHVVM_Init()
{
    //
    // FUTURE: Leverage VidGetVirtualProcessorState() API to query the CR3 value to avoid to have to brute-force it and
    // consider the image like a raw memory image.
    //

    // CR3 for LEECHCORE_OPT_MEMORYINFO_OS_DTB
    // RIP for LEECHCORE_OPT_MEMORYINFO_OS_KERNELHINT

    return TRUE;
}

BOOL DeviceHVVM_Open()
{
    BOOL result;
    PDEVICE_CONTEXT_HVVM ctx;

    // 1: terminate any lingering LiveCloudKd service.
    DeviceHVVM_SvcClose();

    // 2: initialize core context.
    ctx = (PDEVICE_CONTEXT_HVVM)LocalAlloc(LMEM_ZEROINIT, sizeof(DEVICE_CONTEXT_HVVM));
    if (!ctx) { return FALSE; }

    ctxDeviceMain->hDevice = (HANDLE)ctx;
    // set callback functions and fix up config
    ctxDeviceMain->cfg.tpDevice = LEECHCORE_DEVICE_HVVM;
    ctxDeviceMain->cfg.fVolatile = TRUE;
    ctxDeviceMain->cfg.cbMaxSizeMemIo = ctxDeviceMain->cfg.cbMaxSizeMemIo ? min(ctxDeviceMain->cfg.cbMaxSizeMemIo, 0x01000000) : 0x01000000; // 16MB (or lower user-value)
    ctxDeviceMain->pfnClose = DeviceHVVM_Close;
    ctxDeviceMain->pfnReadScatterMEM = DeviceHVVM_ReadScatterMEM;
    ctxDeviceMain->pfnGetOption = DeviceHVVM_GetOption;

    // 3: load hvvm kernel driver.
    result = DeviceHVVM_SvcStart();
    if (!result) {
        vprintf("DEVICE: FAILED: LiveCloudKd - Failed to initialize the driver.");
        goto fail;
    }

    // 4: retrieve memory map.
    result = result && DeviceHVVM_GetMemoryInformation();
    if (!result) {
        vprintf("DEVICE: FAILED: LiveCloudKd - Unable to parse guest memory map.");
        goto fail;
    }

    if (!DeviceHVVM_Init()) {
        vprintf("DEVICE: FAILED: LiveCloudKd - Unable to get guest virtual machine data.");
        goto fail;
    }

    ctxDeviceMain->cfg.paMaxNative = ctx->paMax;
    vprintfv("DEVICE: Successfully loaded hvvm auxiliary driver.\n");
    return TRUE;

fail:
    DeviceHVVM_Close();
    return FALSE;
}