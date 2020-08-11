//----------------------------------------------------------------------------
//
// StaticExdiSampleServer.cpp
//
// A sample EXDI server class demonstrating basic functionality.
//
// Copyright (c) Microsoft. All rights reserved.
//
//----------------------------------------------------------------------------

#include "stdafx.h"
#include "StaticExdiSampleServer.h"
#include "ComHelpers.h"
#include "AsynchronousKDController.h"
#include "KDCommandLogger.h"
#include "ArgumentHelpers.h"
#include "ExceptionHelpers.h"

#include "LiveCloudKdSdkPublic.h"

#define METHOD_NOT_IMPLEMENTED if (IsDebuggerPresent()) \
                                   __debugbreak(); \
                               return E_NOTIMPL

BOOLEAN g_LiveCloudKdIsLoaded = FALSE;
PHVDD_PARTITION g_Partition = NULL;
READ_MEMORY_METHOD g_MemoryReadInterfaceType = ReadInterfaceHvmmDrvInternal;
WRITE_MEMORY_METHOD g_MemoryWriteInterfaceType = WriteInterfaceWinHv;

using namespace KDControllerLib;

// CStaticExdiSampleServer

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetTargetInfo( 
    /* [out] */ PGLOBAL_TARGET_INFO_STRUCT pgti)
{
    CheckAndZeroOutArgs(pgti);

    pgti->TargetProcessorFamily = m_detectedProcessorFamily;
    //TODO: handle out-of-memory condition
    pgti->szProbeName = COMHelpers::CopyStringToTaskMem(L"LiveCloudKD ExdiSample");
    pgti->szTargetName= COMHelpers::CopyStringToTaskMem(L"LiveCloudKD ExdiSample Target");
    memset(&pgti->dbc, 0, sizeof(pgti->dbc));
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetRunStatus( 
    /* [out] */ PRUN_STATUS_TYPE persCurrent,
    /* [out] */ PHALT_REASON_TYPE pehrCurrent,
    /* [out] */ ADDRESS_TYPE *pCurrentExecAddress,
    /* [out] */ DWORD *pdwExceptionCode,
    /* [out] */ DWORD *pdwProcessorNumberOfLastEvent)
{
    try
    {
        CheckAndZeroOutArgs(persCurrent, pehrCurrent, pCurrentExecAddress, pdwExceptionCode, pdwProcessorNumberOfLastEvent);

        *persCurrent = rsHalted;
        *pehrCurrent = hrUser;

        *pCurrentExecAddress = GetCurrentExecutionAddress(pdwProcessorNumberOfLastEvent);
	    *pdwExceptionCode = 0;

        return S_OK;
    }
    CATCH_AND_RETURN_HRESULT;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::Run( void)
{
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::Halt( void)
{
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::DoSingleStep(DWORD dwProcessorNumber)
{
	UNREFERENCED_PARAMETER(dwProcessorNumber);
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::Reboot( void)
{
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetNbCodeBpAvail( 
    /* [out] */ DWORD *pdwNbHwCodeBpAvail,
    /* [out] */ DWORD *pdwNbSwCodeBpAvail)
{
    if (pdwNbHwCodeBpAvail == nullptr || pdwNbSwCodeBpAvail == nullptr)
    {
        return E_POINTER;
    }

    *pdwNbHwCodeBpAvail = *pdwNbSwCodeBpAvail = 0;
    return S_OK;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetNbDataBpAvail( 
    /* [out] */ DWORD *pdwNbDataBpAvail)
{
    if (pdwNbDataBpAvail == nullptr)
    {
        return E_POINTER;
    }

    *pdwNbDataBpAvail = 0;
    return S_OK;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::AddCodeBreakpoint( 
    /* [in] */ ADDRESS_TYPE Address,
    /* [in] */ CBP_KIND cbpk,
    /* [in] */ MEM_TYPE mt,
    /* [in] */ DWORD dwExecMode,
    /* [in] */ DWORD dwTotalBypassCount,
    /* [out] */ IeXdiCodeBreakpoint3 **ppieXdiCodeBreakpoint)
{
	UNREFERENCED_PARAMETER(Address);
	UNREFERENCED_PARAMETER(cbpk);
	UNREFERENCED_PARAMETER(mt);
	UNREFERENCED_PARAMETER(dwExecMode);
	UNREFERENCED_PARAMETER(dwTotalBypassCount);
	UNREFERENCED_PARAMETER(ppieXdiCodeBreakpoint);
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::DelCodeBreakpoint( 
    /* [in] */ IeXdiCodeBreakpoint3 *pieXdiCodeBreakpoint)
{
	UNREFERENCED_PARAMETER(pieXdiCodeBreakpoint);
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::AddDataBreakpoint( 
    /* [in] */ ADDRESS_TYPE Address,
    /* [in] */ ADDRESS_TYPE AddressMask,
    /* [in] */ DWORD dwData,
    /* [in] */ DWORD dwDataMask,
    /* [in] */ BYTE bAccessWidth,
    /* [in] */ MEM_TYPE mt,
    /* [in] */ BYTE bAddressSpace,
    /* [in] */ DATA_ACCESS_TYPE da,
    /* [in] */ DWORD dwTotalBypassCount,
    /* [out] */ IeXdiDataBreakpoint3 **ppieXdiDataBreakpoint)
{
	UNREFERENCED_PARAMETER(Address);
	UNREFERENCED_PARAMETER(AddressMask);
	UNREFERENCED_PARAMETER(dwData);
	UNREFERENCED_PARAMETER(dwDataMask);
	UNREFERENCED_PARAMETER(bAccessWidth);
	UNREFERENCED_PARAMETER(mt);
	UNREFERENCED_PARAMETER(bAddressSpace);
	UNREFERENCED_PARAMETER(da);
	UNREFERENCED_PARAMETER(dwTotalBypassCount);
	UNREFERENCED_PARAMETER(ppieXdiDataBreakpoint);
	METHOD_NOT_IMPLEMENTED;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::DelDataBreakpoint( 
    /* [in] */ IeXdiDataBreakpoint3 *pieXdiDataBreakpoint)
{
	UNREFERENCED_PARAMETER(pieXdiDataBreakpoint);
	METHOD_NOT_IMPLEMENTED;
}
        
       
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::StartNotifyingRunChg( 
    /* [in] */ IeXdiClientNotifyRunChg3 *pieXdiClientNotifyRunChg,
    /* [out] */ DWORD *pdwConnectionCookie)
{
	if (pieXdiClientNotifyRunChg == nullptr)
	{
		return E_POINTER;
	}

    try
    {
        CheckAndZeroOutArgs(pdwConnectionCookie);
        *pdwConnectionCookie = 1;
	    return S_OK;
    }
    CATCH_AND_RETURN_HRESULT;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::StopNotifyingRunChg( 
    /* [in] */ DWORD dwConnectionCookie)
{
	UNREFERENCED_PARAMETER(dwConnectionCookie);
	return S_OK;
}

static HRESULT SafeArrayFromByteArray(_In_reads_bytes_(arraySize) const char *pByteArray, size_t arraySize, _Out_ SAFEARRAY **pSafeArray)
{
    assert(pByteArray != nullptr && pSafeArray != nullptr);
    ULONG copiedSize = static_cast<ULONG>(arraySize);
    *pSafeArray = SafeArrayCreateVector(VT_UI1, 0, copiedSize);
    if (*pSafeArray == nullptr)
    {
        return E_FAIL;
    }

    memcpy((*pSafeArray)->pvData, pByteArray, copiedSize);

    return S_OK;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::ReadVirtualMemory( 
    /* [in] */ ADDRESS_TYPE Address,
    /* [in] */ DWORD dwBytesToRead,
    SAFEARRAY * *pbReadBuffer)
{
    try
    {	
		if (pbReadBuffer == nullptr)
        {
            return E_POINTER;
        }

        SimpleCharBuffer buffer = m_pKDController->ReadMemory(Address, dwBytesToRead);
        return SafeArrayFromByteArray(buffer.GetInternalBuffer(), buffer.GetLength(), pbReadBuffer);
    }
    CATCH_AND_RETURN_HRESULT;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::WriteVirtualMemory( 
        /* [in] */ ADDRESS_TYPE Address,
        /* [in] */ SAFEARRAY * pBuffer,
        /* [out] */ DWORD *pdwBytesWritten)
{
	BOOLEAN bResult = FALSE;

	if (pBuffer == nullptr || pdwBytesWritten == nullptr)
    {
        return E_POINTER;
    }

    if (pBuffer->cDims != 1)
    {
        return E_INVALIDARG;
    }

    VARTYPE dataType;
    if (FAILED(SafeArrayGetVartype(pBuffer, &dataType)) || dataType != VT_UI1)
    {
        return E_INVALIDARG;
    }
    
    ULONG bufferSize = pBuffer->rgsabound[0].cElements;
    PVOID pRawBuffer = pBuffer->pvData;
	DWORD dwBytesWritten = *pdwBytesWritten;

	bResult = m_pKDController->WriteMemory(Address, pRawBuffer, bufferSize);

	if (bResult == TRUE) {
		*pdwBytesWritten = bufferSize;
		return S_OK;
	}
	*pdwBytesWritten = 0;

	return  E_FAIL;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::ReadPhysicalMemoryOrPeriphIO( 
        /* [in] */ ADDRESS_TYPE Address,
        /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
        /* [in] */ DWORD dwBytesToRead,
        /* [out] */ SAFEARRAY * *pReadBuffer)
{
	try
	{
		BOOLEAN bReadMemmory = TRUE;

		if (pReadBuffer == nullptr)
		{
			return E_POINTER;
		}

		SimpleCharBuffer buffer;
		if (!buffer.TryEnsureCapacity(dwBytesToRead))
		{
			throw _com_error(E_OUTOFMEMORY);
		}

		buffer.SetLength(dwBytesToRead);

		bReadMemmory = SdkHvmmReadPhysicalMemory(g_Partition, Address, dwBytesToRead, buffer.GetInternalBuffer(), g_MemoryReadInterfaceType);

		if (!bReadMemmory)
		{
			throw _com_error(E_OUTOFMEMORY);
		}

		return SafeArrayFromByteArray(buffer.GetInternalBuffer(), buffer.GetLength(), pReadBuffer);
	}
	CATCH_AND_RETURN_HRESULT;
	
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::WritePhysicalMemoryOrPeriphIO( 
        /* [in] */ ADDRESS_TYPE Address,
        /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
        /* [in] */ SAFEARRAY * pBuffer,
        /* [out] */ DWORD *pdwBytesWritten)
{
	BOOLEAN bResult = FALSE;

	if (pBuffer == nullptr || pdwBytesWritten == nullptr)
	{
		return E_POINTER;
	}

	if (pBuffer->cDims != 1)
	{
		return E_INVALIDARG;
	}

	VARTYPE dataType;
	if (FAILED(SafeArrayGetVartype(pBuffer, &dataType)) || dataType != VT_UI1)
	{
		return E_INVALIDARG;
	}

	ULONG bufferSize = pBuffer->rgsabound[0].cElements;
	PVOID pRawBuffer = pBuffer->pvData;
	DWORD dwBytesWritten = *pdwBytesWritten;
	
	bResult = SdkHvmmWritePhysicalMemory(g_Partition, Address, bufferSize, pRawBuffer, g_MemoryWriteInterfaceType);
	
    UNREFERENCED_PARAMETER(AddressSpace);

	if (bResult == TRUE) {
		*pdwBytesWritten = bufferSize;
		return S_OK;
	}
	*pdwBytesWritten = 0;

	return  E_FAIL;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::Ioctl( 
        /* [in] */ SAFEARRAY * pInputBuffer,
        /* [in] */ DWORD dwBuffOutSize,
        /* [out] */ SAFEARRAY * *pOutputBuffer)
{
    UNREFERENCED_PARAMETER(pInputBuffer);
    UNREFERENCED_PARAMETER(dwBuffOutSize);
    UNREFERENCED_PARAMETER(pOutputBuffer);
    return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetLastHitBreakpoint( 
    /* [out] */ DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT *pBreakpointInformation)
{
    UNREFERENCED_PARAMETER(pBreakpointInformation);
    return E_NOTIMPL;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetKPCRForProcessor( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [out] */ ULONG64 *pKPCRPointer)
{
    if (pKPCRPointer == nullptr)
    {
        return E_POINTER;
    }

    DWORD totalProcessors = 0;
	HRESULT result = GetNumberOfProcessors(&totalProcessors);
	if (FAILED(result))
	{
		return result;
	}

	if (dwProcessorNumber >= totalProcessors)
	{
		return E_INVALIDARG;
	}

    //On a real ARM device the KPCR can be obtained by reading the TPIDRPRW register 
    //and clearing 12 least-significant bits in the value.
	//*reinterpret_cast<ULONG64 *>(pbBufferOut) = ReadCoprocessorRegister(TPIDRPRW) & ~0xFFF;
	*pKPCRPointer = m_pKDController->GetKPCRAddress(dwProcessorNumber);
	return S_OK;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::ReadKdVersionBlock( 
        /* [in] */ DWORD dwBufferSize,
        /* [out] */ SAFEARRAY * *pKdVersionBlockBuffer)
{
    UNREFERENCED_PARAMETER(dwBufferSize);
    UNREFERENCED_PARAMETER(pKdVersionBlockBuffer);
    return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::ReadMSR( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [in] */ DWORD dwRegisterIndex,
    /* [out] */ ULONG64 *pValue)
{
	switch (dwRegisterIndex)
	{
	case 0xC0000080: *pValue = KDController::GetRegisterValue(HvX64RegisterEfer, dwProcessorNumber); break;
	case 0xC0000081: *pValue = KDController::GetRegisterValue(HvX64RegisterStar, dwProcessorNumber); break;
	case 0xC0000082: *pValue = KDController::GetRegisterValue(HvX64RegisterLstar, dwProcessorNumber); break;
	case 0xC0000083: *pValue = KDController::GetRegisterValue(HvX64RegisterCstar, dwProcessorNumber); break;
	case 0xC0000084: *pValue = KDController::GetRegisterValue(HvX64RegisterSfmask, dwProcessorNumber); break;
	case 0xC0000102: *pValue = KDController::GetRegisterValue(HvX64RegisterKernelGsBase, dwProcessorNumber); break;
	case 0x40000001: *pValue = KDController::GetRegisterValue(HvX64RegisterHypercall, dwProcessorNumber); break;
	case 0x40000082: *pValue = KDController::GetRegisterValue(HvX64RegisterSifp, dwProcessorNumber); break;
	case 0x40000083: *pValue = KDController::GetRegisterValue(HvX64RegisterSipp, dwProcessorNumber); break;
	case 0x40000090: *pValue = KDController::GetRegisterValue(HvX64RegisterSint0, dwProcessorNumber); break;
	case 0x40000091: *pValue = KDController::GetRegisterValue(HvX64RegisterSint1, dwProcessorNumber); break;
	case 0x40000092: *pValue = KDController::GetRegisterValue(HvX64RegisterSint2, dwProcessorNumber); break;
	case 0x40000093: *pValue = KDController::GetRegisterValue(HvX64RegisterSint3, dwProcessorNumber); break;
	case 0x40000094: *pValue = KDController::GetRegisterValue(HvX64RegisterSint4, dwProcessorNumber); break;
	case 0x40000095: *pValue = KDController::GetRegisterValue(HvX64RegisterSint5, dwProcessorNumber); break;

	default:
		return E_NOTIMPL;
		break;
	}

    return S_OK;
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::WriteMSR( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [in] */ DWORD dwRegisterIndex,
    /* [in] */ ULONG64 value)
{
	switch (dwRegisterIndex)
	{
	case 0xC0000080: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterEfer, value); break;
	case 0xC0000081: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterStar, value); break;
	case 0xC0000082: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterLstar, value); break;
	case 0xC0000083: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterCstar, value); break;
	case 0xC0000084: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSfmask, value); break;
	case 0xC0000102: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterKernelGsBase, value); break;
	case 0x40000001: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterHypercall, value); break;
	case 0x40000082: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSifp, value); break;
	case 0x40000083: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSipp, value); break;
	case 0x40000090: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint0, value); break;
	case 0x40000091: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint1, value); break;
	case 0x40000092: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint2, value); break;
	case 0x40000093: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint3, value); break;
	case 0x40000094: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint4, value); break;
	case 0x40000095: KDController::SetRegisterValue(dwProcessorNumber, HvX64RegisterSint5, value); break;

	default:
		return E_NOTIMPL;
		break;
	}

	return S_OK;
}


// ------------------------------------------------------------------------------


HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [out][in] */ PCONTEXT_ARM4 pContext)
{
	return GetContextEx(dwProcessorNumber, pContext);
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [in] */ CONTEXT_ARM4 Context)
{
	return SetContextEx(dwProcessorNumber, &Context);
}

// ------------------------------------------------------------------------------

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [out][in] */ PCONTEXT_X86_64 pContext)
{
	return GetContextEx(dwProcessorNumber, pContext);
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [in] */ CONTEXT_X86_64 Context)
{
	return SetContextEx(dwProcessorNumber, &Context);
}

// ------------------------------------------------------------------------------

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [out][in] */ PCONTEXT_ARMV8ARCH64 pContext)
{
	return GetContextEx(dwProcessorNumber, pContext);
}
        
HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContext( 
    /* [in] */ DWORD dwProcessorNumber,
    /* [in] */ CONTEXT_ARMV8ARCH64 context)
{
	return SetContextEx(dwProcessorNumber, &context);
}

// ------------------------------------------------------------------------------

HRESULT CStaticExdiSampleServer::FinalConstruct()
{
    try
    {
        //TCHAR KDDirectory[MAX_PATH] = _T("C:\\Program Files (x86)\\Windows Kits\\10\\Debuggers\\x64");
		TCHAR KDDirectory[MAX_PATH] = _T("C:\\Distr\\Test\\WinDBG101903x64");
		
        //TCHAR KDArguments[1024] = _T("-k usb:targetname=surface");
		//TCHAR KDArguments[1024] = _T("-v -t -z C:\\Windows\\hvdd.dmp");
		TCHAR KDArguments[1024] = _T("-v -t -z C:\\Windows\\hvdd.dmp");
		DWORD directoryLength = 0;
		DWORD argumentsLength = 0;


        //DWORD directoryLength = GetEnvironmentVariable(_T("EXDI_KD_DIRECTORY"), KDDirectory, _countof(KDDirectory));
        //DWORD argumentsLength = GetEnvironmentVariable(_T("EXDI_KD_ARGUMENTS"), KDArguments, _countof(KDArguments));

        //Message for DBG purposes

		#if 0
					MessageBox(0, _T("Warning: the EXDI_KD_DIRECTORY or EXDI_KD_ARGUMENTS environment variables \
					are not defined."), _T("LiveCloudKD EXDI Sample"), MB_OKCANCEL | MB_ICONWARNING | MB_TOPMOST);
		#endif		
//		if (directoryLength == 0 || argumentsLength == 0)
//        {
//            if (MessageBox(0, _T("Warning: the EXDI_KD_DIRECTORY or EXDI_KD_ARGUMENTS environment variables \
//are not defined."), _T("LiveCloudKD EXDI Sample"), MB_OKCANCEL | MB_ICONWARNING | MB_TOPMOST) != IDOK)
//            {
//                return E_ABORT; //temp comment
//            }
//        }

		HRESULT result = S_OK;

		if (g_LiveCloudKdIsLoaded == FALSE) {

			ULONG PartitionCount = 0;
			HKEY hKey;
			ULONG VmId = 0;
			ULONG dwSize = sizeof(DWORD);
			LONG nResult;
			DWORD dwType = REG_DWORD;

			PHVDD_PARTITION Partitions = SdkGetPartitions(&PartitionCount, g_MemoryReadInterfaceType, FALSE); //plugin is started from LiveCloudKd. Driver is running already.

			nResult = RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Services\\hvmm\\Parameters", 0, KEY_READ, &hKey);

			if (nResult == ERROR_SUCCESS)
			{
				nResult = RegQueryValueEx(hKey, L"VmId", NULL, &dwType, (LPBYTE)&VmId, &dwSize);	
			}

			RegCloseKey(hKey);
			
			if (nResult != ERROR_SUCCESS) {
				MessageBox(0,
					_T("Open registry key VmId was failed"),
					_T("EXDI LiveCloudKd plugin"),
					MB_ICONERROR);
			}

			g_Partition = &Partitions[VmId];
			if (!SdkFillHvddPartitionStructure(g_Partition)) {
				MessageBox(0,
					_T("SdkFillHvddPartitionStructure was failed"),
					_T("EXDI LiveCloudKd plugin"),
					MB_ICONERROR);
				result = E_FAIL;
			}
			
			g_LiveCloudKdIsLoaded = TRUE;
		}

        m_pKDController = AsynchronousKDController::Create(KDDirectory, KDArguments);
        m_pKDController->SetTextHandler(new KDCommandLogger(true));

        std::string targetResponse; 
        std::string effectiveMachine = m_pKDController->GetEffectiveMachine(&targetResponse, g_Partition);
        if (effectiveMachine == "ARM")
        {
            size_t archType = targetResponse.find("ARM 64");
            if (archType == std::string::npos)
            {
                m_detectedProcessorFamily = PROCESSOR_FAMILY_ARM;
            }
            else
            {
                m_detectedProcessorFamily = PROCESSOR_FAMILY_ARMV8ARCH64;            
            }
        }
        else if (effectiveMachine == "x64")
        {
            m_detectedProcessorFamily = PROCESSOR_FAMILY_X86;
        }
        else
        {
            MessageBox(0,
                       _T("KD reported an unsupported machine type. This example supports ARM and x64 only"),
                       _T("EXDI LiveCloudKd plugin"),
                       MB_ICONERROR);
            result = E_FAIL;
        }

        return result;
    }
    CATCH_AND_RETURN_HRESULT;
}

void CStaticExdiSampleServer::FinalRelease()
{
    delete m_pKDController;
    m_pKDController = nullptr;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetNumberOfProcessors( 
    /* [out] */ DWORD *pdwNumberOfProcessors)
{
	if (pdwNumberOfProcessors == nullptr)
	{
		return E_POINTER;
	}
	try
	{
		*pdwNumberOfProcessors = m_pKDController->GetProcessorCount();
		return S_OK;
	}
	CATCH_AND_RETURN_HRESULT;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContextEx(_In_ DWORD processorNumber, _Inout_ PCONTEXT_ARM4 pContext)
{
    if (pContext == nullptr)
    {
        return E_POINTER;
    }

    try
    {
        memset(pContext, 0, sizeof(*pContext));

        std::map<std::string, std::string> registers = m_pKDController->QueryAllRegisters(processorNumber);

        pContext->R0 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r0"]));
        pContext->R1 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r1"]));
        pContext->R2 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r2"]));
        pContext->R3 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r3"]));
        pContext->R4 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r4"]));
        pContext->R5 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r5"]));
        pContext->R6 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r6"]));
        pContext->R7 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r7"]));
        pContext->R8 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r8"]));
        pContext->R9 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r9"]));
        pContext->R10 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r10"]));
        pContext->R11 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r11"]));
        pContext->R12 = static_cast<DWORD>(KDController::ParseRegisterValue(registers["r12"]));
        pContext->Sp = static_cast<DWORD>(KDController::ParseRegisterValue(registers["sp"]));
        pContext->Lr = static_cast<DWORD>(KDController::ParseRegisterValue(registers["lr"]));
        pContext->Pc = static_cast<DWORD>(KDController::ParseRegisterValue(registers["pc"]));
        pContext->Psr = static_cast<DWORD>(KDController::ParseRegisterValue(registers["psr"]));

        pContext->RegGroupSelection.fControlRegs = TRUE;
        pContext->RegGroupSelection.fIntegerRegs = TRUE;

        return S_OK;
    }
    CATCH_AND_RETURN_HRESULT;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContextEx(_In_ DWORD processorNumber, _In_ const CONTEXT_ARM4 *pContext)
{
    UNREFERENCED_PARAMETER(processorNumber);
    UNREFERENCED_PARAMETER(pContext);
	METHOD_NOT_IMPLEMENTED;
}

// ------------------------------------------------------------------------------

#define AMD64_CONTEXT_AMD64             0x00100000L
#define AMD64_CONTEXT_CONTROL           (AMD64_CONTEXT_AMD64 | 0x00000001L)
#define AMD64_CONTEXT_INTEGER           (AMD64_CONTEXT_AMD64 | 0x00000002L)
#define AMD64_CONTEXT_SEGMENTS          (AMD64_CONTEXT_AMD64 | 0x00000004L)
#define AMD64_CONTEXT_FLOATING_POINT    (AMD64_CONTEXT_AMD64 | 0x00000008L)
#define AMD64_CONTEXT_DEBUG_REGISTERS   (AMD64_CONTEXT_AMD64 | 0x00000010L)
#define AMD64_CONTEXT_FULL \
    (AMD64_CONTEXT_CONTROL | AMD64_CONTEXT_INTEGER | AMD64_CONTEXT_FLOATING_POINT)


HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContextEx(_In_ DWORD processorNumber, _Inout_ PCONTEXT_X86_64 pContext)
{
    if (pContext == nullptr)
    {
        return E_POINTER;
    }

    try
    {
        memset(pContext, 0, sizeof(CONTEXT_X86_64));

        //We do not fetch the actual descriptors, thus we mark them as invalid
        pContext->DescriptorCs.SegFlags = static_cast<DWORD>(-1);
        pContext->DescriptorSs.SegFlags = static_cast<DWORD>(-1);
        pContext->DescriptorGs.SegFlags = static_cast<DWORD>(-1);
        pContext->DescriptorFs.SegFlags = static_cast<DWORD>(-1);
        pContext->DescriptorEs.SegFlags = static_cast<DWORD>(-1);
        pContext->DescriptorDs.SegFlags = static_cast<DWORD>(-1);

        //std::map<std::string, std::string> registers = m_pKDController->QueryAllRegisters(processorNumber);

        pContext->Rax = KDController::GetRegisterValue(HvX64RegisterRax, processorNumber);
        pContext->Rbx = KDController::GetRegisterValue(HvX64RegisterRbx, processorNumber);
        pContext->Rcx = KDController::GetRegisterValue(HvX64RegisterRcx, processorNumber);
        pContext->Rdx = KDController::GetRegisterValue(HvX64RegisterRdx, processorNumber);
        pContext->Rsi = KDController::GetRegisterValue(HvX64RegisterRsi, processorNumber);
        pContext->Rdi = KDController::GetRegisterValue(HvX64RegisterRdi, processorNumber);
        pContext->Rip = KDController::GetRegisterValue(HvX64RegisterRip, processorNumber);
        pContext->Rsp = KDController::GetRegisterValue(HvX64RegisterRsp, processorNumber);
        pContext->Rbp = KDController::GetRegisterValue(HvX64RegisterRbp, processorNumber);
        pContext->R8  = KDController::GetRegisterValue(HvX64RegisterR8, processorNumber);
        pContext->R9  = KDController::GetRegisterValue(HvX64RegisterR9, processorNumber);
        pContext->R10 = KDController::GetRegisterValue(HvX64RegisterR10, processorNumber);
        pContext->R11 = KDController::GetRegisterValue(HvX64RegisterR11, processorNumber);
        pContext->R12 = KDController::GetRegisterValue(HvX64RegisterR12, processorNumber);
        pContext->R13 = KDController::GetRegisterValue(HvX64RegisterR13, processorNumber);
        pContext->R14 = KDController::GetRegisterValue(HvX64RegisterR14, processorNumber);
        pContext->R15 = KDController::GetRegisterValue(HvX64RegisterR15, processorNumber);

        pContext->SegCs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCs, processorNumber));
        pContext->SegSs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterSs, processorNumber));
        pContext->SegDs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterDs, processorNumber));
        pContext->SegEs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterEs, processorNumber));
        pContext->SegFs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterFs, processorNumber));
        pContext->SegGs = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterGs, processorNumber));

		pContext->RegCr3 = g_Partition->KiExcaliburData.DirectoryTableBase;
		//pContext->RegCr3 = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCr3, processorNumber));
		pContext->RegCr0 = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCr0, processorNumber));
		pContext->RegCr4 = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCr4, processorNumber));
		pContext->RegCr2 = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCr2, processorNumber));
		pContext->RegCr8 = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterCr8, processorNumber));
		pContext->IDTBase = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterIdtr, processorNumber));
		pContext->GDTBase = static_cast<DWORD>(KDController::GetRegisterValue(HvX64RegisterGdtr, processorNumber));

        pContext->EFlags = KDController::GetRegisterValue(HvX64RegisterRflags, processorNumber);

        pContext->RegGroupSelection.fFloatingPointRegs = FALSE;
        pContext->RegGroupSelection.fDebugRegs = FALSE;
        pContext->RegGroupSelection.fSSERegisters = FALSE;
        pContext->RegGroupSelection.fSystemRegisters = FALSE;

        pContext->RegGroupSelection.fIntegerRegs = TRUE;
        pContext->RegGroupSelection.fSegmentRegs = TRUE;

        pContext->ModeFlags = AMD64_CONTEXT_AMD64 | AMD64_CONTEXT_CONTROL | AMD64_CONTEXT_INTEGER | AMD64_CONTEXT_SEGMENTS;
        return S_OK;
    }
    CATCH_AND_RETURN_HRESULT;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContextEx(_In_ DWORD processorNumber, _In_ const CONTEXT_X86_64 *pContext)
{
	UNREFERENCED_PARAMETER(processorNumber);
	UNREFERENCED_PARAMETER(pContext);
	METHOD_NOT_IMPLEMENTED;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetContextEx(_In_ DWORD processorNumber, _In_ const CONTEXT_ARMV8ARCH64 *pContext)
{
	UNREFERENCED_PARAMETER(processorNumber);
	UNREFERENCED_PARAMETER(pContext);
	METHOD_NOT_IMPLEMENTED;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::GetContextEx(_In_ DWORD processorNumber, _Inout_ PCONTEXT_ARMV8ARCH64 pContext)
{
    if (pContext == nullptr)
    {
        return E_POINTER;
    }

    try
    {
        memset(pContext, 0, sizeof(*pContext));

        std::map<std::string, std::string> registers = GetKDController()->QueryAllRegisters(processorNumber);

        for (int i = 0; i < ARMV8ARCH64_MAX_INTERGER_REGISTERS; i++)
        {
            char registerNameStr[4];
            sprintf_s(registerNameStr, _countof(registerNameStr), "x%d", i);
			std::string registerName(registerNameStr);
            pContext->X[i] = KDController::ParseRegisterValue(registers[registerName]);
        }
        pContext->Fp = KDController::ParseRegisterValue(registers["fp"]);
        pContext->Lr = KDController::ParseRegisterValue(registers["lr"]);
        pContext->Sp = KDController::ParseRegisterValue(registers["sp"]);
        pContext->Pc = KDController::ParseRegisterValue(registers["pc"]);
        pContext->Sp = KDController::ParseRegisterValue(registers["sp"]);
        pContext->Psr = KDController::ParseRegisterValue(registers["psr"]);

        pContext->RegGroupSelection.fControlRegs = TRUE;
        pContext->RegGroupSelection.fIntegerRegs = TRUE;

        return S_OK;
    }
    CATCH_AND_RETURN_HRESULT;
}

ADDRESS_TYPE CStaticExdiSampleServer::GetCurrentExecutionAddress(_Out_ DWORD *pProcessorNumberOfLastEvent)
{
    assert(pProcessorNumberOfLastEvent != nullptr);
    *pProcessorNumberOfLastEvent = m_pKDController->GetLastKnownActiveCpu();
    ADDRESS_TYPE result;
   
    if (m_detectedProcessorFamily == PROCESSOR_FAMILY_ARM || m_detectedProcessorFamily == PROCESSOR_FAMILY_ARMV8ARCH64)
    {
		std::map<std::string, std::string> registers = m_pKDController->QueryAllRegisters(*pProcessorNumberOfLastEvent);
		result = KDController::ParseRegisterValue(registers["pc"]);
    }
    else if (m_detectedProcessorFamily == PROCESSOR_FAMILY_X86)
    {
        result = KDController::GetRegisterValue(HvX64RegisterRip, *pProcessorNumberOfLastEvent);
    }
    else
    {
        throw std::exception("Unknown CPU architecture. Please add support for it");
    }

    return result;
}

HRESULT STDMETHODCALLTYPE CStaticExdiSampleServer::SetKeepaliveInterface(/* [in] */ IeXdiKeepaliveInterface3 *pKeepalive)
{
	UNREFERENCED_PARAMETER(pKeepalive);
    return E_NOTIMPL;
}