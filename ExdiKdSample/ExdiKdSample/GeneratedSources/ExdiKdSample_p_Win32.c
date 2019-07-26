

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ExdiKdSample.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ExdiKdSample.h"

#define TYPE_FORMAT_STRING_SIZE   2503                              
#define PROC_FORMAT_STRING_SIZE   2209                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _ExdiKdSample_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ExdiKdSample_MIDL_TYPE_FORMAT_STRING;

typedef struct _ExdiKdSample_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ExdiKdSample_MIDL_PROC_FORMAT_STRING;

typedef struct _ExdiKdSample_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ExdiKdSample_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ExdiKdSample_MIDL_TYPE_FORMAT_STRING ExdiKdSample__MIDL_TypeFormatString;
extern const ExdiKdSample_MIDL_PROC_FORMAT_STRING ExdiKdSample__MIDL_ProcFormatString;
extern const ExdiKdSample_MIDL_EXPR_FORMAT_STRING ExdiKdSample__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiServerFactory3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiServerFactory3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiServer3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiServer3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiCodeBreakpoint3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiCodeBreakpoint3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiDataBreakpoint3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiDataBreakpoint3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiX86Context3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiX86Context3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiX86ExContext3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiX86ExContext3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiARM4Context3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiARM4Context3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiArmV8Arch64Context3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiArmV8Arch64Context3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiX86_64Context3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiX86_64Context3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiIA64Context3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiIA64Context3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiEBCContext3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiEBCContext3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiClientNotifyRunChg3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiClientNotifyRunChg3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiKeepaliveInterface3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiKeepaliveInterface3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IeXdiControlComponentFunctions_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IeXdiControlComponentFunctions_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAsynchronousCommandNotificationReceiver_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAsynchronousCommandNotificationReceiver_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ExdiKdSample_MIDL_PROC_FORMAT_STRING ExdiKdSample__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure CreateExdiServer */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pConstructorArguments */

/* 24 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pServer */

/* 30 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTargetInfo */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x3 ),	/* 3 */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pgti */

/* 66 */	NdrFcShort( 0xe113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=56 */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRunStatus */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x4 ),	/* 4 */
/* 86 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x98 ),	/* 152 */
/* 92 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 94 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter persCurrent */

/* 102 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pehrCurrent */

/* 108 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pCurrentExecAddress */

/* 114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pdwExceptionCode */

/* 120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwProcessorNumberOfLastEvent */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Run */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x5 ),	/* 5 */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Halt */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x6 ),	/* 6 */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoSingleStep */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x7 ),	/* 7 */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reboot */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNbCodeBpAvail */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x9 ),	/* 9 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x40 ),	/* 64 */
/* 278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNbHwCodeBpAvail */

/* 288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwNbSwCodeBpAvail */

/* 294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNbDataBpAvail */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xa ),	/* 10 */
/* 314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x24 ),	/* 36 */
/* 320 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNbDataBpAvail */

/* 330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddCodeBreakpoint */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0xb ),	/* 11 */
/* 350 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 352 */	NdrFcShort( 0x2c ),	/* 44 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cbpk */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter mt */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 382 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwExecMode */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwTotalBypassCount */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppieXdiCodeBreakpoint */

/* 396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 398 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 400 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DelCodeBreakpoint */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0xc ),	/* 12 */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiCodeBreakpoint */

/* 432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDataBreakpoint */

/* 444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0xd ),	/* 13 */
/* 452 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 454 */	NdrFcShort( 0x4e ),	/* 78 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xb,		/* 11 */
/* 460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressMask */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwData */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwDataMask */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bAccessWidth */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 496 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter mt */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 502 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bAddressSpace */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 508 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter da */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 514 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwTotalBypassCount */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppieXdiDataBreakpoint */

/* 522 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 524 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 526 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DelDataBreakpoint */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xe ),	/* 14 */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiDataBreakpoint */

/* 558 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartNotifyingRunChg */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0xf ),	/* 15 */
/* 578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiClientNotifyRunChg */

/* 594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pdwConnectionCookie */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StopNotifyingRunChg */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x10 ),	/* 16 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwConnectionCookie */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadVirtualMemory */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x11 ),	/* 17 */
/* 656 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 658 */	NdrFcShort( 0x18 ),	/* 24 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 664 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwBytesToRead */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReadBuffer */

/* 684 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 688 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteVirtualMemory */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x12 ),	/* 18 */
/* 704 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 712 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter pdwBytesWritten */

/* 732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadPhysicalMemoryOrPeriphIO */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x13 ),	/* 19 */
/* 752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 754 */	NdrFcShort( 0x1e ),	/* 30 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 760 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressSpace */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 778 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwBytesToRead */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReadBuffer */

/* 786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 790 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePhysicalMemoryOrPeriphIO */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x14 ),	/* 20 */
/* 806 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 808 */	NdrFcShort( 0x16 ),	/* 22 */
/* 810 */	NdrFcShort( 0x24 ),	/* 36 */
/* 812 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 814 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressSpace */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter pdwBytesWritten */

/* 840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ioctl */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x15 ),	/* 21 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 868 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInputBuffer */

/* 876 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter dwBuffOutSize */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputBuffer */

/* 888 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumberOfProcessors */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x16 ),	/* 22 */
/* 908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x24 ),	/* 36 */
/* 914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNumberOfProcessors */

/* 924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastHitBreakpoint */

/* 936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x17 ),	/* 23 */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBreakpointInformation */

/* 960 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKPCRForProcessor */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x18 ),	/* 24 */
/* 980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	NdrFcShort( 0x2c ),	/* 44 */
/* 986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pKPCRPointer */

/* 1002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadKdVersionBlock */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1030 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBufferSize */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pKdVersionBlockBuffer */

/* 1044 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetKeepaliveInterface */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pKeepalive */

/* 1080 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	NdrFcShort( 0x4c8 ),	/* Type Offset=1224 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadMSR */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1100 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1104 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwRegisterIndex */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValue */

/* 1128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1136 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteMSR */

/* 1140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1148 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1150 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1156 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwRegisterIndex */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1180 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 1188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1196 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 1202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 1204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddress */

/* 1212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1216 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pcbpk */

/* 1218 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1222 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pmt */

/* 1224 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1228 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pdwExecMode */

/* 1230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwTotalBypassCount */

/* 1236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1238 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBypassedOccurences */

/* 1242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfEnabled */

/* 1248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1250 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetState */


	/* Procedure SetState */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1270 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fEnabled */


	/* Parameter fEnabled */

/* 1284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fResetBypassedOccurences */


	/* Parameter fResetBypassedOccurences */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1310 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x142 ),	/* 322 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddress */

/* 1326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pAddressMask */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pdwData */

/* 1338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwDataMask */

/* 1344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbAccessWidth */

/* 1350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1354 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter pmt */

/* 1356 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1358 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1360 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pbAddressSpace */

/* 1362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1364 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1366 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter pda */

/* 1368 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1370 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1372 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pdwTotalBypassCount */

/* 1374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1376 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBypassedOccurences */

/* 1380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1382 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfEnabled */

/* 1386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1388 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1408 */	NdrFcShort( 0x128 ),	/* 296 */
/* 1410 */	NdrFcShort( 0x128 ),	/* 296 */
/* 1412 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1414 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1428 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1432 */	NdrFcShort( 0x4f2 ),	/* Type Offset=1266 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1448 */	NdrFcShort( 0xe8 ),	/* x86 Stack size/offset = 232 */
/* 1450 */	NdrFcShort( 0x114 ),	/* 276 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1470 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	NdrFcShort( 0x4f2 ),	/* Type Offset=1266 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0xe4 ),	/* x86 Stack size/offset = 228 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1492 */	NdrFcShort( 0x340 ),	/* 832 */
/* 1494 */	NdrFcShort( 0x340 ),	/* 832 */
/* 1496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1512 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1516 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1532 */	NdrFcShort( 0x200 ),	/* x86 Stack size/offset = 512 */
/* 1534 */	NdrFcShort( 0x32c ),	/* 812 */
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1554 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */

	/* Return value */

