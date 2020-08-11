

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ExdiKdSample_h.h"

#define TYPE_FORMAT_STRING_SIZE   2443                              
#define PROC_FORMAT_STRING_SIZE   2307                              
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

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



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


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pConstructorArguments */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pServer */

/* 32 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTargetInfo */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x3 ),	/* 3 */
/* 52 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pgti */

/* 70 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 76 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRunStatus */

/* 82 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 84 */	NdrFcLong( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
/* 90 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x98 ),	/* 152 */
/* 96 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 98 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter persCurrent */

/* 108 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pehrCurrent */

/* 114 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pCurrentExecAddress */

/* 120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pdwExceptionCode */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwProcessorNumberOfLastEvent */

/* 132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Run */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x5 ),	/* 5 */
/* 152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 160 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Halt */

/* 176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x6 ),	/* 6 */
/* 184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 192 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoSingleStep */

/* 208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x7 ),	/* 7 */
/* 216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 224 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reboot */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNbCodeBpAvail */

/* 278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x9 ),	/* 9 */
/* 286 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x40 ),	/* 64 */
/* 292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 294 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNbHwCodeBpAvail */

/* 304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwNbSwCodeBpAvail */

/* 310 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 312 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 318 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNbDataBpAvail */

/* 322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0xa ),	/* 10 */
/* 330 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x24 ),	/* 36 */
/* 336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNbDataBpAvail */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddCodeBreakpoint */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xb ),	/* 11 */
/* 368 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 370 */	NdrFcShort( 0x2c ),	/* 44 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 376 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 390 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cbpk */

/* 392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 396 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter mt */

/* 398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 402 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwExecMode */

/* 404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 406 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwTotalBypassCount */

/* 410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 412 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppieXdiCodeBreakpoint */

/* 416 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 418 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 420 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 424 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DelCodeBreakpoint */

/* 428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0xc ),	/* 12 */
/* 436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 444 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiCodeBreakpoint */

/* 454 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 458 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDataBreakpoint */

/* 466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0xd ),	/* 13 */
/* 474 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 476 */	NdrFcShort( 0x4e ),	/* 78 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xb,		/* 11 */
/* 482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 496 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressMask */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwData */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwDataMask */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bAccessWidth */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 520 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter mt */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 526 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bAddressSpace */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 532 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter da */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 538 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwTotalBypassCount */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppieXdiDataBreakpoint */

/* 546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 548 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 550 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DelDataBreakpoint */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xe ),	/* 14 */
/* 566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiDataBreakpoint */

/* 584 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 588 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartNotifyingRunChg */

/* 596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0xf ),	/* 15 */
/* 604 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 612 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pieXdiClientNotifyRunChg */

/* 622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 626 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter pdwConnectionCookie */

/* 628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 636 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StopNotifyingRunChg */

/* 640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x10 ),	/* 16 */
/* 648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 656 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwConnectionCookie */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadVirtualMemory */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x11 ),	/* 17 */
/* 686 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 688 */	NdrFcShort( 0x18 ),	/* 24 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 694 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 708 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwBytesToRead */

/* 710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 712 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReadBuffer */

/* 716 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 720 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 724 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteVirtualMemory */

/* 728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x12 ),	/* 18 */
/* 736 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 738 */	NdrFcShort( 0x10 ),	/* 16 */
/* 740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 742 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 744 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 758 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 760 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 764 */	NdrFcShort( 0x470 ),	/* Type Offset=1136 */

	/* Parameter pdwBytesWritten */

/* 766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 768 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 774 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadPhysicalMemoryOrPeriphIO */

/* 778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x13 ),	/* 19 */
/* 786 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 788 */	NdrFcShort( 0x1e ),	/* 30 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 794 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 808 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressSpace */

/* 810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 814 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwBytesToRead */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReadBuffer */

/* 822 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 826 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePhysicalMemoryOrPeriphIO */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x14 ),	/* 20 */
/* 842 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 844 */	NdrFcShort( 0x16 ),	/* 22 */
/* 846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 848 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 850 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Address */

/* 860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter AddressSpace */

/* 866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 874 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 876 */	NdrFcShort( 0x470 ),	/* Type Offset=1136 */

	/* Parameter pdwBytesWritten */

/* 878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 886 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ioctl */

/* 890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x15 ),	/* 21 */
/* 898 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 906 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInputBuffer */

/* 916 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 920 */	NdrFcShort( 0x470 ),	/* Type Offset=1136 */

	/* Parameter dwBuffOutSize */

/* 922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputBuffer */

/* 928 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 930 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 932 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 936 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumberOfProcessors */

/* 940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x16 ),	/* 22 */
/* 948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x24 ),	/* 36 */
/* 954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 956 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwNumberOfProcessors */

/* 966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastHitBreakpoint */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x17 ),	/* 23 */
/* 986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBreakpointInformation */

/* 1004 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1008 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 1010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKPCRForProcessor */

/* 1016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1024 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1032 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1044 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pKPCRPointer */

/* 1048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1052 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1056 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadKdVersionBlock */

/* 1060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1068 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1074 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1076 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBufferSize */

/* 1086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pKdVersionBlockBuffer */

/* 1092 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1096 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetKeepaliveInterface */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1120 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pKeepalive */

/* 1130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1134 */	NdrFcShort( 0x48c ),	/* Type Offset=1164 */

	/* Return value */

/* 1136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadMSR */

/* 1142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1150 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1154 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1158 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwRegisterIndex */

/* 1174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValue */

/* 1180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1184 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1188 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteMSR */

/* 1192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1200 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1202 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1208 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwRegisterIndex */

/* 1224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1234 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1250 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 1256 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 1258 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddress */

/* 1268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1272 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pcbpk */

/* 1274 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1276 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1278 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pmt */

/* 1280 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1282 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1284 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pdwExecMode */

/* 1286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1288 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwTotalBypassCount */

/* 1292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1294 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBypassedOccurences */

/* 1298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1300 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfEnabled */

/* 1304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1306 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1312 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetState */


	/* Procedure SetState */

/* 1316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1324 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1326 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fEnabled */


	/* Parameter fEnabled */

/* 1342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fResetBypassedOccurences */


	/* Parameter fResetBypassedOccurences */

/* 1348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 1360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1368 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x142 ),	/* 322 */
/* 1374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 1376 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddress */

/* 1386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1390 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pAddressMask */

/* 1392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1396 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pdwData */

/* 1398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwDataMask */

/* 1404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1406 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbAccessWidth */

/* 1410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1414 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter pmt */

/* 1416 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1418 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1420 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pbAddressSpace */

/* 1422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1424 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1426 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter pda */

/* 1428 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1430 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1432 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pdwTotalBypassCount */

/* 1434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1436 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBypassedOccurences */

/* 1440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1442 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfEnabled */

/* 1446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1448 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1466 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1468 */	NdrFcShort( 0x128 ),	/* 296 */
/* 1470 */	NdrFcShort( 0x128 ),	/* 296 */
/* 1472 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1474 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1486 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1490 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1494 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 1496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1498 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1512 */	NdrFcShort( 0x128 ),	/* 296 */
/* 1514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1518 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1534 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1538 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 1540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1556 */	NdrFcShort( 0x340 ),	/* 832 */
/* 1558 */	NdrFcShort( 0x340 ),	/* 832 */
/* 1560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1562 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1578 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1582 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1600 */	NdrFcShort( 0x340 ),	/* 832 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1606 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1622 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1624 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1626 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 1628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1630 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1642 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1644 */	NdrFcShort( 0x22c ),	/* 556 */
/* 1646 */	NdrFcShort( 0x22c ),	/* 556 */
/* 1648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1666 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1670 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Return value */

/* 1672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1686 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1688 */	NdrFcShort( 0x22c ),	/* 556 */
/* 1690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1694 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1710 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1712 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1714 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Return value */

/* 1716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1730 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1732 */	NdrFcShort( 0x62c ),	/* 1580 */
/* 1734 */	NdrFcShort( 0x62c ),	/* 1580 */
/* 1736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1738 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1754 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1758 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Return value */

/* 1760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1762 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1774 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1776 */	NdrFcShort( 0x62c ),	/* 1580 */
/* 1778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1782 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1794 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1798 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1802 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Return value */

/* 1804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1806 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1818 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1824 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1826 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1842 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1846 */	NdrFcShort( 0x61a ),	/* Type Offset=1562 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1862 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1870 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1886 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1890 */	NdrFcShort( 0x61a ),	/* Type Offset=1562 */

	/* Return value */

/* 1892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1906 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1912 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1914 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 1930 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1932 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1934 */	NdrFcShort( 0x69e ),	/* Type Offset=1694 */

	/* Return value */

/* 1936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 1942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1950 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1958 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 1974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1978 */	NdrFcShort( 0x69e ),	/* Type Offset=1694 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 1986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1996 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 1998 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 2000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2002 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 2012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2018 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2022 */	NdrFcShort( 0x970 ),	/* Type Offset=2416 */

	/* Return value */

/* 2024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 2030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2040 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 2042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2044 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2046 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessorNumber */

/* 2056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Context */

/* 2062 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2064 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2066 */	NdrFcShort( 0x970 ),	/* Type Offset=2416 */

	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyRunStateChange */

/* 2074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2082 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2084 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2090 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ersCurrent */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2104 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ehrCurrent */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2110 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter CurrentExecAddress */

/* 2112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2114 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2116 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dwExceptionCode */

/* 2118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2120 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2126 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAsynchronousCommandCompleted */


	/* Procedure IsDebugSessionAlive */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 2162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecuteExdiComponentFunction */

/* 2168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2176 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2178 */	NdrFcShort( 0xe ),	/* 14 */
/* 2180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2182 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2198 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFunctionToExecute */

/* 2206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2208 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2210 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 2212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecuteTargetEntityFunction */

/* 2218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2226 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2228 */	NdrFcShort( 0xe ),	/* 14 */
/* 2230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2232 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2234 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2248 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dwProcessorNumber */

/* 2250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFunctionToExecute */

/* 2256 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2260 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pFunctionResponseBuffer */

/* 2262 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2264 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2266 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PerformKeepaliveChecks */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2304 */	0x8,		/* FC_LONG */
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
			0x11, 0x0,	/* FC_RP */
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
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x40 ),	/* 64 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xc ),	/* Offset= 12 (66) */
/* 56 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (32) */
			0x40,		/* FC_STRUCTPAD4 */
/* 62 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 64 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 66 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 68 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 72 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 76 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 88 */	NdrFcShort( 0x2 ),	/* Offset= 2 (90) */
/* 90 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 92 */	NdrFcLong( 0x386d8bcb ),	/* 946703307 */
/* 96 */	NdrFcShort( 0x9d1e ),	/* -25314 */
/* 98 */	NdrFcShort( 0x4bf4 ),	/* 19444 */
/* 100 */	0xbe,		/* 190 */
			0x90,		/* 144 */
/* 102 */	0x90,		/* 144 */
			0xd7,		/* 215 */
/* 104 */	0x80,		/* 128 */
			0x25,		/* 37 */
/* 106 */	0x45,		/* 69 */
			0xfe,		/* 254 */
/* 108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0xfc90e444 ),	/* -57613244 */
/* 118 */	NdrFcShort( 0x6e23 ),	/* 28195 */
/* 120 */	NdrFcShort( 0x40c1 ),	/* 16577 */
/* 122 */	0xa8,		/* 168 */
			0xd0,		/* 208 */
/* 124 */	0x12,		/* 18 */
			0x3,		/* 3 */
/* 126 */	0xc8,		/* 200 */
			0xad,		/* 173 */
/* 128 */	0xb3,		/* 179 */
			0x24,		/* 36 */
/* 130 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 132 */	NdrFcLong( 0xcec95378 ),	/* -825666696 */
/* 136 */	NdrFcShort( 0x3797 ),	/* 14231 */
/* 138 */	NdrFcShort( 0x4079 ),	/* 16505 */
/* 140 */	0x9c,		/* 156 */
			0x70,		/* 112 */
/* 142 */	0xa4,		/* 164 */
			0x5a,		/* 90 */
/* 144 */	0xb2,		/* 178 */
			0xf8,		/* 248 */
/* 146 */	0x52,		/* 82 */
			0x78,		/* 120 */
/* 148 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 150 */	NdrFcShort( 0x3c8 ),	/* Offset= 968 (1118) */
/* 152 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (156) */
/* 156 */	
			0x13, 0x0,	/* FC_OP */
