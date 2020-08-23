// hvmm.c : implementation of the Hyper-V Virtual Machines based on LiveCloudKdSdk
// Please refer to the hvmm/ folder for more information or its original repository:
// https://github.com/comaeio/LiveCloudKd
//
// (c) Ulf Frisk, 2018
// Author: Ulf Frisk, pcileech@frizk.net
//
// (c) Arthur Khudyaev, 2020
// Author: Arthur Khudyaev, @gerhart_x
//
// (c) Matt Suiche, 2019
// Author: Matt Suiche, msuiche@comae.com
//



#include "LiveCloudKdSdkHandle.h"
#include "leechcore_device.h"
#include "util.h"
#include "leechcore_device_hvmm.h"
#include "shlwapi.h"


//-----------------------------------------------------------------------------
// GENERAL FUNCTIONALITY BELOW:
//-----------------------------------------------------------------------------

extern READ_MEMORY_METHOD g_MemoryReadInterfaceType;
extern WRITE_MEMORY_METHOD g_MemoryWriteInterfaceType;

_Success_(return)
BOOL DeviceHVMM_WriteMEM(_In_ PLC_CONTEXT ctxLC, _In_ DWORD cpMEMs, _Inout_ PPMEM_SCATTER ppMEMs)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    PMEM_SCATTER pMEM;
    DWORD i;

    for (i = 0; i < cpMEMs; i++) {
        pMEM = ppMEMs[i];

        if (!HVMM_WriteFile(ctx->Partition, pMEM->qwA, pMEM->pb, pMEM->cb)) {
            lcprintf(ctxLC, "HVMM: ERROR: Memory write fail\n");
            return FALSE;
        }
    }

    return TRUE;
}

VOID DeviceHVMM_ReadScatter(_In_ PLC_CONTEXT ctxLC, _In_ DWORD cpMEMs, _Inout_ PPMEM_SCATTER ppMEMs)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    DWORD i;
    PMEM_SCATTER pMEM;
    LARGE_INTEGER qwA_LI;
    for (i = 0; i < cpMEMs; i++) {
        pMEM = ppMEMs[i];
        if (pMEM->f || MEM_SCATTER_ADDR_ISINVALID(pMEM)) { continue; }
        qwA_LI.QuadPart = pMEM->qwA;

        pMEM->f = HVMM_ReadFile(ctx->Partition, pMEM->qwA, pMEM->pb, pMEM->cb);

        if (pMEM->f) {
            if (ctxLC->fPrintf[LC_PRINTF_VVV]) {
                lcprintf_fn(
                    ctxLC,
                    "READ:\n        offset=%016llx req_len=%08x\n",
                    pMEM->qwA,
                    pMEM->cb
                );
                Util_PrintHexAscii(ctxLC, pMEM->pb, pMEM->cb, 0);
            }
        }
        else {
            lcprintfvvv_fn(ctxLC, "READ FAILED:\n        offset=%016llx req_len=%08x\n", pMEM->qwA, pMEM->cb);
        }
    }
}

_Success_(return)
BOOL DeviceHVMM_GetOption(_In_ PLC_CONTEXT ctxLC, _In_ QWORD fOption, _Out_ PQWORD pqwValue)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;

    if (fOption == LC_OPT_MEMORYINFO_VALID) {
        *pqwValue = 1;
        return TRUE;
    }

    switch (fOption) {
    case LC_OPT_MEMORYINFO_FLAG_32BIT:
        *pqwValue = 0; // only 64-bit supported currently
        return TRUE;
    case LC_OPT_MEMORYINFO_FLAG_PAE:
        *pqwValue = 0;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_VERSION_MINOR:
        *pqwValue = ctx->MemoryInfo.NtBuildNumber.HighPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_VERSION_MAJOR:
        *pqwValue = ctx->MemoryInfo.NtBuildNumber.LowPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_PFN:
        *pqwValue = ctx->MemoryInfo.PfnDataBase.QuadPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_PsLoadedModuleList:
        *pqwValue = ctx->MemoryInfo.PsLoadedModuleList.QuadPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_PsActiveProcessHead:
        *pqwValue = ctx->MemoryInfo.PsActiveProcessHead.QuadPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_MACHINE_IMAGE_TP:
        *pqwValue = IMAGE_FILE_MACHINE_AMD64; // only 64-bit supported currently
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_KERNELBASE:
        *pqwValue = ctx->MemoryInfo.KernBase.QuadPart;
        return TRUE;
        // FUTURE:
    case LC_OPT_MEMORYINFO_OS_DTB:
        *pqwValue = ctx->MemoryInfo.CR3.QuadPart;
        return TRUE;
    case LC_OPT_MEMORYINFO_OS_KERNELHINT:
        *pqwValue = 0ULL;
        return FALSE;
    }

    *pqwValue = 0;
    return FALSE;
}