/* 1560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1562 */	NdrFcShort( 0x1fc ),	/* x86 Stack size/offset = 508 */
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1576 */	NdrFcShort( 0x22c ),	/* 556 */
/* 1578 */	NdrFcShort( 0x22c ),	/* 556 */
/* 1580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1582 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1596 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1600 */	NdrFcShort( 0x5bc ),	/* Type Offset=1468 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1616 */	NdrFcShort( 0x1ac ),	/* x86 Stack size/offset = 428 */
/* 1618 */	NdrFcShort( 0x218 ),	/* 536 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1638 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	NdrFcShort( 0x5bc ),	/* Type Offset=1468 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x1a8 ),	/* x86 Stack size/offset = 424 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1660 */	NdrFcShort( 0x62c ),	/* 1580 */
/* 1662 */	NdrFcShort( 0x62c ),	/* 1580 */
/* 1664 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1666 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1680 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	NdrFcShort( 0x612 ),	/* Type Offset=1554 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1700 */	NdrFcShort( 0x3ac ),	/* x86 Stack size/offset = 940 */
/* 1702 */	NdrFcShort( 0x618 ),	/* 1560 */
/* 1704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1706 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1722 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	NdrFcShort( 0x612 ),	/* Type Offset=1554 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0x3a8 ),	/* x86 Stack size/offset = 936 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1764 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	NdrFcShort( 0x656 ),	/* Type Offset=1622 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1784 */	NdrFcShort( 0x39c ),	/* x86 Stack size/offset = 924 */
/* 1786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1790 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	NdrFcShort( 0x656 ),	/* Type Offset=1622 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0x398 ),	/* x86 Stack size/offset = 920 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1848 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	NdrFcShort( 0x6da ),	/* Type Offset=1754 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1868 */	NdrFcShort( 0xe44 ),	/* x86 Stack size/offset = 3652 */
/* 1870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	NdrFcShort( 0x6da ),	/* Type Offset=1754 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1898 */	NdrFcShort( 0xe40 ),	/* x86 Stack size/offset = 3648 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1912 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 1914 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 1916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1932 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1936 */	NdrFcShort( 0x9ac ),	/* Type Offset=2476 */

	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1952 */	NdrFcShort( 0x94 ),	/* x86 Stack size/offset = 148 */
/* 1954 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 1956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1974 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	NdrFcShort( 0x9ac ),	/* Type Offset=2476 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1982 */	NdrFcShort( 0x90 ),	/* x86 Stack size/offset = 144 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyRunStateChange */

/* 1986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1994 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1996 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2002 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ersCurrent */

/* 2010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2014 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ehrCurrent */

/* 2016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2020 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter CurrentExecAddress */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwExceptionCode */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAsynchronousCommandCompleted */


	/* Procedure IsDebugSessionAlive */

/* 2046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2054 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecuteExdiComponentFunction */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2084 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2086 */	NdrFcShort( 0xe ),	/* 14 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFunctionToExecute */

/* 2112 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecuteTargetEntityFunction */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2132 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2134 */	NdrFcShort( 0xe ),	/* 14 */
/* 2136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2138 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2140 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2152 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFunctionToExecute */

/* 2160 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2164 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pFunctionResponseBuffer */

/* 2166 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2170 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PerformKeepaliveChecks */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2192 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ExdiKdSample_MIDL_TYPE_FORMAT_STRING ExdiKdSample__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 12 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 26 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 28 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 30 */	NdrFcShort( 0x12 ),	/* Offset= 18 (48) */
/* 32 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x28 ),	/* 40 */
/* 36 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 46 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 48 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x34 ),	/* 52 */
/* 52 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 56 */	NdrFcShort( 0x2c ),	/* 44 */
/* 58 */	NdrFcShort( 0x2c ),	/* 44 */
/* 60 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 62 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 66 */	NdrFcShort( 0x30 ),	/* 48 */
/* 68 */	NdrFcShort( 0x30 ),	/* 48 */
/* 70 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 72 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 76 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 78 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (32) */
/* 80 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 82 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 84 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 86 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 90 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 94 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 96 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 102 */	NdrFcLong( 0x386d8bcb ),	/* 946703307 */
/* 106 */	NdrFcShort( 0x9d1e ),	/* -25314 */
/* 108 */	NdrFcShort( 0x4bf4 ),	/* 19444 */
/* 110 */	0xbe,		/* 190 */
			0x90,		/* 144 */
/* 112 */	0x90,		/* 144 */
			0xd7,		/* 215 */
/* 114 */	0x80,		/* 128 */
			0x25,		/* 37 */
/* 116 */	0x45,		/* 69 */
			0xfe,		/* 254 */
/* 118 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 124 */	NdrFcLong( 0xfc90e444 ),	/* -57613244 */
/* 128 */	NdrFcShort( 0x6e23 ),	/* 28195 */
/* 130 */	NdrFcShort( 0x40c1 ),	/* 16577 */
/* 132 */	0xa8,		/* 168 */
			0xd0,		/* 208 */
/* 134 */	0x12,		/* 18 */
			0x3,		/* 3 */
/* 136 */	0xc8,		/* 200 */
			0xad,		/* 173 */
/* 138 */	0xb3,		/* 179 */
			0x24,		/* 36 */
/* 140 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 142 */	NdrFcLong( 0xcec95378 ),	/* -825666696 */
/* 146 */	NdrFcShort( 0x3797 ),	/* 14231 */
/* 148 */	NdrFcShort( 0x4079 ),	/* 16505 */
/* 150 */	0x9c,		/* 156 */
			0x70,		/* 112 */
/* 152 */	0xa4,		/* 164 */
			0x5a,		/* 90 */
/* 154 */	0xb2,		/* 178 */
			0xf8,		/* 248 */
/* 156 */	0x52,		/* 82 */
			0x78,		/* 120 */
/* 158 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 160 */	NdrFcShort( 0x3fa ),	/* Offset= 1018 (1178) */
/* 162 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x13, 0x0,	/* FC_OP */
/* 168 */	NdrFcShort( 0x3e0 ),	/* Offset= 992 (1160) */
/* 170 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 172 */	NdrFcShort( 0x18 ),	/* 24 */
/* 174 */	NdrFcShort( 0xa ),	/* 10 */
/* 176 */	NdrFcLong( 0x8 ),	/* 8 */
/* 180 */	NdrFcShort( 0x70 ),	/* Offset= 112 (292) */
/* 182 */	NdrFcLong( 0xd ),	/* 13 */
/* 186 */	NdrFcShort( 0x94 ),	/* Offset= 148 (334) */
/* 188 */	NdrFcLong( 0x9 ),	/* 9 */
/* 192 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (390) */
/* 194 */	NdrFcLong( 0xc ),	/* 12 */
/* 198 */	NdrFcShort( 0x2c4 ),	/* Offset= 708 (906) */
/* 200 */	NdrFcLong( 0x24 ),	/* 36 */
/* 204 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (954) */
/* 206 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 210 */	NdrFcShort( 0x30a ),	/* Offset= 778 (988) */
/* 212 */	NdrFcLong( 0x10 ),	/* 16 */
/* 216 */	NdrFcShort( 0x324 ),	/* Offset= 804 (1020) */
/* 218 */	NdrFcLong( 0x2 ),	/* 2 */
/* 222 */	NdrFcShort( 0x33e ),	/* Offset= 830 (1052) */
/* 224 */	NdrFcLong( 0x3 ),	/* 3 */
/* 228 */	NdrFcShort( 0x358 ),	/* Offset= 856 (1084) */
/* 230 */	NdrFcLong( 0x14 ),	/* 20 */
/* 234 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1116) */
/* 236 */	NdrFcShort( 0xffff ),	/* Offset= -1 (235) */
/* 238 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 240 */	NdrFcShort( 0x2 ),	/* 2 */
/* 242 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 244 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 246 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 248 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 250 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (238) */
/* 256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 260 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 264 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 270 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 272 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	0x13, 0x0,	/* FC_OP */
/* 286 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (250) */
/* 288 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 292 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 298 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 304 */	0x11, 0x0,	/* FC_RP */
/* 306 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (260) */
/* 308 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 310 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 312 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 322 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 326 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 328 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 330 */	NdrFcShort( 0xfec0 ),	/* Offset= -320 (10) */
/* 332 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x6 ),	/* Offset= 6 (346) */
/* 342 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 346 */	
			0x11, 0x0,	/* FC_RP */