/* 158 */	NdrFcShort( 0x3ae ),	/* Offset= 942 (1100) */
/* 160 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 162 */	NdrFcShort( 0x20 ),	/* 32 */
/* 164 */	NdrFcShort( 0xa ),	/* 10 */
/* 166 */	NdrFcLong( 0x8 ),	/* 8 */
/* 170 */	NdrFcShort( 0x66 ),	/* Offset= 102 (272) */
/* 172 */	NdrFcLong( 0xd ),	/* 13 */
/* 176 */	NdrFcShort( 0x86 ),	/* Offset= 134 (310) */
/* 178 */	NdrFcLong( 0x9 ),	/* 9 */
/* 182 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (366) */
/* 184 */	NdrFcLong( 0xc ),	/* 12 */
/* 188 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (872) */
/* 190 */	NdrFcLong( 0x24 ),	/* 36 */
/* 194 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (910) */
/* 196 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 200 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (944) */
/* 202 */	NdrFcLong( 0x10 ),	/* 16 */
/* 206 */	NdrFcShort( 0x302 ),	/* Offset= 770 (976) */
/* 208 */	NdrFcLong( 0x2 ),	/* 2 */
/* 212 */	NdrFcShort( 0x318 ),	/* Offset= 792 (1004) */
/* 214 */	NdrFcLong( 0x3 ),	/* 3 */
/* 218 */	NdrFcShort( 0x32e ),	/* Offset= 814 (1032) */
/* 220 */	NdrFcLong( 0x14 ),	/* 20 */
/* 224 */	NdrFcShort( 0x344 ),	/* Offset= 836 (1060) */
/* 226 */	NdrFcShort( 0xffff ),	/* Offset= -1 (225) */
/* 228 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 230 */	NdrFcShort( 0x2 ),	/* 2 */
/* 232 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 234 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 236 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 238 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 240 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 244 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (228) */
/* 246 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 250 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 260 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 264 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 266 */	
			0x13, 0x0,	/* FC_OP */
/* 268 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (240) */
/* 270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 272 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x6 ),	/* Offset= 6 (284) */
/* 280 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 282 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 284 */	
			0x11, 0x0,	/* FC_RP */
/* 286 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (250) */
/* 288 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 298 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 302 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 304 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 306 */	NdrFcShort( 0xfed8 ),	/* Offset= -296 (10) */
/* 308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 310 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x6 ),	/* Offset= 6 (322) */
/* 318 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 320 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 322 */	
			0x11, 0x0,	/* FC_RP */
/* 324 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (288) */
/* 326 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 328 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 340 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 342 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 344 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 354 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 358 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 360 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 362 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (326) */
/* 364 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 366 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 368 */	NdrFcShort( 0x10 ),	/* 16 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x6 ),	/* Offset= 6 (378) */
/* 374 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 376 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 378 */	
			0x11, 0x0,	/* FC_RP */
/* 380 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (344) */
/* 382 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 384 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 386 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	NdrFcShort( 0x2f ),	/* 47 */
/* 396 */	NdrFcLong( 0x14 ),	/* 20 */
/* 400 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 402 */	NdrFcLong( 0x3 ),	/* 3 */
/* 406 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 408 */	NdrFcLong( 0x11 ),	/* 17 */
/* 412 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 414 */	NdrFcLong( 0x2 ),	/* 2 */
/* 418 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 420 */	NdrFcLong( 0x4 ),	/* 4 */
/* 424 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 426 */	NdrFcLong( 0x5 ),	/* 5 */
/* 430 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 432 */	NdrFcLong( 0xb ),	/* 11 */
/* 436 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 438 */	NdrFcLong( 0xa ),	/* 10 */
/* 442 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 444 */	NdrFcLong( 0x6 ),	/* 6 */
/* 448 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (680) */
/* 450 */	NdrFcLong( 0x7 ),	/* 7 */
/* 454 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 456 */	NdrFcLong( 0x8 ),	/* 8 */
/* 460 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (686) */
/* 462 */	NdrFcLong( 0xd ),	/* 13 */
/* 466 */	NdrFcShort( 0xfe38 ),	/* Offset= -456 (10) */
/* 468 */	NdrFcLong( 0x9 ),	/* 9 */
/* 472 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (326) */
/* 474 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 478 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (690) */
/* 480 */	NdrFcLong( 0x24 ),	/* 36 */
/* 484 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (698) */
/* 486 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 490 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (698) */
/* 492 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 496 */	NdrFcShort( 0x100 ),	/* Offset= 256 (752) */
/* 498 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 502 */	NdrFcShort( 0xfe ),	/* Offset= 254 (756) */
/* 504 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 508 */	NdrFcShort( 0xfc ),	/* Offset= 252 (760) */
/* 510 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 514 */	NdrFcShort( 0xfa ),	/* Offset= 250 (764) */
/* 516 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 520 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (768) */
/* 522 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 526 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (772) */
/* 528 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 532 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (756) */
/* 534 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 538 */	NdrFcShort( 0xde ),	/* Offset= 222 (760) */
/* 540 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 544 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (776) */
/* 546 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 550 */	NdrFcShort( 0xde ),	/* Offset= 222 (772) */
/* 552 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 556 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (780) */
/* 558 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 562 */	NdrFcShort( 0xde ),	/* Offset= 222 (784) */
/* 564 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 568 */	NdrFcShort( 0xdc ),	/* Offset= 220 (788) */
/* 570 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 574 */	NdrFcShort( 0xda ),	/* Offset= 218 (792) */
/* 576 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 580 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (804) */
/* 582 */	NdrFcLong( 0x10 ),	/* 16 */
/* 586 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 588 */	NdrFcLong( 0x12 ),	/* 18 */
/* 592 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 594 */	NdrFcLong( 0x13 ),	/* 19 */
/* 598 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 600 */	NdrFcLong( 0x15 ),	/* 21 */
/* 604 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 606 */	NdrFcLong( 0x16 ),	/* 22 */
/* 610 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 612 */	NdrFcLong( 0x17 ),	/* 23 */
/* 616 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 618 */	NdrFcLong( 0xe ),	/* 14 */
/* 622 */	NdrFcShort( 0xbe ),	/* Offset= 190 (812) */
/* 624 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 628 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (822) */
/* 630 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 634 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (826) */
/* 636 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 640 */	NdrFcShort( 0x74 ),	/* Offset= 116 (756) */
/* 642 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 646 */	NdrFcShort( 0x72 ),	/* Offset= 114 (760) */
/* 648 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 652 */	NdrFcShort( 0x70 ),	/* Offset= 112 (764) */
/* 654 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 658 */	NdrFcShort( 0x66 ),	/* Offset= 102 (760) */
/* 660 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 664 */	NdrFcShort( 0x60 ),	/* Offset= 96 (760) */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* Offset= 0 (670) */
/* 672 */	NdrFcLong( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* Offset= 0 (676) */
/* 678 */	NdrFcShort( 0xffff ),	/* Offset= -1 (677) */
/* 680 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 684 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 686 */	
			0x13, 0x0,	/* FC_OP */
/* 688 */	NdrFcShort( 0xfe40 ),	/* Offset= -448 (240) */
/* 690 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (694) */
/* 694 */	
			0x13, 0x0,	/* FC_OP */
/* 696 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1100) */
/* 698 */	
			0x13, 0x0,	/* FC_OP */
/* 700 */	NdrFcShort( 0x20 ),	/* Offset= 32 (732) */
/* 702 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 704 */	NdrFcLong( 0x2f ),	/* 47 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 718 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 720 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 726 */	NdrFcShort( 0x4 ),	/* 4 */
/* 728 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 730 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 732 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 734 */	NdrFcShort( 0x18 ),	/* 24 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0xa ),	/* Offset= 10 (748) */
/* 740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 742 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 744 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (702) */
/* 746 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 748 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 750 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (720) */
/* 752 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 754 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 756 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 758 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 760 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 762 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 764 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 766 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 768 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 770 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 772 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 774 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x13, 0x0,	/* FC_OP */
/* 778 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (680) */
/* 780 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 782 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (686) */
/* 784 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 786 */	NdrFcShort( 0xfcf8 ),	/* Offset= -776 (10) */
/* 788 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 790 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (326) */
/* 792 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 794 */	NdrFcShort( 0x2 ),	/* Offset= 2 (796) */
/* 796 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 798 */	NdrFcShort( 0x2 ),	/* Offset= 2 (800) */
/* 800 */	
			0x13, 0x0,	/* FC_OP */
/* 802 */	NdrFcShort( 0x12a ),	/* Offset= 298 (1100) */
/* 804 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 806 */	NdrFcShort( 0x2 ),	/* Offset= 2 (808) */
/* 808 */	
			0x13, 0x0,	/* FC_OP */
/* 810 */	NdrFcShort( 0x14 ),	/* Offset= 20 (830) */
/* 812 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 816 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 818 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 820 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 822 */	
			0x13, 0x0,	/* FC_OP */
/* 824 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (812) */
/* 826 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 828 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 832 */	NdrFcShort( 0x20 ),	/* 32 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* Offset= 0 (836) */
/* 838 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 840 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 842 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 844 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (382) */
/* 848 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 850 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 860 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 864 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 866 */	
			0x13, 0x0,	/* FC_OP */
/* 868 */	NdrFcShort( 0xffda ),	/* Offset= -38 (830) */
/* 870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 872 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 874 */	NdrFcShort( 0x10 ),	/* 16 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x6 ),	/* Offset= 6 (884) */
/* 880 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 882 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 884 */	
			0x11, 0x0,	/* FC_RP */
/* 886 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (850) */
/* 888 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 902 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 904 */	
			0x13, 0x0,	/* FC_OP */
/* 906 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (732) */
/* 908 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 910 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x10 ),	/* 16 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x6 ),	/* Offset= 6 (922) */
/* 918 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 920 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 922 */	
			0x11, 0x0,	/* FC_RP */
/* 924 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (888) */
/* 926 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 932 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 934 */	NdrFcShort( 0x10 ),	/* 16 */
/* 936 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 938 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 940 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (926) */
			0x5b,		/* FC_END */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x20 ),	/* 32 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0xa ),	/* Offset= 10 (960) */
/* 952 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 954 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 956 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (932) */
			0x5b,		/* FC_END */
/* 960 */	
			0x11, 0x0,	/* FC_RP */
/* 962 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (288) */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x6 ),	/* Offset= 6 (988) */
/* 984 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 986 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 988 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 990 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (964) */
/* 992 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 994 */	NdrFcShort( 0x2 ),	/* 2 */
/* 996 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1002 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1004 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1016) */
/* 1012 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1014 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1016 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1018 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (992) */
/* 1020 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1030 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1044) */
/* 1040 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1042 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1044 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1046 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1020) */
/* 1048 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1058 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1060 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1062 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1072) */
/* 1068 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1070 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1072 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1074 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1048) */
/* 1076 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1080 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1084 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1090 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1092 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1094 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1096 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1076) */
/* 1098 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1104 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1084) */
/* 1106 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1106) */
/* 1108 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1110 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1112 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1114 */	0x0,		/* 0 */
			NdrFcShort( 0xfc45 ),	/* Offset= -955 (160) */
			0x5b,		/* FC_END */
/* 1118 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0xfc32 ),	/* Offset= -974 (152) */
/* 1128 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x12, 0x0,	/* FC_UP */
/* 1134 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1100) */
/* 1136 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1128) */
/* 1146 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1150) */
/* 1150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1152 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1156) */
/* 1158 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1160 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1162 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1166 */	NdrFcLong( 0x2ad8ba47 ),	/* 718846535 */
/* 1170 */	NdrFcShort( 0xde4d ),	/* -8627 */
/* 1172 */	NdrFcShort( 0x47e2 ),	/* 18402 */
/* 1174 */	0xa9,		/* 169 */
			0x22,		/* 34 */
/* 1176 */	0x78,		/* 120 */
			0xe5,		/* 229 */
/* 1178 */	0x79,		/* 121 */
			0xa,		/* 10 */
/* 1180 */	0xe,		/* 14 */
			0xa,		/* 10 */
/* 1182 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1184 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1186 */	
			0x11, 0x0,	/* FC_RP */
/* 1188 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1206) */
/* 1190 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1192 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1194 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1198 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1200 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1204 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1206 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1208 */	NdrFcShort( 0xdc ),	/* 220 */
/* 1210 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1212 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1190) */
/* 1214 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1216 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1218 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1220 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1222 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1224 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1226 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1228 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1230 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1236 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1238 */	0x0,		/* 0 */
			NdrFcShort( 0xffd9 ),	/* Offset= -39 (1200) */
			0x8,		/* FC_LONG */
/* 1242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1246 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1250 */	
			0x11, 0x0,	/* FC_RP */