/*
* Unload the winpmem kernel driver and also delete the driver-loading service.
*/
VOID DeviceHVMM_SvcClose()
{
    SC_HANDLE hSCM, hSvcLiveCloudKd;
    SERVICE_STATUS SvcStatus;

    // 1: shut down and delete service.

    if ((g_MemoryReadInterfaceType == ReadInterfaceHvmmDrvInternal) || (g_MemoryReadInterfaceType == ReadInterfaceWinHv))
    {
        if ((hSCM = OpenSCManager(NULL, NULL, SC_MANAGER_CREATE_SERVICE))) {
            hSvcLiveCloudKd = OpenServiceA(hSCM, DEVICEHVMM_SERVICENAME, SERVICE_ALL_ACCESS);

            if (hSvcLiveCloudKd) {
                ControlService(hSvcLiveCloudKd, SERVICE_CONTROL_STOP, &SvcStatus);
            }

            if (hSvcLiveCloudKd) { DeleteService(hSvcLiveCloudKd); }
            if (hSvcLiveCloudKd) { CloseServiceHandle(hSvcLiveCloudKd); }

            CloseServiceHandle(hSCM);
        }
    }
}

BOOL IsDigital(PLC_CONTEXT ctxLC, PCHAR str, ULONG64 len)
{
    for (ULONG i = 0; i < len; i++)
    {
        if ((str[i] < '0') || (str[i] > '9'))
        {
            lcprintf(ctxLC,
                "DEVICE: ERROR: vmid is not integer: %s\n",
                str);
            return FALSE;
        }       
    }
    
    return TRUE;
}

BOOL DeviceHVMM_CheckParams(_In_ PLC_CONTEXT ctxLC)
{
    ULONG64 uVmidLength = 0;
    CHAR szVmid[10] = { 0 };
    //ULONG uVmid = 0;
    PCHAR pVmid = NULL;
    PCHAR pDelim = NULL;
    PCHAR pListVm = NULL;
    BOOLEAN bResult = FALSE;

    ULONG64 device_size = sizeof(HVMM_PARAM_NAME) - 1;
    ULONG64 id_size = sizeof(ID_PARAM_NAME) - 1;

    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    
    pVmid = StrStrIA(ctxLC->Config.szDevice, ID_PARAM_NAME);
    if (pVmid)
    {
        pDelim = StrStrIA(pVmid, HVMM_PARAM_DELIMITER);

        if (pDelim)
        {
            uVmidLength = pVmid - pDelim;
            if (uVmidLength < 6)
            {                
                memcpy(szVmid, pVmid + id_size, uVmidLength);

                if (!IsDigital(ctxLC, szVmid, uVmidLength))
                    return FALSE;

                ctx->Vmid = atoi(szVmid);
                ctx->VmidPreselected = TRUE;
                bResult = TRUE;
            }
            else
            {
                lcprintf(ctxLC,
                    "DEVICE: ERROR: vmid length is too big: %d\n",
                    uVmidLength);
                return FALSE;
            }
        }
        else
        {           
            uVmidLength = strlen(ctxLC->Config.szDevice) - device_size - id_size;
            strcpy_s(szVmid, _countof(szVmid), pVmid + id_size);

            if (!IsDigital(ctxLC, szVmid, uVmidLength))
                return FALSE;

            if (uVmidLength < 6)
            {
                ctx->Vmid = atoi(szVmid);
                ctx->VmidPreselected = TRUE;
                bResult = TRUE;
            }
            else
            {
                lcprintf(ctxLC,
                    "DEVICE: ERROR: vmid length is too big: %d\n",
                    uVmidLength);
                return FALSE;
            }
        }
    }

    pListVm = StrStrIA(ctxLC->Config.szDevice, LISTVM_PARAM_NAME);

    if (pListVm)
    {
        ctx->ListVm = TRUE;
        bResult = TRUE;
    }
       

    return bResult;
}