/* 348 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (312) */
/* 350 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 352 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 368 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 378 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 382 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 384 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 386 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (350) */
/* 388 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 390 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x6 ),	/* Offset= 6 (402) */
/* 398 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 400 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 402 */	
			0x11, 0x0,	/* FC_RP */
/* 404 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (368) */
/* 406 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 408 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 410 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 412 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (416) */
/* 416 */	NdrFcShort( 0x10 ),	/* 16 */
/* 418 */	NdrFcShort( 0x2f ),	/* 47 */
/* 420 */	NdrFcLong( 0x14 ),	/* 20 */
/* 424 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 426 */	NdrFcLong( 0x3 ),	/* 3 */
/* 430 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 432 */	NdrFcLong( 0x11 ),	/* 17 */
/* 436 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 438 */	NdrFcLong( 0x2 ),	/* 2 */
/* 442 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 444 */	NdrFcLong( 0x4 ),	/* 4 */
/* 448 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 450 */	NdrFcLong( 0x5 ),	/* 5 */
/* 454 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 456 */	NdrFcLong( 0xb ),	/* 11 */
/* 460 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 462 */	NdrFcLong( 0xa ),	/* 10 */
/* 466 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 468 */	NdrFcLong( 0x6 ),	/* 6 */
/* 472 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (704) */
/* 474 */	NdrFcLong( 0x7 ),	/* 7 */
/* 478 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 480 */	NdrFcLong( 0x8 ),	/* 8 */
/* 484 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (710) */
/* 486 */	NdrFcLong( 0xd ),	/* 13 */
/* 490 */	NdrFcShort( 0xfe20 ),	/* Offset= -480 (10) */
/* 492 */	NdrFcLong( 0x9 ),	/* 9 */
/* 496 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (350) */
/* 498 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 502 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (714) */
/* 504 */	NdrFcLong( 0x24 ),	/* 36 */
/* 508 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (722) */
/* 510 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 514 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (722) */
/* 516 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 520 */	NdrFcShort( 0x100 ),	/* Offset= 256 (776) */
/* 522 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 526 */	NdrFcShort( 0xfe ),	/* Offset= 254 (780) */
/* 528 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 532 */	NdrFcShort( 0xfc ),	/* Offset= 252 (784) */
/* 534 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 538 */	NdrFcShort( 0xfa ),	/* Offset= 250 (788) */
/* 540 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 544 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (792) */
/* 546 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 550 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (796) */
/* 552 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 556 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (780) */
/* 558 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 562 */	NdrFcShort( 0xde ),	/* Offset= 222 (784) */
/* 564 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 568 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (800) */
/* 570 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 574 */	NdrFcShort( 0xde ),	/* Offset= 222 (796) */
/* 576 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 580 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (804) */
/* 582 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 586 */	NdrFcShort( 0xde ),	/* Offset= 222 (808) */
/* 588 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 592 */	NdrFcShort( 0xdc ),	/* Offset= 220 (812) */
/* 594 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 598 */	NdrFcShort( 0xda ),	/* Offset= 218 (816) */
/* 600 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 604 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (828) */
/* 606 */	NdrFcLong( 0x10 ),	/* 16 */
/* 610 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 612 */	NdrFcLong( 0x12 ),	/* 18 */
/* 616 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 618 */	NdrFcLong( 0x13 ),	/* 19 */
/* 622 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 624 */	NdrFcLong( 0x15 ),	/* 21 */
/* 628 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 630 */	NdrFcLong( 0x16 ),	/* 22 */
/* 634 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 636 */	NdrFcLong( 0x17 ),	/* 23 */
/* 640 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 642 */	NdrFcLong( 0xe ),	/* 14 */
/* 646 */	NdrFcShort( 0xbe ),	/* Offset= 190 (836) */
/* 648 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 652 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (846) */
/* 654 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 658 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (850) */
/* 660 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 664 */	NdrFcShort( 0x74 ),	/* Offset= 116 (780) */
/* 666 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 670 */	NdrFcShort( 0x72 ),	/* Offset= 114 (784) */
/* 672 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 676 */	NdrFcShort( 0x70 ),	/* Offset= 112 (788) */
/* 678 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 682 */	NdrFcShort( 0x66 ),	/* Offset= 102 (784) */
/* 684 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 688 */	NdrFcShort( 0x60 ),	/* Offset= 96 (784) */
/* 690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* Offset= 0 (694) */
/* 696 */	NdrFcLong( 0x1 ),	/* 1 */
/* 700 */	NdrFcShort( 0x0 ),	/* Offset= 0 (700) */
/* 702 */	NdrFcShort( 0xffff ),	/* Offset= -1 (701) */
/* 704 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 710 */	
			0x13, 0x0,	/* FC_OP */
/* 712 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (250) */
/* 714 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 716 */	NdrFcShort( 0x2 ),	/* Offset= 2 (718) */
/* 718 */	
			0x13, 0x0,	/* FC_OP */
/* 720 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1160) */
/* 722 */	
			0x13, 0x0,	/* FC_OP */
/* 724 */	NdrFcShort( 0x20 ),	/* Offset= 32 (756) */
/* 726 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 728 */	NdrFcLong( 0x2f ),	/* 47 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 742 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 744 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 754 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 756 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0xa ),	/* Offset= 10 (772) */
/* 764 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 766 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (726) */
/* 770 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 772 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 774 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (744) */
/* 776 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 778 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 780 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 782 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 786 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 788 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 790 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 792 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 794 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 796 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 798 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 800 */	
			0x13, 0x0,	/* FC_OP */
/* 802 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (704) */
/* 804 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 806 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (710) */
/* 808 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 810 */	NdrFcShort( 0xfce0 ),	/* Offset= -800 (10) */
/* 812 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 814 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (350) */
/* 816 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 818 */	NdrFcShort( 0x2 ),	/* Offset= 2 (820) */
/* 820 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 822 */	NdrFcShort( 0x2 ),	/* Offset= 2 (824) */
/* 824 */	
			0x13, 0x0,	/* FC_OP */
/* 826 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1160) */
/* 828 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 830 */	NdrFcShort( 0x2 ),	/* Offset= 2 (832) */
/* 832 */	
			0x13, 0x0,	/* FC_OP */
/* 834 */	NdrFcShort( 0x14 ),	/* Offset= 20 (854) */
/* 836 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 840 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 842 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 844 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 846 */	
			0x13, 0x0,	/* FC_OP */