/* 1252 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1296) */
/* 1254 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1256 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1258 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1260 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1264 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1268 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1270 */	NdrFcShort( 0xc ),	/* 12 */
/* 1272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1274 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1276 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1280 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1284 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1286 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1288 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1290 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1292 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1276) */
/* 1294 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1296 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1298 */	NdrFcShort( 0x1f4 ),	/* 500 */
/* 1300 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1302 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1254) */
/* 1304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1306 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1310 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1312 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1316 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1320 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1326 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1328 */	0x0,		/* 0 */
			NdrFcShort( 0xff7f ),	/* Offset= -129 (1200) */
			0x8,		/* FC_LONG */
/* 1332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1338 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1268) */
/* 1342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1268) */
/* 1346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1348 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (1268) */
/* 1350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0xffac ),	/* Offset= -84 (1268) */
/* 1354 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1356 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (1268) */
/* 1358 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1360 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1268) */
/* 1362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1366 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1368 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1268) */
			0x8,		/* FC_LONG */
/* 1372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1374 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (1268) */
/* 1376 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1380 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1382 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1286) */
			0x5b,		/* FC_END */
/* 1386 */	
			0x11, 0x0,	/* FC_RP */
/* 1388 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1408) */
/* 1390 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1392 */	NdrFcShort( 0x100 ),	/* 256 */
/* 1394 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1396 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1398 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1400 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1402 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1404 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1406 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1408 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1410 */	NdrFcShort( 0x1a0 ),	/* 416 */
/* 1412 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1414 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (1276) */
/* 1416 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1418 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1420 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1422 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1424 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1426 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1432 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1434 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1436 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1390) */
/* 1438 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1440 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1396) */
/* 1442 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1444 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1396) */
/* 1446 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1448 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1402) */
/* 1450 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1452 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1402) */
/* 1454 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1456 */	
			0x11, 0x0,	/* FC_RP */
/* 1458 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1494) */
/* 1460 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1462 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 1464 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1466 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1468 */	NdrFcShort( 0x200 ),	/* 512 */
/* 1470 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1472 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (1276) */
/* 1474 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1476 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1478 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1480 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1482 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 1484 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1486 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1488 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1492 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1494 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1496 */	NdrFcShort( 0x3a0 ),	/* 928 */
/* 1498 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1500 */	NdrFcShort( 0xff20 ),	/* Offset= -224 (1276) */
/* 1502 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1504 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1506 */	0x0,		/* 0 */
			NdrFcShort( 0xffd1 ),	/* Offset= -47 (1460) */
			0xb,		/* FC_HYPER */
/* 1510 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1512 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1514 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (1466) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1518 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (1476) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1522 */	0x0,		/* 0 */
			NdrFcShort( 0xff81 ),	/* Offset= -127 (1396) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1526 */	0x0,		/* 0 */
			NdrFcShort( 0xffd3 ),	/* Offset= -45 (1482) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1530 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (1488) */
			0x5b,		/* FC_END */
/* 1534 */	
			0x11, 0x0,	/* FC_RP */
/* 1536 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1562) */
/* 1538 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1540 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1544) */
/* 1546 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1548 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1552 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1554 */	NdrFcShort( 0x100 ),	/* 256 */
/* 1556 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1558 */	NdrFcShort( 0xfee6 ),	/* Offset= -282 (1276) */
/* 1560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1562 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1564 */	NdrFcShort( 0x390 ),	/* 912 */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1568) */
/* 1570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1572 */	NdrFcShort( 0xfec2 ),	/* Offset= -318 (1254) */
/* 1574 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1576 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1578 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1580 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1582 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1584 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1586 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1588 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1590 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1592 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1594 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1596 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1598 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1600 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1602 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1604 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1606 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1608 */	NdrFcShort( 0xfe68 ),	/* Offset= -408 (1200) */
/* 1610 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1612 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1614 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1616 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1618 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (1538) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1622 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (1538) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1626 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1538) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1630 */	0x0,		/* 0 */
			NdrFcShort( 0xffa3 ),	/* Offset= -93 (1538) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1634 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1538) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1638 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1538) */
			0xb,		/* FC_HYPER */
/* 1642 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1644 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1646 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1648 */	0x0,		/* 0 */
			NdrFcShort( 0xff91 ),	/* Offset= -111 (1538) */
			0x8,		/* FC_LONG */
/* 1652 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1654 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (1538) */
			0xb,		/* FC_HYPER */
/* 1658 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1660 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1662 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1664 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (1552) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1668 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1670 */	
			0x11, 0x0,	/* FC_RP */
/* 1672 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1694) */
/* 1674 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1676 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1682 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1684 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1686 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1690 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1694 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1696 */	NdrFcShort( 0xe38 ),	/* 3640 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1700) */
/* 1702 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1704 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1674) */
/* 1706 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1708 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1710 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1712 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1714 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1716 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1718 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1720 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1722 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1724 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1726 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1728 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1730 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1732 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1734 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1736 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1738 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1740 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1742 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1744 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1746 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1748 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1750 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1754 */	0x0,		/* 0 */
			NdrFcShort( 0xffbb ),	/* Offset= -69 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1758 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1762 */	0x0,		/* 0 */
			NdrFcShort( 0xffb3 ),	/* Offset= -77 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1766 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1770 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1774 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1778 */	0x0,		/* 0 */
			NdrFcShort( 0xffa3 ),	/* Offset= -93 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1782 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1786 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1790 */	0x0,		/* 0 */
			NdrFcShort( 0xff97 ),	/* Offset= -105 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1794 */	0x0,		/* 0 */
			NdrFcShort( 0xff93 ),	/* Offset= -109 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1798 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1802 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1806 */	0x0,		/* 0 */
			NdrFcShort( 0xff87 ),	/* Offset= -121 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1810 */	0x0,		/* 0 */
			NdrFcShort( 0xff83 ),	/* Offset= -125 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1814 */	0x0,		/* 0 */
			NdrFcShort( 0xff7f ),	/* Offset= -129 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1818 */	0x0,		/* 0 */
			NdrFcShort( 0xff7b ),	/* Offset= -133 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1822 */	0x0,		/* 0 */
			NdrFcShort( 0xff77 ),	/* Offset= -137 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1826 */	0x0,		/* 0 */
			NdrFcShort( 0xff73 ),	/* Offset= -141 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1830 */	0x0,		/* 0 */
			NdrFcShort( 0xff6f ),	/* Offset= -145 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1834 */	0x0,		/* 0 */
			NdrFcShort( 0xff6b ),	/* Offset= -149 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1838 */	0x0,		/* 0 */
			NdrFcShort( 0xff67 ),	/* Offset= -153 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1842 */	0x0,		/* 0 */
			NdrFcShort( 0xff63 ),	/* Offset= -157 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1846 */	0x0,		/* 0 */
			NdrFcShort( 0xff5f ),	/* Offset= -161 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1850 */	0x0,		/* 0 */
			NdrFcShort( 0xff5b ),	/* Offset= -165 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1854 */	0x0,		/* 0 */
			NdrFcShort( 0xff57 ),	/* Offset= -169 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1858 */	0x0,		/* 0 */
			NdrFcShort( 0xff53 ),	/* Offset= -173 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1862 */	0x0,		/* 0 */
			NdrFcShort( 0xff4f ),	/* Offset= -177 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1866 */	0x0,		/* 0 */
			NdrFcShort( 0xff4b ),	/* Offset= -181 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1870 */	0x0,		/* 0 */
			NdrFcShort( 0xff47 ),	/* Offset= -185 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1874 */	0x0,		/* 0 */
			NdrFcShort( 0xff43 ),	/* Offset= -189 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1878 */	0x0,		/* 0 */
			NdrFcShort( 0xff3f ),	/* Offset= -193 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1882 */	0x0,		/* 0 */
			NdrFcShort( 0xff3b ),	/* Offset= -197 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1886 */	0x0,		/* 0 */
			NdrFcShort( 0xff37 ),	/* Offset= -201 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1890 */	0x0,		/* 0 */
			NdrFcShort( 0xff33 ),	/* Offset= -205 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1894 */	0x0,		/* 0 */
			NdrFcShort( 0xff2f ),	/* Offset= -209 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1898 */	0x0,		/* 0 */
			NdrFcShort( 0xff2b ),	/* Offset= -213 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1902 */	0x0,		/* 0 */
			NdrFcShort( 0xff27 ),	/* Offset= -217 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1906 */	0x0,		/* 0 */
			NdrFcShort( 0xff23 ),	/* Offset= -221 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1910 */	0x0,		/* 0 */
			NdrFcShort( 0xff1f ),	/* Offset= -225 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1914 */	0x0,		/* 0 */
			NdrFcShort( 0xff1b ),	/* Offset= -229 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1918 */	0x0,		/* 0 */
			NdrFcShort( 0xff17 ),	/* Offset= -233 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1922 */	0x0,		/* 0 */
			NdrFcShort( 0xff13 ),	/* Offset= -237 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1926 */	0x0,		/* 0 */
			NdrFcShort( 0xff0f ),	/* Offset= -241 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1930 */	0x0,		/* 0 */
			NdrFcShort( 0xff0b ),	/* Offset= -245 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1934 */	0x0,		/* 0 */
			NdrFcShort( 0xff07 ),	/* Offset= -249 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1938 */	0x0,		/* 0 */
			NdrFcShort( 0xff03 ),	/* Offset= -253 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1942 */	0x0,		/* 0 */
			NdrFcShort( 0xfeff ),	/* Offset= -257 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1946 */	0x0,		/* 0 */
			NdrFcShort( 0xfefb ),	/* Offset= -261 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1950 */	0x0,		/* 0 */
			NdrFcShort( 0xfef7 ),	/* Offset= -265 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1954 */	0x0,		/* 0 */
			NdrFcShort( 0xfef3 ),	/* Offset= -269 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1958 */	0x0,		/* 0 */
			NdrFcShort( 0xfeef ),	/* Offset= -273 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1962 */	0x0,		/* 0 */
			NdrFcShort( 0xfeeb ),	/* Offset= -277 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1966 */	0x0,		/* 0 */
			NdrFcShort( 0xfee7 ),	/* Offset= -281 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1970 */	0x0,		/* 0 */
			NdrFcShort( 0xfee3 ),	/* Offset= -285 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1974 */	0x0,		/* 0 */
			NdrFcShort( 0xfedf ),	/* Offset= -289 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1978 */	0x0,		/* 0 */
			NdrFcShort( 0xfedb ),	/* Offset= -293 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1982 */	0x0,		/* 0 */
			NdrFcShort( 0xfed7 ),	/* Offset= -297 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1986 */	0x0,		/* 0 */
			NdrFcShort( 0xfed3 ),	/* Offset= -301 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1990 */	0x0,		/* 0 */
			NdrFcShort( 0xfecf ),	/* Offset= -305 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1994 */	0x0,		/* 0 */
			NdrFcShort( 0xfecb ),	/* Offset= -309 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1998 */	0x0,		/* 0 */
			NdrFcShort( 0xfec7 ),	/* Offset= -313 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2002 */	0x0,		/* 0 */
			NdrFcShort( 0xfec3 ),	/* Offset= -317 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2006 */	0x0,		/* 0 */
			NdrFcShort( 0xfebf ),	/* Offset= -321 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2010 */	0x0,		/* 0 */
			NdrFcShort( 0xfebb ),	/* Offset= -325 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2014 */	0x0,		/* 0 */
			NdrFcShort( 0xfeb7 ),	/* Offset= -329 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2018 */	0x0,		/* 0 */
			NdrFcShort( 0xfeb3 ),	/* Offset= -333 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2022 */	0x0,		/* 0 */
			NdrFcShort( 0xfeaf ),	/* Offset= -337 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2026 */	0x0,		/* 0 */
			NdrFcShort( 0xfeab ),	/* Offset= -341 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2030 */	0x0,		/* 0 */
			NdrFcShort( 0xfea7 ),	/* Offset= -345 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2034 */	0x0,		/* 0 */
			NdrFcShort( 0xfea3 ),	/* Offset= -349 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2038 */	0x0,		/* 0 */
			NdrFcShort( 0xfe9f ),	/* Offset= -353 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2042 */	0x0,		/* 0 */
			NdrFcShort( 0xfe9b ),	/* Offset= -357 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2046 */	0x0,		/* 0 */
			NdrFcShort( 0xfe97 ),	/* Offset= -361 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2050 */	0x0,		/* 0 */
			NdrFcShort( 0xfe93 ),	/* Offset= -365 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2054 */	0x0,		/* 0 */
			NdrFcShort( 0xfe8f ),	/* Offset= -369 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2058 */	0x0,		/* 0 */
			NdrFcShort( 0xfe8b ),	/* Offset= -373 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2062 */	0x0,		/* 0 */
			NdrFcShort( 0xfe87 ),	/* Offset= -377 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2066 */	0x0,		/* 0 */
			NdrFcShort( 0xfe83 ),	/* Offset= -381 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2070 */	0x0,		/* 0 */
			NdrFcShort( 0xfe7f ),	/* Offset= -385 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2074 */	0x0,		/* 0 */
			NdrFcShort( 0xfe7b ),	/* Offset= -389 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2078 */	0x0,		/* 0 */
			NdrFcShort( 0xfe77 ),	/* Offset= -393 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2082 */	0x0,		/* 0 */
			NdrFcShort( 0xfe73 ),	/* Offset= -397 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2086 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6f ),	/* Offset= -401 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2090 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6b ),	/* Offset= -405 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2094 */	0x0,		/* 0 */
			NdrFcShort( 0xfe67 ),	/* Offset= -409 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2098 */	0x0,		/* 0 */
			NdrFcShort( 0xfe63 ),	/* Offset= -413 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2102 */	0x0,		/* 0 */
			NdrFcShort( 0xfe5f ),	/* Offset= -417 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2106 */	0x0,		/* 0 */
			NdrFcShort( 0xfe5b ),	/* Offset= -421 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2110 */	0x0,		/* 0 */
			NdrFcShort( 0xfe57 ),	/* Offset= -425 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2114 */	0x0,		/* 0 */
			NdrFcShort( 0xfe53 ),	/* Offset= -429 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2118 */	0x0,		/* 0 */
			NdrFcShort( 0xfe4f ),	/* Offset= -433 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2122 */	0x0,		/* 0 */
			NdrFcShort( 0xfe4b ),	/* Offset= -437 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2126 */	0x0,		/* 0 */
			NdrFcShort( 0xfe47 ),	/* Offset= -441 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2130 */	0x0,		/* 0 */
			NdrFcShort( 0xfe43 ),	/* Offset= -445 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2134 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3f ),	/* Offset= -449 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2138 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3b ),	/* Offset= -453 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2142 */	0x0,		/* 0 */
			NdrFcShort( 0xfe37 ),	/* Offset= -457 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2146 */	0x0,		/* 0 */
			NdrFcShort( 0xfe33 ),	/* Offset= -461 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2150 */	0x0,		/* 0 */
			NdrFcShort( 0xfe2f ),	/* Offset= -465 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2154 */	0x0,		/* 0 */
			NdrFcShort( 0xfe2b ),	/* Offset= -469 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2158 */	0x0,		/* 0 */
			NdrFcShort( 0xfe27 ),	/* Offset= -473 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2162 */	0x0,		/* 0 */
			NdrFcShort( 0xfe23 ),	/* Offset= -477 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2166 */	0x0,		/* 0 */
			NdrFcShort( 0xfe1f ),	/* Offset= -481 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2170 */	0x0,		/* 0 */
			NdrFcShort( 0xfe1b ),	/* Offset= -485 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2174 */	0x0,		/* 0 */
			NdrFcShort( 0xfe17 ),	/* Offset= -489 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2178 */	0x0,		/* 0 */
			NdrFcShort( 0xfe13 ),	/* Offset= -493 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2182 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2186 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0b ),	/* Offset= -501 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2190 */	0x0,		/* 0 */
			NdrFcShort( 0xfe07 ),	/* Offset= -505 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2194 */	0x0,		/* 0 */
			NdrFcShort( 0xfe03 ),	/* Offset= -509 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2198 */	0x0,		/* 0 */
			NdrFcShort( 0xfdff ),	/* Offset= -513 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2202 */	0x0,		/* 0 */
			NdrFcShort( 0xfdfb ),	/* Offset= -517 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2206 */	0x0,		/* 0 */
			NdrFcShort( 0xfdf7 ),	/* Offset= -521 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2210 */	0x0,		/* 0 */
			NdrFcShort( 0xfdf3 ),	/* Offset= -525 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2214 */	0x0,		/* 0 */
			NdrFcShort( 0xfdef ),	/* Offset= -529 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2218 */	0x0,		/* 0 */
			NdrFcShort( 0xfdeb ),	/* Offset= -533 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2222 */	0x0,		/* 0 */
			NdrFcShort( 0xfde7 ),	/* Offset= -537 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2226 */	0x0,		/* 0 */
			NdrFcShort( 0xfde3 ),	/* Offset= -541 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2230 */	0x0,		/* 0 */
			NdrFcShort( 0xfddf ),	/* Offset= -545 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2234 */	0x0,		/* 0 */
			NdrFcShort( 0xfddb ),	/* Offset= -549 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2238 */	0x0,		/* 0 */
			NdrFcShort( 0xfdd7 ),	/* Offset= -553 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2242 */	0x0,		/* 0 */
			NdrFcShort( 0xfdd3 ),	/* Offset= -557 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2246 */	0x0,		/* 0 */
			NdrFcShort( 0xfdcf ),	/* Offset= -561 (1686) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2250 */	0x0,		/* 0 */
			NdrFcShort( 0xfdcb ),	/* Offset= -565 (1686) */
			0xb,		/* FC_HYPER */