/*
* Create the LiveCloudKd kernel driver loader service and load the kernel driver
* into the kernel. Upon fail it's guaranteed that no lingering service exists.
*/

_Success_(return)
BOOL DeviceHVMM_SvcStart(_In_ PLC_CONTEXT ctxLC)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    DWORD dwWinErr;
    CHAR szDriverFile[MAX_PATH] = { 0 };
    FILE* pDriverFile = NULL;
    HMODULE hModuleLeechCore;

    //getchar();

    SC_HANDLE hSCM = 0, hSvcLiveCloudKd = 0;

    // 1: verify that driver file exists.
    if ((g_MemoryReadInterfaceType == ReadInterfaceHvmmDrvInternal) || (g_MemoryReadInterfaceType == ReadInterfaceWinHv))
    {

        hModuleLeechCore = LoadLibraryA("leechcore.dll");
        // NB! defaults to locating 'hvmm.sys' relative to the loaded
        // 'leechcore.dll' - if unable to locate library (for whatever reason)
        // defaults will be to try to loade relative to executable (NULL).
        Util_GetPathLib(szDriverFile);
        if (hModuleLeechCore) { FreeLibrary(hModuleLeechCore); }
        strcat_s(szDriverFile, _countof(szDriverFile), DEVICEHVMM_DRIVERFILE);

        if (fopen_s(&pDriverFile, szDriverFile, "rb") || !pDriverFile) {
            lcprintf(ctxLC,
                "DEVICE: ERROR: unable to locate the LiveCloudKd driver file '%s'.\n",
                szDriverFile);
            return FALSE;
        }

        fclose(pDriverFile);

        // 2: create and start service to load driver into kernel.
        if (!(hSCM = OpenSCManagerA(NULL, NULL, SC_MANAGER_CREATE_SERVICE))) {
            lcprintf(ctxLC, "DEVICE: ERROR: unable to load driver - not running as elevated administrator?\n");
            return FALSE;
        }

        hSvcLiveCloudKd = CreateServiceA(
            hSCM,
            DEVICEHVMM_SERVICENAME,
            DEVICEHVMM_SERVICENAME,
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
                hSvcLiveCloudKd = OpenServiceA(hSCM, DEVICEHVMM_SERVICENAME, SERVICE_ALL_ACCESS);
            }
            else {
                lcprintf(ctxLC,
                    "DEVICE HVMM: ERROR: Unable create service required to load driver.\n"
                    "Is project executable running from the C:\\ drive ?\n");
                lcprintfv(ctxLC, "DEVICE HVMM: ERROR: LastError: 0x%08x\n", dwWinErr);
                CloseServiceHandle(hSCM);
                return FALSE;
            }
        }

        if (!StartServiceA(hSvcLiveCloudKd, 0, NULL) && ((dwWinErr = GetLastError()) != ERROR_SERVICE_ALREADY_RUNNING)) {
            lcprintf(ctxLC,
                "DEVICE: ERROR: Unable to load driver into kernel.\n"
                "Is project executable running from the C:\\ drive ?\n");
            lcprintfv(ctxLC, "DEVICE HVMM: ERROR: LastError: 0x%08x\n", dwWinErr);
            CloseServiceHandle(hSvcLiveCloudKd);
            CloseServiceHandle(hSCM);
            DeviceHVMM_SvcClose();
            return FALSE;
        }

        CloseServiceHandle(hSvcLiveCloudKd);
        CloseServiceHandle(hSCM);

        // 3: open file handle

        ctx->hFile = CreateFileA(
            DEVICEHVMM_MEMORYFILE,
            GENERIC_READ | GENERIC_WRITE,
            FILE_SHARE_READ | FILE_SHARE_WRITE,
            NULL,
            OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL,
            NULL);

        if (!ctx->hFile) {
            DeviceHVMM_SvcClose();
            return FALSE;
        }
    }
    else
    {
        ctx->hFile = (HANDLE)1;
    }

    return TRUE;
}

/*
* Close the HVVM device and clean up both context and any kernel drivers.
*/
VOID DeviceHVMM_Close(_Inout_ PLC_CONTEXT ctxLC)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    DeviceHVMM_SvcClose();

    if (ctx) {
        CloseHandle(ctx->hFile);
        LocalFree(ctx);
    }

    ctxLC->hDevice = 0;
}

