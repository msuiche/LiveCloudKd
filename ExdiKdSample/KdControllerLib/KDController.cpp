//----------------------------------------------------------------------------
//
// KDController.h
//
// A class allowing running KD.EXE and sending commands to it.
//
// Copyright (c) Microsoft. All rights reserved.
//
//----------------------------------------------------------------------------

#include "stdafx.h"
#include "KDController.h"
#include "ExceptionHelpers.h"
#include "HandleHelpers.h"
#include <new>
#include <algorithm>
#include <string>

extern PHVDD_PARTITION  g_Partition;

using namespace KDControllerLib;

KDController::KDController(_In_ HANDLE processHandle, _In_ HANDLE stdInput, _In_ HANDLE stdOutput)
    : m_processHandle(processHandle)
    , m_stdInput(stdInput)
    , m_stdOutput(stdOutput)
    , m_stdoutReader(stdOutput)
    , m_pTextHandler(nullptr)
    , m_kdPromptRegex("\n(|[0-9]+: )kd> ")  //The prompt can be either "kd> " or "#: kd>" where # is the core number.
	, m_cachedProcessorCount(0)
    , m_lastKnownActiveCpu(0)
{
    //If we run inside the WinDbg process and WinDbg gets closed without ending the session cleanly, we still want
    //to terminate the underlying kd.exe in order to make the machine connection available for subsequent debug
    //sessions. Assigning the process to a job with a JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE flag ensures exactly that:
    //when the job handle is closed (either explicitly or implicitly when our process exits), the kd process will
    //be terminated.
    //HANDLE job = CreateJobObject(NULL, NULL);
    //if (job != nullptr)
    //{
    //    JOBOBJECT_EXTENDED_LIMIT_INFORMATION jobInformation = { 0 };
    //    jobInformation.BasicLimitInformation.LimitFlags = JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE | JOB_OBJECT_LIMIT_SILENT_BREAKAWAY_OK;
    //    if (SetInformationJobObject(job, JobObjectExtendedLimitInformation, &jobInformation, sizeof(jobInformation)))
    //    {
    //        if (AssignProcessToJobObject(job, m_processHandle.Get()))
    //        {
    //            m_jobHandle.Attach(job);
    //        }
    //    }

    //    if (!m_jobHandle.IsValid())
    //    {
    //        CloseHandle(job);
    //        job = nullptr;
    //    }
    //}
}

void KDController::ShutdownKD()
{
    if (m_stdInput.IsValid() && m_stdOutput.IsValid())
    {
        char ctrlB = 2;
        DWORD done;
        WriteFile(m_stdInput.Get(), &ctrlB, 1, &done, nullptr);
        assert(done == 1);

        m_stdInput.Close();
        m_stdOutput.Close();

        if (WaitForSingleObject(m_processHandle.Get(), 100) != WAIT_OBJECT_0)
        {
            //If KD.EXE did not exit after receiving Ctrl-B due to some reason we terminate it forcibly
            //so that it releases the pipe handle and we can start another instance.
            BOOL terminated = TerminateProcess(m_processHandle.Get(), static_cast<UINT>(-1));
            assert(terminated == TRUE);
            UNREFERENCED_PARAMETER(terminated);
        }
    }
}

KDController::~KDController()
{
    ShutdownKD();

    delete m_pTextHandler;
    m_pTextHandler = nullptr;
}

void KDController::SetTextHandler(_In_ IKDTextHandler *pHandler)
{
    assert(pHandler != m_pTextHandler && pHandler != nullptr);
    delete m_pTextHandler;
    m_pTextHandler = pHandler;
}