/* 2254 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2256 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2258 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2260 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2262 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2264 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2266 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2268 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2270 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2272 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2274 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2276 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2278 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2280 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2282 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2284 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2286 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2288 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2290 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2292 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2294 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2296 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2298 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2300 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2302 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2304 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2306 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2308 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2310 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 2312 */	0xb,		/* FC_HYPER */
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
/* 2410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2412 */	
			0x11, 0x0,	/* FC_RP */
/* 2414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2416) */
/* 2416 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2418 */	NdrFcShort( 0x88 ),	/* 136 */
/* 2420 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2422 */	NdrFcShort( 0xfabe ),	/* Offset= -1346 (1076) */
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
/* 2440 */	0x5c,		/* FC_PAD */
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



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiServer3, ver. 0.0,
   GUID={0x2E501506,0x9703,0x4B6F,{0x9D,0x0D,0x6B,0x42,0xB0,0xE4,0x1E,0x6F}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiServer3_FormatStringOffsetTable[] =
    {
    44,
    82,
    144,
    176,
    208,
    246,
    278,
    322,
    360,
    428,
    466,
    558,
    596,
    640,
    678,
    728,
    778,
    834,
    890,
    940,
    978,
    1016,
    1060,
    1104,
    1142,
    1192
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiCodeBreakpoint3, ver. 0.0,
   GUID={0x386D8BCB,0x9D1E,0x4BF4,{0xBE,0x90,0x90,0xD7,0x80,0x25,0x45,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiCodeBreakpoint3_FormatStringOffsetTable[] =
    {
    1242,
    1316
    };



/* Object interface: IeXdiDataBreakpoint3, ver. 0.0,
   GUID={0xFC90E444,0x6E23,0x40C1,{0xA8,0xD0,0x12,0x03,0xC8,0xAD,0xB3,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiDataBreakpoint3_FormatStringOffsetTable[] =
    {
    1360,
    1316
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86Context3, ver. 0.0,
   GUID={0xEBBBE2D6,0x9B1E,0x4F35,{0xB9,0x56,0x28,0xA7,0x8C,0x34,0x8F,0x0F}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86Context3_FormatStringOffsetTable[] =
    {
    1458,
    1502
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86ExContext3, ver. 0.0,
   GUID={0x3F2A6A8A,0xD56B,0x4605,{0x8A,0x93,0xAC,0x1C,0x9B,0x7E,0x63,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86ExContext3_FormatStringOffsetTable[] =
    {
    1546,
    1590
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiARM4Context3, ver. 0.0,
   GUID={0x25A27A99,0xC6F7,0x4A27,{0x87,0x49,0xFA,0x7E,0xA6,0x38,0xAD,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiARM4Context3_FormatStringOffsetTable[] =
    {
    1634,
    1678
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiArmV8Arch64Context3, ver. 0.0,
   GUID={0x2146BE85,0x7866,0x4309,{0xB9,0x73,0xF9,0x65,0x0D,0x1A,0xA8,0x86}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiArmV8Arch64Context3_FormatStringOffsetTable[] =
    {
    1722,
    1766
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiX86_64Context3, ver. 0.0,
   GUID={0x3A5BF3FF,0x8CDA,0x4789,{0x83,0x23,0xBE,0x04,0xA9,0x70,0xD0,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiX86_64Context3_FormatStringOffsetTable[] =
    {
    1810,
    1854
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiIA64Context3, ver. 0.0,
   GUID={0x24C6A990,0x780C,0x428E,{0xBE,0x5B,0xE2,0x7E,0x2C,0xAE,0xA0,0x5A}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiIA64Context3_FormatStringOffsetTable[] =
    {
    1898,
    1942
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiEBCContext3, ver. 0.0,
   GUID={0x6C4E5523,0x3AC1,0x4014,{0xB4,0x54,0xE5,0x4E,0x18,0x0A,0xBD,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiEBCContext3_FormatStringOffsetTable[] =
    {
    1986,
    2030
    };



/* Object interface: IeXdiClientNotifyRunChg3, ver. 0.0,
   GUID={0xCEC95378,0x3797,0x4079,{0x9C,0x70,0xA4,0x5A,0xB2,0xF8,0x52,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiClientNotifyRunChg3_FormatStringOffsetTable[] =
    {
    2074
    };



/* Object interface: IeXdiKeepaliveInterface3, ver. 0.0,
   GUID={0x2AD8BA47,0xDE4D,0x47E2,{0xA9,0x22,0x78,0xE5,0x79,0x0A,0x0E,0x0A}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiKeepaliveInterface3_FormatStringOffsetTable[] =
    {
    2136
    };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IeXdiControlComponentFunctions, ver. 0.0,
   GUID={0x630e91f3,0xdfe2,0x49c8,{0xb2,0x74,0x28,0x43,0x59,0x5a,0x4f,0xa6}} */

#pragma code_seg(".orpc")
static const unsigned short IeXdiControlComponentFunctions_FormatStringOffsetTable[] =
    {
    2168,
    2218
    };



/* Object interface: IAsynchronousCommandNotificationReceiver, ver. 0.0,
   GUID={0x650FE759,0xCC39,0x49A8,{0x8B,0xBA,0x13,0xDE,0x47,0x10,0x7B,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[] =
    {
    2136,
    2274
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)



extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag452_t;
extern const __midl_frag452_t __midl_frag452;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag451_t;
extern const __midl_frag451_t __midl_frag451;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag447_t;
extern const __midl_frag447_t __midl_frag447;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag446_t;
extern const __midl_frag446_t __midl_frag446;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag445_t;
extern const __midl_frag445_t __midl_frag445;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag444_t;
extern const __midl_frag444_t __midl_frag444;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag443_t;
extern const __midl_frag443_t __midl_frag443;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag442_t;
extern const __midl_frag442_t __midl_frag442;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag439_t;
extern const __midl_frag439_t __midl_frag439;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag433_t;
extern const __midl_frag433_t __midl_frag433;

typedef 
NDR64_FORMAT_CHAR
__midl_frag427_t;
extern const __midl_frag427_t __midl_frag427;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag424_t;
extern const __midl_frag424_t __midl_frag424;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag422_t;
extern const __midl_frag422_t __midl_frag422;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag420_t;
extern const __midl_frag420_t __midl_frag420;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag418_t;
extern const __midl_frag418_t __midl_frag418;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag415_t;
extern const __midl_frag415_t __midl_frag415;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag413_t;
extern const __midl_frag413_t __midl_frag413;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag411_t;
extern const __midl_frag411_t __midl_frag411;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_MEMPAD_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag37;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag38;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag39;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag40;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag41;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag42;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag43;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag44;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag45;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag46;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag47;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag48;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag49;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag50;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag51;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag52;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag53;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag54;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag55;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag56;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag57;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag58;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag59;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag60;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag61;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag62;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag63;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag64;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag65;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag66;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag67;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag68;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag69;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag70;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag71;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag72;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag73;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag74;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag75;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag76;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag77;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag78;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag79;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag80;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag81;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag82;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag83;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag84;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag85;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag86;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag87;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag88;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag89;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag90;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag91;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag92;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag93;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag94;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag95;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag96;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag97;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag98;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag99;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag100;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag101;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag102;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag103;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag104;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag105;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag106;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag107;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag108;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag109;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag110;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag111;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag112;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag113;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag114;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag115;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag116;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag117;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag118;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag119;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag120;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag121;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag122;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag123;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag124;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag125;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag126;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag127;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag128;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag129;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag130;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag131;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag132;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag133;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag134;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag135;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag136;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag137;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag138;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag139;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag140;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag141;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag142;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag143;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag144;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag145;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag146;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag147;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag148;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag149;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag150;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag151;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag152;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag153;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag154;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag155;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag156;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag157;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag158;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag159;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag160;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag161;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag162;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag163;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag164;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag165;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag166;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag167;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag168;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag169;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag170;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag171;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag172;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag173;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag174;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag175;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag176;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag177;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag178;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag179;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag180;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag181;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag182;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag183;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag184;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag185;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag186;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag187;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag188;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag189;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag190;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag191;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag192;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag193;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag194;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag195;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag196;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag197;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag198;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag199;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag200;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag201;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag202;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag203;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag204;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag205;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag206;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag207;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag208;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag209;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag210;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag211;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag212;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag213;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag214;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag215;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag216;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag217;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag218;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag219;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag220;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag221;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag222;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag223;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag224;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag225;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag226;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag227;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag228;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag229;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag230;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag231;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag232;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag233;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag234;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag235;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag236;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag237;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag238;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag239;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag240;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag241;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag242;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag243;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag244;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag245;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag246;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag247;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag248;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag249;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag250;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag251;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag252;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag253;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag254;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag255;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag256;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag257;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag258;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag259;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag260;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag261;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag262;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag263;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag264;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag265;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag266;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag267;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag268;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag269;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag270;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag271;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag272;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag273;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag274;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag275;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag276;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag277;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag278;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag279;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag280;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag281;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag282;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag283;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag284;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag285;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag286;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag287;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag288;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag289;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag290;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag291;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag292;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag293;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag294;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag295;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag296;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag297;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag298;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag299;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag300;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag301;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag302;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag303;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag304;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag305;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag306;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag307;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag308;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag309;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag310;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag311;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag312;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag313;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag314;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag315;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag316;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag317;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag318;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag319;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag320;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag321;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag322;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag323;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag324;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag325;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag326;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag327;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag328;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag329;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag330;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag331;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag332;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag333;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag334;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag335;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag336;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag337;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag338;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag339;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag340;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag341;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag342;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag343;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag344;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag345;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag346;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag347;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag348;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag349;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag350;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag351;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag352;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag353;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag354;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag355;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag356;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag357;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag358;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag359;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag360;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag361;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag362;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag363;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag364;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag365;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag366;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag367;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag368;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag369;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag370;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag371;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag372;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag373;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag374;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag375;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag376;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag377;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag378;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag379;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag380;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag381;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag382;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag383;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag384;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag385;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag386;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag387;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag388;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag389;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag390;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag391;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag392;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag393;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag394;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag395;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag396;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag397;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag398;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag399;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag400;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag401;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag402;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag403;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag404;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag405;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag406;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag407;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag408;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag409;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag410;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag411;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag412;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag413;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag414;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag415;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag416;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag417;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag418;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag419;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag420;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag421;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag422;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag423;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag424;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag425;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag426;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag427;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag428;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag429;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag430;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag431;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag432;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag433;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag434;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag435;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag436;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag437;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag438;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag439;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag440;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag441;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag442;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag443;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag444;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag445;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag446;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag447;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag448;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag449;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag450;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag451;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag452;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag453;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag454;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag455;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag456;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag457;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag458;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag459;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag460;
    } frag2;
}
__midl_frag409_t;
extern const __midl_frag409_t __midl_frag409;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag406_t;
extern const __midl_frag406_t __midl_frag406;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag404_t;
extern const __midl_frag404_t __midl_frag404;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag402_t;
extern const __midl_frag402_t __midl_frag402;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag400_t;
extern const __midl_frag400_t __midl_frag400;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag399_t;
extern const __midl_frag399_t __midl_frag399;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag37;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag38;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag39;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag40;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag41;
        struct _NDR64_MEMPAD_FORMAT frag42;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag43;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag44;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag45;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag46;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag47;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag48;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag49;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag50;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag51;
        struct _NDR64_MEMPAD_FORMAT frag52;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag53;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag54;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag55;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag56;
        struct _NDR64_MEMPAD_FORMAT frag57;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag58;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag59;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag60;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag61;
        struct _NDR64_MEMPAD_FORMAT frag62;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag63;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag64;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag65;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag66;
        struct _NDR64_MEMPAD_FORMAT frag67;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag68;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag69;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag70;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag71;
        struct _NDR64_MEMPAD_FORMAT frag72;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag73;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag74;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag75;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag76;
        struct _NDR64_MEMPAD_FORMAT frag77;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag78;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag79;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag80;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag81;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag82;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag83;
        struct _NDR64_MEMPAD_FORMAT frag84;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag85;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag86;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag87;
        struct _NDR64_MEMPAD_FORMAT frag88;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag89;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag90;
        struct _NDR64_MEMPAD_FORMAT frag91;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag92;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag93;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag94;
        struct _NDR64_MEMPAD_FORMAT frag95;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag96;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag97;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag98;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag99;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag100;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag101;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag102;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag103;
        struct _NDR64_MEMPAD_FORMAT frag104;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag105;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag106;
    } frag2;
}
__midl_frag398_t;
extern const __midl_frag398_t __midl_frag398;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag395_t;
extern const __midl_frag395_t __midl_frag395;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag393_t;
extern const __midl_frag393_t __midl_frag393;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag391_t;
extern const __midl_frag391_t __midl_frag391;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag389_t;
extern const __midl_frag389_t __midl_frag389;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag386_t;
extern const __midl_frag386_t __midl_frag386;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag380_t;
extern const __midl_frag380_t __midl_frag380;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag377_t;
extern const __midl_frag377_t __midl_frag377;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag375_t;
extern const __midl_frag375_t __midl_frag375;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag373_t;
extern const __midl_frag373_t __midl_frag373;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag371_t;
extern const __midl_frag371_t __midl_frag371;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag368_t;
extern const __midl_frag368_t __midl_frag368;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag366_t;
extern const __midl_frag366_t __midl_frag366;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag364_t;
extern const __midl_frag364_t __midl_frag364;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag362_t;
extern const __midl_frag362_t __midl_frag362;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag359_t;
extern const __midl_frag359_t __midl_frag359;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag355_t;
extern const __midl_frag355_t __midl_frag355;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag352_t;
extern const __midl_frag352_t __midl_frag352;

typedef 
NDR64_FORMAT_CHAR
__midl_frag345_t;
extern const __midl_frag345_t __midl_frag345;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag344_t;
extern const __midl_frag344_t __midl_frag344;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag334_t;
extern const __midl_frag334_t __midl_frag334;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
}
__midl_frag331_t;
extern const __midl_frag331_t __midl_frag331;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag311_t;
extern const __midl_frag311_t __midl_frag311;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag306_t;
extern const __midl_frag306_t __midl_frag306;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag300_t;
extern const __midl_frag300_t __midl_frag300;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag298_t;
extern const __midl_frag298_t __midl_frag298;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag297_t;
extern const __midl_frag297_t __midl_frag297;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag296_t;
extern const __midl_frag296_t __midl_frag296;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag289_t;
extern const __midl_frag289_t __midl_frag289;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag284_t;
extern const __midl_frag284_t __midl_frag284;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag280_t;
extern const __midl_frag280_t __midl_frag280;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag276_t;
extern const __midl_frag276_t __midl_frag276;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag269_t;
extern const __midl_frag269_t __midl_frag269;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag257_t;
extern const __midl_frag257_t __midl_frag257;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag248_t;
extern const __midl_frag248_t __midl_frag248;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag240_t;
extern const __midl_frag240_t __midl_frag240;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag238_t;
extern const __midl_frag238_t __midl_frag238;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag236_t;
extern const __midl_frag236_t __midl_frag236;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
NDR64_FORMAT_CHAR
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag219_t;
extern const __midl_frag219_t __midl_frag219;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag206_t;
extern const __midl_frag206_t __midl_frag206;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag205_t;
extern const __midl_frag205_t __midl_frag205;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag194_t;
extern const __midl_frag194_t __midl_frag194;

typedef 
NDR64_FORMAT_CHAR
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag191_t;
extern const __midl_frag191_t __midl_frag191;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag176_t;
extern const __midl_frag176_t __midl_frag176;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag173_t;
extern const __midl_frag173_t __midl_frag173;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag172_t;
extern const __midl_frag172_t __midl_frag172;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag171_t;
extern const __midl_frag171_t __midl_frag171;

typedef 
NDR64_FORMAT_CHAR
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag169_t;
extern const __midl_frag169_t __midl_frag169;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag168_t;
extern const __midl_frag168_t __midl_frag168;

typedef 
NDR64_FORMAT_CHAR
__midl_frag161_t;
extern const __midl_frag161_t __midl_frag161;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag148_t;
extern const __midl_frag148_t __midl_frag148;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    struct _NDR64_UNION_ARM frag22;
    struct _NDR64_UNION_ARM frag23;
    struct _NDR64_UNION_ARM frag24;
    struct _NDR64_UNION_ARM frag25;
    struct _NDR64_UNION_ARM frag26;
    struct _NDR64_UNION_ARM frag27;
    struct _NDR64_UNION_ARM frag28;
    struct _NDR64_UNION_ARM frag29;
    struct _NDR64_UNION_ARM frag30;
    struct _NDR64_UNION_ARM frag31;
    struct _NDR64_UNION_ARM frag32;
    struct _NDR64_UNION_ARM frag33;
    struct _NDR64_UNION_ARM frag34;
    struct _NDR64_UNION_ARM frag35;
    struct _NDR64_UNION_ARM frag36;
    struct _NDR64_UNION_ARM frag37;
    struct _NDR64_UNION_ARM frag38;
    struct _NDR64_UNION_ARM frag39;
    struct _NDR64_UNION_ARM frag40;
    struct _NDR64_UNION_ARM frag41;
    struct _NDR64_UNION_ARM frag42;
    struct _NDR64_UNION_ARM frag43;
    struct _NDR64_UNION_ARM frag44;
    struct _NDR64_UNION_ARM frag45;
    struct _NDR64_UNION_ARM frag46;
    struct _NDR64_UNION_ARM frag47;
    struct _NDR64_UNION_ARM frag48;
    struct _NDR64_UNION_ARM frag49;
    NDR64_UINT32 frag50;
}
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct 
{
    struct _NDR64_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
    } frag2;
}
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag452_t __midl_frag452 =
0x5    /* FC64_INT32 */;

static const __midl_frag451_t __midl_frag451 =
{ 
/* PerformKeepaliveChecks */
    { 
    /* PerformKeepaliveChecks */      /* procedure PerformKeepaliveChecks */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag447_t __midl_frag447 =
{ 
/* *_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag95
};

static const __midl_frag446_t __midl_frag446 =
{ 
/* **_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag447
};

static const __midl_frag445_t __midl_frag445 =
{ 
/* wirePSAFEARRAY */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag446
};

static const __midl_frag444_t __midl_frag444 =
{ 
/* *wirePSAFEARRAY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag445
};

static const __midl_frag443_t __midl_frag443 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag442_t __midl_frag442 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag443
};

static const __midl_frag439_t __midl_frag439 =
{ 
/* ExecuteTargetEntityFunction */
    { 
    /* ExecuteTargetEntityFunction */      /* procedure ExecuteTargetEntityFunction */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag452,
        { 
        /* type */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pFunctionToExecute */      /* parameter pFunctionToExecute */
        &__midl_frag443,
        { 
        /* pFunctionToExecute */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pFunctionResponseBuffer */      /* parameter pFunctionResponseBuffer */
        &__midl_frag445,
        { 
        /* pFunctionResponseBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag433_t __midl_frag433 =
{ 
/* ExecuteExdiComponentFunction */
    { 
    /* ExecuteExdiComponentFunction */      /* procedure ExecuteExdiComponentFunction */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag452,
        { 
        /* type */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pFunctionToExecute */      /* parameter pFunctionToExecute */
        &__midl_frag443,
        { 
        /* pFunctionToExecute */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag427_t __midl_frag427 =
0x7    /* FC64_INT64 */;

static const __midl_frag424_t __midl_frag424 =
{ 
/* NotifyRunStateChange */
    { 
    /* NotifyRunStateChange */      /* procedure NotifyRunStateChange */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ersCurrent */      /* parameter ersCurrent */
        &__midl_frag452,
        { 
        /* ersCurrent */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ehrCurrent */      /* parameter ehrCurrent */
        &__midl_frag452,
        { 
        /* ehrCurrent */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* CurrentExecAddress */      /* parameter CurrentExecAddress */
        &__midl_frag427,
        { 
        /* CurrentExecAddress */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwExceptionCode */      /* parameter dwExceptionCode */
        &__midl_frag452,
        { 
        /* dwExceptionCode */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag422_t __midl_frag422 =
{ 
/* *EXDI_CONTEXT_EBC */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag418
};

static const __midl_frag420_t __midl_frag420 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34079043 /* 0x2080143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 184 /* 0xb8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag418,
        { 
        /* Context */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag418_t __midl_frag418 =
{ 
/* EXDI_CONTEXT_EBC */
    { 
    /* EXDI_CONTEXT_EBC */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* EXDI_CONTEXT_EBC */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */
    }
};

static const __midl_frag415_t __midl_frag415 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 184 /* 0xb8 */,
        (NDR64_UINT32) 184 /* 0xb8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag418,
        { 
        /* pContext */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag413_t __midl_frag413 =
{ 
/* *EXDI_CONTEXT_IA64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag409
};

static const __midl_frag411_t __midl_frag411 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34341187 /* 0x20c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag409,
        { 
        /* Context */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag409_t __midl_frag409 =
{ 
/* EXDI_CONTEXT_IA64 */
    { 
    /* EXDI_CONTEXT_IA64 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* EXDI_CONTEXT_IA64 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 3640 /* 0xe38 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag406_t __midl_frag406 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag409,
        { 
        /* pContext */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag404_t __midl_frag404 =
{ 
/* *CONTEXT_X86_64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag398
};

static const __midl_frag402_t __midl_frag402 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34341187 /* 0x20c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag398,
        { 
        /* Context */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag400_t __midl_frag400 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 256 /* 0x100 */
    }
};

static const __midl_frag399_t __midl_frag399 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */
    }
};

static const __midl_frag398_t __midl_frag398 =
{ 
/* CONTEXT_X86_64 */
    { 
    /* CONTEXT_X86_64 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CONTEXT_X86_64 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 912 /* 0x390 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag399
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SEG64_DESC_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag400
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* CONTEXT_X86_64 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag395_t __midl_frag395 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag398,
        { 
        /* pContext */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag393_t __midl_frag393 =
{ 
/* *CONTEXT_ARMV8ARCH64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag389
};

static const __midl_frag391_t __midl_frag391 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34079043 /* 0x2080143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 1568 /* 0x620 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag389,
        { 
        /* Context */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag389_t __midl_frag389 =
{ 
/* CONTEXT_ARMV8ARCH64 */
    { 
    /* CONTEXT_ARMV8ARCH64 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CONTEXT_ARMV8ARCH64 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 928 /* 0x3a0 */
    }
};

static const __midl_frag386_t __midl_frag386 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 1568 /* 0x620 */,
        (NDR64_UINT32) 1568 /* 0x620 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag389,
        { 
        /* pContext */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag384_t __midl_frag384 =
{ 
/* *CONTEXT_ARM4 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag380
};

static const __midl_frag382_t __midl_frag382 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34079043 /* 0x2080143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 544 /* 0x220 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag380,
        { 
        /* Context */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag380_t __midl_frag380 =
{ 
/* CONTEXT_ARM4 */
    { 
    /* CONTEXT_ARM4 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CONTEXT_ARM4 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 416 /* 0x1a0 */
    }
};

static const __midl_frag377_t __midl_frag377 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 544 /* 0x220 */,
        (NDR64_UINT32) 544 /* 0x220 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag380,
        { 
        /* pContext */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag375_t __midl_frag375 =
{ 
/* *CONTEXT_X86_EX */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag371
};

static const __midl_frag373_t __midl_frag373 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34079043 /* 0x2080143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 692 /* 0x2b4 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag371,
        { 
        /* Context */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag371_t __midl_frag371 =
{ 
/* CONTEXT_X86_EX */
    { 
    /* CONTEXT_X86_EX */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* CONTEXT_X86_EX */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 500 /* 0x1f4 */
    }
};

static const __midl_frag368_t __midl_frag368 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 692 /* 0x2b4 */,
        (NDR64_UINT32) 692 /* 0x2b4 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag371,
        { 
        /* pContext */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag366_t __midl_frag366 =
{ 
/* *CONTEXT_X86 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag362
};

static const __midl_frag364_t __midl_frag364 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 34079043 /* 0x2080143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 284 /* 0x11c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag362,
        { 
        /* Context */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag362_t __midl_frag362 =
{ 
/* CONTEXT_X86 */
    { 
    /* CONTEXT_X86 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* CONTEXT_X86 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 220 /* 0xdc */
    }
};

static const __midl_frag359_t __midl_frag359 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 284 /* 0x11c */,
        (NDR64_UINT32) 284 /* 0x11c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pContext */      /* parameter pContext */
        &__midl_frag362,
        { 
        /* pContext */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag355_t __midl_frag355 =
{ 
/* SetState */
    { 
    /* SetState */      /* procedure SetState */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* fEnabled */      /* parameter fEnabled */
        &__midl_frag452,
        { 
        /* fEnabled */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* fResetBypassedOccurences */      /* parameter fResetBypassedOccurences */
        &__midl_frag452,
        { 
        /* fResetBypassedOccurences */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag352_t __midl_frag352 =
{ 
/* *BOOL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag452
};

static const __midl_frag345_t __midl_frag345 =
0x2    /* FC64_INT8 */;

static const __midl_frag344_t __midl_frag344 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag345
};

static const __midl_frag334_t __midl_frag334 =
{ 
/* *__int64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag427
};

static const __midl_frag331_t __midl_frag331 =
{ 
/* GetAttributes */
    { 
    /* GetAttributes */      /* procedure GetAttributes */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 104 /* 0x68 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 370 /* 0x172 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 12 /* 0xc */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pAddress */      /* parameter pAddress */
        &__midl_frag427,
        { 
        /* pAddress */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pAddressMask */      /* parameter pAddressMask */
        &__midl_frag427,
        { 
        /* pAddressMask */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwData */      /* parameter pdwData */
        &__midl_frag452,
        { 
        /* pdwData */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pdwDataMask */      /* parameter pdwDataMask */
        &__midl_frag452,
        { 
        /* pdwDataMask */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pbAccessWidth */      /* parameter pbAccessWidth */
        &__midl_frag345,
        { 
        /* pbAccessWidth */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pmt */      /* parameter pmt */
        &__midl_frag452,
        { 
        /* pmt */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pbAddressSpace */      /* parameter pbAddressSpace */
        &__midl_frag345,
        { 
        /* pbAddressSpace */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pda */      /* parameter pda */
        &__midl_frag452,
        { 
        /* pda */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* pdwTotalBypassCount */      /* parameter pdwTotalBypassCount */
        &__midl_frag452,
        { 
        /* pdwTotalBypassCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* pdwBypassedOccurences */      /* parameter pdwBypassedOccurences */
        &__midl_frag452,
        { 
        /* pdwBypassedOccurences */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* pfEnabled */      /* parameter pfEnabled */
        &__midl_frag452,
        { 
        /* pfEnabled */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    }
};

static const __midl_frag311_t __midl_frag311 =
{ 
/* GetAttributes */
    { 
    /* GetAttributes */      /* procedure GetAttributes */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 240 /* 0xf0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pAddress */      /* parameter pAddress */
        &__midl_frag427,
        { 
        /* pAddress */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pcbpk */      /* parameter pcbpk */
        &__midl_frag452,
        { 
        /* pcbpk */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pmt */      /* parameter pmt */
        &__midl_frag452,
        { 
        /* pmt */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pdwExecMode */      /* parameter pdwExecMode */
        &__midl_frag452,
        { 
        /* pdwExecMode */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pdwTotalBypassCount */      /* parameter pdwTotalBypassCount */
        &__midl_frag452,
        { 
        /* pdwTotalBypassCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pdwBypassedOccurences */      /* parameter pdwBypassedOccurences */
        &__midl_frag452,
        { 
        /* pdwBypassedOccurences */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pfEnabled */      /* parameter pfEnabled */
        &__midl_frag452,
        { 
        /* pfEnabled */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag306_t __midl_frag306 =
{ 
/* WriteMSR */
    { 
    /* WriteMSR */      /* procedure WriteMSR */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwRegisterIndex */      /* parameter dwRegisterIndex */
        &__midl_frag452,
        { 
        /* dwRegisterIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag427,
        { 
        /* value */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag300_t __midl_frag300 =
{ 
/* ReadMSR */
    { 
    /* ReadMSR */      /* procedure ReadMSR */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwRegisterIndex */      /* parameter dwRegisterIndex */
        &__midl_frag452,
        { 
        /* dwRegisterIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pValue */      /* parameter pValue */
        &__midl_frag427,
        { 
        /* pValue */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag298_t __midl_frag298 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x2ad8ba47,
        0xde4d,
        0x47e2,
        {0xa9, 0x22, 0x78, 0xe5, 0x79, 0x0a, 0x0e, 0x0a}
    }
};

static const __midl_frag297_t __midl_frag297 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag298
};

static const __midl_frag296_t __midl_frag296 =
{ 
/* SetKeepaliveInterface */
    { 
    /* SetKeepaliveInterface */      /* procedure SetKeepaliveInterface */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pKeepalive */      /* parameter pKeepalive */
        &__midl_frag297,
        { 
        /* pKeepalive */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag289_t __midl_frag289 =
{ 
/* ReadKdVersionBlock */
    { 
    /* ReadKdVersionBlock */      /* procedure ReadKdVersionBlock */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwBufferSize */      /* parameter dwBufferSize */
        &__midl_frag452,
        { 
        /* dwBufferSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pKdVersionBlockBuffer */      /* parameter pKdVersionBlockBuffer */
        &__midl_frag445,
        { 
        /* pKdVersionBlockBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag284_t __midl_frag284 =
{ 
/* GetKPCRForProcessor */
    { 
    /* GetKPCRForProcessor */      /* procedure GetKPCRForProcessor */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwProcessorNumber */      /* parameter dwProcessorNumber */
        &__midl_frag452,
        { 
        /* dwProcessorNumber */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pKPCRPointer */      /* parameter pKPCRPointer */
        &__midl_frag427,
        { 
        /* pKPCRPointer */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag282_t __midl_frag282 =
{ 
/* DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT */
    { 
    /* DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* *DBGENG_EXDI3_GET_BREAKPOINT_HIT_OUT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag282
};

static const __midl_frag280_t __midl_frag280 =
{ 
/* GetLastHitBreakpoint */
    { 
    /* GetLastHitBreakpoint */      /* procedure GetLastHitBreakpoint */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pBreakpointInformation */      /* parameter pBreakpointInformation */
        &__midl_frag282,
        { 
        /* pBreakpointInformation */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag276_t __midl_frag276 =
{ 
/* GetNumberOfProcessors */
    { 
    /* GetNumberOfProcessors */      /* procedure GetNumberOfProcessors */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pdwNumberOfProcessors */      /* parameter pdwNumberOfProcessors */
        &__midl_frag452,
        { 
        /* pdwNumberOfProcessors */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag269_t __midl_frag269 =
{ 
/* *_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag95
};

static const __midl_frag268_t __midl_frag268 =
{ 
/* **_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag269
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* wirePSAFEARRAY */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag268
};

static const __midl_frag266_t __midl_frag266 =
{ 
/* Ioctl */
    { 
    /* Ioctl */      /* procedure Ioctl */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pInputBuffer */      /* parameter pInputBuffer */
        &__midl_frag267,
        { 
        /* pInputBuffer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwBuffOutSize */      /* parameter dwBuffOutSize */
        &__midl_frag452,
        { 
        /* dwBuffOutSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pOutputBuffer */      /* parameter pOutputBuffer */
        &__midl_frag445,
        { 
        /* pOutputBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag257_t __midl_frag257 =
{ 
/* WritePhysicalMemoryOrPeriphIO */
    { 
    /* WritePhysicalMemoryOrPeriphIO */      /* procedure WritePhysicalMemoryOrPeriphIO */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* AddressSpace */      /* parameter AddressSpace */
        &__midl_frag452,
        { 
        /* AddressSpace */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pBuffer */      /* parameter pBuffer */
        &__midl_frag267,
        { 
        /* pBuffer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pdwBytesWritten */      /* parameter pdwBytesWritten */
        &__midl_frag452,
        { 
        /* pdwBytesWritten */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag248_t __midl_frag248 =
{ 
/* ReadPhysicalMemoryOrPeriphIO */
    { 
    /* ReadPhysicalMemoryOrPeriphIO */      /* procedure ReadPhysicalMemoryOrPeriphIO */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* AddressSpace */      /* parameter AddressSpace */
        &__midl_frag452,
        { 
        /* AddressSpace */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwBytesToRead */      /* parameter dwBytesToRead */
        &__midl_frag452,
        { 
        /* dwBytesToRead */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pReadBuffer */      /* parameter pReadBuffer */
        &__midl_frag445,
        { 
        /* pReadBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag240_t __midl_frag240 =
{ 
/* WriteVirtualMemory */
    { 
    /* WriteVirtualMemory */      /* procedure WriteVirtualMemory */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pBuffer */      /* parameter pBuffer */
        &__midl_frag267,
        { 
        /* pBuffer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwBytesWritten */      /* parameter pdwBytesWritten */
        &__midl_frag452,
        { 
        /* pdwBytesWritten */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag238_t __midl_frag238 =
{ 
/*  */
    { 
    /* *hyper */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag235
    }
};

static const __midl_frag236_t __midl_frag236 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag235_t __midl_frag235 =
{ 
/* *hyper */
    { 
    /* *hyper */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *hyper */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag427
    }
};

static const __midl_frag234_t __midl_frag234 =
{ 
/* HYPER_SIZEDARR */
    { 
    /* HYPER_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* HYPER_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag238,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag233_t __midl_frag233 =
{ 
/*  */
    { 
    /* *ULONG */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag230
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* *ULONG */
    { 
    /* *ULONG */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ULONG */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag236
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag452
    }
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* DWORD_SIZEDARR */
    { 
    /* DWORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DWORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag233,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag228_t __midl_frag228 =
{ 
/*  */
    { 
    /* *short */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag225
    }
};

static const __midl_frag227_t __midl_frag227 =
0x4    /* FC64_INT16 */;

static const __midl_frag225_t __midl_frag225 =
{ 
/* *short */
    { 
    /* *short */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *short */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag236
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag227
    }
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* WORD_SIZEDARR */
    { 
    /* WORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag228,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag223_t __midl_frag223 =
{ 
/*  */
    { 
    /* *byte */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag220
    }
};

static const __midl_frag220_t __midl_frag220 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag236
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag345
    }
};

static const __midl_frag219_t __midl_frag219 =
{ 
/* BYTE_SIZEDARR */
    { 
    /* BYTE_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* BYTE_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag223,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag218_t __midl_frag218 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag212
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00000000,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag216
};

static const __midl_frag212_t __midl_frag212 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag216
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag215
    }
};

static const __midl_frag211_t __midl_frag211 =
{ 
/* SAFEARR_HAVEIID */
    { 
    /* SAFEARR_HAVEIID */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_HAVEIID */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag217,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag218
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag210_t __midl_frag210 =
{ 
/*  */
    { 
    /* **_wireBRECORD */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag207
    }
};

static const __midl_frag209_t __midl_frag209 =
{ 
/* *_wireBRECORD */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag147
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* **_wireBRECORD */
    { 
    /* **_wireBRECORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireBRECORD */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag147
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag209
    }
};

static const __midl_frag206_t __midl_frag206 =
{ 
/* SAFEARR_BRECORD */
    { 
    /* SAFEARR_BRECORD */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BRECORD */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag210,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag205_t __midl_frag205 =
{ 
/*  */
    { 
    /* **_wireVARIANT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag124
    }
};

static const __midl_frag204_t __midl_frag204 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag126
};

static const __midl_frag202_t __midl_frag202 =
{ 
/* *UINT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag452
};

static const __midl_frag198_t __midl_frag198 =
{ 
/* *ULONGLONG */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag427
};

static const __midl_frag194_t __midl_frag194 =
{ 
/* *USHORT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag227
};

static const __midl_frag193_t __midl_frag193 =
0x10    /* FC64_CHAR */;

static const __midl_frag192_t __midl_frag192 =
{ 
/* *CHAR */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag193
};

static const __midl_frag191_t __midl_frag191 =
{ 
/* *DECIMAL */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag190
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* DECIMAL */
    { 
    /* DECIMAL */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DECIMAL */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag182_t __midl_frag182 =
{ 
/* **_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag204
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* ***_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag446
};

static const __midl_frag178_t __midl_frag178 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00020400,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag178
};

static const __midl_frag176_t __midl_frag176 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag177
};

static const __midl_frag173_t __midl_frag173 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag215
};

static const __midl_frag172_t __midl_frag172 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag103
};

static const __midl_frag171_t __midl_frag171 =
{ 
/* **FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag172
};

static const __midl_frag170_t __midl_frag170 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag169_t __midl_frag169 =
{ 
/* *DATE */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag170
};

static const __midl_frag168_t __midl_frag168 =
{ 
/* *CY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag137
};

static const __midl_frag161_t __midl_frag161 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag160_t __midl_frag160 =
{ 
/* *FLOAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag161
};

static const __midl_frag152_t __midl_frag152 =
{ 
/* *BYTE */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag345
};

static const __midl_frag150_t __midl_frag150 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag150
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag345
    }
};

static const __midl_frag148_t __midl_frag148 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0000002f,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* _wireBRECORD */
    { 
    /* _wireBRECORD */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *struct _NDR64_POINTER_FORMAT */
            0x24,    /* FC64_IP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag148
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x22,    /* FC64_OP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag149
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* CY */
    { 
    /* CY */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag128_t __midl_frag128 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* __MIDL_IOleAutomationTypes_0004 */
    { 
    /* __MIDL_IOleAutomationTypes_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag128,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 47 /* 0x2f */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag427,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag452,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag345,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag227,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag161,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag170,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 11 /* 0xb */,
        &__midl_frag227,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag452,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag137,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag170,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag172,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag215,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag177,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8192 /* 0x2000 */,
        &__midl_frag446,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag209,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16420 /* 0x4024 */,
        &__midl_frag209,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16401 /* 0x4011 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16386 /* 0x4002 */,
        &__midl_frag194,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16387 /* 0x4003 */,
        &__midl_frag202,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16404 /* 0x4014 */,
        &__midl_frag198,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16388 /* 0x4004 */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16389 /* 0x4005 */,
        &__midl_frag169,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16395 /* 0x400b */,
        &__midl_frag194,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16394 /* 0x400a */,
        &__midl_frag202,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16390 /* 0x4006 */,
        &__midl_frag168,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16391 /* 0x4007 */,
        &__midl_frag169,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16392 /* 0x4008 */,
        &__midl_frag171,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16397 /* 0x400d */,
        &__midl_frag173,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16393 /* 0x4009 */,
        &__midl_frag176,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 24576 /* 0x6000 */,
        &__midl_frag179,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16396 /* 0x400c */,
        &__midl_frag182,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag193,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 18 /* 0x12 */,
        &__midl_frag227,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag452,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag427,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 22 /* 0x16 */,
        &__midl_frag452,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag452,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 14 /* 0xe */,
        &__midl_frag190,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16398 /* 0x400e */,
        &__midl_frag191,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16400 /* 0x4010 */,
        &__midl_frag192,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16402 /* 0x4012 */,
        &__midl_frag194,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16403 /* 0x4013 */,
        &__midl_frag202,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16405 /* 0x4015 */,
        &__midl_frag198,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16406 /* 0x4016 */,
        &__midl_frag202,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16407 /* 0x4017 */,
        &__midl_frag202,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag126_t __midl_frag126 =
{ 
/* _wireVARIANT */
    { 
    /* _wireVARIANT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireVARIANT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* _wireVARIANT */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 3 /* 0x3 */,
            (NDR64_UINT16) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag127
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* **_wireVARIANT */
    { 
    /* **_wireVARIANT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireVARIANT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireVARIANT */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag126
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag204
    }
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* SAFEARR_VARIANT */
    { 
    /* SAFEARR_VARIANT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_VARIANT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag205,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag122_t __midl_frag122 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag117
    }
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag178
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag177
    }
};

static const __midl_frag116_t __midl_frag116 =
{ 
/* SAFEARR_DISPATCH */
    { 
    /* SAFEARR_DISPATCH */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_DISPATCH */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag122,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* SAFEARR_UNKNOWN */
    { 
    /* SAFEARR_UNKNOWN */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_UNKNOWN */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag217,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag108_t __midl_frag108 =
{ 
/*  */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag101
    }
};

static const __midl_frag104_t __midl_frag104 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag150
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag227
    }
};

static const __midl_frag103_t __midl_frag103 =
{ 
/* FLAGGED_WORD_BLOB */
    { 
    /* FLAGGED_WORD_BLOB */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FLAGGED_WORD_BLOB */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag104
    }
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* **FLAGGED_WORD_BLOB */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **FLAGGED_WORD_BLOB */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *FLAGGED_WORD_BLOB */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag103
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag172
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/* SAFEARR_BSTR */
    { 
    /* SAFEARR_BSTR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BSTR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag108,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* SAFEARRAYUNION */
    { 
    /* SAFEARRAYUNION */
        0x50,    /* FC64_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag100,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag109,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag116,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 12 /* 0xc */,
        &__midl_frag123,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag206,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 32781 /* 0x800d */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag229,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag234,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag98_t __midl_frag98 =
{ 
/* SAFEARRAYBOUND */
    { 
    /* SAFEARRAYBOUND */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* SAFEARRAYBOUND */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag97_t __midl_frag97 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag97
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag98
    }
};

static const __midl_frag95_t __midl_frag95 =
{ 
/* _wireSAFEARRAY */
    { 
    /* _wireSAFEARRAY */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireSAFEARRAY */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        0,
        &__midl_frag96,
    },
    { 
    /*  */
        { 
        /* _wireSAFEARRAY */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 12 /* 0xc */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag99
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* ReadVirtualMemory */
    { 
    /* ReadVirtualMemory */      /* procedure ReadVirtualMemory */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwBytesToRead */      /* parameter dwBytesToRead */
        &__midl_frag452,
        { 
        /* dwBytesToRead */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pReadBuffer */      /* parameter pReadBuffer */
        &__midl_frag445,
        { 
        /* pReadBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag85_t __midl_frag85 =
{ 
/* StopNotifyingRunChg */
    { 
    /* StopNotifyingRunChg */      /* procedure StopNotifyingRunChg */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwConnectionCookie */      /* parameter dwConnectionCookie */
        &__midl_frag452,
        { 
        /* dwConnectionCookie */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xcec95378,
        0x3797,
        0x4079,
        {0x9c, 0x70, 0xa4, 0x5a, 0xb2, 0xf8, 0x52, 0x78}
    }
};

static const __midl_frag80_t __midl_frag80 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag81
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* StartNotifyingRunChg */
    { 
    /* StartNotifyingRunChg */      /* procedure StartNotifyingRunChg */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pieXdiClientNotifyRunChg */      /* parameter pieXdiClientNotifyRunChg */
        &__midl_frag80,
        { 
        /* pieXdiClientNotifyRunChg */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pdwConnectionCookie */      /* parameter pdwConnectionCookie */
        &__midl_frag452,
        { 
        /* pdwConnectionCookie */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xfc90e444,
        0x6e23,
        0x40c1,
        {0xa8, 0xd0, 0x12, 0x03, 0xc8, 0xad, 0xb3, 0x24}
    }
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag77
};

static const __midl_frag75_t __midl_frag75 =
{ 
/* DelDataBreakpoint */
    { 
    /* DelDataBreakpoint */      /* procedure DelDataBreakpoint */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pieXdiDataBreakpoint */      /* parameter pieXdiDataBreakpoint */
        &__midl_frag76,
        { 
        /* pieXdiDataBreakpoint */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag76
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* AddDataBreakpoint */
    { 
    /* AddDataBreakpoint */      /* procedure AddDataBreakpoint */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 96 /* 0x60 */ ,  /* Stack size */
        (NDR64_UINT32) 82 /* 0x52 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 11 /* 0xb */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* AddressMask */      /* parameter AddressMask */
        &__midl_frag427,
        { 
        /* AddressMask */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwData */      /* parameter dwData */
        &__midl_frag452,
        { 
        /* dwData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwDataMask */      /* parameter dwDataMask */
        &__midl_frag452,
        { 
        /* dwDataMask */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bAccessWidth */      /* parameter bAccessWidth */
        &__midl_frag345,
        { 
        /* bAccessWidth */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* mt */      /* parameter mt */
        &__midl_frag452,
        { 
        /* mt */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* bAddressSpace */      /* parameter bAddressSpace */
        &__midl_frag345,
        { 
        /* bAddressSpace */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* da */      /* parameter da */
        &__midl_frag452,
        { 
        /* da */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* dwTotalBypassCount */      /* parameter dwTotalBypassCount */
        &__midl_frag452,
        { 
        /* dwTotalBypassCount */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* ppieXdiDataBreakpoint */      /* parameter ppieXdiDataBreakpoint */
        &__midl_frag71,
        { 
        /* ppieXdiDataBreakpoint */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    }
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x386d8bcb,
        0x9d1e,
        0x4bf4,
        {0xbe, 0x90, 0x90, 0xd7, 0x80, 0x25, 0x45, 0xfe}
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag59
};

static const __midl_frag57_t __midl_frag57 =
{ 
/* DelCodeBreakpoint */
    { 
    /* DelCodeBreakpoint */      /* procedure DelCodeBreakpoint */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pieXdiCodeBreakpoint */      /* parameter pieXdiCodeBreakpoint */
        &__midl_frag58,
        { 
        /* pieXdiCodeBreakpoint */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag58
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* AddCodeBreakpoint */
    { 
    /* AddCodeBreakpoint */      /* procedure AddCodeBreakpoint */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Address */      /* parameter Address */
        &__midl_frag427,
        { 
        /* Address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbpk */      /* parameter cbpk */
        &__midl_frag452,
        { 
        /* cbpk */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* mt */      /* parameter mt */
        &__midl_frag452,
        { 
        /* mt */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwExecMode */      /* parameter dwExecMode */
        &__midl_frag452,
        { 
        /* dwExecMode */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwTotalBypassCount */      /* parameter dwTotalBypassCount */
        &__midl_frag452,
        { 
        /* dwTotalBypassCount */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* ppieXdiCodeBreakpoint */      /* parameter ppieXdiCodeBreakpoint */
        &__midl_frag53,
        { 
        /* ppieXdiCodeBreakpoint */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* GetNbCodeBpAvail */
    { 
    /* GetNbCodeBpAvail */      /* procedure GetNbCodeBpAvail */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pdwNbHwCodeBpAvail */      /* parameter pdwNbHwCodeBpAvail */
        &__midl_frag452,
        { 
        /* pdwNbHwCodeBpAvail */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pdwNbSwCodeBpAvail */      /* parameter pdwNbSwCodeBpAvail */
        &__midl_frag452,
        { 
        /* pdwNbSwCodeBpAvail */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* GetRunStatus */
    { 
    /* GetRunStatus */      /* procedure GetRunStatus */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 176 /* 0xb0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* persCurrent */      /* parameter persCurrent */
        &__midl_frag452,
        { 
        /* persCurrent */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pehrCurrent */      /* parameter pehrCurrent */
        &__midl_frag452,
        { 
        /* pehrCurrent */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pCurrentExecAddress */      /* parameter pCurrentExecAddress */
        &__midl_frag427,
        { 
        /* pCurrentExecAddress */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pdwExceptionCode */      /* parameter pdwExceptionCode */
        &__midl_frag452,
        { 
        /* pdwExceptionCode */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pdwProcessorNumberOfLastEvent */      /* parameter pdwProcessorNumberOfLastEvent */
        &__midl_frag452,
        { 
        /* pdwProcessorNumberOfLastEvent */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    { 
    /* *OLECHAR */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag443
    },
    { 
    /* *OLECHAR */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag443
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* _GLOBAL_TARGET_INFO_STRUCT */
    { 
    /* _GLOBAL_TARGET_INFO_STRUCT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _GLOBAL_TARGET_INFO_STRUCT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag14,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag10_t __midl_frag10 =
{ 
/* *_GLOBAL_TARGET_INFO_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag11
};

static const __midl_frag9_t __midl_frag9 =
{ 
/* GetTargetInfo */
    { 
    /* GetTargetInfo */      /* procedure GetTargetInfo */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pgti */      /* parameter pgti */
        &__midl_frag11,
        { 
        /* pgti */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag215
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* CreateExdiServer */
    { 
    /* CreateExdiServer */      /* procedure CreateExdiServer */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pConstructorArguments */      /* parameter pConstructorArguments */
        &__midl_frag443,
        { 
        /* pConstructorArguments */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag5,
        { 
        /* pServer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag452,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            LPSAFEARRAY_UserSize64
            ,LPSAFEARRAY_UserMarshal64
            ,LPSAFEARRAY_UserUnmarshal64
            ,LPSAFEARRAY_UserFree64
            }

        };



/* Standard interface: __MIDL_itf_ExdiKdSample_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IeXdiServerFactory3, ver. 0.0,
   GUID={0x22EFA264,0x6FD7,0x4992,{0x94,0x27,0x12,0x5B,0x51,0x1A,0x47,0x7C}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IeXdiServerFactory3_Ndr64ProcTable[] =
    {
    &__midl_frag2
    };


static const MIDL_SYNTAX_INFO IeXdiServerFactory3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServerFactory3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiServerFactory3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiServerFactory3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServerFactory3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiServerFactory3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiServerFactory3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiServerFactory3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiServerFactory3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiServer3_Ndr64ProcTable[] =
    {
    &__midl_frag9,
    &__midl_frag16,
    &__midl_frag451,
    &__midl_frag451,
    &__midl_frag85,
    &__midl_frag451,
    &__midl_frag37,
    &__midl_frag276,
    &__midl_frag47,
    &__midl_frag57,
    &__midl_frag61,
    &__midl_frag75,
    &__midl_frag79,
    &__midl_frag85,
    &__midl_frag88,
    &__midl_frag240,
    &__midl_frag248,
    &__midl_frag257,
    &__midl_frag266,
    &__midl_frag276,
    &__midl_frag280,
    &__midl_frag284,
    &__midl_frag289,
    &__midl_frag296,
    &__midl_frag300,
    &__midl_frag306
    };


static const MIDL_SYNTAX_INFO IeXdiServer3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServer3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiServer3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiServer3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiServer3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiServer3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiServer3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiServer3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiServer3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiCodeBreakpoint3_Ndr64ProcTable[] =
    {
    &__midl_frag311,
    &__midl_frag355
    };


static const MIDL_SYNTAX_INFO IeXdiCodeBreakpoint3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiCodeBreakpoint3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiCodeBreakpoint3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiCodeBreakpoint3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiCodeBreakpoint3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiCodeBreakpoint3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiCodeBreakpoint3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiCodeBreakpoint3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiCodeBreakpoint3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiDataBreakpoint3_Ndr64ProcTable[] =
    {
    &__midl_frag331,
    &__midl_frag355
    };


static const MIDL_SYNTAX_INFO IeXdiDataBreakpoint3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiDataBreakpoint3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiDataBreakpoint3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiDataBreakpoint3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiDataBreakpoint3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiDataBreakpoint3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiDataBreakpoint3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiDataBreakpoint3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiDataBreakpoint3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiX86Context3_Ndr64ProcTable[] =
    {
    &__midl_frag359,
    &__midl_frag364
    };


static const MIDL_SYNTAX_INFO IeXdiX86Context3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86Context3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiX86Context3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86Context3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86Context3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiX86Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiX86Context3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86Context3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiX86ExContext3_Ndr64ProcTable[] =
    {
    &__midl_frag368,
    &__midl_frag373
    };


static const MIDL_SYNTAX_INFO IeXdiX86ExContext3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86ExContext3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiX86ExContext3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86ExContext3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86ExContext3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86ExContext3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiX86ExContext3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiX86ExContext3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86ExContext3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiARM4Context3_Ndr64ProcTable[] =
    {
    &__midl_frag377,
    &__midl_frag382
    };


static const MIDL_SYNTAX_INFO IeXdiARM4Context3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiARM4Context3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiARM4Context3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiARM4Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiARM4Context3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiARM4Context3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiARM4Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiARM4Context3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiARM4Context3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiArmV8Arch64Context3_Ndr64ProcTable[] =
    {
    &__midl_frag386,
    &__midl_frag391
    };


static const MIDL_SYNTAX_INFO IeXdiArmV8Arch64Context3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiArmV8Arch64Context3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiArmV8Arch64Context3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiArmV8Arch64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiArmV8Arch64Context3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiArmV8Arch64Context3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiArmV8Arch64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiArmV8Arch64Context3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiArmV8Arch64Context3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiX86_64Context3_Ndr64ProcTable[] =
    {
    &__midl_frag395,
    &__midl_frag402
    };


static const MIDL_SYNTAX_INFO IeXdiX86_64Context3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86_64Context3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiX86_64Context3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiX86_64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiX86_64Context3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86_64Context3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiX86_64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiX86_64Context3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiX86_64Context3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiIA64Context3_Ndr64ProcTable[] =
    {
    &__midl_frag406,
    &__midl_frag411
    };


static const MIDL_SYNTAX_INFO IeXdiIA64Context3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiIA64Context3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiIA64Context3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiIA64Context3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiIA64Context3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiIA64Context3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiIA64Context3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiIA64Context3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiIA64Context3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiEBCContext3_Ndr64ProcTable[] =
    {
    &__midl_frag415,
    &__midl_frag420
    };


static const MIDL_SYNTAX_INFO IeXdiEBCContext3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiEBCContext3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiEBCContext3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiEBCContext3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiEBCContext3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiEBCContext3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiEBCContext3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiEBCContext3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiEBCContext3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiClientNotifyRunChg3_Ndr64ProcTable[] =
    {
    &__midl_frag424
    };


static const MIDL_SYNTAX_INFO IeXdiClientNotifyRunChg3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiClientNotifyRunChg3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiClientNotifyRunChg3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiClientNotifyRunChg3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiClientNotifyRunChg3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiClientNotifyRunChg3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiClientNotifyRunChg3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiClientNotifyRunChg3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiClientNotifyRunChg3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiKeepaliveInterface3_Ndr64ProcTable[] =
    {
    &__midl_frag451
    };


static const MIDL_SYNTAX_INFO IeXdiKeepaliveInterface3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiKeepaliveInterface3_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiKeepaliveInterface3_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiKeepaliveInterface3_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiKeepaliveInterface3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiKeepaliveInterface3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiKeepaliveInterface3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiKeepaliveInterface3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiKeepaliveInterface3_SyntaxInfo
    };
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
static const FormatInfoRef IeXdiControlComponentFunctions_Ndr64ProcTable[] =
    {
    &__midl_frag433,
    &__midl_frag439
    };


static const MIDL_SYNTAX_INFO IeXdiControlComponentFunctions_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiControlComponentFunctions_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IeXdiControlComponentFunctions_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IeXdiControlComponentFunctions_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IeXdiControlComponentFunctions_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiControlComponentFunctions_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IeXdiControlComponentFunctions_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IeXdiControlComponentFunctions_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IeXdiControlComponentFunctions_SyntaxInfo
    };
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
static const FormatInfoRef IAsynchronousCommandNotificationReceiver_Ndr64ProcTable[] =
    {
    &__midl_frag451,
    &__midl_frag451
    };


static const MIDL_SYNTAX_INFO IAsynchronousCommandNotificationReceiver_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[-3],
    ExdiKdSample__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IAsynchronousCommandNotificationReceiver_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IAsynchronousCommandNotificationReceiver_ProxyInfo =
    {
    &Object_StubDesc,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    &IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IAsynchronousCommandNotificationReceiver_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IAsynchronousCommandNotificationReceiver_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ExdiKdSample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IAsynchronousCommandNotificationReceiver_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IAsynchronousCommandNotificationReceiver_SyntaxInfo
    };
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
    0x2000001, /* MIDL flag */
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

