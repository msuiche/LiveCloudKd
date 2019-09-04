#pragma once
#include <ntddk.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////
// Definitions.
//////////////////////////////////////////////////////////////////////////

#if DBG
#  define InjDbgPrint(Format, ...)  \
    DbgPrintEx(DPFLTR_IHVDRIVER_ID,         \
               DPFLTR_ERROR_LEVEL,          \
               Format,                      \
               __VA_ARGS__)
#else
#  define InjDbgPrint(Format, ...)
#endif

#define INJ_MEMORY_TAG ' jnI'

//////////////////////////////////////////////////////////////////////////
// Enumerations.
//////////////////////////////////////////////////////////////////////////



typedef enum _INJ_SYSTEM_DLL
{
	INJ_NOTHING_LOADED = 0x0000,
	INJ_SYSARM32_NTDLL_LOADED = 0x0001,
	INJ_SYCHPE32_NTDLL_LOADED = 0x0002,
	INJ_SYSWOW64_NTDLL_LOADED = 0x0004,
	INJ_SYSTEM32_NTDLL_LOADED = 0x0008,
	INJ_SYSTEM32_WOW64_LOADED = 0x0010,
	INJ_SYSTEM32_WOW64WIN_LOADED = 0x0020,
	INJ_SYSTEM32_WOW64CPU_LOADED = 0x0040,
	INJ_SYSTEM32_WOWARMHW_LOADED = 0x0080,
	INJ_SYSTEM32_XTAJIT_LOADED = 0x0100,
} INJ_SYSTEM_DLL;

typedef enum _INJ_ARCHITECTURE
{
  InjArchitectureX64,
  InjArchitectureARM64,
  InjArchitectureMax,

#if defined(_M_IX86)
  InjArchitectureNative = InjArchitectureX86
#elif defined (_M_AMD64)
  InjArchitectureNative = InjArchitectureX64
#elif defined (_M_ARM64)
  InjArchitectureNative = InjArchitectureARM64
#endif
} INJ_ARCHITECTURE;

typedef enum _INJ_METHOD
{
  //
  // Inject process by executing short "shellcode" which
  // calls LdrLoadDll.
  // This method always loads DLL of the same architecture
  // as the process.
  //

  InjMethodThunk,

  //
  // Inject process by directly setting LdrLoadDll as the
  // user-mode APC routine.
  // This method always loads x64 DLL into the process.
  //
  // N.B. Available only on x64.
  //

  InjMethodThunkless,

  //
  // Inject Wow64 process by redirecting path of the "wow64log.dll"
  // to the path of the "injdll".  Native processes are injected
  // as if the "thunk method" was selected (InjMethodThunk).
  //
  // This method always loads DLL of the same architecture
  // as the OS into the process.
  //

  InjMethodWow64LogReparse,
} INJ_METHOD;

typedef enum _KAPC_ENVIRONMENT
{
	OriginalApcEnvironment,
	AttachedApcEnvironment,
	CurrentApcEnvironment,
	InsertApcEnvironment
} KAPC_ENVIRONMENT;

//////////////////////////////////////////////////////////////////////////
// Structures.
//////////////////////////////////////////////////////////////////////////

typedef struct _INJ_SETTINGS
{
  //
  // Paths to the inject DLLs for each architecture.
  // Unsupported architectures (either by OS or the
  // method) can have empty string.
  //

  UNICODE_STRING  DllPath[InjArchitectureMax];

  //
  // Injection method.
  //

  INJ_METHOD      Method;
} INJ_SETTINGS, *PINJ_SETTINGS;

