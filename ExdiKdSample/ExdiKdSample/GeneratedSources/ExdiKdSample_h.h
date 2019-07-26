

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ExdiKdSample.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ExdiKdSample_h_h__
#define __ExdiKdSample_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IeXdiServerFactory3_FWD_DEFINED__
#define __IeXdiServerFactory3_FWD_DEFINED__
typedef interface IeXdiServerFactory3 IeXdiServerFactory3;

#endif 	/* __IeXdiServerFactory3_FWD_DEFINED__ */


#ifndef __IeXdiServer3_FWD_DEFINED__
#define __IeXdiServer3_FWD_DEFINED__
typedef interface IeXdiServer3 IeXdiServer3;

#endif 	/* __IeXdiServer3_FWD_DEFINED__ */


#ifndef __IeXdiCodeBreakpoint3_FWD_DEFINED__
#define __IeXdiCodeBreakpoint3_FWD_DEFINED__
typedef interface IeXdiCodeBreakpoint3 IeXdiCodeBreakpoint3;

#endif 	/* __IeXdiCodeBreakpoint3_FWD_DEFINED__ */


#ifndef __IeXdiDataBreakpoint3_FWD_DEFINED__
#define __IeXdiDataBreakpoint3_FWD_DEFINED__
typedef interface IeXdiDataBreakpoint3 IeXdiDataBreakpoint3;

#endif 	/* __IeXdiDataBreakpoint3_FWD_DEFINED__ */


#ifndef __IeXdiX86Context3_FWD_DEFINED__
#define __IeXdiX86Context3_FWD_DEFINED__
typedef interface IeXdiX86Context3 IeXdiX86Context3;

#endif 	/* __IeXdiX86Context3_FWD_DEFINED__ */


#ifndef __IeXdiX86ExContext3_FWD_DEFINED__
#define __IeXdiX86ExContext3_FWD_DEFINED__
typedef interface IeXdiX86ExContext3 IeXdiX86ExContext3;

#endif 	/* __IeXdiX86ExContext3_FWD_DEFINED__ */


#ifndef __IeXdiARM4Context3_FWD_DEFINED__
#define __IeXdiARM4Context3_FWD_DEFINED__
typedef interface IeXdiARM4Context3 IeXdiARM4Context3;

#endif 	/* __IeXdiARM4Context3_FWD_DEFINED__ */


#ifndef __IeXdiArmV8Arch64Context3_FWD_DEFINED__
#define __IeXdiArmV8Arch64Context3_FWD_DEFINED__
typedef interface IeXdiArmV8Arch64Context3 IeXdiArmV8Arch64Context3;

#endif 	/* __IeXdiArmV8Arch64Context3_FWD_DEFINED__ */


#ifndef __IeXdiX86_64Context3_FWD_DEFINED__
#define __IeXdiX86_64Context3_FWD_DEFINED__
typedef interface IeXdiX86_64Context3 IeXdiX86_64Context3;

#endif 	/* __IeXdiX86_64Context3_FWD_DEFINED__ */


#ifndef __IeXdiIA64Context3_FWD_DEFINED__
#define __IeXdiIA64Context3_FWD_DEFINED__
typedef interface IeXdiIA64Context3 IeXdiIA64Context3;

#endif 	/* __IeXdiIA64Context3_FWD_DEFINED__ */


#ifndef __IeXdiEBCContext3_FWD_DEFINED__
#define __IeXdiEBCContext3_FWD_DEFINED__
typedef interface IeXdiEBCContext3 IeXdiEBCContext3;

#endif 	/* __IeXdiEBCContext3_FWD_DEFINED__ */


#ifndef __IeXdiClientNotifyRunChg3_FWD_DEFINED__
#define __IeXdiClientNotifyRunChg3_FWD_DEFINED__
typedef interface IeXdiClientNotifyRunChg3 IeXdiClientNotifyRunChg3;

#endif 	/* __IeXdiClientNotifyRunChg3_FWD_DEFINED__ */


#ifndef __IeXdiKeepaliveInterface3_FWD_DEFINED__
#define __IeXdiKeepaliveInterface3_FWD_DEFINED__
typedef interface IeXdiKeepaliveInterface3 IeXdiKeepaliveInterface3;

#endif 	/* __IeXdiKeepaliveInterface3_FWD_DEFINED__ */


#ifndef __IeXdiControlComponentFunctions_FWD_DEFINED__
#define __IeXdiControlComponentFunctions_FWD_DEFINED__
typedef interface IeXdiControlComponentFunctions IeXdiControlComponentFunctions;

#endif 	/* __IeXdiControlComponentFunctions_FWD_DEFINED__ */


#ifndef __IAsynchronousCommandNotificationReceiver_FWD_DEFINED__
#define __IAsynchronousCommandNotificationReceiver_FWD_DEFINED__
typedef interface IAsynchronousCommandNotificationReceiver IAsynchronousCommandNotificationReceiver;

#endif 	/* __IAsynchronousCommandNotificationReceiver_FWD_DEFINED__ */


#ifndef __StaticExdiSampleServer_FWD_DEFINED__
#define __StaticExdiSampleServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class StaticExdiSampleServer StaticExdiSampleServer;
#else
typedef struct StaticExdiSampleServer StaticExdiSampleServer;
#endif /* __cplusplus */

#endif 	/* __StaticExdiSampleServer_FWD_DEFINED__ */


#ifndef __LiveExdiSampleServer_FWD_DEFINED__
#define __LiveExdiSampleServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class LiveExdiSampleServer LiveExdiSampleServer;
#else
typedef struct LiveExdiSampleServer LiveExdiSampleServer;
#endif /* __cplusplus */

#endif 	/* __LiveExdiSampleServer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ExdiKdSample_0000_0000 */
/* [local] */ 

#pragma region Summary of interfaces











#pragma endregion
#pragma region Error codes
// Common eXDI HRESULT values:
//
#define FACILITY_EXDI3   (0x87)
#define CUSTOMER_FLAG   (1)
//
#define SEV_SUCCESS         (0)
#define SEV_INFORMATIONAL   (1)
#define SEV_WARNING         (2)
#define SEV_ERROR           (3)
//
#define MAKE_EXDI3_ERROR(ErrorCode,Severity) ((HRESULT)(ErrorCode) | (FACILITY_EXDI3 << 16) | (CUSTOMER_FLAG << 29) | (Severity << 30))
//
//      S_OK                         (0)                                          // Operation successful
#define EXDI3_E_NOTIMPL               MAKE_EXDI3_ERROR (0x4001, SEV_ERROR)          // Not implemented (in the specific conditions - could be implement for others - like Kernel Debugger inactive)
#define EXDI3_E_OUTOFMEMORY           MAKE_EXDI3_ERROR (0x000E, SEV_ERROR)          // Failed to allocate necessary memory
#define EXDI3_E_INVALIDARG            MAKE_EXDI3_ERROR (0x0057, SEV_ERROR)          // One or more arguments are invalid
#define EXDI3_E_ABORT                 MAKE_EXDI3_ERROR (0x4004, SEV_ERROR)          // Operation aborted
#define EXDI3_E_FAIL                  MAKE_EXDI3_ERROR (0x4005, SEV_ERROR)          // Unspecified failure
#define EXDI3_E_COMMUNICATION         MAKE_EXDI3_ERROR (0x0001, SEV_ERROR)          // Communication error between host driver and target
//
#define EXDI3_E_NOLASTEXCEPTION       MAKE_EXDI3_ERROR (0x0002, SEV_ERROR)          // No exception occured already, cannot return last
#define EXDI3_I_TGTALREADYRUNNING     MAKE_EXDI3_ERROR (0x0003, SEV_INFORMATIONAL)  // Indicates that the target was already running
#define EXDI3_I_TGTALREADYHALTED      MAKE_EXDI3_ERROR (0x0004, SEV_INFORMATIONAL)  // Indicates that the target was already halted
#define EXDI3_E_TGTWASNOTHALTED       MAKE_EXDI3_ERROR (0x0005, SEV_ERROR)          // The target was not halted (before Single Step command issued)
#define EXDI3_E_NORESAVAILABLE        MAKE_EXDI3_ERROR (0x0006, SEV_ERROR)          // No resource available, cannot instantiate Breakpoint (in the kind requested)
#define EXDI3_E_NOREBOOTAVAIL         MAKE_EXDI3_ERROR (0x0007, SEV_ERROR)          // The external reset is not available programatically to the probe
#define EXDI3_E_ACCESSVIOLATION       MAKE_EXDI3_ERROR (0x0008, SEV_ERROR)          // Access violation on at least one element in address range specificified by the operation
#define EXDI3_E_CANNOTWHILETGTRUNNING MAKE_EXDI3_ERROR (0x0009, SEV_ERROR)          // Cannot proceed while target running. Operation not supported on the fly. Must halt the target first
#define EXDI3_E_USEDBYCONCURRENTTHREAD MAKE_EXDI3_ERROR (0x000A, SEV_ERROR)         // Cannot proceed immediately because resource is already used by concurrent thread. Recall later or call SetWaitOnConcurrentUse (TRUE) - default
#define EXDI3_E_ADVISELIMIT           MAKE_EXDI3_ERROR (0x000D, SEV_ERROR)          // The connection point has already reached its limit of connections and cannot accept any more
#pragma endregion
#pragma region Common structures
typedef __int64 ADDRESS_TYPE;

typedef __int64 *PADDRESS_TYPE;

typedef unsigned __int64 DWORD64;

typedef unsigned __int64 *PDWORD64;