/* 848 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (836) */
/* 850 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 852 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 854 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 856 */	NdrFcShort( 0x20 ),	/* 32 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* Offset= 0 (860) */
/* 862 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 864 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 866 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 868 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (406) */
/* 872 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 874 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 884 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 886 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (854) */
/* 902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 906 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x6 ),	/* Offset= 6 (918) */
/* 914 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 916 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 918 */	
			0x11, 0x0,	/* FC_RP */
/* 920 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (874) */
/* 922 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 924 */	NdrFcShort( 0x4 ),	/* 4 */
/* 926 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 932 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 934 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 936 */	NdrFcShort( 0x4 ),	/* 4 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	0x13, 0x0,	/* FC_OP */
/* 948 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (756) */
/* 950 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 952 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 954 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x6 ),	/* Offset= 6 (966) */
/* 962 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 966 */	
			0x11, 0x0,	/* FC_RP */
/* 968 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (922) */
/* 970 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 976 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 982 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 984 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (970) */
			0x5b,		/* FC_END */
/* 988 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x18 ),	/* 24 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0xa ),	/* Offset= 10 (1004) */
/* 996 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 998 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1000 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (976) */
/* 1002 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1004 */	
			0x11, 0x0,	/* FC_RP */
/* 1006 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (312) */
/* 1008 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1012 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1018 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1020 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1026 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1028 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1030 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1032 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1034 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1008) */
/* 1036 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1038 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1040 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1042 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1044 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1050 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1052 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1056 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1062 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1064 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1066 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1040) */
/* 1068 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1070 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1072 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1074 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1076 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1082 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1084 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1096 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1098 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1072) */
/* 1100 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1102 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1104 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1108 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1114 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1116 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1120 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1122 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1128 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1130 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1104) */
/* 1132 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1134 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1136 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1142 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1144 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1150 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1152 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1154 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1156 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1136) */
/* 1158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1160 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1162 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1164 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1144) */
/* 1166 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1166) */
/* 1168 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1170 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (170) */
/* 1176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1178 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0xfc00 ),	/* Offset= -1024 (162) */
/* 1188 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1192) */
/* 1192 */	
			0x12, 0x0,	/* FC_UP */
/* 1194 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1160) */
/* 1196 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1188) */
/* 1206 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1210) */
/* 1210 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1212 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1216) */
/* 1218 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1220 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1222 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1224 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1226 */	NdrFcLong( 0x2ad8ba47 ),	/* 718846535 */
/* 1230 */	NdrFcShort( 0xde4d ),	/* -8627 */
/* 1232 */	NdrFcShort( 0x47e2 ),	/* 18402 */
/* 1234 */	0xa9,		/* 169 */
			0x22,		/* 34 */
/* 1236 */	0x78,		/* 120 */
			0xe5,		/* 229 */
/* 1238 */	0x79,		/* 121 */
			0xa,		/* 10 */
/* 1240 */	0xe,		/* 14 */
			0xa,		/* 10 */
/* 1242 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1244 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1246 */	
			0x11, 0x0,	/* FC_RP */
/* 1248 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1266) */
/* 1250 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1252 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1254 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1258 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1260 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1262 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1264 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1266 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1268 */	NdrFcShort( 0xdc ),	/* 220 */
/* 1270 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1272 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1250) */
/* 1274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1278 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1280 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1284 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1286 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1288 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1290 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1292 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1294 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1296 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1298 */	0x0,		/* 0 */
			NdrFcShort( 0xffd9 ),	/* Offset= -39 (1260) */
			0x8,		/* FC_LONG */
/* 1302 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1306 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1310 */	
			0x11, 0x0,	/* FC_RP */
/* 1312 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1356) */
/* 1314 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1316 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1320 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1326 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1328 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1330 */	NdrFcShort( 0xc ),	/* 12 */
/* 1332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1334 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1336 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1338 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1340 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1342 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1346 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1348 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1336) */
/* 1354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1356 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1358 */	NdrFcShort( 0x1f4 ),	/* 500 */
/* 1360 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1362 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1314) */
/* 1364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1366 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1370 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1376 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1380 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1382 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1384 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1386 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1388 */	0x0,		/* 0 */
			NdrFcShort( 0xff7f ),	/* Offset= -129 (1260) */
			0x8,		/* FC_LONG */
/* 1392 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1398 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1400 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1328) */
/* 1402 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1404 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1328) */
/* 1406 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1408 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (1328) */
/* 1410 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1412 */	NdrFcShort( 0xffac ),	/* Offset= -84 (1328) */
/* 1414 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1416 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (1328) */
/* 1418 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1420 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1328) */
/* 1422 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1424 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1426 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1428 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1328) */
			0x8,		/* FC_LONG */
/* 1432 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1434 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (1328) */
/* 1436 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1438 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1440 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1442 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1346) */
			0x5b,		/* FC_END */
/* 1446 */	
			0x11, 0x0,	/* FC_RP */
/* 1448 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1468) */
/* 1450 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1452 */	NdrFcShort( 0x100 ),	/* 256 */
/* 1454 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1456 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1458 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1460 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1462 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1466 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1468 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1470 */	NdrFcShort( 0x1a0 ),	/* 416 */
/* 1472 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1474 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (1336) */
/* 1476 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1478 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1480 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1482 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1484 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1486 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1488 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1490 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1492 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1494 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1496 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1450) */
/* 1498 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1500 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1456) */
/* 1502 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1504 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1456) */
/* 1506 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1508 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1462) */
/* 1510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1462) */
/* 1514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1516 */	
			0x11, 0x0,	/* FC_RP */
/* 1518 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1554) */
/* 1520 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1522 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 1524 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1526 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1528 */	NdrFcShort( 0x200 ),	/* 512 */
/* 1530 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1532 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (1336) */
/* 1534 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1536 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1538 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1540 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1542 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1544 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1546 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1548 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1552 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1554 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1556 */	NdrFcShort( 0x3a0 ),	/* 928 */
/* 1558 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1560 */	NdrFcShort( 0xff20 ),	/* Offset= -224 (1336) */
/* 1562 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1564 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1566 */	0x0,		/* 0 */
			NdrFcShort( 0xffd1 ),	/* Offset= -47 (1520) */
			0xb,		/* FC_HYPER */
/* 1570 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1572 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1574 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (1526) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1578 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (1536) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1582 */	0x0,		/* 0 */
			NdrFcShort( 0xff81 ),	/* Offset= -127 (1456) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1586 */	0x0,		/* 0 */
			NdrFcShort( 0xffd3 ),	/* Offset= -45 (1542) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1590 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (1548) */
			0x5b,		/* FC_END */
/* 1594 */	
			0x11, 0x0,	/* FC_RP */
/* 1596 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1622) */
/* 1598 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1600 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1604) */
/* 1606 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1608 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1612 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1614 */	NdrFcShort( 0x100 ),	/* 256 */
/* 1616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0xfee6 ),	/* Offset= -282 (1336) */
/* 1620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1622 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1624 */	NdrFcShort( 0x390 ),	/* 912 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1628) */
/* 1630 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1632 */	NdrFcShort( 0xfec2 ),	/* Offset= -318 (1314) */
/* 1634 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1636 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1638 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1640 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1642 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1644 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1646 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1648 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1650 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1652 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1654 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1656 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1658 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1660 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1662 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1664 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1668 */	NdrFcShort( 0xfe68 ),	/* Offset= -408 (1260) */
/* 1670 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1672 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1674 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1676 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1678 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (1598) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1682 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (1598) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1686 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1598) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1690 */	0x0,		/* 0 */
			NdrFcShort( 0xffa3 ),	/* Offset= -93 (1598) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1694 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1598) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1698 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1598) */
			0xb,		/* FC_HYPER */