typedef struct _INJ_INJECTION_INFO
{
  LIST_ENTRY  ListEntry;

  //
  // Process ID.
  //

  HANDLE      ProcessId;

  //
  // Combination of INJ_SYSTEM_DLL flags indicating
  // which DLLs has been already loaded into this
  // process.
  //

  ULONG       LoadedDlls;

  //
  // If true, the process has been already injected.
  //

  BOOLEAN     IsInjected;

  //
  // If true, trigger of the queued user APC will be
  // immediately forced upon next kernel->user transition.
  //

  BOOLEAN     ForceUserApc;

  //
  // Address of LdrLoadDll routine within ntdll.dll
  // (which ntdll.dll is selected is based on the INJ_METHOD).
  //

  PVOID       LdrLoadDllRoutineAddress;

  //
  // Injection method.
  //

  INJ_METHOD  Method;
} INJ_INJECTION_INFO, *PINJ_INJECTION_INFO;

//////////////////////////////////////////////////////////////////////////
// Structures.
//////////////////////////////////////////////////////////////////////////

typedef struct _INJ_SYSTEM_DLL_DESCRIPTOR
{
	UNICODE_STRING  DllPath;
	INJ_SYSTEM_DLL  Flag;
} INJ_SYSTEM_DLL_DESCRIPTOR, * PINJ_SYSTEM_DLL_DESCRIPTOR;

typedef struct _INJ_THUNK
{
	PVOID           Buffer;
	USHORT          Length;
} INJ_THUNK, * PINJ_THUNK;

//////////////////////////////////////////////////////////////////////////
// Public functions.
//////////////////////////////////////////////////////////////////////////

NTSTATUS
NTAPI
InjInitialize(
  _In_ PDRIVER_OBJECT DriverObject,
  _In_ PUNICODE_STRING RegistryPath,
  _In_ PINJ_SETTINGS Settings
  );

VOID
NTAPI
InjDestroy(
  VOID
  );

NTSTATUS
NTAPI
InjCreateInjectionInfo(
  _In_opt_ PINJ_INJECTION_INFO* InjectionInfo,
  _In_ HANDLE ProcessId
  );

VOID
NTAPI
InjRemoveInjectionInfo(
  _In_ PINJ_INJECTION_INFO InjectionInfo,
  _In_ BOOLEAN FreeMemory
  );

VOID
NTAPI
InjRemoveInjectionInfoByProcessId(
  _In_ HANDLE ProcessId,
  _In_ BOOLEAN FreeMemory
  );

PINJ_INJECTION_INFO
NTAPI
InjFindInjectionInfo(
  _In_ HANDLE ProcessId
  );

BOOLEAN
NTAPI
InjCanInject(
  _In_ PINJ_INJECTION_INFO InjectionInfo
  );

NTSTATUS
NTAPI
InjInject(
  _In_ PINJ_INJECTION_INFO InjectionInfo
  );

//////////////////////////////////////////////////////////////////////////
// ke.h
//////////////////////////////////////////////////////////////////////////


typedef
VOID
(NTAPI* PKNORMAL_ROUTINE)(
	_In_ PVOID NormalContext,
	_In_ PVOID SystemArgument1,
	_In_ PVOID SystemArgument2
	);

typedef
VOID
(NTAPI* PKKERNEL_ROUTINE)(
	_In_ PKAPC Apc,
	_Inout_ PKNORMAL_ROUTINE* NormalRoutine,
	_Inout_ PVOID* NormalContext,
	_Inout_ PVOID* SystemArgument1,
	_Inout_ PVOID* SystemArgument2
	);

typedef
VOID
(NTAPI* PKRUNDOWN_ROUTINE) (
	_In_ PKAPC Apc
	);

NTKERNELAPI
VOID
NTAPI
KeInitializeApc(
	_Out_ PRKAPC Apc,
	_In_ PETHREAD Thread,
	_In_ KAPC_ENVIRONMENT Environment,
	_In_ PKKERNEL_ROUTINE KernelRoutine,
	_In_opt_ PKRUNDOWN_ROUTINE RundownRoutine,
	_In_opt_ PKNORMAL_ROUTINE NormalRoutine,
	_In_opt_ KPROCESSOR_MODE ApcMode,
	_In_opt_ PVOID NormalContext
);

NTKERNELAPI
BOOLEAN
NTAPI
KeInsertQueueApc(
	_Inout_ PRKAPC Apc,
	_In_opt_ PVOID SystemArgument1,
	_In_opt_ PVOID SystemArgument2,
	_In_ KPRIORITY Increment
);