std::string KDController::ExecuteCommand(_In_ LPCSTR pCommand)
{
    if (pCommand == nullptr)
    {
        throw _com_error(E_POINTER);
    }

    if (m_pTextHandler != nullptr)
    {
        m_pTextHandler->HandleText(KDTextType::Command, pCommand);
    }

    DWORD bytesWritten;

    if (!WriteFile(m_stdInput.Get(), pCommand, static_cast<DWORD>(strlen(pCommand)), &bytesWritten, nullptr))
    {
        throw _com_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    if (!WriteFile(m_stdInput.Get(), "\n", 1, &bytesWritten, nullptr))
    {
        throw _com_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    std::string result = ReadStdoutUntilDelimiter();
    
    if (m_pTextHandler != nullptr)
    {
        m_pTextHandler->HandleText(KDTextType::CommandOutput, result.c_str());
    }

    return result;
}

std::string KDController::ReadStdoutUntilDelimiter()
{
    BufferedStreamReader::MatchCollection matches;
    std::string result = m_stdoutReader.Read(m_kdPromptRegex, &matches);
    if (matches.size() >= 1)
    {
        //m_lastKnownActiveCpu = atoi(matches[0].c_str());
		m_lastKnownActiveCpu = 0;
    }
    return result;
}

void KDController::WaitForInitialPrompt()
{
    ReadStdoutUntilDelimiter();
}

std::map<std::string, std::string> KDController::QueryAllRegisters(_In_ unsigned processorNumber)
{
    //We expect a multi-line reply looking like 'rax=00...0 rbx=00...1'.
    //As we want to keep this parser as simple as possible, we will simply search for all instances of the '='
    //sign and treat the word to the left as the register name and the word to the right as the register value.

	char command[32] = "r";
	if (processorNumber != -1)
	{
		_snprintf_s(command, _TRUNCATE, "%dr", processorNumber);
	}

    std::string reply = ExecuteCommand(command);
    std::map<std::string, std::string> result;

    //Once we replace newlines with spaces we don't need to care how many registers are displayed per line of output.
    std::replace(reply.begin(), reply.end(), '\n', ' ');

    //Iterate over all occurances of the '=' sign in the string
    for(size_t i = reply.find('='); i != std::string::npos; i = reply.find('=', i + 1))
    {
        size_t registerNameStart = reply.rfind(' ', i);
        size_t registerValueEnd = reply.find(' ', i);

        if (registerNameStart == std::string::npos)
        {
            registerNameStart = 0;  //The very first register.
        }
        else
        {
            ++registerNameStart;
        }

        result[reply.substr(registerNameStart, i - registerNameStart)] = 
                reply.substr(i + 1, registerValueEnd - i - 1);
    }

    return result;
}

BOOLEAN KDController::SetRegisterValue(_In_ DWORD ProcessorNumber, _In_ HV_REGISTER_NAME RegisterName,  _In_ ULONG64 RegisterValue)
{
	ULARGE_INTEGER result = { 0 };

	BOOLEAN bGetVirtualProcessorState;

	bGetVirtualProcessorState = SdkHvmmWriteVpRegister(g_Partition->VidVmInfo.PartitionId, 0, RegisterName, RegisterValue);

	if (bGetVirtualProcessorState)
	{
		return TRUE;
	}
	else
	{
		throw _com_error(E_FAIL);
	}
	return FALSE;
}

void KDController::SetRegisters(_In_ unsigned processorNumber, _In_ const std::map<std::string, AddressType> &registerValues)
{
    for (auto kv : registerValues)
    {
        char command[256];
        if (processorNumber == -1)
            _snprintf_s(command, _TRUNCATE, "r %s=%I64x ; .echo", kv.first.c_str(), kv.second);
        else
            _snprintf_s(command, _TRUNCATE, "%dr %s=%I64x ; .echo", processorNumber, kv.first.c_str(), kv.second);

        std::string reply = ExecuteCommand(command);
        UNREFERENCED_PARAMETER(reply);
    }
}

SimpleCharBuffer KDController::ReadMemory(_In_ AddressType address, _In_ size_t size)
{
	BOOLEAN bReadMemmory = TRUE;

    SimpleCharBuffer result;
    if (!result.TryEnsureCapacity(size))
    {
        throw _com_error(E_OUTOFMEMORY);
    }

	result.SetLength(size);

	bReadMemmory = SdkMmReadVirtualAddress(g_Partition, address, result.GetInternalBuffer(), (ULONG) size);

	if (
		((address >= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock) && 
		(address <= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock + sizeof(KDDEBUGGER_DATA64))) |
		((address+size >= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock) &&
		(address+size <= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock + sizeof(KDDEBUGGER_DATA64)))
		)
	{
		ULONG64 StartOffset = address - (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock;
		PVOID pDecypheringKDBG = (PVOID) g_Partition->KiExcaliburData.KdDebuggerDataBlockBlock;
		RtlCopyMemory(result.GetInternalBuffer(), (PCHAR)pDecypheringKDBG+StartOffset, size);
	}
	

	if (!bReadMemmory) 
	{
		throw _com_error(E_OUTOFMEMORY);
	}

	if (result.GetLength() >= size)
	{
		return result;
	}

    return result;
}

BOOLEAN KDController::WriteMemory(_In_ AddressType address, _In_ PVOID pRawBuffer, _In_ size_t size)
{

	BOOLEAN bWriteMemmory = TRUE;

	if (
		((address >= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock) &&
		(address <= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock + sizeof(KDDEBUGGER_DATA64))) |
			((address + size >= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock) &&
		(address + size <= (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock + sizeof(KDDEBUGGER_DATA64)))
		)
	{
		ULONG64 StartOffset = address - (ULONG64)g_Partition->KiExcaliburData.KdDebuggerDataBlock;
		PVOID pDecypheringKDBG = (PVOID)g_Partition->KiExcaliburData.KdDebuggerDataBlockBlock;
		RtlCopyMemory((PCHAR)pDecypheringKDBG + StartOffset, pRawBuffer, size);
	}
	else 
	{
		bWriteMemmory = SdkMmWriteVirtualAddress(g_Partition, address, pRawBuffer, (ULONG)size);
	}

	if (!bWriteMemmory)
	{
		throw _com_error(E_OUTOFMEMORY);
	}

	return bWriteMemmory;
}

ULONGLONG KDController::GetRegisterValue(_In_ HV_REGISTER_NAME RegisterName, _In_ DWORD ProcessorNumber)
{
	ULARGE_INTEGER result = { 0 };
	HV_REGISTER_VALUE RegisterValue = { 0 };

	BOOLEAN bGetVirtualProcessorState;

	bGetVirtualProcessorState = SdkHvmmReadVpRegister(g_Partition->VidVmInfo.PartitionId,0, RegisterName, &RegisterValue);

	if (bGetVirtualProcessorState)
	{
		result.QuadPart = RegisterValue.Reg64;
	}
	else 
	{
		throw _com_error(E_FAIL);
	}
    return result.QuadPart;
}

ULONGLONG KDController::ParseRegisterValue(_In_ const std::string& stringValue)
{
	size_t separatorIndex = stringValue.find('`');
	ULARGE_INTEGER result;
	if (separatorIndex == std::string::npos)
	{
		if (sscanf_s(stringValue.c_str(), "%I64x", &result.QuadPart) != 1)
		{
			throw _com_error(E_INVALIDARG);
		}
	}
	else
	{
		char unused;
		if (sscanf_s(stringValue.c_str(), "%x%c%x", &result.HighPart, &unused, 1, &result.LowPart) != 3)
		{
			throw _com_error(E_INVALIDARG);
		}
	}
	return result.QuadPart;
}

unsigned KDController::GetProcessorCount()
{
	m_cachedProcessorCount = g_Partition->KiExcaliburData.NumberProcessors;
	return m_cachedProcessorCount;
}

KDController::AddressType KDController::GetKPCRAddress(_In_ unsigned processorNumber)
{
	AddressType result = 0;
	result = g_Partition->KiExcaliburData.KPCRVa[processorNumber];

	return result;
}

std::string KDController::GetEffectiveMachine(_Out_opt_ std::string * pTargetResponse, _In_ PHVDD_PARTITION PartitionEntry)
{
    
	MACHINE_TYPE MachineType;
	std::string reply;

	MachineType = SdkGetMachineType(PartitionEntry);
	if (MachineType == MACHINE_AMD64) {
		reply = "x64";
	}
	else 
	{
		reply = "unknown";
	}

	return reply;
}