/* 1702 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1704 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1706 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1708 */	0x0,		/* 0 */
			NdrFcShort( 0xff91 ),	/* Offset= -111 (1598) */
			0x8,		/* FC_LONG */
/* 1712 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1714 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (1598) */
			0xb,		/* FC_HYPER */
/* 1718 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1720 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1722 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1724 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (1612) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1730 */	
			0x11, 0x0,	/* FC_RP */
/* 1732 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1754) */
/* 1734 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1736 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1742 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1744 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1746 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1750 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1754 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1756 */	NdrFcShort( 0xe38 ),	/* 3640 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1760) */
/* 1762 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1764 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1734) */
/* 1766 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1768 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1770 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1772 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1774 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1776 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1778 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1780 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1782 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1784 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1786 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1788 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1790 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1792 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1794 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1796 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1798 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1800 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1802 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1804 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1806 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1808 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1810 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1814 */	0x0,		/* 0 */
			NdrFcShort( 0xffbb ),	/* Offset= -69 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1818 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1822 */	0x0,		/* 0 */
			NdrFcShort( 0xffb3 ),	/* Offset= -77 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1826 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1830 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1834 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1838 */	0x0,		/* 0 */
			NdrFcShort( 0xffa3 ),	/* Offset= -93 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1842 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1846 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1850 */	0x0,		/* 0 */
			NdrFcShort( 0xff97 ),	/* Offset= -105 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1854 */	0x0,		/* 0 */
			NdrFcShort( 0xff93 ),	/* Offset= -109 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1858 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1862 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1866 */	0x0,		/* 0 */
			NdrFcShort( 0xff87 ),	/* Offset= -121 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1870 */	0x0,		/* 0 */
			NdrFcShort( 0xff83 ),	/* Offset= -125 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1874 */	0x0,		/* 0 */
			NdrFcShort( 0xff7f ),	/* Offset= -129 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1878 */	0x0,		/* 0 */
			NdrFcShort( 0xff7b ),	/* Offset= -133 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1882 */	0x0,		/* 0 */
			NdrFcShort( 0xff77 ),	/* Offset= -137 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1886 */	0x0,		/* 0 */
			NdrFcShort( 0xff73 ),	/* Offset= -141 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1890 */	0x0,		/* 0 */
			NdrFcShort( 0xff6f ),	/* Offset= -145 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1894 */	0x0,		/* 0 */
			NdrFcShort( 0xff6b ),	/* Offset= -149 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1898 */	0x0,		/* 0 */
			NdrFcShort( 0xff67 ),	/* Offset= -153 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1902 */	0x0,		/* 0 */
			NdrFcShort( 0xff63 ),	/* Offset= -157 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1906 */	0x0,		/* 0 */
			NdrFcShort( 0xff5f ),	/* Offset= -161 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1910 */	0x0,		/* 0 */
			NdrFcShort( 0xff5b ),	/* Offset= -165 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1914 */	0x0,		/* 0 */
			NdrFcShort( 0xff57 ),	/* Offset= -169 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1918 */	0x0,		/* 0 */
			NdrFcShort( 0xff53 ),	/* Offset= -173 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1922 */	0x0,		/* 0 */
			NdrFcShort( 0xff4f ),	/* Offset= -177 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1926 */	0x0,		/* 0 */
			NdrFcShort( 0xff4b ),	/* Offset= -181 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1930 */	0x0,		/* 0 */
			NdrFcShort( 0xff47 ),	/* Offset= -185 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1934 */	0x0,		/* 0 */
			NdrFcShort( 0xff43 ),	/* Offset= -189 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1938 */	0x0,		/* 0 */
			NdrFcShort( 0xff3f ),	/* Offset= -193 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1942 */	0x0,		/* 0 */
			NdrFcShort( 0xff3b ),	/* Offset= -197 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1946 */	0x0,		/* 0 */
			NdrFcShort( 0xff37 ),	/* Offset= -201 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1950 */	0x0,		/* 0 */
			NdrFcShort( 0xff33 ),	/* Offset= -205 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1954 */	0x0,		/* 0 */
			NdrFcShort( 0xff2f ),	/* Offset= -209 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1958 */	0x0,		/* 0 */
			NdrFcShort( 0xff2b ),	/* Offset= -213 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1962 */	0x0,		/* 0 */
			NdrFcShort( 0xff27 ),	/* Offset= -217 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1966 */	0x0,		/* 0 */
			NdrFcShort( 0xff23 ),	/* Offset= -221 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1970 */	0x0,		/* 0 */
			NdrFcShort( 0xff1f ),	/* Offset= -225 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1974 */	0x0,		/* 0 */
			NdrFcShort( 0xff1b ),	/* Offset= -229 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1978 */	0x0,		/* 0 */
			NdrFcShort( 0xff17 ),	/* Offset= -233 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1982 */	0x0,		/* 0 */
			NdrFcShort( 0xff13 ),	/* Offset= -237 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1986 */	0x0,		/* 0 */
			NdrFcShort( 0xff0f ),	/* Offset= -241 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1990 */	0x0,		/* 0 */
			NdrFcShort( 0xff0b ),	/* Offset= -245 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1994 */	0x0,		/* 0 */
			NdrFcShort( 0xff07 ),	/* Offset= -249 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1998 */	0x0,		/* 0 */
			NdrFcShort( 0xff03 ),	/* Offset= -253 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2002 */	0x0,		/* 0 */
			NdrFcShort( 0xfeff ),	/* Offset= -257 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2006 */	0x0,		/* 0 */
			NdrFcShort( 0xfefb ),	/* Offset= -261 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2010 */	0x0,		/* 0 */
			NdrFcShort( 0xfef7 ),	/* Offset= -265 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2014 */	0x0,		/* 0 */
			NdrFcShort( 0xfef3 ),	/* Offset= -269 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2018 */	0x0,		/* 0 */
			NdrFcShort( 0xfeef ),	/* Offset= -273 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2022 */	0x0,		/* 0 */
			NdrFcShort( 0xfeeb ),	/* Offset= -277 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2026 */	0x0,		/* 0 */
			NdrFcShort( 0xfee7 ),	/* Offset= -281 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2030 */	0x0,		/* 0 */
			NdrFcShort( 0xfee3 ),	/* Offset= -285 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2034 */	0x0,		/* 0 */
			NdrFcShort( 0xfedf ),	/* Offset= -289 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2038 */	0x0,		/* 0 */
			NdrFcShort( 0xfedb ),	/* Offset= -293 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2042 */	0x0,		/* 0 */
			NdrFcShort( 0xfed7 ),	/* Offset= -297 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2046 */	0x0,		/* 0 */
			NdrFcShort( 0xfed3 ),	/* Offset= -301 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2050 */	0x0,		/* 0 */
			NdrFcShort( 0xfecf ),	/* Offset= -305 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2054 */	0x0,		/* 0 */
			NdrFcShort( 0xfecb ),	/* Offset= -309 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2058 */	0x0,		/* 0 */
			NdrFcShort( 0xfec7 ),	/* Offset= -313 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2062 */	0x0,		/* 0 */
			NdrFcShort( 0xfec3 ),	/* Offset= -317 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2066 */	0x0,		/* 0 */
			NdrFcShort( 0xfebf ),	/* Offset= -321 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2070 */	0x0,		/* 0 */
			NdrFcShort( 0xfebb ),	/* Offset= -325 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2074 */	0x0,		/* 0 */
			NdrFcShort( 0xfeb7 ),	/* Offset= -329 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2078 */	0x0,		/* 0 */
			NdrFcShort( 0xfeb3 ),	/* Offset= -333 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2082 */	0x0,		/* 0 */
			NdrFcShort( 0xfeaf ),	/* Offset= -337 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2086 */	0x0,		/* 0 */
			NdrFcShort( 0xfeab ),	/* Offset= -341 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2090 */	0x0,		/* 0 */
			NdrFcShort( 0xfea7 ),	/* Offset= -345 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2094 */	0x0,		/* 0 */
			NdrFcShort( 0xfea3 ),	/* Offset= -349 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2098 */	0x0,		/* 0 */
			NdrFcShort( 0xfe9f ),	/* Offset= -353 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2102 */	0x0,		/* 0 */
			NdrFcShort( 0xfe9b ),	/* Offset= -357 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2106 */	0x0,		/* 0 */
			NdrFcShort( 0xfe97 ),	/* Offset= -361 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2110 */	0x0,		/* 0 */
			NdrFcShort( 0xfe93 ),	/* Offset= -365 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2114 */	0x0,		/* 0 */
			NdrFcShort( 0xfe8f ),	/* Offset= -369 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2118 */	0x0,		/* 0 */
			NdrFcShort( 0xfe8b ),	/* Offset= -373 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2122 */	0x0,		/* 0 */
			NdrFcShort( 0xfe87 ),	/* Offset= -377 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2126 */	0x0,		/* 0 */
			NdrFcShort( 0xfe83 ),	/* Offset= -381 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2130 */	0x0,		/* 0 */
			NdrFcShort( 0xfe7f ),	/* Offset= -385 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2134 */	0x0,		/* 0 */
			NdrFcShort( 0xfe7b ),	/* Offset= -389 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2138 */	0x0,		/* 0 */
			NdrFcShort( 0xfe77 ),	/* Offset= -393 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2142 */	0x0,		/* 0 */
			NdrFcShort( 0xfe73 ),	/* Offset= -397 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2146 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6f ),	/* Offset= -401 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2150 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6b ),	/* Offset= -405 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2154 */	0x0,		/* 0 */
			NdrFcShort( 0xfe67 ),	/* Offset= -409 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2158 */	0x0,		/* 0 */
			NdrFcShort( 0xfe63 ),	/* Offset= -413 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2162 */	0x0,		/* 0 */
			NdrFcShort( 0xfe5f ),	/* Offset= -417 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2166 */	0x0,		/* 0 */
			NdrFcShort( 0xfe5b ),	/* Offset= -421 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2170 */	0x0,		/* 0 */
			NdrFcShort( 0xfe57 ),	/* Offset= -425 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2174 */	0x0,		/* 0 */
			NdrFcShort( 0xfe53 ),	/* Offset= -429 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2178 */	0x0,		/* 0 */
			NdrFcShort( 0xfe4f ),	/* Offset= -433 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2182 */	0x0,		/* 0 */
			NdrFcShort( 0xfe4b ),	/* Offset= -437 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2186 */	0x0,		/* 0 */
			NdrFcShort( 0xfe47 ),	/* Offset= -441 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2190 */	0x0,		/* 0 */
			NdrFcShort( 0xfe43 ),	/* Offset= -445 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2194 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3f ),	/* Offset= -449 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2198 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3b ),	/* Offset= -453 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2202 */	0x0,		/* 0 */
			NdrFcShort( 0xfe37 ),	/* Offset= -457 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2206 */	0x0,		/* 0 */
			NdrFcShort( 0xfe33 ),	/* Offset= -461 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2210 */	0x0,		/* 0 */
			NdrFcShort( 0xfe2f ),	/* Offset= -465 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2214 */	0x0,		/* 0 */
			NdrFcShort( 0xfe2b ),	/* Offset= -469 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2218 */	0x0,		/* 0 */
			NdrFcShort( 0xfe27 ),	/* Offset= -473 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2222 */	0x0,		/* 0 */
			NdrFcShort( 0xfe23 ),	/* Offset= -477 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2226 */	0x0,		/* 0 */
			NdrFcShort( 0xfe1f ),	/* Offset= -481 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2230 */	0x0,		/* 0 */
			NdrFcShort( 0xfe1b ),	/* Offset= -485 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2234 */	0x0,		/* 0 */
			NdrFcShort( 0xfe17 ),	/* Offset= -489 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2238 */	0x0,		/* 0 */
			NdrFcShort( 0xfe13 ),	/* Offset= -493 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2242 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2246 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0b ),	/* Offset= -501 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2250 */	0x0,		/* 0 */
			NdrFcShort( 0xfe07 ),	/* Offset= -505 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2254 */	0x0,		/* 0 */
			NdrFcShort( 0xfe03 ),	/* Offset= -509 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2258 */	0x0,		/* 0 */
			NdrFcShort( 0xfdff ),	/* Offset= -513 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2262 */	0x0,		/* 0 */
			NdrFcShort( 0xfdfb ),	/* Offset= -517 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2266 */	0x0,		/* 0 */
			NdrFcShort( 0xfdf7 ),	/* Offset= -521 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2270 */	0x0,		/* 0 */
			NdrFcShort( 0xfdf3 ),	/* Offset= -525 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2274 */	0x0,		/* 0 */
			NdrFcShort( 0xfdef ),	/* Offset= -529 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2278 */	0x0,		/* 0 */
			NdrFcShort( 0xfdeb ),	/* Offset= -533 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2282 */	0x0,		/* 0 */
			NdrFcShort( 0xfde7 ),	/* Offset= -537 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2286 */	0x0,		/* 0 */
			NdrFcShort( 0xfde3 ),	/* Offset= -541 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2290 */	0x0,		/* 0 */
			NdrFcShort( 0xfddf ),	/* Offset= -545 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2294 */	0x0,		/* 0 */
			NdrFcShort( 0xfddb ),	/* Offset= -549 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2298 */	0x0,		/* 0 */
			NdrFcShort( 0xfdd7 ),	/* Offset= -553 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2302 */	0x0,		/* 0 */
			NdrFcShort( 0xfdd3 ),	/* Offset= -557 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2306 */	0x0,		/* 0 */
			NdrFcShort( 0xfdcf ),	/* Offset= -561 (1746) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2310 */	0x0,		/* 0 */
			NdrFcShort( 0xfdcb ),	/* Offset= -565 (1746) */
			0xb,		/* FC_HYPER */