#define	PROCESSOR_FAMILY_X86	( 0 )

#define	PROCESSOR_FAMILY_ARM	( 4 )

#define	PROCESSOR_FAMILY_PPC	( 5 )

#define	PROCESSOR_FAMILY_IA64	( 8 )

#define	PROCESSOR_FAMILY_ARMV8ARCH64	( 9 )

#define	PROCESSOR_FAMILY_UNK	( 0xffffffff )

typedef struct _DEBUG_ACCESS_CAPABILITIES_STRUCT
    {
    BOOL fWriteCBPWhileRunning;
    BOOL fReadCBPWhileRunning;
    BOOL fWriteDBPWhileRunning;
    BOOL fReadDBPWhileRunning;
    BOOL fWriteVMWhileRunning;
    BOOL fReadVMWhileRunning;
    BOOL fWritePMWhileRunning;
    BOOL fReadPMWhileRunning;
    BOOL fWriteRegWhileRunning;
    BOOL fReadRegWhileRunning;
    } 	DEBUG_ACCESS_CAPABILITIES_STRUCT;

typedef struct _DEBUG_ACCESS_CAPABILITIES_STRUCT *PDEBUG_ACCESS_CAPABILITIES_STRUCT;

typedef struct _GLOBAL_TARGET_INFO_STRUCT
    {
    DWORD TargetProcessorFamily;
    DEBUG_ACCESS_CAPABILITIES_STRUCT dbc;
    LPOLESTR szTargetName;
    LPOLESTR szProbeName;
    } 	GLOBAL_TARGET_INFO_STRUCT;

typedef struct _GLOBAL_TARGET_INFO_STRUCT *PGLOBAL_TARGET_INFO_STRUCT;

typedef 
enum _RUN_STATUS_TYPE
    {
        rsRunning	= 0,
        rsHalted	= ( rsRunning + 1 ) ,
        rsError	= ( rsHalted + 1 ) ,
        rsUnknown	= ( rsError + 1 ) 
    } 	RUN_STATUS_TYPE;

typedef enum _RUN_STATUS_TYPE *PRUN_STATUS_TYPE;

typedef 
enum _PHALT_REASON_TYPE
    {
        hrNone	= 0,
        hrUser	= ( hrNone + 1 ) ,
        hrException	= ( hrUser + 1 ) ,
        hrBp	= ( hrException + 1 ) ,
        hrStep	= ( hrBp + 1 ) ,
        hrUnknown	= ( hrStep + 1 ) 
    } 	HALT_REASON_TYPE;

typedef enum _PHALT_REASON_TYPE *PHALT_REASON_TYPE;

typedef struct _EXCEPTION_TYPE
    {
    DWORD dwCode;
    ADDRESS_TYPE Address;
    } 	EXCEPTION_TYPE;

typedef struct _EXCEPTION_TYPE *PEXCEPTION_TYPE;

typedef 
enum _CBP_KIND
    {
        cbptAlgo	= 0,
        cbptHW	= ( cbptAlgo + 1 ) ,
        cbptSW	= ( cbptHW + 1 ) 
    } 	CBP_KIND;

typedef enum _CBP_KIND *PCBP_KIND;

typedef 
enum _DATA_ACCESS_TYPE
    {
        daWrite	= 0,
        daRead	= 1,
        daBoth	= 2
    } 	DATA_ACCESS_TYPE;

typedef enum _DATA_ACCESS_TYPE *PDATA_ACCESS_TYPE;

typedef struct _BREAKPOINT_SUPPORT_TYPE
    {
    BOOL fCodeBpBypassCountSupported;
    BOOL fDataBpBypassCountSupported;
    BOOL fDataBpSupported;
    BOOL fDataBpMaskableAddress;
    BOOL fDataBpMaskableData;
    BOOL fDataBpDataWidthSpecifiable;
    BOOL fDataBpReadWriteSpecifiable;
    BOOL fDataBpDataMatchSupported;
    } 	BREAKPOINT_SUPPORT_TYPE;

typedef struct _BREAKPOINT_SUPPORT_TYPE *PBREAKPOINT_SUPPORT_TYPE;

typedef 
enum _MEM_TYPE
    {
        mtVirtual	= 0,
        mtPhysicalOrPeriIO	= ( mtVirtual + 1 ) ,
        mtContext	= ( mtPhysicalOrPeriIO + 1 ) 
    } 	MEM_TYPE;

typedef enum _MEM_TYPE *PMEM_TYPE;

typedef 
enum _EXCEPTION_DEFAULT_ACTION_TYPE
    {
        edaIgnore	= 0,
        edaNotify	= ( edaIgnore + 1 ) ,
        edaStop	= ( edaNotify + 1 ) 
    } 	EXCEPTION_DEFAULT_ACTION_TYPE;

typedef struct _EXCEPTION_DESCRIPTION_TYPE
    {
    DWORD dwExceptionCode;
    EXCEPTION_DEFAULT_ACTION_TYPE efd;
    wchar_t szDescription[ 60 ];
    } 	EXCEPTION_DESCRIPTION_TYPE;

typedef 
enum _ADDRESS_SPACE_TYPE
    {
        astPhysicalMemory	= 0,
        astIoSpace	= ( astPhysicalMemory + 1 ) 
    } 	ADDRESS_SPACE_TYPE;

#pragma endregion
#pragma region IOCTL codes and new structures replacing IOCTLs in EXDIv1
typedef /* [public] */ 
enum __MIDL___MIDL_itf_ExdiKdSample_0000_0000_0001
    {
        DBGENG_EXDI3_IOC_BEFORE_FIRST	= 0x38664,
        DBGENG_EXDI3_IOC_AFTER_LAST	= ( DBGENG_EXDI3_IOC_BEFORE_FIRST + 1 ) 
    } 	DBGENG_EXDI3_IOCTL_CODE;

#define	DBGENG_EXDI3_IOCTL_BREAKPOINT_NONE	( 0 )

#define	DBGENG_EXDI3_IOCTL_BREAKPOINT_CODE	( 1 )

#define	DBGENG_EXDI3_IOCTL_BREAKPOINT_DATA	( 2 )

typedef struct _DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT
    {
    ADDRESS_TYPE Address;
    ULONG AccessWidth;
    DATA_ACCESS_TYPE AccessType;
    ULONG Type;
    } 	DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT;

typedef struct _DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT *PDBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT;

#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0000_v0_0_s_ifspec;

#ifndef __IeXdiServerFactory3_INTERFACE_DEFINED__
#define __IeXdiServerFactory3_INTERFACE_DEFINED__