_Success_(return)
BOOL DeviceHVMM_GetMemoryInformation(_Inout_ PLC_CONTEXT ctxLC)
{
    PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;
    DWORD i;
    // 1: retrieve information from hypervisor
    if (!HVMMStart(ctx))
        return FALSE;

    // 2: sanity checks
    if (ctx->MemoryInfo.NumberOfRuns.QuadPart > MAX_NUMBER_OF_RUNS) {

        lcprintf(ctxLC, "DEVICE: ERROR: too few/many memory segments reported from winpmem driver. (%lli)\n", ctx->MemoryInfo.NumberOfRuns.QuadPart);
        return FALSE;
    }

    // 3: parse memory ranges

    for (i = 0; i < ctx->MemoryInfo.NumberOfRuns.QuadPart; i++) {
        if (!LcMemMap_AddRange(ctxLC, ctx->MemoryInfo.Run[i].start, ctx->MemoryInfo.Run[i].length, ctx->MemoryInfo.Run[i].start)) {
            lcprintf(ctxLC, "DEVICE: FAIL: unable to add range to memory map. (%016llx %016llx %016llx)\n", ctx->MemoryInfo.Run[i].start, ctx->MemoryInfo.Run[i].length, ctx->MemoryInfo.Run[i].start);
            return FALSE;
        }
    }

    return TRUE;
}

_Success_(return)
EXPORTED_FUNCTION BOOL LcPluginCreate(_Inout_ PLC_CONTEXT ctxLC, _Out_opt_ PPLC_CONFIG_ERRORINFO ppLcConfidErrorInfo)
{
    BOOL result;
    PDEVICE_CONTEXT_HVMM ctx;

    ctx = (PDEVICE_CONTEXT_HVMM)LocalAlloc(LMEM_ZEROINIT, sizeof(DEVICE_CONTEXT_HVMM));
    if (!ctx) { return FALSE; }

    // 1: terminate any lingering LiveCloudKd service.
    DeviceHVMM_SvcClose();

    // 2: initialize core context.

    ctxLC->hDevice = (HANDLE)ctx;
    // set callback functions and fix up config

    //ctxLC->Config.fVolatile = TRUE;
    ctxLC->Config.fVolatile = FALSE;

    ctxLC->pfnClose = DeviceHVMM_Close;
    ctxLC->pfnReadScatter = DeviceHVMM_ReadScatter;
    ctxLC->pfnWriteScatter = DeviceHVMM_WriteMEM;
    ctxLC->pfnGetOption = DeviceHVMM_GetOption;

    if (!DeviceHVMM_CheckParams(ctxLC)) {

        LPSTR szUserText = "Please select the ID of the virtual machine\n";
        DWORD cbStructErrorInfo = sizeof(LC_CONFIG_ERRORINFO) + (DWORD)strlen(szUserText) + 1;

        PLC_CONFIG_ERRORINFO pErrorInfo = LocalAlloc(LMEM_ZEROINIT, cbStructErrorInfo);

        if (pErrorInfo) {
            pErrorInfo->dwVersion = LC_CONFIG_ERRORINFO_VERSION;
            pErrorInfo->cbStruct = cbStructErrorInfo;
            pErrorInfo->fUserInputRequest = TRUE;
            strncpy_s(pErrorInfo->szUserText, pErrorInfo->cbStruct - sizeof(LC_CONFIG_ERRORINFO), szUserText, _TRUNCATE);
            pErrorInfo->cszUserText = (DWORD)strlen(pErrorInfo->szUserText);
            *ppLcConfidErrorInfo = pErrorInfo;
            //ctx->VmidPreselected = TRUE;
            return FALSE;
        }
    }

    // 3: load hvvm kernel driver.
    result = DeviceHVMM_SvcStart(ctxLC);
    if (!result) {
        lcprintf(ctxLC, "DEVICE: FAILED: LiveCloudKd - Failed to initialize the driver.\n");
        goto fail;
    }

    // 4: retrieve memory map.
    result = DeviceHVMM_GetMemoryInformation(ctxLC);
    if (!result) {
        lcprintf(ctxLC, "DEVICE: FAILED: LiveCloudKd - Unable to parse guest memory map.\n");
        goto fail;
    }

    lcprintf(ctxLC, "DEVICE: Successfully loaded hvmm auxiliary driver.\n");
    return TRUE;

fail:
    DeviceHVMM_Close(ctxLC);
    return FALSE;
}