/* 2314 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2316 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2318 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2320 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2322 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2324 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2326 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2328 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2330 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2332 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2334 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2336 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2338 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2340 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2342 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2344 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2346 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2348 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2350 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2352 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2354 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2356 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2358 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2360 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2362 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2364 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2366 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2368 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2370 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2372 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2374 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2376 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2378 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2380 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2382 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2384 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2386 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2388 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2390 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2392 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2394 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2396 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2398 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2400 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2402 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2404 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2406 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2408 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2410 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2412 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2414 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2416 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2418 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2420 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2422 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2424 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2426 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2428 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2430 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2432 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2434 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2436 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2438 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2440 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2442 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2444 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2446 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2448 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2450 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2452 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2454 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2456 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2458 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2460 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2462 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2464 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2466 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2468 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2472 */	
			0x11, 0x0,	/* FC_RP */
/* 2474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2476) */
/* 2476 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2478 */	NdrFcShort( 0x88 ),	/* 136 */
/* 2480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2482 */	NdrFcShort( 0xfabe ),	/* Offset= -1346 (1136) */
/* 2484 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2486 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2488 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2490 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2492 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2494 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2496 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2498 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2500 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IeXdiServerFactory3, ver. 0.0,
   GUID={0x22EFA264,0x6FD7,0x4992,{0x94,0x27,0x12,0x5B,0x51,0x1A,0x47,0x7C}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiServerFactory3_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiServerFactory3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServerFactory3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiServerFactory3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServerFactory3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IeXdiServerFactory3ProxyVtbl = 
{
    &IeXdiServerFactory3_ProxyInfo,
    &IID_IeXdiServerFactory3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiServerFactory3::CreateExdiServer */
};