/* interface IeXdiServerFactory3 */
/* [oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiServerFactory3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22EFA264-6FD7-4992-9427-125B511A477C")
    IeXdiServerFactory3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateExdiServer( 
            /* [in] */ LPCWSTR pConstructorArguments,
            /* [out] */ IUnknown **pServer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiServerFactory3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiServerFactory3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiServerFactory3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiServerFactory3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateExdiServer )( 
            IeXdiServerFactory3 * This,
            /* [in] */ LPCWSTR pConstructorArguments,
            /* [out] */ IUnknown **pServer);
        
        END_INTERFACE
    } IeXdiServerFactory3Vtbl;

    interface IeXdiServerFactory3
    {
        CONST_VTBL struct IeXdiServerFactory3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiServerFactory3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiServerFactory3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiServerFactory3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiServerFactory3_CreateExdiServer(This,pConstructorArguments,pServer)	\
    ( (This)->lpVtbl -> CreateExdiServer(This,pConstructorArguments,pServer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiServerFactory3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0001 */
/* [local] */ 

#pragma region IeXdiServer3 interface


extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0001_v0_0_s_ifspec;

#ifndef __IeXdiServer3_INTERFACE_DEFINED__
#define __IeXdiServer3_INTERFACE_DEFINED__

/* interface IeXdiServer3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiServer3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E501506-9703-4B6F-9D0D-6B42B0E41E6F")
    IeXdiServer3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTargetInfo( 
            /* [out] */ PGLOBAL_TARGET_INFO_STRUCT pgti) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRunStatus( 
            /* [out] */ PRUN_STATUS_TYPE persCurrent,
            /* [out] */ PHALT_REASON_TYPE pehrCurrent,
            /* [out] */ ADDRESS_TYPE *pCurrentExecAddress,
            /* [out] */ DWORD *pdwExceptionCode,
            /* [out] */ DWORD *pdwProcessorNumberOfLastEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Halt( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoSingleStep( 
            DWORD dwProcessorNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reboot( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNbCodeBpAvail( 
            /* [out] */ DWORD *pdwNbHwCodeBpAvail,
            /* [out] */ DWORD *pdwNbSwCodeBpAvail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNbDataBpAvail( 
            /* [out] */ DWORD *pdwNbDataBpAvail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCodeBreakpoint( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ CBP_KIND cbpk,
            /* [in] */ MEM_TYPE mt,
            /* [in] */ DWORD dwExecMode,
            /* [in] */ DWORD dwTotalBypassCount,
            /* [out] */ IeXdiCodeBreakpoint3 **ppieXdiCodeBreakpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DelCodeBreakpoint( 
            /* [in] */ IeXdiCodeBreakpoint3 *pieXdiCodeBreakpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddDataBreakpoint( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_TYPE AddressMask,
            /* [in] */ DWORD dwData,
            /* [in] */ DWORD dwDataMask,
            /* [in] */ BYTE bAccessWidth,
            /* [in] */ MEM_TYPE mt,
            /* [in] */ BYTE bAddressSpace,
            /* [in] */ DATA_ACCESS_TYPE da,
            /* [in] */ DWORD dwTotalBypassCount,
            /* [out] */ IeXdiDataBreakpoint3 **ppieXdiDataBreakpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DelDataBreakpoint( 
            /* [in] */ IeXdiDataBreakpoint3 *pieXdiDataBreakpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartNotifyingRunChg( 
            /* [in] */ IeXdiClientNotifyRunChg3 *pieXdiClientNotifyRunChg,
            /* [out] */ DWORD *pdwConnectionCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopNotifyingRunChg( 
            /* [in] */ DWORD dwConnectionCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadVirtualMemory( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ DWORD dwBytesToRead,
            /* [out] */ SAFEARRAY * *pReadBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteVirtualMemory( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ SAFEARRAY * pBuffer,
            /* [out] */ DWORD *pdwBytesWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadPhysicalMemoryOrPeriphIO( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
            /* [in] */ DWORD dwBytesToRead,
            /* [out] */ SAFEARRAY * *pReadBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WritePhysicalMemoryOrPeriphIO( 
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
            /* [in] */ SAFEARRAY * pBuffer,
            /* [out] */ DWORD *pdwBytesWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Ioctl( 
            /* [in] */ SAFEARRAY * pInputBuffer,
            /* [in] */ DWORD dwBuffOutSize,
            /* [out] */ SAFEARRAY * *pOutputBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfProcessors( 
            /* [out] */ DWORD *pdwNumberOfProcessors) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastHitBreakpoint( 
            /* [out] */ DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT *pBreakpointInformation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKPCRForProcessor( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out] */ ULONG64 *pKPCRPointer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadKdVersionBlock( 
            /* [in] */ DWORD dwBufferSize,
            /* [out] */ SAFEARRAY * *pKdVersionBlockBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetKeepaliveInterface( 
            /* [in] */ IeXdiKeepaliveInterface3 *pKeepalive) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadMSR( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ DWORD dwRegisterIndex,
            /* [out] */ ULONG64 *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteMSR( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ DWORD dwRegisterIndex,
            /* [in] */ ULONG64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiServer3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiServer3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiServer3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiServer3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetInfo )( 
            IeXdiServer3 * This,
            /* [out] */ PGLOBAL_TARGET_INFO_STRUCT pgti);
        
        HRESULT ( STDMETHODCALLTYPE *GetRunStatus )( 
            IeXdiServer3 * This,
            /* [out] */ PRUN_STATUS_TYPE persCurrent,
            /* [out] */ PHALT_REASON_TYPE pehrCurrent,
            /* [out] */ ADDRESS_TYPE *pCurrentExecAddress,
            /* [out] */ DWORD *pdwExceptionCode,
            /* [out] */ DWORD *pdwProcessorNumberOfLastEvent);
        
        HRESULT ( STDMETHODCALLTYPE *Run )( 
            IeXdiServer3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Halt )( 
            IeXdiServer3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoSingleStep )( 
            IeXdiServer3 * This,
            DWORD dwProcessorNumber);
        
        HRESULT ( STDMETHODCALLTYPE *Reboot )( 
            IeXdiServer3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNbCodeBpAvail )( 
            IeXdiServer3 * This,
            /* [out] */ DWORD *pdwNbHwCodeBpAvail,
            /* [out] */ DWORD *pdwNbSwCodeBpAvail);
        
        HRESULT ( STDMETHODCALLTYPE *GetNbDataBpAvail )( 
            IeXdiServer3 * This,
            /* [out] */ DWORD *pdwNbDataBpAvail);
        
        HRESULT ( STDMETHODCALLTYPE *AddCodeBreakpoint )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ CBP_KIND cbpk,
            /* [in] */ MEM_TYPE mt,
            /* [in] */ DWORD dwExecMode,
            /* [in] */ DWORD dwTotalBypassCount,
            /* [out] */ IeXdiCodeBreakpoint3 **ppieXdiCodeBreakpoint);
        
        HRESULT ( STDMETHODCALLTYPE *DelCodeBreakpoint )( 
            IeXdiServer3 * This,
            /* [in] */ IeXdiCodeBreakpoint3 *pieXdiCodeBreakpoint);
        
        HRESULT ( STDMETHODCALLTYPE *AddDataBreakpoint )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_TYPE AddressMask,
            /* [in] */ DWORD dwData,
            /* [in] */ DWORD dwDataMask,
            /* [in] */ BYTE bAccessWidth,
            /* [in] */ MEM_TYPE mt,
            /* [in] */ BYTE bAddressSpace,
            /* [in] */ DATA_ACCESS_TYPE da,
            /* [in] */ DWORD dwTotalBypassCount,
            /* [out] */ IeXdiDataBreakpoint3 **ppieXdiDataBreakpoint);
        
        HRESULT ( STDMETHODCALLTYPE *DelDataBreakpoint )( 
            IeXdiServer3 * This,
            /* [in] */ IeXdiDataBreakpoint3 *pieXdiDataBreakpoint);
        
        HRESULT ( STDMETHODCALLTYPE *StartNotifyingRunChg )( 
            IeXdiServer3 * This,
            /* [in] */ IeXdiClientNotifyRunChg3 *pieXdiClientNotifyRunChg,
            /* [out] */ DWORD *pdwConnectionCookie);
        
        HRESULT ( STDMETHODCALLTYPE *StopNotifyingRunChg )( 
            IeXdiServer3 * This,
            /* [in] */ DWORD dwConnectionCookie);
        
        HRESULT ( STDMETHODCALLTYPE *ReadVirtualMemory )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ DWORD dwBytesToRead,
            /* [out] */ SAFEARRAY * *pReadBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *WriteVirtualMemory )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ SAFEARRAY * pBuffer,
            /* [out] */ DWORD *pdwBytesWritten);
        
        HRESULT ( STDMETHODCALLTYPE *ReadPhysicalMemoryOrPeriphIO )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
            /* [in] */ DWORD dwBytesToRead,
            /* [out] */ SAFEARRAY * *pReadBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *WritePhysicalMemoryOrPeriphIO )( 
            IeXdiServer3 * This,
            /* [in] */ ADDRESS_TYPE Address,
            /* [in] */ ADDRESS_SPACE_TYPE AddressSpace,
            /* [in] */ SAFEARRAY * pBuffer,
            /* [out] */ DWORD *pdwBytesWritten);
        
        HRESULT ( STDMETHODCALLTYPE *Ioctl )( 
            IeXdiServer3 * This,
            /* [in] */ SAFEARRAY * pInputBuffer,
            /* [in] */ DWORD dwBuffOutSize,
            /* [out] */ SAFEARRAY * *pOutputBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfProcessors )( 
            IeXdiServer3 * This,
            /* [out] */ DWORD *pdwNumberOfProcessors);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastHitBreakpoint )( 
            IeXdiServer3 * This,
            /* [out] */ DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT *pBreakpointInformation);
        
        HRESULT ( STDMETHODCALLTYPE *GetKPCRForProcessor )( 
            IeXdiServer3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out] */ ULONG64 *pKPCRPointer);
        
        HRESULT ( STDMETHODCALLTYPE *ReadKdVersionBlock )( 
            IeXdiServer3 * This,
            /* [in] */ DWORD dwBufferSize,
            /* [out] */ SAFEARRAY * *pKdVersionBlockBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *SetKeepaliveInterface )( 
            IeXdiServer3 * This,
            /* [in] */ IeXdiKeepaliveInterface3 *pKeepalive);
        
        HRESULT ( STDMETHODCALLTYPE *ReadMSR )( 
            IeXdiServer3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ DWORD dwRegisterIndex,
            /* [out] */ ULONG64 *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *WriteMSR )( 
            IeXdiServer3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ DWORD dwRegisterIndex,
            /* [in] */ ULONG64 value);
        
        END_INTERFACE
    } IeXdiServer3Vtbl;

    interface IeXdiServer3
    {
        CONST_VTBL struct IeXdiServer3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiServer3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiServer3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiServer3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiServer3_GetTargetInfo(This,pgti)	\
    ( (This)->lpVtbl -> GetTargetInfo(This,pgti) ) 

#define IeXdiServer3_GetRunStatus(This,persCurrent,pehrCurrent,pCurrentExecAddress,pdwExceptionCode,pdwProcessorNumberOfLastEvent)	\
    ( (This)->lpVtbl -> GetRunStatus(This,persCurrent,pehrCurrent,pCurrentExecAddress,pdwExceptionCode,pdwProcessorNumberOfLastEvent) ) 

#define IeXdiServer3_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define IeXdiServer3_Halt(This)	\
    ( (This)->lpVtbl -> Halt(This) ) 

#define IeXdiServer3_DoSingleStep(This,dwProcessorNumber)	\
    ( (This)->lpVtbl -> DoSingleStep(This,dwProcessorNumber) ) 

#define IeXdiServer3_Reboot(This)	\
    ( (This)->lpVtbl -> Reboot(This) ) 

#define IeXdiServer3_GetNbCodeBpAvail(This,pdwNbHwCodeBpAvail,pdwNbSwCodeBpAvail)	\
    ( (This)->lpVtbl -> GetNbCodeBpAvail(This,pdwNbHwCodeBpAvail,pdwNbSwCodeBpAvail) ) 

#define IeXdiServer3_GetNbDataBpAvail(This,pdwNbDataBpAvail)	\
    ( (This)->lpVtbl -> GetNbDataBpAvail(This,pdwNbDataBpAvail) ) 

#define IeXdiServer3_AddCodeBreakpoint(This,Address,cbpk,mt,dwExecMode,dwTotalBypassCount,ppieXdiCodeBreakpoint)	\
    ( (This)->lpVtbl -> AddCodeBreakpoint(This,Address,cbpk,mt,dwExecMode,dwTotalBypassCount,ppieXdiCodeBreakpoint) ) 

#define IeXdiServer3_DelCodeBreakpoint(This,pieXdiCodeBreakpoint)	\
    ( (This)->lpVtbl -> DelCodeBreakpoint(This,pieXdiCodeBreakpoint) ) 

#define IeXdiServer3_AddDataBreakpoint(This,Address,AddressMask,dwData,dwDataMask,bAccessWidth,mt,bAddressSpace,da,dwTotalBypassCount,ppieXdiDataBreakpoint)	\
    ( (This)->lpVtbl -> AddDataBreakpoint(This,Address,AddressMask,dwData,dwDataMask,bAccessWidth,mt,bAddressSpace,da,dwTotalBypassCount,ppieXdiDataBreakpoint) ) 

#define IeXdiServer3_DelDataBreakpoint(This,pieXdiDataBreakpoint)	\
    ( (This)->lpVtbl -> DelDataBreakpoint(This,pieXdiDataBreakpoint) ) 

#define IeXdiServer3_StartNotifyingRunChg(This,pieXdiClientNotifyRunChg,pdwConnectionCookie)	\
    ( (This)->lpVtbl -> StartNotifyingRunChg(This,pieXdiClientNotifyRunChg,pdwConnectionCookie) ) 

#define IeXdiServer3_StopNotifyingRunChg(This,dwConnectionCookie)	\
    ( (This)->lpVtbl -> StopNotifyingRunChg(This,dwConnectionCookie) ) 

#define IeXdiServer3_ReadVirtualMemory(This,Address,dwBytesToRead,pReadBuffer)	\
    ( (This)->lpVtbl -> ReadVirtualMemory(This,Address,dwBytesToRead,pReadBuffer) ) 

#define IeXdiServer3_WriteVirtualMemory(This,Address,pBuffer,pdwBytesWritten)	\
    ( (This)->lpVtbl -> WriteVirtualMemory(This,Address,pBuffer,pdwBytesWritten) ) 

#define IeXdiServer3_ReadPhysicalMemoryOrPeriphIO(This,Address,AddressSpace,dwBytesToRead,pReadBuffer)	\
    ( (This)->lpVtbl -> ReadPhysicalMemoryOrPeriphIO(This,Address,AddressSpace,dwBytesToRead,pReadBuffer) ) 

#define IeXdiServer3_WritePhysicalMemoryOrPeriphIO(This,Address,AddressSpace,pBuffer,pdwBytesWritten)	\
    ( (This)->lpVtbl -> WritePhysicalMemoryOrPeriphIO(This,Address,AddressSpace,pBuffer,pdwBytesWritten) ) 

#define IeXdiServer3_Ioctl(This,pInputBuffer,dwBuffOutSize,pOutputBuffer)	\
    ( (This)->lpVtbl -> Ioctl(This,pInputBuffer,dwBuffOutSize,pOutputBuffer) ) 

#define IeXdiServer3_GetNumberOfProcessors(This,pdwNumberOfProcessors)	\
    ( (This)->lpVtbl -> GetNumberOfProcessors(This,pdwNumberOfProcessors) ) 

#define IeXdiServer3_GetLastHitBreakpoint(This,pBreakpointInformation)	\
    ( (This)->lpVtbl -> GetLastHitBreakpoint(This,pBreakpointInformation) ) 

#define IeXdiServer3_GetKPCRForProcessor(This,dwProcessorNumber,pKPCRPointer)	\
    ( (This)->lpVtbl -> GetKPCRForProcessor(This,dwProcessorNumber,pKPCRPointer) ) 

#define IeXdiServer3_ReadKdVersionBlock(This,dwBufferSize,pKdVersionBlockBuffer)	\
    ( (This)->lpVtbl -> ReadKdVersionBlock(This,dwBufferSize,pKdVersionBlockBuffer) ) 

#define IeXdiServer3_SetKeepaliveInterface(This,pKeepalive)	\
    ( (This)->lpVtbl -> SetKeepaliveInterface(This,pKeepalive) ) 

#define IeXdiServer3_ReadMSR(This,dwProcessorNumber,dwRegisterIndex,pValue)	\
    ( (This)->lpVtbl -> ReadMSR(This,dwProcessorNumber,dwRegisterIndex,pValue) ) 

#define IeXdiServer3_WriteMSR(This,dwProcessorNumber,dwRegisterIndex,value)	\
    ( (This)->lpVtbl -> WriteMSR(This,dwProcessorNumber,dwRegisterIndex,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiServer3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0002 */
/* [local] */ 

#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0002_v0_0_s_ifspec;

#ifndef __IeXdiCodeBreakpoint3_INTERFACE_DEFINED__
#define __IeXdiCodeBreakpoint3_INTERFACE_DEFINED__

/* interface IeXdiCodeBreakpoint3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiCodeBreakpoint3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("386D8BCB-9D1E-4BF4-BE90-90D7802545FE")
    IeXdiCodeBreakpoint3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ PADDRESS_TYPE pAddress,
            /* [out] */ PCBP_KIND pcbpk,
            /* [out] */ PMEM_TYPE pmt,
            /* [out] */ DWORD *pdwExecMode,
            /* [out] */ DWORD *pdwTotalBypassCount,
            /* [out] */ DWORD *pdwBypassedOccurences,
            /* [out] */ BOOL *pfEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ BOOL fEnabled,
            /* [in] */ BOOL fResetBypassedOccurences) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiCodeBreakpoint3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiCodeBreakpoint3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiCodeBreakpoint3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiCodeBreakpoint3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IeXdiCodeBreakpoint3 * This,
            /* [out] */ PADDRESS_TYPE pAddress,
            /* [out] */ PCBP_KIND pcbpk,
            /* [out] */ PMEM_TYPE pmt,
            /* [out] */ DWORD *pdwExecMode,
            /* [out] */ DWORD *pdwTotalBypassCount,
            /* [out] */ DWORD *pdwBypassedOccurences,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetState )( 
            IeXdiCodeBreakpoint3 * This,
            /* [in] */ BOOL fEnabled,
            /* [in] */ BOOL fResetBypassedOccurences);
        
        END_INTERFACE
    } IeXdiCodeBreakpoint3Vtbl;

    interface IeXdiCodeBreakpoint3
    {
        CONST_VTBL struct IeXdiCodeBreakpoint3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiCodeBreakpoint3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiCodeBreakpoint3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiCodeBreakpoint3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiCodeBreakpoint3_GetAttributes(This,pAddress,pcbpk,pmt,pdwExecMode,pdwTotalBypassCount,pdwBypassedOccurences,pfEnabled)	\
    ( (This)->lpVtbl -> GetAttributes(This,pAddress,pcbpk,pmt,pdwExecMode,pdwTotalBypassCount,pdwBypassedOccurences,pfEnabled) ) 

#define IeXdiCodeBreakpoint3_SetState(This,fEnabled,fResetBypassedOccurences)	\
    ( (This)->lpVtbl -> SetState(This,fEnabled,fResetBypassedOccurences) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiCodeBreakpoint3_INTERFACE_DEFINED__ */


#ifndef __IeXdiDataBreakpoint3_INTERFACE_DEFINED__
#define __IeXdiDataBreakpoint3_INTERFACE_DEFINED__

/* interface IeXdiDataBreakpoint3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiDataBreakpoint3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FC90E444-6E23-40C1-A8D0-1203C8ADB324")
    IeXdiDataBreakpoint3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ PADDRESS_TYPE pAddress,
            /* [out] */ PADDRESS_TYPE pAddressMask,
            /* [out] */ DWORD *pdwData,
            /* [out] */ DWORD *pdwDataMask,
            /* [out] */ BYTE *pbAccessWidth,
            /* [out] */ PMEM_TYPE pmt,
            /* [out] */ BYTE *pbAddressSpace,
            /* [out] */ PDATA_ACCESS_TYPE pda,
            /* [out] */ DWORD *pdwTotalBypassCount,
            /* [out] */ DWORD *pdwBypassedOccurences,
            /* [out] */ BOOL *pfEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ BOOL fEnabled,
            /* [in] */ BOOL fResetBypassedOccurences) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiDataBreakpoint3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiDataBreakpoint3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiDataBreakpoint3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiDataBreakpoint3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IeXdiDataBreakpoint3 * This,
            /* [out] */ PADDRESS_TYPE pAddress,
            /* [out] */ PADDRESS_TYPE pAddressMask,
            /* [out] */ DWORD *pdwData,
            /* [out] */ DWORD *pdwDataMask,
            /* [out] */ BYTE *pbAccessWidth,
            /* [out] */ PMEM_TYPE pmt,
            /* [out] */ BYTE *pbAddressSpace,
            /* [out] */ PDATA_ACCESS_TYPE pda,
            /* [out] */ DWORD *pdwTotalBypassCount,
            /* [out] */ DWORD *pdwBypassedOccurences,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetState )( 
            IeXdiDataBreakpoint3 * This,
            /* [in] */ BOOL fEnabled,
            /* [in] */ BOOL fResetBypassedOccurences);
        
        END_INTERFACE
    } IeXdiDataBreakpoint3Vtbl;

    interface IeXdiDataBreakpoint3
    {
        CONST_VTBL struct IeXdiDataBreakpoint3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiDataBreakpoint3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiDataBreakpoint3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiDataBreakpoint3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiDataBreakpoint3_GetAttributes(This,pAddress,pAddressMask,pdwData,pdwDataMask,pbAccessWidth,pmt,pbAddressSpace,pda,pdwTotalBypassCount,pdwBypassedOccurences,pfEnabled)	\
    ( (This)->lpVtbl -> GetAttributes(This,pAddress,pAddressMask,pdwData,pdwDataMask,pbAccessWidth,pmt,pbAddressSpace,pda,pdwTotalBypassCount,pdwBypassedOccurences,pfEnabled) ) 

#define IeXdiDataBreakpoint3_SetState(This,fEnabled,fResetBypassedOccurences)	\
    ( (This)->lpVtbl -> SetState(This,fEnabled,fResetBypassedOccurences) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiDataBreakpoint3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0004 */
/* [local] */ 

#define	SIZE_OF_80387_REGISTERS_IN_BYTES	( 80 )

typedef struct _CONTEXT_X86
    {
    struct 
        {
        BOOL fSegmentRegs;
        BOOL fControlRegs;
        BOOL fIntegerRegs;
        BOOL fFloatingPointRegs;
        BOOL fDebugRegs;
        } 	RegGroupSelection;
    DWORD SegCs;
    DWORD SegSs;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD EFlags;
    DWORD Ebp;
    DWORD Eip;
    DWORD Esp;
    DWORD Eax;
    DWORD Ebx;
    DWORD Ecx;
    DWORD Edx;
    DWORD Esi;
    DWORD Edi;
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[ 80 ];
    DWORD Cr0NpxState;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    } 	CONTEXT_X86;

typedef struct _CONTEXT_X86 *PCONTEXT_X86;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0004_v0_0_s_ifspec;

#ifndef __IeXdiX86Context3_INTERFACE_DEFINED__
#define __IeXdiX86Context3_INTERFACE_DEFINED__

/* interface IeXdiX86Context3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiX86Context3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBBBE2D6-9B1E-4F35-B956-28A78C348F0F")
    IeXdiX86Context3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86 pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86 Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiX86Context3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiX86Context3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiX86Context3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiX86Context3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiX86Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86 pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiX86Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86 Context);
        
        END_INTERFACE
    } IeXdiX86Context3Vtbl;

    interface IeXdiX86Context3
    {
        CONST_VTBL struct IeXdiX86Context3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiX86Context3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiX86Context3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiX86Context3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiX86Context3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiX86Context3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiX86Context3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0005 */
/* [local] */ 

typedef struct _X86_SEG_DESC_INFO
    {
    DWORD Base;
    DWORD Limit;
    DWORD Flags;
    } 	X86_SEG_DESC_INFO;

typedef struct _X86_SSE_REG
    {
    DWORD Reg0;
    DWORD Reg1;
    DWORD Reg2;
    DWORD Reg3;
    } 	X86_SSE_REG;

typedef struct _CONTEXT_X86_EX
    {
    struct 
        {
        BOOL fSegmentRegs;
        BOOL fControlRegs;
        BOOL fIntegerRegs;
        BOOL fFloatingPointRegs;
        BOOL fDebugRegs;
        BOOL fSegmentDescriptors;
        BOOL fSSERegisters;
        BOOL fSystemRegisters;
        } 	RegGroupSelection;
    DWORD SegCs;
    DWORD SegSs;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD EFlags;
    DWORD Ebp;
    DWORD Eip;
    DWORD Esp;
    DWORD Eax;
    DWORD Ebx;
    DWORD Ecx;
    DWORD Edx;
    DWORD Esi;
    DWORD Edi;
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[ 80 ];
    DWORD Cr0NpxState;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    X86_SEG_DESC_INFO DescriptorCs;
    X86_SEG_DESC_INFO DescriptorSs;
    X86_SEG_DESC_INFO DescriptorGs;
    X86_SEG_DESC_INFO DescriptorFs;
    X86_SEG_DESC_INFO DescriptorEs;
    X86_SEG_DESC_INFO DescriptorDs;
    DWORD IdtBase;
    DWORD IdtLimit;
    DWORD GdtBase;
    DWORD GdtLimit;
    DWORD Ldtr;
    X86_SEG_DESC_INFO DescriptorLdtr;
    DWORD Tr;
    X86_SEG_DESC_INFO DescriptorTr;
    DWORD Cr0;
    DWORD Cr2;
    DWORD Cr3;
    DWORD Cr4;
    DWORD Mxcsr;
    X86_SSE_REG Sse[ 8 ];
    } 	CONTEXT_X86_EX;

typedef struct _CONTEXT_X86_EX *PCONTEXT_X86_EX;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0005_v0_0_s_ifspec;

#ifndef __IeXdiX86ExContext3_INTERFACE_DEFINED__
#define __IeXdiX86ExContext3_INTERFACE_DEFINED__

/* interface IeXdiX86ExContext3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiX86ExContext3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F2A6A8A-D56B-4605-8A93-AC1C9B7E6318")
    IeXdiX86ExContext3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86_EX pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86_EX Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiX86ExContext3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiX86ExContext3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiX86ExContext3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiX86ExContext3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiX86ExContext3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86_EX pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiX86ExContext3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86_EX Context);
        
        END_INTERFACE
    } IeXdiX86ExContext3Vtbl;

    interface IeXdiX86ExContext3
    {
        CONST_VTBL struct IeXdiX86ExContext3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiX86ExContext3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiX86ExContext3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiX86ExContext3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiX86ExContext3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiX86ExContext3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiX86ExContext3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0006 */
/* [local] */ 

#define	EXDI_ARM_MAX_BREAKPOINTS	( 8 )

#define	EXDI_ARM_MAX_WATCHPOINTS	( 1 )

#define	EXDI_ARM_MAX_NEON_FP_REGISTERS	( 32 )

typedef struct _CONTEXT_ARM4
    {
    struct 
        {
        BOOL fControlRegs;
        BOOL fIntegerRegs;
        BOOL fFloatingPointRegs;
        BOOL fDebugRegs;
        } 	RegGroupSelection;
    DWORD Sp;
    DWORD Lr;
    DWORD Pc;
    DWORD Psr;
    DWORD R0;
    DWORD R1;
    DWORD R2;
    DWORD R3;
    DWORD R4;
    DWORD R5;
    DWORD R6;
    DWORD R7;
    DWORD R8;
    DWORD R9;
    DWORD R10;
    DWORD R11;
    DWORD R12;
    DWORD Fpscr;
    DWORD64 D[ 32 ];
    DWORD Bvr[ 8 ];
    DWORD Bcr[ 8 ];
    DWORD Wvr[ 1 ];
    DWORD Wcr[ 1 ];
    } 	CONTEXT_ARM4;

typedef struct _CONTEXT_ARM4 *PCONTEXT_ARM4;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0006_v0_0_s_ifspec;

#ifndef __IeXdiARM4Context3_INTERFACE_DEFINED__
#define __IeXdiARM4Context3_INTERFACE_DEFINED__

/* interface IeXdiARM4Context3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiARM4Context3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25A27A99-C6F7-4A27-8749-FA7EA638ADB5")
    IeXdiARM4Context3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_ARM4 pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_ARM4 Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiARM4Context3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiARM4Context3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiARM4Context3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiARM4Context3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiARM4Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_ARM4 pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiARM4Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_ARM4 Context);
        
        END_INTERFACE
    } IeXdiARM4Context3Vtbl;

    interface IeXdiARM4Context3
    {
        CONST_VTBL struct IeXdiARM4Context3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiARM4Context3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiARM4Context3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiARM4Context3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiARM4Context3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiARM4Context3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiARM4Context3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0007 */
/* [local] */ 

#define	ARMV8ARCH64_MAX_BREAKPOINTS	( 8 )

#define	ARMV8ARCH64_MAX_WATCHPOINTS	( 2 )

#define	ARMV8ARCH64_MAX_INTERGER_REGISTERS	( 29 )

#define	ARMV8ARCH64_MAX_NEON_FP_REGISTERS	( 32 )

typedef struct _NEON128_REG
    {
    DWORD Reg0;
    DWORD Reg1;
    DWORD Reg2;
    DWORD Reg3;
    } 	NEON128_REG;

typedef struct _CONTEXT_ARMV8ARCH64
    {
    struct 
        {
        BOOL fControlRegs;
        BOOL fIntegerRegs;
        BOOL fFloatingPointRegs;
        BOOL fDebugRegs;
        } 	RegGroupSelection;
    DWORD64 Sp;
    DWORD64 Pc;
    DWORD64 Psr;
    DWORD64 X[ 29 ];
    DWORD64 Fp;
    DWORD64 Lr;
    DWORD Fpcr;
    DWORD Fpsr;
    NEON128_REG V[ 32 ];
    DWORD64 Bvr[ 8 ];
    DWORD Bcr[ 8 ];
    DWORD64 Wvr[ 2 ];
    DWORD Wcr[ 2 ];
    } 	CONTEXT_ARMV8ARCH64;

typedef struct _CONTEXT_ARMV8ARCH64 *PCONTEXT_ARMV8ARCH64;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0007_v0_0_s_ifspec;

#ifndef __IeXdiArmV8Arch64Context3_INTERFACE_DEFINED__
#define __IeXdiArmV8Arch64Context3_INTERFACE_DEFINED__

/* interface IeXdiArmV8Arch64Context3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiArmV8Arch64Context3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2146BE85-7866-4309-B973-F9650D1AA886")
    IeXdiArmV8Arch64Context3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_ARMV8ARCH64 pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_ARMV8ARCH64 Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiArmV8Arch64Context3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiArmV8Arch64Context3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiArmV8Arch64Context3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiArmV8Arch64Context3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiArmV8Arch64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_ARMV8ARCH64 pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiArmV8Arch64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_ARMV8ARCH64 Context);
        
        END_INTERFACE
    } IeXdiArmV8Arch64Context3Vtbl;

    interface IeXdiArmV8Arch64Context3
    {
        CONST_VTBL struct IeXdiArmV8Arch64Context3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiArmV8Arch64Context3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiArmV8Arch64Context3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiArmV8Arch64Context3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiArmV8Arch64Context3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiArmV8Arch64Context3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiArmV8Arch64Context3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0008 */
/* [local] */ 

// The following constants are bit definitions for the ModeFlags value in CONTEXT_X86_64.
// They are provided to allow debuggers to correctly disassemble instructions based on
// the current operating mode of the processor.
#define X86_64_MODE_D     (0x0001) // D bit from the current CS selector
#define X86_64_MODE_L     (0x0002) // L bit (long mode) from the current CS selector
#define X86_64_MODE_LME   (0x0004) // LME bit (lomg mode enable) from extended feature MSR
#define X86_64_MODE_REX   (0x0008) // REX bit (register extension) from extended feature MSR
typedef struct _SEG64_DESC_INFO
    {
    DWORD64 SegBase;
    DWORD64 SegLimit;
    DWORD SegFlags;
    } 	SEG64_DESC_INFO;

typedef struct _SSE_REG
    {
    DWORD Reg0;
    DWORD Reg1;
    DWORD Reg2;
    DWORD Reg3;
    } 	SSE_REG;

typedef struct _CONTEXT_X86_64
    {
    struct 
        {
        BOOL fSegmentRegs;
        BOOL fControlRegs;
        BOOL fIntegerRegs;
        BOOL fFloatingPointRegs;
        BOOL fDebugRegs;
        BOOL fSegmentDescriptors;
        BOOL fSSERegisters;
        BOOL fSystemRegisters;
        } 	RegGroupSelection;
    DWORD SegCs;
    DWORD SegSs;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD64 ModeFlags;
    DWORD64 EFlags;
    DWORD64 Rbp;
    DWORD64 Rip;
    DWORD64 Rsp;
    DWORD64 Rax;
    DWORD64 Rbx;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[ 80 ];
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    SEG64_DESC_INFO DescriptorCs;
    SEG64_DESC_INFO DescriptorSs;
    SEG64_DESC_INFO DescriptorGs;
    SEG64_DESC_INFO DescriptorFs;
    SEG64_DESC_INFO DescriptorEs;
    SEG64_DESC_INFO DescriptorDs;
    DWORD64 IDTBase;
    DWORD64 IDTLimit;
    DWORD64 GDTBase;
    DWORD64 GDTLimit;
    DWORD SelLDT;
    SEG64_DESC_INFO SegLDT;
    DWORD SelTSS;
    SEG64_DESC_INFO SegTSS;
    DWORD64 RegCr0;
    DWORD64 RegCr2;
    DWORD64 RegCr3;
    DWORD64 RegCr4;
    DWORD64 RegCr8;
    DWORD RegMXCSR;
    SSE_REG RegSSE[ 16 ];
    } 	CONTEXT_X86_64;

typedef struct _CONTEXT_X86_64 *PCONTEXT_X86_64;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0008_v0_0_s_ifspec;

#ifndef __IeXdiX86_64Context3_INTERFACE_DEFINED__
#define __IeXdiX86_64Context3_INTERFACE_DEFINED__

/* interface IeXdiX86_64Context3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiX86_64Context3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A5BF3FF-8CDA-4789-8323-BE04A970D006")
    IeXdiX86_64Context3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86_64 pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86_64 Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiX86_64Context3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiX86_64Context3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiX86_64Context3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiX86_64Context3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiX86_64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PCONTEXT_X86_64 pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiX86_64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ CONTEXT_X86_64 Context);
        
        END_INTERFACE
    } IeXdiX86_64Context3Vtbl;

    interface IeXdiX86_64Context3
    {
        CONST_VTBL struct IeXdiX86_64Context3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiX86_64Context3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiX86_64Context3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiX86_64Context3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiX86_64Context3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiX86_64Context3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiX86_64Context3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0009 */
/* [local] */ 

typedef struct _IA64_FLOAT128
    {
    DWORD64 Low;
    DWORD64 High;
    } 	IA64_FLOAT128;

typedef struct _EXDI_CONTEXT_IA64
    {
    struct 
        {
        BOOL fIntegerRegs;
        BOOL fBranchRegs;
        BOOL fLowFloatRegs;
        BOOL fHighFloatRegs;
        BOOL fDebugRegs;
        BOOL fControlRegs;
        BOOL fSystemRegs;
        } 	RegGroupSelection;
    DWORD64 IntR1;
    DWORD64 IntR2;
    DWORD64 IntR3;
    DWORD64 IntR4;
    DWORD64 IntR5;
    DWORD64 IntR6;
    DWORD64 IntR7;
    DWORD64 IntR8;
    DWORD64 IntR9;
    DWORD64 IntR10;
    DWORD64 IntR11;
    DWORD64 IntR12;
    DWORD64 IntR13;
    DWORD64 IntR14;
    DWORD64 IntR15;
    DWORD64 IntR16;
    DWORD64 IntR17;
    DWORD64 IntR18;
    DWORD64 IntR19;
    DWORD64 IntR20;
    DWORD64 IntR21;
    DWORD64 IntR22;
    DWORD64 IntR23;
    DWORD64 IntR24;
    DWORD64 IntR25;
    DWORD64 IntR26;
    DWORD64 IntR27;
    DWORD64 IntR28;
    DWORD64 IntR29;
    DWORD64 IntR30;
    DWORD64 IntR31;
    DWORD64 IntNats;
    DWORD64 Preds;
    DWORD64 Br0;
    DWORD64 Br1;
    DWORD64 Br2;
    DWORD64 Br3;
    DWORD64 Br4;
    DWORD64 Br5;
    DWORD64 Br6;
    DWORD64 Br7;
    DWORD64 StFPSR;
    IA64_FLOAT128 FltF2;
    IA64_FLOAT128 FltF3;
    IA64_FLOAT128 FltF4;
    IA64_FLOAT128 FltF5;
    IA64_FLOAT128 FltF6;
    IA64_FLOAT128 FltF7;
    IA64_FLOAT128 FltF8;
    IA64_FLOAT128 FltF9;
    IA64_FLOAT128 FltF10;
    IA64_FLOAT128 FltF11;
    IA64_FLOAT128 FltF12;
    IA64_FLOAT128 FltF13;
    IA64_FLOAT128 FltF14;
    IA64_FLOAT128 FltF15;
    IA64_FLOAT128 FltF16;
    IA64_FLOAT128 FltF17;
    IA64_FLOAT128 FltF18;
    IA64_FLOAT128 FltF19;
    IA64_FLOAT128 FltF20;
    IA64_FLOAT128 FltF21;
    IA64_FLOAT128 FltF22;
    IA64_FLOAT128 FltF23;
    IA64_FLOAT128 FltF24;
    IA64_FLOAT128 FltF25;
    IA64_FLOAT128 FltF26;
    IA64_FLOAT128 FltF27;
    IA64_FLOAT128 FltF28;
    IA64_FLOAT128 FltF29;
    IA64_FLOAT128 FltF30;
    IA64_FLOAT128 FltF31;
    IA64_FLOAT128 FltF32;
    IA64_FLOAT128 FltF33;
    IA64_FLOAT128 FltF34;
    IA64_FLOAT128 FltF35;
    IA64_FLOAT128 FltF36;
    IA64_FLOAT128 FltF37;
    IA64_FLOAT128 FltF38;
    IA64_FLOAT128 FltF39;
    IA64_FLOAT128 FltF40;
    IA64_FLOAT128 FltF41;
    IA64_FLOAT128 FltF42;
    IA64_FLOAT128 FltF43;
    IA64_FLOAT128 FltF44;
    IA64_FLOAT128 FltF45;
    IA64_FLOAT128 FltF46;
    IA64_FLOAT128 FltF47;
    IA64_FLOAT128 FltF48;
    IA64_FLOAT128 FltF49;
    IA64_FLOAT128 FltF50;
    IA64_FLOAT128 FltF51;
    IA64_FLOAT128 FltF52;
    IA64_FLOAT128 FltF53;
    IA64_FLOAT128 FltF54;
    IA64_FLOAT128 FltF55;
    IA64_FLOAT128 FltF56;
    IA64_FLOAT128 FltF57;
    IA64_FLOAT128 FltF58;
    IA64_FLOAT128 FltF59;
    IA64_FLOAT128 FltF60;
    IA64_FLOAT128 FltF61;
    IA64_FLOAT128 FltF62;
    IA64_FLOAT128 FltF63;
    IA64_FLOAT128 FltF64;
    IA64_FLOAT128 FltF65;
    IA64_FLOAT128 FltF66;
    IA64_FLOAT128 FltF67;
    IA64_FLOAT128 FltF68;
    IA64_FLOAT128 FltF69;
    IA64_FLOAT128 FltF70;
    IA64_FLOAT128 FltF71;
    IA64_FLOAT128 FltF72;
    IA64_FLOAT128 FltF73;
    IA64_FLOAT128 FltF74;
    IA64_FLOAT128 FltF75;
    IA64_FLOAT128 FltF76;
    IA64_FLOAT128 FltF77;
    IA64_FLOAT128 FltF78;
    IA64_FLOAT128 FltF79;
    IA64_FLOAT128 FltF80;
    IA64_FLOAT128 FltF81;
    IA64_FLOAT128 FltF82;
    IA64_FLOAT128 FltF83;
    IA64_FLOAT128 FltF84;
    IA64_FLOAT128 FltF85;
    IA64_FLOAT128 FltF86;
    IA64_FLOAT128 FltF87;
    IA64_FLOAT128 FltF88;
    IA64_FLOAT128 FltF89;
    IA64_FLOAT128 FltF90;
    IA64_FLOAT128 FltF91;
    IA64_FLOAT128 FltF92;
    IA64_FLOAT128 FltF93;
    IA64_FLOAT128 FltF94;
    IA64_FLOAT128 FltF95;
    IA64_FLOAT128 FltF96;
    IA64_FLOAT128 FltF97;
    IA64_FLOAT128 FltF98;
    IA64_FLOAT128 FltF99;
    IA64_FLOAT128 FltF100;
    IA64_FLOAT128 FltF101;
    IA64_FLOAT128 FltF102;
    IA64_FLOAT128 FltF103;
    IA64_FLOAT128 FltF104;
    IA64_FLOAT128 FltF105;
    IA64_FLOAT128 FltF106;
    IA64_FLOAT128 FltF107;
    IA64_FLOAT128 FltF108;
    IA64_FLOAT128 FltF109;
    IA64_FLOAT128 FltF110;
    IA64_FLOAT128 FltF111;
    IA64_FLOAT128 FltF112;
    IA64_FLOAT128 FltF113;
    IA64_FLOAT128 FltF114;
    IA64_FLOAT128 FltF115;
    IA64_FLOAT128 FltF116;
    IA64_FLOAT128 FltF117;
    IA64_FLOAT128 FltF118;
    IA64_FLOAT128 FltF119;
    IA64_FLOAT128 FltF120;
    IA64_FLOAT128 FltF121;
    IA64_FLOAT128 FltF122;
    IA64_FLOAT128 FltF123;
    IA64_FLOAT128 FltF124;
    IA64_FLOAT128 FltF125;
    IA64_FLOAT128 FltF126;
    IA64_FLOAT128 FltF127;
    DWORD64 DbI0;
    DWORD64 DbI1;
    DWORD64 DbI2;
    DWORD64 DbI3;
    DWORD64 DbI4;
    DWORD64 DbI5;
    DWORD64 DbI6;
    DWORD64 DbI7;
    DWORD64 DbD0;
    DWORD64 DbD1;
    DWORD64 DbD2;
    DWORD64 DbD3;
    DWORD64 DbD4;
    DWORD64 DbD5;
    DWORD64 DbD6;
    DWORD64 DbD7;
    DWORD64 ApUNAT;
    DWORD64 ApLC;
    DWORD64 ApEC;
    DWORD64 ApCCV;
    DWORD64 ApDCR;
    DWORD64 RsPFS;
    DWORD64 RsBSP;
    DWORD64 RsBSPSTORE;
    DWORD64 RsRSC;
    DWORD64 RsRNAT;
    DWORD64 StIPSR;
    DWORD64 StIIP;
    DWORD64 StIFS;
    DWORD64 StFCR;
    DWORD64 Eflag;
    DWORD64 SegCSD;
    DWORD64 SegSSD;
    DWORD64 Cflag;
    DWORD64 StFSR;
    DWORD64 StFIR;
    DWORD64 StFDR;
    DWORD64 PfC0;
    DWORD64 PfC1;
    DWORD64 PfC2;
    DWORD64 PfC3;
    DWORD64 PfC4;
    DWORD64 PfC5;
    DWORD64 PfC6;
    DWORD64 PfC7;
    DWORD64 PfD0;
    DWORD64 PfD1;
    DWORD64 PfD2;
    DWORD64 PfD3;
    DWORD64 PfD4;
    DWORD64 PfD5;
    DWORD64 PfD6;
    DWORD64 PfD7;
    DWORD64 IntH16;
    DWORD64 IntH17;
    DWORD64 IntH18;
    DWORD64 IntH19;
    DWORD64 IntH20;
    DWORD64 IntH21;
    DWORD64 IntH22;
    DWORD64 IntH23;
    DWORD64 IntH24;
    DWORD64 IntH25;
    DWORD64 IntH26;
    DWORD64 IntH27;
    DWORD64 IntH28;
    DWORD64 IntH29;
    DWORD64 IntH30;
    DWORD64 IntH31;
    DWORD64 ApCPUID0;
    DWORD64 ApCPUID1;
    DWORD64 ApCPUID2;
    DWORD64 ApCPUID3;
    DWORD64 ApCPUID4;
    DWORD64 ApCPUID5;
    DWORD64 ApCPUID6;
    DWORD64 ApCPUID7;
    DWORD64 ApKR0;
    DWORD64 ApKR1;
    DWORD64 ApKR2;
    DWORD64 ApKR3;
    DWORD64 ApKR4;
    DWORD64 ApKR5;
    DWORD64 ApKR6;
    DWORD64 ApKR7;
    DWORD64 ApITC;
    DWORD64 ApITM;
    DWORD64 ApIVA;
    DWORD64 ApPTA;
    DWORD64 ApGPTA;
    DWORD64 StISR;
    DWORD64 StIFA;
    DWORD64 StITIR;
    DWORD64 StIIPA;
    DWORD64 StIIM;
    DWORD64 StIHA;
    DWORD64 SaLID;
    DWORD64 SaIVR;
    DWORD64 SaTPR;
    DWORD64 SaEOI;
    DWORD64 SaIRR0;
    DWORD64 SaIRR1;
    DWORD64 SaIRR2;
    DWORD64 SaIRR3;
    DWORD64 SaITV;
    DWORD64 SaPMV;
    DWORD64 SaCMCV;
    DWORD64 SaLRR0;
    DWORD64 SaLRR1;
    DWORD64 Rr0;
    DWORD64 Rr1;
    DWORD64 Rr2;
    DWORD64 Rr3;
    DWORD64 Rr4;
    DWORD64 Rr5;
    DWORD64 Rr6;
    DWORD64 Rr7;
    DWORD64 Pkr0;
    DWORD64 Pkr1;
    DWORD64 Pkr2;
    DWORD64 Pkr3;
    DWORD64 Pkr4;
    DWORD64 Pkr5;
    DWORD64 Pkr6;
    DWORD64 Pkr7;
    DWORD64 Pkr8;
    DWORD64 Pkr9;
    DWORD64 Pkr10;
    DWORD64 Pkr11;
    DWORD64 Pkr12;
    DWORD64 Pkr13;
    DWORD64 Pkr14;
    DWORD64 Pkr15;
    DWORD64 TrI0;
    DWORD64 TrI1;
    DWORD64 TrI2;
    DWORD64 TrI3;
    DWORD64 TrI4;
    DWORD64 TrI5;
    DWORD64 TrI6;
    DWORD64 TrI7;
    DWORD64 TrD0;
    DWORD64 TrD1;
    DWORD64 TrD2;
    DWORD64 TrD3;
    DWORD64 TrD4;
    DWORD64 TrD5;
    DWORD64 TrD6;
    DWORD64 TrD7;
    DWORD64 SrMSR0;
    DWORD64 SrMSR1;
    DWORD64 SrMSR2;
    DWORD64 SrMSR3;
    DWORD64 SrMSR4;
    DWORD64 SrMSR5;
    DWORD64 SrMSR6;
    DWORD64 SrMSR7;
    } 	EXDI_CONTEXT_IA64;

typedef struct _EXDI_CONTEXT_IA64 *PEXDI_CONTEXT_IA64;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0009_v0_0_s_ifspec;

#ifndef __IeXdiIA64Context3_INTERFACE_DEFINED__
#define __IeXdiIA64Context3_INTERFACE_DEFINED__

/* interface IeXdiIA64Context3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiIA64Context3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("24C6A990-780C-428E-BE5B-E27E2CAEA05A")
    IeXdiIA64Context3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PEXDI_CONTEXT_IA64 pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ EXDI_CONTEXT_IA64 Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiIA64Context3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiIA64Context3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiIA64Context3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiIA64Context3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiIA64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PEXDI_CONTEXT_IA64 pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiIA64Context3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ EXDI_CONTEXT_IA64 Context);
        
        END_INTERFACE
    } IeXdiIA64Context3Vtbl;

    interface IeXdiIA64Context3
    {
        CONST_VTBL struct IeXdiIA64Context3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiIA64Context3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiIA64Context3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiIA64Context3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiIA64Context3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiIA64Context3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiIA64Context3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0010 */
/* [local] */ 

typedef struct _EXDI_CONTEXT_EBC
    {
    struct 
        {
        BOOL fGeneralRegs;
        BOOL fDedicatedRegs;
        } 	RegGroupSelection;
    DWORD64 R0;
    DWORD64 R1;
    DWORD64 R2;
    DWORD64 R3;
    DWORD64 R4;
    DWORD64 R5;
    DWORD64 R6;
    DWORD64 R7;
    DWORD64 Flags;
    DWORD64 IP;
    DWORD64 D2;
    DWORD64 D3;
    DWORD64 D4;
    DWORD64 D5;
    DWORD64 D6;
    DWORD64 D7;
    } 	EXDI_CONTEXT_EBC;

typedef struct _EXDI_CONTEXT_EBC *PEXDI_CONTEXT_EBC;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0010_v0_0_s_ifspec;

#ifndef __IeXdiEBCContext3_INTERFACE_DEFINED__
#define __IeXdiEBCContext3_INTERFACE_DEFINED__

/* interface IeXdiEBCContext3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiEBCContext3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C4E5523-3AC1-4014-B454-E54E180ABD8E")
    IeXdiEBCContext3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PEXDI_CONTEXT_EBC pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ EXDI_CONTEXT_EBC Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiEBCContext3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiEBCContext3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiEBCContext3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiEBCContext3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IeXdiEBCContext3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [out][in] */ PEXDI_CONTEXT_EBC pContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IeXdiEBCContext3 * This,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ EXDI_CONTEXT_EBC Context);
        
        END_INTERFACE
    } IeXdiEBCContext3Vtbl;

    interface IeXdiEBCContext3
    {
        CONST_VTBL struct IeXdiEBCContext3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiEBCContext3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiEBCContext3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiEBCContext3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiEBCContext3_GetContext(This,dwProcessorNumber,pContext)	\
    ( (This)->lpVtbl -> GetContext(This,dwProcessorNumber,pContext) ) 

#define IeXdiEBCContext3_SetContext(This,dwProcessorNumber,Context)	\
    ( (This)->lpVtbl -> SetContext(This,dwProcessorNumber,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiEBCContext3_INTERFACE_DEFINED__ */


#ifndef __IeXdiClientNotifyRunChg3_INTERFACE_DEFINED__
#define __IeXdiClientNotifyRunChg3_INTERFACE_DEFINED__

/* interface IeXdiClientNotifyRunChg3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiClientNotifyRunChg3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEC95378-3797-4079-9C70-A45AB2F85278")
    IeXdiClientNotifyRunChg3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NotifyRunStateChange( 
            /* [in] */ RUN_STATUS_TYPE ersCurrent,
            /* [in] */ HALT_REASON_TYPE ehrCurrent,
            /* [in] */ ADDRESS_TYPE CurrentExecAddress,
            /* [in] */ DWORD dwExceptionCode,
            /* [in] */ DWORD dwProcessorNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiClientNotifyRunChg3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiClientNotifyRunChg3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiClientNotifyRunChg3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiClientNotifyRunChg3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyRunStateChange )( 
            IeXdiClientNotifyRunChg3 * This,
            /* [in] */ RUN_STATUS_TYPE ersCurrent,
            /* [in] */ HALT_REASON_TYPE ehrCurrent,
            /* [in] */ ADDRESS_TYPE CurrentExecAddress,
            /* [in] */ DWORD dwExceptionCode,
            /* [in] */ DWORD dwProcessorNumber);
        
        END_INTERFACE
    } IeXdiClientNotifyRunChg3Vtbl;

    interface IeXdiClientNotifyRunChg3
    {
        CONST_VTBL struct IeXdiClientNotifyRunChg3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiClientNotifyRunChg3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiClientNotifyRunChg3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiClientNotifyRunChg3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiClientNotifyRunChg3_NotifyRunStateChange(This,ersCurrent,ehrCurrent,CurrentExecAddress,dwExceptionCode,dwProcessorNumber)	\
    ( (This)->lpVtbl -> NotifyRunStateChange(This,ersCurrent,ehrCurrent,CurrentExecAddress,dwExceptionCode,dwProcessorNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiClientNotifyRunChg3_INTERFACE_DEFINED__ */


#ifndef __IeXdiKeepaliveInterface3_INTERFACE_DEFINED__
#define __IeXdiKeepaliveInterface3_INTERFACE_DEFINED__

/* interface IeXdiKeepaliveInterface3 */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiKeepaliveInterface3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AD8BA47-DE4D-47E2-A922-78E5790A0E0A")
    IeXdiKeepaliveInterface3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsDebugSessionAlive( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiKeepaliveInterface3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiKeepaliveInterface3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiKeepaliveInterface3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiKeepaliveInterface3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsDebugSessionAlive )( 
            IeXdiKeepaliveInterface3 * This);
        
        END_INTERFACE
    } IeXdiKeepaliveInterface3Vtbl;

    interface IeXdiKeepaliveInterface3
    {
        CONST_VTBL struct IeXdiKeepaliveInterface3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiKeepaliveInterface3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiKeepaliveInterface3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiKeepaliveInterface3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiKeepaliveInterface3_IsDebugSessionAlive(This)	\
    ( (This)->lpVtbl -> IsDebugSessionAlive(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiKeepaliveInterface3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExdiKdSample_0000_0013 */
/* [local] */ 

typedef 
enum _ExdiComponentFunctionType
    {
        exdiComponentSession	= 0,
        exdiTargetEntity	= ( exdiComponentSession + 1 ) ,
        exdiUnknown	= ( exdiTargetEntity + 1 ) 
    } 	ExdiComponentFunctionType;



extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExdiKdSample_0000_0013_v0_0_s_ifspec;

#ifndef __IeXdiControlComponentFunctions_INTERFACE_DEFINED__
#define __IeXdiControlComponentFunctions_INTERFACE_DEFINED__

/* interface IeXdiControlComponentFunctions */
/* [ref][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IeXdiControlComponentFunctions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("630e91f3-dfe2-49c8-b274-2843595a4fa6")
    IeXdiControlComponentFunctions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ExecuteExdiComponentFunction( 
            /* [in] */ ExdiComponentFunctionType type,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ LPCWSTR pFunctionToExecute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExecuteTargetEntityFunction( 
            /* [in] */ ExdiComponentFunctionType type,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ LPCWSTR pFunctionToExecute,
            /* [out] */ SAFEARRAY * *pFunctionResponseBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IeXdiControlComponentFunctionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IeXdiControlComponentFunctions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IeXdiControlComponentFunctions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IeXdiControlComponentFunctions * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExecuteExdiComponentFunction )( 
            IeXdiControlComponentFunctions * This,
            /* [in] */ ExdiComponentFunctionType type,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ LPCWSTR pFunctionToExecute);
        
        HRESULT ( STDMETHODCALLTYPE *ExecuteTargetEntityFunction )( 
            IeXdiControlComponentFunctions * This,
            /* [in] */ ExdiComponentFunctionType type,
            /* [in] */ DWORD dwProcessorNumber,
            /* [in] */ LPCWSTR pFunctionToExecute,
            /* [out] */ SAFEARRAY * *pFunctionResponseBuffer);
        
        END_INTERFACE
    } IeXdiControlComponentFunctionsVtbl;

    interface IeXdiControlComponentFunctions
    {
        CONST_VTBL struct IeXdiControlComponentFunctionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IeXdiControlComponentFunctions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IeXdiControlComponentFunctions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IeXdiControlComponentFunctions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IeXdiControlComponentFunctions_ExecuteExdiComponentFunction(This,type,dwProcessorNumber,pFunctionToExecute)	\
    ( (This)->lpVtbl -> ExecuteExdiComponentFunction(This,type,dwProcessorNumber,pFunctionToExecute) ) 

#define IeXdiControlComponentFunctions_ExecuteTargetEntityFunction(This,type,dwProcessorNumber,pFunctionToExecute,pFunctionResponseBuffer)	\
    ( (This)->lpVtbl -> ExecuteTargetEntityFunction(This,type,dwProcessorNumber,pFunctionToExecute,pFunctionResponseBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IeXdiControlComponentFunctions_INTERFACE_DEFINED__ */


#ifndef __IAsynchronousCommandNotificationReceiver_INTERFACE_DEFINED__
#define __IAsynchronousCommandNotificationReceiver_INTERFACE_DEFINED__

/* interface IAsynchronousCommandNotificationReceiver */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IAsynchronousCommandNotificationReceiver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("650FE759-CC39-49A8-8BBA-13DE47107B98")
    IAsynchronousCommandNotificationReceiver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnAsynchronousCommandCompleted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformKeepaliveChecks( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsynchronousCommandNotificationReceiverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsynchronousCommandNotificationReceiver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsynchronousCommandNotificationReceiver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsynchronousCommandNotificationReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnAsynchronousCommandCompleted )( 
            IAsynchronousCommandNotificationReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformKeepaliveChecks )( 
            IAsynchronousCommandNotificationReceiver * This);
        
        END_INTERFACE
    } IAsynchronousCommandNotificationReceiverVtbl;

    interface IAsynchronousCommandNotificationReceiver
    {
        CONST_VTBL struct IAsynchronousCommandNotificationReceiverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsynchronousCommandNotificationReceiver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsynchronousCommandNotificationReceiver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsynchronousCommandNotificationReceiver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsynchronousCommandNotificationReceiver_OnAsynchronousCommandCompleted(This)	\
    ( (This)->lpVtbl -> OnAsynchronousCommandCompleted(This) ) 

#define IAsynchronousCommandNotificationReceiver_PerformKeepaliveChecks(This)	\
    ( (This)->lpVtbl -> PerformKeepaliveChecks(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsynchronousCommandNotificationReceiver_INTERFACE_DEFINED__ */



#ifndef __ExdiKdSampleLib_LIBRARY_DEFINED__
#define __ExdiKdSampleLib_LIBRARY_DEFINED__

/* library ExdiKdSampleLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ExdiKdSampleLib;

EXTERN_C const CLSID CLSID_StaticExdiSampleServer;

#ifdef __cplusplus

class DECLSPEC_UUID("53838F70-0936-44A9-AB4E-ABB568401508")
StaticExdiSampleServer;
#endif

EXTERN_C const CLSID CLSID_LiveExdiSampleServer;

#ifdef __cplusplus

class DECLSPEC_UUID("67030926-1754-4FDA-9788-7F731CBDAE42")
LiveExdiSampleServer;
#endif
#endif /* __ExdiKdSampleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