NTKERNELAPI
BOOLEAN
NTAPI
KeAlertThread(
	_Inout_ PKTHREAD Thread,
	_In_ KPROCESSOR_MODE AlertMode
);

NTKERNELAPI
BOOLEAN
NTAPI
KeTestAlertThread(
	_In_ KPROCESSOR_MODE AlertMode
);

//////////////////////////////////////////////////////////////////////////
// ps.h
//////////////////////////////////////////////////////////////////////////

NTKERNELAPI
PCHAR
NTAPI
PsGetProcessImageFileName(
	_In_ PEPROCESS Process
);

NTKERNELAPI
BOOLEAN
NTAPI
PsIsProtectedProcess(
	_In_ PEPROCESS Process
);

//////////////////////////////////////////////////////////////////////////
// Function prototypes.
//////////////////////////////////////////////////////////////////////////

NTSTATUS
NTAPI
InjpQueueApc(
	_In_ KPROCESSOR_MODE ApcMode,
	_In_ PKNORMAL_ROUTINE NormalRoutine,
	_In_ PVOID NormalContext,
	_In_ PVOID SystemArgument1,
	_In_ PVOID SystemArgument2
);

VOID
NTAPI
InjpInjectApcNormalRoutine(
	_In_ PVOID NormalContext,
	_In_ PVOID SystemArgument1,
	_In_ PVOID SystemArgument2
);

VOID
NTAPI
InjpInjectApcKernelRoutine(
	_In_ PKAPC Apc,
	_Inout_ PKNORMAL_ROUTINE* NormalRoutine,
	_Inout_ PVOID* NormalContext,
	_Inout_ PVOID* SystemArgument1,
	_Inout_ PVOID* SystemArgument2
);

//////////////////////////////////////////////////////////////////////////
// Notify routines.
//////////////////////////////////////////////////////////////////////////

VOID
NTAPI
InjCreateProcessNotifyRoutineEx(
  _Inout_ PEPROCESS Process,
  _In_ HANDLE ProcessId,
  _Inout_opt_ PPS_CREATE_NOTIFY_INFO CreateInfo
  );

VOID
NTAPI
InjLoadImageNotifyRoutine(
  _In_opt_ PUNICODE_STRING FullImageName,
  _In_ HANDLE ProcessId,
  _In_ PIMAGE_INFO ImageInfo
  );

INJ_SYSTEM_DLL_DESCRIPTOR InjpSystemDlls[] = {
  { RTL_CONSTANT_STRING(L"\\SysArm32\\ntdll.dll"),    INJ_SYSARM32_NTDLL_LOADED    },
  { RTL_CONSTANT_STRING(L"\\SyChpe32\\ntdll.dll"),    INJ_SYCHPE32_NTDLL_LOADED    },
  { RTL_CONSTANT_STRING(L"\\SysWow64\\ntdll.dll"),    INJ_SYSWOW64_NTDLL_LOADED    },
  { RTL_CONSTANT_STRING(L"\\System32\\ntdll.dll"),    INJ_SYSTEM32_NTDLL_LOADED    },
  { RTL_CONSTANT_STRING(L"\\System32\\wow64.dll"),    INJ_SYSTEM32_WOW64_LOADED    },
  { RTL_CONSTANT_STRING(L"\\System32\\wow64win.dll"), INJ_SYSTEM32_WOW64WIN_LOADED },
  { RTL_CONSTANT_STRING(L"\\System32\\wow64cpu.dll"), INJ_SYSTEM32_WOW64CPU_LOADED },
  { RTL_CONSTANT_STRING(L"\\System32\\wowarmhw.dll"), INJ_SYSTEM32_WOWARMHW_LOADED },
  { RTL_CONSTANT_STRING(L"\\System32\\xtajit.dll"),   INJ_SYSTEM32_XTAJIT_LOADED   },
};

#ifdef __cplusplus
}
#endif