const CInterfaceStubVtbl _IeXdiServerFactory3StubVtbl =
{
    &IID_IeXdiServerFactory3,
    &IeXdiServerFactory3_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiServer3, ver. 0.0,
   GUID={0x2E501506,0x9703,0x4B6F,{0x9D,0x0D,0x6B,0x42,0xB0,0xE4,0x1E,0x6F}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiServer3_FormatStringOffsetTable[] =
    {
    42,
    78,
    138,
    168,
    198,
    234,
    264,
    306,
    342,
    408,
    444,
    534,
    570,
    612,
    648,
    696,
    744,
    798,
    852,
    900,
    936,
    972,
    1014,
    1056,
    1092,
    1140
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiServer3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServer3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiServer3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServer3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(29) _IeXdiServer3ProxyVtbl = 
{
    &IeXdiServer3_ProxyInfo,
    &IID_IeXdiServer3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetTargetInfo */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetRunStatus */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::Run */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::Halt */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::DoSingleStep */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::Reboot */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetNbCodeBpAvail */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetNbDataBpAvail */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::AddCodeBreakpoint */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::DelCodeBreakpoint */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::AddDataBreakpoint */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::DelDataBreakpoint */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::StartNotifyingRunChg */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::StopNotifyingRunChg */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::ReadVirtualMemory */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::WriteVirtualMemory */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::ReadPhysicalMemoryOrPeriphIO */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::WritePhysicalMemoryOrPeriphIO */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::Ioctl */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetNumberOfProcessors */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetLastHitBreakpoint */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::GetKPCRForProcessor */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::ReadKdVersionBlock */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::SetKeepaliveInterface */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::ReadMSR */ ,
    (void *) (INT_PTR) -1 /* IeXdiServer3::WriteMSR */
};

const CInterfaceStubVtbl _IeXdiServer3StubVtbl =
{
    &IID_IeXdiServer3,
    &IeXdiServer3_ServerInfo,
    29,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiCodeBreakpoint3, ver. 0.0,
   GUID={0x386D8BCB,0x9D1E,0x4BF4,{0xBE,0x90,0x90,0xD7,0x80,0x25,0x45,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiCodeBreakpoint3_FormatStringOffsetTable[] =
    {
    1188,
    1260
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiCodeBreakpoint3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiCodeBreakpoint3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiCodeBreakpoint3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiCodeBreakpoint3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiCodeBreakpoint3ProxyVtbl = 
{
    &IeXdiCodeBreakpoint3_ProxyInfo,
    &IID_IeXdiCodeBreakpoint3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiCodeBreakpoint3::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IeXdiCodeBreakpoint3::SetState */
};

const CInterfaceStubVtbl _IeXdiCodeBreakpoint3StubVtbl =
{
    &IID_IeXdiCodeBreakpoint3,
    &IeXdiCodeBreakpoint3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IeXdiDataBreakpoint3, ver. 0.0,
   GUID={0xFC90E444,0x6E23,0x40C1,{0xA8,0xD0,0x12,0x03,0xC8,0xAD,0xB3,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiDataBreakpoint3_FormatStringOffsetTable[] =
    {
    1302,
    1260
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiDataBreakpoint3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiDataBreakpoint3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiDataBreakpoint3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiDataBreakpoint3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiDataBreakpoint3ProxyVtbl = 
{
    &IeXdiDataBreakpoint3_ProxyInfo,
    &IID_IeXdiDataBreakpoint3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiDataBreakpoint3::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IeXdiDataBreakpoint3::SetState */
};

const CInterfaceStubVtbl _IeXdiDataBreakpoint3StubVtbl =
{
    &IID_IeXdiDataBreakpoint3,
    &IeXdiDataBreakpoint3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86Context3, ver. 0.0,
   GUID={0xEBBBE2D6,0x9B1E,0x4F35,{0xB9,0x56,0x28,0xA7,0x8C,0x34,0x8F,0x0F}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86Context3_FormatStringOffsetTable[] =
    {
    1398,
    1440
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiX86Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiX86Context3ProxyVtbl = 
{
    &IeXdiX86Context3_ProxyInfo,
    &IID_IeXdiX86Context3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiX86Context3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiX86Context3::SetContext */
};

const CInterfaceStubVtbl _IeXdiX86Context3StubVtbl =
{
    &IID_IeXdiX86Context3,
    &IeXdiX86Context3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86ExContext3, ver. 0.0,
   GUID={0x3F2A6A8A,0xD56B,0x4605,{0x8A,0x93,0xAC,0x1C,0x9B,0x7E,0x63,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86ExContext3_FormatStringOffsetTable[] =
    {
    1482,
    1524
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86ExContext3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86ExContext3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiX86ExContext3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86ExContext3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiX86ExContext3ProxyVtbl = 
{
    &IeXdiX86ExContext3_ProxyInfo,
    &IID_IeXdiX86ExContext3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiX86ExContext3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiX86ExContext3::SetContext */
};

const CInterfaceStubVtbl _IeXdiX86ExContext3StubVtbl =
{
    &IID_IeXdiX86ExContext3,
    &IeXdiX86ExContext3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiARM4Context3, ver. 0.0,
   GUID={0x25A27A99,0xC6F7,0x4A27,{0x87,0x49,0xFA,0x7E,0xA6,0x38,0xAD,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiARM4Context3_FormatStringOffsetTable[] =
    {
    1566,
    1608
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiARM4Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiARM4Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiARM4Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiARM4Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiARM4Context3ProxyVtbl = 
{
    &IeXdiARM4Context3_ProxyInfo,
    &IID_IeXdiARM4Context3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiARM4Context3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiARM4Context3::SetContext */
};

const CInterfaceStubVtbl _IeXdiARM4Context3StubVtbl =
{
    &IID_IeXdiARM4Context3,
    &IeXdiARM4Context3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiArmV8Arch64Context3, ver. 0.0,
   GUID={0x2146BE85,0x7866,0x4309,{0xB9,0x73,0xF9,0x65,0x0D,0x1A,0xA8,0x86}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiArmV8Arch64Context3_FormatStringOffsetTable[] =
    {
    1650,
    1692
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiArmV8Arch64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiArmV8Arch64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiArmV8Arch64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiArmV8Arch64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiArmV8Arch64Context3ProxyVtbl = 
{
    &IeXdiArmV8Arch64Context3_ProxyInfo,
    &IID_IeXdiArmV8Arch64Context3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiArmV8Arch64Context3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiArmV8Arch64Context3::SetContext */
};

const CInterfaceStubVtbl _IeXdiArmV8Arch64Context3StubVtbl =
{
    &IID_IeXdiArmV8Arch64Context3,
    &IeXdiArmV8Arch64Context3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86_64Context3, ver. 0.0,
   GUID={0x3A5BF3FF,0x8CDA,0x4789,{0x83,0x23,0xBE,0x04,0xA9,0x70,0xD0,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86_64Context3_FormatStringOffsetTable[] =
    {
    1734,
    1776
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86_64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86_64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiX86_64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86_64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiX86_64Context3ProxyVtbl = 
{
    &IeXdiX86_64Context3_ProxyInfo,
    &IID_IeXdiX86_64Context3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiX86_64Context3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiX86_64Context3::SetContext */
};

const CInterfaceStubVtbl _IeXdiX86_64Context3StubVtbl =
{
    &IID_IeXdiX86_64Context3,
    &IeXdiX86_64Context3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiIA64Context3, ver. 0.0,
   GUID={0x24C6A990,0x780C,0x428E,{0xBE,0x5B,0xE2,0x7E,0x2C,0xAE,0xA0,0x5A}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiIA64Context3_FormatStringOffsetTable[] =
    {
    1818,
    1860
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiIA64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiIA64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiIA64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiIA64Context3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiIA64Context3ProxyVtbl = 
{
    &IeXdiIA64Context3_ProxyInfo,
    &IID_IeXdiIA64Context3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiIA64Context3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiIA64Context3::SetContext */
};

const CInterfaceStubVtbl _IeXdiIA64Context3StubVtbl =
{
    &IID_IeXdiIA64Context3,
    &IeXdiIA64Context3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiEBCContext3, ver. 0.0,
   GUID={0x6C4E5523,0x3AC1,0x4014,{0xB4,0x54,0xE5,0x4E,0x18,0x0A,0xBD,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiEBCContext3_FormatStringOffsetTable[] =
    {
    1902,
    1944
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiEBCContext3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiEBCContext3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiEBCContext3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiEBCContext3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiEBCContext3ProxyVtbl = 
{
    &IeXdiEBCContext3_ProxyInfo,
    &IID_IeXdiEBCContext3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiEBCContext3::GetContext */ ,
    (void *) (INT_PTR) -1 /* IeXdiEBCContext3::SetContext */
};

const CInterfaceStubVtbl _IeXdiEBCContext3StubVtbl =
{
    &IID_IeXdiEBCContext3,
    &IeXdiEBCContext3_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IeXdiClientNotifyRunChg3, ver. 0.0,
   GUID={0xCEC95378,0x3797,0x4079,{0x9C,0x70,0xA4,0x5A,0xB2,0xF8,0x52,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiClientNotifyRunChg3_FormatStringOffsetTable[] =
    {
    1986
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiClientNotifyRunChg3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiClientNotifyRunChg3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiClientNotifyRunChg3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiClientNotifyRunChg3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IeXdiClientNotifyRunChg3ProxyVtbl = 
{
    &IeXdiClientNotifyRunChg3_ProxyInfo,
    &IID_IeXdiClientNotifyRunChg3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiClientNotifyRunChg3::NotifyRunStateChange */
};

const CInterfaceStubVtbl _IeXdiClientNotifyRunChg3StubVtbl =
{
    &IID_IeXdiClientNotifyRunChg3,
    &IeXdiClientNotifyRunChg3_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IeXdiKeepaliveInterface3, ver. 0.0,
   GUID={0x2AD8BA47,0xDE4D,0x47E2,{0xA9,0x22,0x78,0xE5,0x79,0x0A,0x0E,0x0A}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiKeepaliveInterface3_FormatStringOffsetTable[] =
    {
    2046
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiKeepaliveInterface3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiKeepaliveInterface3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiKeepaliveInterface3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiKeepaliveInterface3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IeXdiKeepaliveInterface3ProxyVtbl = 
{
    &IeXdiKeepaliveInterface3_ProxyInfo,
    &IID_IeXdiKeepaliveInterface3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiKeepaliveInterface3::IsDebugSessionAlive */
};

const CInterfaceStubVtbl _IeXdiKeepaliveInterface3StubVtbl =
{
    &IID_IeXdiKeepaliveInterface3,
    &IeXdiKeepaliveInterface3_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiControlComponentFunctions, ver. 0.0,
   GUID={0x630e91f3,0xdfe2,0x49c8,{0xb2,0x74,0x28,0x43,0x59,0x5a,0x4f,0xa6}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiControlComponentFunctions_FormatStringOffsetTable[] =
    {
    2076,
    2124
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiControlComponentFunctions_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiControlComponentFunctions_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IeXdiControlComponentFunctions_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiControlComponentFunctions_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IeXdiControlComponentFunctionsProxyVtbl = 
{
    &IeXdiControlComponentFunctions_ProxyInfo,
    &IID_IeXdiControlComponentFunctions,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IeXdiControlComponentFunctions::ExecuteExdiComponentFunction */ ,
    (void *) (INT_PTR) -1 /* IeXdiControlComponentFunctions::ExecuteTargetEntityFunction */
};

const CInterfaceStubVtbl _IeXdiControlComponentFunctionsStubVtbl =
{
    &IID_IeXdiControlComponentFunctions,
    &IeXdiControlComponentFunctions_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAsynchronousCommandNotificationReceiver, ver. 0.0,
   GUID={0x650FE759,0xCC39,0x49A8,{0x8B,0xBA,0x13,0xDE,0x47,0x10,0x7B,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[] =
    {
    2046,
    2178
    };

static const MIDL_STUBLESS_PROXY_INFO IAsynchronousCommandNotificationReceiver_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAsynchronousCommandNotificationReceiver_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IAsynchronousCommandNotificationReceiverProxyVtbl = 
{
    &IAsynchronousCommandNotificationReceiver_ProxyInfo,
    &IID_IAsynchronousCommandNotificationReceiver,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAsynchronousCommandNotificationReceiver::OnAsynchronousCommandCompleted */ ,
    (void *) (INT_PTR) -1 /* IAsynchronousCommandNotificationReceiver::PerformKeepaliveChecks */
};

const CInterfaceStubVtbl _IAsynchronousCommandNotificationReceiverStubVtbl =
{
    &IID_IAsynchronousCommandNotificationReceiver,
    &IAsynchronousCommandNotificationReceiver_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ExdiKdSample__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ExdiKdSample_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IeXdiServer3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiEBCContext3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiDataBreakpoint3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiKeepaliveInterface3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAsynchronousCommandNotificationReceiverProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiServerFactory3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiClientNotifyRunChg3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiArmV8Arch64Context3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiX86ExContext3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiIA64Context3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiARM4Context3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiCodeBreakpoint3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiX86Context3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiControlComponentFunctionsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IeXdiX86_64Context3ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ExdiKdSample_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IeXdiServer3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiEBCContext3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiDataBreakpoint3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiKeepaliveInterface3StubVtbl,
    ( CInterfaceStubVtbl *) &_IAsynchronousCommandNotificationReceiverStubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiServerFactory3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiClientNotifyRunChg3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiArmV8Arch64Context3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiX86ExContext3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiIA64Context3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiARM4Context3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiCodeBreakpoint3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiX86Context3StubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiControlComponentFunctionsStubVtbl,
    ( CInterfaceStubVtbl *) &_IeXdiX86_64Context3StubVtbl,
    0
};

PCInterfaceName const _ExdiKdSample_InterfaceNamesList[] = 
{
    "IeXdiServer3",
    "IeXdiEBCContext3",
    "IeXdiDataBreakpoint3",
    "IeXdiKeepaliveInterface3",
    "IAsynchronousCommandNotificationReceiver",
    "IeXdiServerFactory3",
    "IeXdiClientNotifyRunChg3",
    "IeXdiArmV8Arch64Context3",
    "IeXdiX86ExContext3",
    "IeXdiIA64Context3",
    "IeXdiARM4Context3",
    "IeXdiCodeBreakpoint3",
    "IeXdiX86Context3",
    "IeXdiControlComponentFunctions",
    "IeXdiX86_64Context3",
    0
};


#define _ExdiKdSample_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ExdiKdSample, pIID, n)

int __stdcall _ExdiKdSample_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ExdiKdSample, 15, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ExdiKdSample, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ExdiKdSample, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ExdiKdSample, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ExdiKdSample, 15, *pIndex )
    
}

const ExtendedProxyFileInfo ExdiKdSample_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ExdiKdSample_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ExdiKdSample_StubVtblList,
    (const PCInterfaceName * ) & _ExdiKdSample_InterfaceNamesList,
    0, /* no delegation */
    & _ExdiKdSample_IID_Lookup, 
    15,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

