

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../chrome_proxy/com_server/ChromeAppServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
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
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ChromeAppServer.h"

#define TYPE_FORMAT_STRING_SIZE   1495                              
#define PROC_FORMAT_STRING_SIZE   12725                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _ChromeAppServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _ChromeAppServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_PROC_FORMAT_STRING;

typedef struct _ChromeAppServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ChromeAppServer_MIDL_TYPE_FORMAT_STRING ChromeAppServer__MIDL_TypeFormatString;
extern const ChromeAppServer_MIDL_PROC_FORMAT_STRING ChromeAppServer__MIDL_ProcFormatString;
extern const ChromeAppServer_MIDL_EXPR_FORMAT_STRING ChromeAppServer__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDesigner_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDesigner_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEclipseExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOfficeExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVSExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVSExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramRestNotify_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramRestNotify_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramRestObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramRestObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVSDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVSDocument_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITaskNotify_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITaskNotify_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeViewCallBack_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeViewCallBack_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeView_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramApp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramApp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramEventObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramEventObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMessageObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMessageObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEventProxy_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEventProxy_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAppExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndContainer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndContainer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICreator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICreator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramEditor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramEditor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDoc_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDoc_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDocTemplate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDocTemplate_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangram_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangram_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndFrame_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndFrame_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndNodeCollection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndNodeCollection_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndPage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndPage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IChromeWebBrowser_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IChromeWebBrowser_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IChromeWebContent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IChromeWebContent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOfficeObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramAppCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramAppCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILyncExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILyncExtender_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ChromeAppServer_MIDL_PROC_FORMAT_STRING ChromeAppServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Save */


	/* Procedure Close */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 26 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveWorkBenchWindow */

/* 32 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 48 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 58 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 60 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 62 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 66 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 68 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddVBAFormsScript */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 92 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OfficeObject */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrKey */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitVBAForm */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 142 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 152 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nStyle */

/* 158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 168 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 170 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 172 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 174 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 178 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromVBAForm */

/* 182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0xb ),	/* 11 */
/* 190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 198 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 212 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 218 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActiveTopWndNode */

/* 226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0xc ),	/* 12 */
/* 234 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter WndNode */

/* 258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Object */


	/* Procedure GetObjectFromWnd */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0xd ),	/* 13 */
/* 278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */


	/* Parameter hWnd */

/* 296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter ppObjFromWnd */

/* 302 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 306 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x9 ),	/* 9 */
/* 322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRetVal */

/* 340 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 344 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentDesignNode */

/* 352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0xa ),	/* 10 */
/* 360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 368 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0xb ),	/* 11 */
/* 398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 416 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignRootNode */

/* 428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0xc ),	/* 12 */
/* 436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 444 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 454 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 458 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignRootNode */

/* 466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0xd ),	/* 13 */
/* 474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 492 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 496 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCLRProject */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xe ),	/* 14 */
/* 512 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x22 ),	/* 34 */
/* 518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 520 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 540 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramCLRProject */

/* 548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0xf ),	/* 15 */
/* 556 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 558 */	NdrFcShort( 0x6 ),	/* 6 */
/* 560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 564 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 578 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 584 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentSelectedPrj */

/* 592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 608 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 618 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 622 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */


	/* Procedure ExtendXmlUI */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x11 ),	/* 17 */
/* 638 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 646 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */


	/* Parameter bstrKey */

/* 656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */


	/* Parameter bstrXml */

/* 662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 666 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */


	/* Parameter ppNode */

/* 668 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 672 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 676 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessNotify */


	/* Procedure Notify */


	/* Procedure Notify */

/* 680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x7 ),	/* 7 */
/* 688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 696 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXmlNotify */


	/* Parameter bstrInfo */


	/* Parameter bstrInfo */

/* 706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramRestNotify */

/* 718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x7 ),	/* 7 */
/* 726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 732 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 734 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 748 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramRestNotify */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 786 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */


	/* Procedure get_NotifyHandle */

/* 794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x9 ),	/* 9 */
/* 802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x2c ),	/* 44 */
/* 808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 824 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NotifyHandle */

/* 832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0xa ),	/* 10 */
/* 840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Header */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xb ),	/* 11 */
/* 878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 886 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 900 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 902 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 906 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Header */

/* 914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xc ),	/* 12 */
/* 922 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 930 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 944 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 950 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RestKey */

/* 958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0xd ),	/* 13 */
/* 966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 974 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 984 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 988 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RestKey */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0xe ),	/* 14 */
/* 1004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1012 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1026 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentActiveNode */


	/* Procedure get_TangramNode */

/* 1034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0xf ),	/* 15 */
/* 1042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1050 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1064 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 1066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramNode */

/* 1072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1088 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1102 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsyncRest */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1118 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1120 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1126 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 1142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1150 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1152 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1156 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1158 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1162 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 1166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1182 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNotify */

/* 1192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UploadFile */

/* 1204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1212 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1214 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1220 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bUpload */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1234 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1240 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1246 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilePath */

/* 1248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1250 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1252 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RestData */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1268 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1270 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1276 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1292 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1296 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1302 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1312 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1314 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1318 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeaders */

/* 1322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTargetObj */

/* 1380 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1384 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */


	/* Procedure get_State */

/* 1392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1408 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Width */


	/* Procedure put_State */

/* 1430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1438 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1446 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSClass */

/* 1468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1476 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1482 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1484 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 1494 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1496 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1498 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppNode */

/* 1500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1502 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1504 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1528 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 1538 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1542 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Cols */


	/* Procedure get_Index */


	/* Procedure get_Count */

/* 1550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pCount */


	/* Parameter nCols */


	/* Parameter nVal */


	/* Parameter pCount */

/* 1576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyEx */

/* 1588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1604 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varNotify */

/* 1614 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1618 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 1620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_WndNode */

/* 1626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1634 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1656 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Pages */

/* 1664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1674 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1690 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInitTreeView */

/* 1702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1718 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramTreeView */

/* 1728 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1732 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter bstrXml */

/* 1734 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1738 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClick */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0xa ),	/* 10 */
/* 1754 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1762 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1776 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXmlData */

/* 1778 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1782 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */


	/* Procedure OnInit */

/* 1790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0xb ),	/* 11 */
/* 1798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1806 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter bstrXml */

/* 1816 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1820 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnNewPage */

/* 1828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0xc ),	/* 12 */
/* 1836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNewPage */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramAction */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0xd ),	/* 13 */
/* 1874 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1880 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1882 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1894 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1896 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRetXml */

/* 1898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1900 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1902 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 1904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1906 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramTreeViewCallBack */

/* 1910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1926 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 1936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1940 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 1942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1946 */	NdrFcShort( 0x48c ),	/* Type Offset=1164 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rows */


	/* Procedure get_FirstRoot */

/* 1954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1970 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRows */


	/* Parameter pVal */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddTreeNode */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2000 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2008 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hItem */

/* 2018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 2024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2028 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertNode */

/* 2036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0xa ),	/* 10 */
/* 2044 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2052 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 2062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2066 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hItem */

/* 2068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2076 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 2080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2096 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramCore */

/* 2106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2110 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_eventSource */

/* 2118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2148 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 2150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Application */


	/* Procedure put_eventSource */

/* 2156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2172 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter eventSource */

/* 2182 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2186 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */


	/* Return value */

/* 2188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Index */

/* 2194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0xa ),	/* 10 */
/* 2202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2210 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentNavigateKey */


	/* Procedure get_EventName */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0xb ),	/* 11 */
/* 2240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2248 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2262 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EventName */

/* 2270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0xc ),	/* 12 */
/* 2278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2286 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Object */

/* 2308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0xe ),	/* 14 */
/* 2316 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2324 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2340 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2344 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */

/* 2352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0xf ),	/* 15 */
/* 2360 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2366 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2368 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 2384 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2388 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Value */

/* 2396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2412 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2428 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2432 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 2434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TemplateXml */


	/* Procedure get_TemplateXml */


	/* Procedure get_SenderSip */

/* 2440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2456 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrVal */


	/* Parameter bstrVal */


	/* Parameter pVal */

/* 2466 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2470 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Names */


	/* Procedure get_TargetSip */

/* 2478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2492 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2494 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2504 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2508 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReceivedMsg */

/* 2516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2532 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2542 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2546 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 2548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VisibleNode */


	/* Procedure get_Node */

/* 2554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0xa ),	/* 10 */
/* 2562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2568 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2580 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2584 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Sender */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0xb ),	/* 11 */
/* 2600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2618 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2622 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ChildNodes */

/* 2630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2646 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 2656 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2660 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 2662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Row */

/* 2668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0xa ),	/* 10 */
/* 2676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 2694 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Col */

/* 2706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0xb ),	/* 11 */
/* 2714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCol */

/* 2732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeType */

/* 2744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0xc ),	/* 12 */
/* 2752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2760 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 2770 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 2772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2774 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 2776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ParentNode */

/* 2782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0xd ),	/* 13 */
/* 2790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2796 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2798 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNode */

/* 2808 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2812 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0xe ),	/* 14 */
/* 2828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2834 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2836 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2846 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2850 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopPage */


	/* Procedure get_WndPage */

/* 2858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0xf ),	/* 15 */
/* 2866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2872 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2874 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2884 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2888 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */


	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreatingNode */


	/* Procedure get_RootNode */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2912 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter ppNode */

/* 2922 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2926 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2948 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2950 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 2960 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2962 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2964 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2968 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AxPlugIn */

/* 2972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2980 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2988 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPlugInName */

/* 2998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3002 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 3004 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3008 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameXML */


	/* Procedure get_Caption */

/* 3016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3024 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3032 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 3042 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3044 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3046 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 3048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 3054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3070 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 3080 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3084 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 3092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3108 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3118 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3122 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCtrl */


	/* Procedure put_Name */

/* 3130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3136 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3144 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3146 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */


	/* Parameter bstrName */

/* 3156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3160 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 3162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3164 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Objects */

/* 3168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3176 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 3194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppNodeColletion */

/* 3200 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3204 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 3206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3208 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 3212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3228 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 3238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3242 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attribute */

/* 3250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3264 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3266 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3276 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3280 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 3282 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3286 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Attribute */

/* 3294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3302 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3310 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3322 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3324 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrVal */

/* 3326 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3330 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tag */

/* 3338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3352 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3354 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 3364 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3368 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Tag */

/* 3376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3392 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vVar */

/* 3402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3406 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OuterXml */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3428 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3430 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3440 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3444 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */

/* 3452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3460 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3468 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3478 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3482 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 3490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3498 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3506 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3520 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3524 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameAtWindowPage */

/* 3528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3536 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3542 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3544 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3554 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3558 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 3566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3574 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3582 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 3604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3620 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 3642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3650 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3656 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3658 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3668 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3672 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 3674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XML */

/* 3680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3694 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3696 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3706 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3710 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 3718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3732 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3734 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3748 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 3756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3786 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 3788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewGUID */


	/* Procedure get_DocXml */

/* 3794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3810 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter pVal */

/* 3820 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3824 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 3826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbMiddle */

/* 3832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbMiddle */

/* 3870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbRightBottom */

/* 3908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3924 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbRightBottom */

/* 3946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3962 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbLeftTop */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4000 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4018 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbLeftTop */

/* 4022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x2d ),	/* 45 */
/* 4030 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4036 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4038 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmin */

/* 4060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x2e ),	/* 46 */
/* 4068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4076 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmin */

/* 4098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x2f ),	/* 47 */
/* 4106 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4114 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4132 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmax */

/* 4136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x30 ),	/* 48 */
/* 4144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmax */

/* 4174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x31 ),	/* 49 */
/* 4182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4208 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmin */

/* 4212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x32 ),	/* 50 */
/* 4220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4228 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmin */

/* 4250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x33 ),	/* 51 */
/* 4258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmax */

/* 4288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4296 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4304 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmax */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x35 ),	/* 53 */
/* 4334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4342 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostNode */

/* 4364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4378 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4394 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HostNode */

/* 4402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4432 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActivePage */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ActivePage */

/* 4478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostFrame */

/* 4516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4532 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4546 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterRow */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterRow */

/* 4592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4606 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterCol */

/* 4630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x3d ),	/* 61 */
/* 4638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4642 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4646 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterCol */

/* 4668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x3e ),	/* 62 */
/* 4676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OfficeObj */

/* 4706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x3f ),	/* 63 */
/* 4714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4736 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 4738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SaveToConfigFile */

/* 4744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4754 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4760 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4774 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DockObj */

/* 4782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4798 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4812 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 4814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4818 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DockObj */

/* 4826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4834 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4836 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4840 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4842 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4856 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 4858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurMsgObj */

/* 4870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4896 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4900 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSDocument */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4924 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVSDocument */

/* 4934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4938 */	NdrFcShort( 0x50c ),	/* Type Offset=1292 */

	/* Return value */

/* 4940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 4946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4952 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4962 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4972 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4976 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 4978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */

/* 4984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4990 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5000 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 5010 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5014 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5018 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveTabPage */

/* 5022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x47 ),	/* 71 */
/* 5030 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5036 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5038 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 5048 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5052 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 5054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodes */

/* 5060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x48 ),	/* 72 */
/* 5068 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5074 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5076 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5090 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 5092 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5096 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter ppNodes */

/* 5098 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5102 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Parameter pCount */

/* 5104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5106 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5112 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNode */

/* 5116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x49 ),	/* 73 */
/* 5124 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5130 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5132 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 5142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 5148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppWndmNode */

/* 5154 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5158 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x4a ),	/* 74 */
/* 5174 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5176 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5182 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5192 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5196 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 5204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5208 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 5210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Refresh */

/* 5216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5222 */	NdrFcShort( 0x4b ),	/* 75 */
/* 5224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5232 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5244 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 5248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x4c ),	/* 76 */
/* 5256 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5262 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5264 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5274 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5276 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5278 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 5280 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5284 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 5286 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5288 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5290 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadXML */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x4d ),	/* 77 */
/* 5306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5314 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 5324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXML */

/* 5330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5332 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5338 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 5342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5348 */	NdrFcShort( 0x4e ),	/* 78 */
/* 5350 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5356 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5358 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 5368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 5374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 5380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5384 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 5386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5388 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5390 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 5392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5394 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5396 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5400 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeByName */

/* 5404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x4f ),	/* 79 */
/* 5412 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5420 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5434 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5436 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5440 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5456 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5458 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5464 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5490 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 5498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x51 ),	/* 81 */
/* 5506 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5508 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5514 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5528 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5534 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5540 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5544 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendUCMAMsg */

/* 5548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x52 ),	/* 82 */
/* 5556 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5564 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSipFrom */

/* 5574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5578 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTo */

/* 5580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5584 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMsg */

/* 5586 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5590 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5594 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateURL */

/* 5598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0x53 ),	/* 83 */
/* 5606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5614 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 5624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter dispObjforScript */

/* 5630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5634 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 5642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5648 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5650 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5652 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5658 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hParentWnd */

/* 5668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5672 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pNode */

/* 5674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5678 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter hWnd */

/* 5680 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5682 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5688 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tags */

/* 5692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5698 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5700 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5708 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjName */

/* 5718 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5720 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5722 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5724 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5728 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5732 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TemplateXml */


	/* Procedure put_TemplateXml */

/* 5736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5752 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5762 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5766 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocType */


	/* Procedure put_DocType */

/* 5774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5780 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5782 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5790 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */


	/* Procedure get_DocID */


	/* Procedure get_DocID */

/* 5812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5818 */	NdrFcShort( 0xa ),	/* 10 */
/* 5820 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5828 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5838 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5840 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5842 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 5844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5846 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocID */


	/* Procedure put_DocID */

/* 5850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0xb ),	/* 11 */
/* 5858 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5860 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5864 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5866 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5878 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5880 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5884 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameWndXml */


	/* Procedure GetFrameWndXml */

/* 5888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5894 */	NdrFcShort( 0xc ),	/* 12 */
/* 5896 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5902 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5904 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWndID */


	/* Parameter bstrWndID */

/* 5914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5916 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5918 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndScriptVal */


	/* Parameter bstrWndScriptVal */

/* 5920 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5922 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5924 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 5926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5928 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 5932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5938 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5940 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5946 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5948 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5958 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5960 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5962 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5964 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5966 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5968 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 5970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5972 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 5976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0xa ),	/* 10 */
/* 5984 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5990 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5992 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 5994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6004 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6006 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 6008 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6010 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6012 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 6014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6016 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppExtender */

/* 6020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6026 */	NdrFcShort( 0xb ),	/* 11 */
/* 6028 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6036 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6052 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6054 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6056 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppExtender */

/* 6064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6070 */	NdrFcShort( 0xc ),	/* 12 */
/* 6072 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6078 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6080 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6090 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6092 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6094 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 6096 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6098 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6100 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 6102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6104 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 6108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0xd ),	/* 13 */
/* 6116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6124 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 6134 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6138 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 6140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostWnd */

/* 6146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6152 */	NdrFcShort( 0xe ),	/* 14 */
/* 6154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6158 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6162 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6176 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteTangram */

/* 6184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6190 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6192 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6200 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 6210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6216 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6220 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 6222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6224 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 6228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6254 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6258 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */

	/* Return value */

/* 6260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 6266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6272 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6282 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 6292 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6296 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 6298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteHelperHWND */

/* 6304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6310 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6316 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6334 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteHelperHWND */

/* 6342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6348 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6358 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 6368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6372 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 6380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6386 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6396 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6406 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6410 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 6412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6414 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LyncExtender */

/* 6418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6424 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6426 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6432 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6444 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6448 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 6450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6452 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 6456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6464 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6466 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6470 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6472 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AppProxy */

/* 6482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6486 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nDocID */

/* 6488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6490 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6492 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 6494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6496 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6498 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Return value */

/* 6500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6502 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocTemplate */

/* 6506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6512 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6514 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6520 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6522 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 6532 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6534 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6536 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6540 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6542 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveChromeBrowserWnd */

/* 6550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6556 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6564 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 6576 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6580 */	NdrFcShort( 0x564 ),	/* Type Offset=1380 */

	/* Return value */

/* 6582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateWndPage */

/* 6588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6594 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6604 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6618 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppWndPage */

/* 6620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6624 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 6626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOfficeDocument */

/* 6632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6638 */	NdrFcShort( 0x1c ),	/* 28 */
/* 6640 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6648 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 6658 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6662 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCLRObj */

/* 6670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6678 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6684 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6686 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 6696 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6700 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppDisp */

/* 6702 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6704 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6706 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6710 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartApplication */

/* 6714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6722 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6730 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 6740 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6742 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6744 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 6746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6748 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6750 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6754 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndFrame */

/* 6758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6764 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6766 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6774 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 6784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6788 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppFrame */

/* 6790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6794 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 6796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemText */

/* 6802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6808 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6810 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6812 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6818 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6832 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxLengeh */

/* 6840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 6846 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6848 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6850 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetItemText */

/* 6858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6866 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6874 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6884 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6888 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrText */

/* 6896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6900 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6904 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCLRControl */

/* 6908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6914 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6916 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6922 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6924 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter CtrlDisp */

/* 6934 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6938 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 6940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6944 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 6946 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6950 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6954 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MessageBox */

/* 6958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6964 */	NdrFcShort( 0x23 ),	/* 35 */
/* 6966 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6968 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6970 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6974 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6988 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 6990 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6994 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrCaption */

/* 6996 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6998 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7000 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nStyle */

/* 7002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7004 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRet */

/* 7008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7010 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7016 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 7020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7026 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7028 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7030 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7036 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSRC */

/* 7046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bEncode */

/* 7052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7054 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7056 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 7058 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7062 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7066 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHostFocus */

/* 7070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7076 */	NdrFcShort( 0x25 ),	/* 37 */
/* 7078 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7086 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateWndNode */

/* 7102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7108 */	NdrFcShort( 0x26 ),	/* 38 */
/* 7110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7116 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7118 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 7128 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7132 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 7134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7136 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveCLRMethod */

/* 7140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7146 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7148 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7156 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 7166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7170 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMethod */

/* 7172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7176 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrParam */

/* 7178 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7180 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7182 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 7184 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7186 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7188 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7192 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetObject */

/* 7196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7202 */	NdrFcShort( 0x29 ),	/* 41 */
/* 7204 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SourceDisp */

/* 7222 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7226 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ResultDisp */

/* 7228 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 7230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7232 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 7234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DownLoadFile */

/* 7240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7246 */	NdrFcShort( 0x2a ),	/* 42 */
/* 7248 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7256 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strFileURL */

/* 7266 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7270 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTargetFile */

/* 7272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7276 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrActionXml */

/* 7278 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7282 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7286 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 7290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x2b ),	/* 43 */
/* 7298 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7300 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7306 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7320 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7326 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7330 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7332 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 7334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7336 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7338 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 7340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7342 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeFromHandle */

/* 7346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7352 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7354 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7362 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7376 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppRetNode */

/* 7378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7382 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 7384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 7390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7396 */	NdrFcShort( 0x2d ),	/* 45 */
/* 7398 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7400 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7406 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7420 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7426 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7432 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 7434 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7436 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7438 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7442 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 7446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7452 */	NdrFcShort( 0x2e ),	/* 46 */
/* 7454 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7456 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7460 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7462 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7476 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7482 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7488 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 7490 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7492 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7494 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7498 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramCtrl */

/* 7502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x2f ),	/* 47 */
/* 7510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7516 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7518 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 7528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7532 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetCtrl */

/* 7534 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7538 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */

/* 7540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 7546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7552 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7560 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7562 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDisp */

/* 7572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7576 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventIndex */

/* 7578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitLyncApp */

/* 7590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x31 ),	/* 49 */
/* 7598 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7606 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowClientDefaultNode */

/* 7622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7628 */	NdrFcShort( 0x32 ),	/* 50 */
/* 7630 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7636 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7638 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddDisp */

/* 7648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7650 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7652 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter hParent */

/* 7654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7656 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7658 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrWndClaName */

/* 7660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7662 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7664 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndPageName */

/* 7666 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7668 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7670 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 7672 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7674 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7676 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 7678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7680 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDocTemplateXml */

/* 7684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7690 */	NdrFcShort( 0x33 ),	/* 51 */
/* 7692 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7698 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7700 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 7710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7714 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 7716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7720 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilter */

/* 7722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7726 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTemplatePath */

/* 7728 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7730 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7732 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7736 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramFile */

/* 7740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x34 ),	/* 52 */
/* 7748 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7754 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7756 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDoc */

/* 7766 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7770 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Return value */

/* 7772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7774 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramEventObj */

/* 7778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7784 */	NdrFcShort( 0x35 ),	/* 53 */
/* 7786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7792 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7794 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramEventObj */

/* 7804 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7808 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 7810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireTangramEventObj */

/* 7816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7822 */	NdrFcShort( 0x36 ),	/* 54 */
/* 7824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7832 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramEventObj */

/* 7842 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7844 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7846 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Return value */

/* 7848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7850 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 7854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x37 ),	/* 55 */
/* 7862 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7864 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7870 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7884 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrames */

/* 7886 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7890 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 7892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7896 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 7898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7900 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7902 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 7904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7906 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7908 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7912 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePage */

/* 7916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7922 */	NdrFcShort( 0x38 ),	/* 56 */
/* 7924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7932 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PageHandle */

/* 7942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7946 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadDocComponent */

/* 7954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7960 */	NdrFcShort( 0x39 ),	/* 57 */
/* 7962 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7966 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7968 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7970 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrLib */

/* 7980 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7984 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llAppProxy */

/* 7986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7990 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7994 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramDocFile */

/* 7998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8004 */	NdrFcShort( 0x3a ),	/* 58 */
/* 8006 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8012 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8014 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFilePath */

/* 8024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8026 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8028 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppDoc */

/* 8030 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8032 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8034 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Return value */

/* 8036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8038 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendUCMAMessage */

/* 8042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8048 */	NdrFcShort( 0x3b ),	/* 59 */
/* 8050 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 8052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8056 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 8058 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8062 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sipFrom */

/* 8068 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8072 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter sipTo */

/* 8074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8078 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter SenderDispObj */

/* 8080 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8082 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8084 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pSender */

/* 8086 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8088 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8090 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter bstrMsg */

/* 8092 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8094 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8096 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8100 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOutLookObj */

/* 8104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8110 */	NdrFcShort( 0x3c ),	/* 60 */
/* 8112 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8120 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjType */

/* 8130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8134 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nType */

/* 8136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 8142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 8148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8150 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8152 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 8154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8156 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewWorkBench */

/* 8160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8166 */	NdrFcShort( 0x3d ),	/* 61 */
/* 8168 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8174 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8176 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTangramDoc */

/* 8186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8190 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppWorkBenchWindow */

/* 8192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8196 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 8198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTextFromWeb */

/* 8204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8210 */	NdrFcShort( 0x3e ),	/* 62 */
/* 8212 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 8214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 8220 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 8230 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8234 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 8236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8240 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 8242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8246 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 8248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8250 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8252 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFile */

/* 8254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8256 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8258 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTarget */

/* 8260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8262 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8264 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 8266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8268 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 8270 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8274 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 8276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeader */

/* 8278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8284 */	NdrFcShort( 0x3f ),	/* 63 */
/* 8286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8294 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8306 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteFrame */

/* 8310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x40 ),	/* 64 */
/* 8318 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8324 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8326 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWndFrame */

/* 8336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8340 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 8342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitEclipseApp */

/* 8348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8354 */	NdrFcShort( 0x41 ),	/* 65 */
/* 8356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8364 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCLRApp */

/* 8380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8386 */	NdrFcShort( 0x42 ),	/* 66 */
/* 8388 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8392 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8396 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strInitXml */

/* 8406 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8410 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llHandle */

/* 8412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8414 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8416 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramCommand */

/* 8424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8430 */	NdrFcShort( 0x43 ),	/* 67 */
/* 8432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8438 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8454 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 8456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetImage */

/* 8462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8468 */	NdrFcShort( 0x44 ),	/* 68 */
/* 8470 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8478 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strValue */

/* 8488 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8492 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppdispImage */

/* 8494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8498 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 8500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetVisible */

/* 8506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8512 */	NdrFcShort( 0x45 ),	/* 69 */
/* 8514 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8520 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8522 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8532 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8534 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8536 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter varVisible */

/* 8538 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8540 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8542 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 8544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramOnLoad */

/* 8550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8556 */	NdrFcShort( 0x46 ),	/* 70 */
/* 8558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8564 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8576 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8580 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 8582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemCount */

/* 8588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8594 */	NdrFcShort( 0x47 ),	/* 71 */
/* 8596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8600 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8604 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8614 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8618 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nCount */

/* 8620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemLabel */

/* 8632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8638 */	NdrFcShort( 0x48 ),	/* 72 */
/* 8640 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8646 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8648 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8662 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 8664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLabel */

/* 8670 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8674 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8678 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemID */

/* 8682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8688 */	NdrFcShort( 0x49 ),	/* 73 */
/* 8690 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8696 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8698 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8712 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 8714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrID */

/* 8720 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8722 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8724 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8728 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndNode */

/* 8732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8738 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8740 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8746 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8748 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 8750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 8758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8762 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppNode */

/* 8764 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8768 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */


	/* Procedure get_WndPage */

/* 8776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8782 */	NdrFcShort( 0xc ),	/* 12 */
/* 8784 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8790 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8792 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 8802 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8804 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8806 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */


	/* Return value */

/* 8808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8810 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameData */

/* 8814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8820 */	NdrFcShort( 0xd ),	/* 13 */
/* 8822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8828 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8830 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8844 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 8846 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8848 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8850 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 8852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8854 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FrameData */

/* 8858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0xe ),	/* 14 */
/* 8866 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8874 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 8876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8888 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 8890 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8894 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 8896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignerState */

/* 8902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8908 */	NdrFcShort( 0xf ),	/* 15 */
/* 8910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8914 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8918 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8932 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignerState */

/* 8940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8946 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8950 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8956 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8970 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 8978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8984 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 9004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 9016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9022 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9024 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9032 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 9042 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9044 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9046 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 9048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 9054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9068 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9070 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9080 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9084 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Return value */

/* 9086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameType */

/* 9092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9098 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9104 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9108 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9118 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9122 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 9124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 9130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9136 */	NdrFcShort( 0x16 ),	/* 22 */
/* 9138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9144 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9146 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9156 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9160 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9164 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Detach */

/* 9168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x17 ),	/* 23 */
/* 9176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attach */

/* 9200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9206 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9208 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9216 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyHost */

/* 9232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9238 */	NdrFcShort( 0x19 ),	/* 25 */
/* 9240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9248 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 9258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9262 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 9264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 9270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9276 */	NdrFcShort( 0x1a ),	/* 26 */
/* 9278 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9284 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9286 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 9296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 9302 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9306 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 9308 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9312 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9316 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXml */

/* 9320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9326 */	NdrFcShort( 0x1b ),	/* 27 */
/* 9328 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9336 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrRootName */

/* 9346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9350 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRet */

/* 9352 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9356 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFromWeb */

/* 9364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9370 */	NdrFcShort( 0x1c ),	/* 28 */
/* 9372 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 9374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 9380 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURLBase */

/* 9390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9394 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 9396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9400 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 9402 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9406 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 9408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9410 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9412 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 9414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9416 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9418 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 9420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9422 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9424 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9428 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendIPCMessage */

/* 9432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9438 */	NdrFcShort( 0x1d ),	/* 29 */
/* 9440 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9448 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MessageType */

/* 9458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9460 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrMessage */

/* 9464 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9468 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMessageData */

/* 9470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9472 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9474 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9478 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendToBackgroundWebProxy */

/* 9482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9488 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9490 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9498 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 9508 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9510 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9512 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 9514 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9516 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9518 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 9520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9522 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9524 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9528 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeCount */

/* 9532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9538 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9540 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9548 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 9558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9560 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 9570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9578 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9586 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 9596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTopWindow */

/* 9602 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9604 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9606 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9610 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 9614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9622 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9628 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9630 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9640 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9644 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */

/* 9646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9648 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 9652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9658 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9666 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9668 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 9670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 9678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9682 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppFrame */

/* 9684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9686 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9688 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 9690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 9696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9702 */	NdrFcShort( 0xa ),	/* 10 */
/* 9704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9710 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9712 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9722 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9724 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9726 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9730 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EnableSinkCLRCtrlCreatedEvent */

/* 9734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9740 */	NdrFcShort( 0xc ),	/* 12 */
/* 9742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9746 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9748 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9750 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9762 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9764 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9768 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EnableSinkCLRCtrlCreatedEvent */

/* 9772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9778 */	NdrFcShort( 0xd ),	/* 13 */
/* 9780 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9782 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9788 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9800 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9802 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_xtml */

/* 9810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9816 */	NdrFcShort( 0xe ),	/* 14 */
/* 9818 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9824 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9826 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9840 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9842 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9846 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9850 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_xtml */

/* 9854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9860 */	NdrFcShort( 0xf ),	/* 15 */
/* 9862 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9870 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9880 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9884 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 9886 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9890 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 9898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9906 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9912 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9914 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 9924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9928 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9932 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9934 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 9936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 9942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9948 */	NdrFcShort( 0x11 ),	/* 17 */
/* 9950 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9958 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 9968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9972 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 9974 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9978 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 9980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameName */

/* 9986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9992 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9996 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10000 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10002 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHwnd */

/* 10012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10016 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 10018 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10022 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 10030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10036 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10046 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 10056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10060 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10062 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10064 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10066 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Node */

/* 10074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10080 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10082 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10088 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10090 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNodeName */

/* 10100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10104 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10110 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10114 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 10118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10124 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10132 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10134 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 10144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10148 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10154 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 10162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10168 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10170 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10178 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10192 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 10200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10206 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10208 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10212 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10216 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10226 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Height */

/* 10238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10244 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10252 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeNames */

/* 10276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10282 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10284 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10292 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10302 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10304 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10306 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */

/* 10314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10320 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10322 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10328 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10330 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 10340 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10344 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10346 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10350 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10354 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 10358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10364 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10374 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10384 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10388 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 10390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_External */

/* 10396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10402 */	NdrFcShort( 0x1e ),	/* 30 */
/* 10404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10412 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 10422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10426 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_External */

/* 10434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10440 */	NdrFcShort( 0x1f ),	/* 31 */
/* 10442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10448 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10450 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10460 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10464 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 10472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10478 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10480 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10484 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10488 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10500 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10502 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10506 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PageXML */

/* 10510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10516 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10524 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10526 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10536 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10538 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10540 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10544 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ConfigName */

/* 10548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10554 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10556 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10564 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10578 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignFrameType */

/* 10586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10592 */	NdrFcShort( 0x23 ),	/* 35 */
/* 10594 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10598 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10602 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10612 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 10614 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10616 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 10618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10620 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 10624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10630 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10632 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10640 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10650 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10652 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10654 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10658 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrame */

/* 10662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10668 */	NdrFcShort( 0x25 ),	/* 37 */
/* 10670 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10676 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10678 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 10680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParentObj */

/* 10688 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10690 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10692 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter HostWnd */

/* 10694 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10696 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10698 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter bstrFrameName */

/* 10700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10702 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10704 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetFrame */

/* 10706 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10708 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10710 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10714 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObject */

/* 10718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10724 */	NdrFcShort( 0x26 ),	/* 38 */
/* 10726 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10728 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10730 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10732 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10734 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 10744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10748 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pObject */

/* 10750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10754 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrObjName */

/* 10756 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10758 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10760 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSinkEvent */

/* 10762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10764 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10766 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bResult */

/* 10768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10770 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10772 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10776 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjToHtml */

/* 10780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10786 */	NdrFcShort( 0x27 ),	/* 39 */
/* 10788 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10790 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10794 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10796 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strObjName */

/* 10806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10808 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10810 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bConnectEvent */

/* 10812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10814 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10816 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pObjDisp */

/* 10818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10820 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10822 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10826 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNodesToPage */

/* 10830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10836 */	NdrFcShort( 0x28 ),	/* 40 */
/* 10838 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10840 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10842 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10846 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 10856 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10860 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrNodeNames */

/* 10862 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10864 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10866 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bAdd */

/* 10868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10872 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSuccess */

/* 10874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10876 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10878 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10882 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 10886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10892 */	NdrFcShort( 0x29 ),	/* 41 */
/* 10894 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10902 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HTMLWindow */

/* 10912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10914 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10916 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter SourceObj */

/* 10918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10920 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10922 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrEventName */

/* 10924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10926 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10928 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 10930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10932 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10934 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10938 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeSubCtrlEvent */

/* 10942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10948 */	NdrFcShort( 0x2a ),	/* 42 */
/* 10950 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10958 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 10960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWndDisp */

/* 10968 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10972 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter Node */

/* 10974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10978 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter Ctrl */

/* 10980 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10984 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter EventName */

/* 10986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10988 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10990 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 10992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10994 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10996 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11000 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachEvent */

/* 11004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11010 */	NdrFcShort( 0x2b ),	/* 43 */
/* 11012 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11016 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11020 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 11030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11034 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pHtmlWnd */

/* 11036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11040 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bResult */

/* 11042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11046 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11050 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeEvent */

/* 11054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11062 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11070 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 11080 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11084 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWndDisp */

/* 11086 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11090 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 11092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11094 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11104 */	NdrFcShort( 0x2d ),	/* 45 */
/* 11106 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 11108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11112 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11114 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Parent */

/* 11124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11128 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter CtrlName */

/* 11130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11132 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11134 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FrameName */

/* 11136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11140 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11144 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11150 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11152 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11154 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11156 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11158 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11162 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendCtrl */

/* 11166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11172 */	NdrFcShort( 0x2e ),	/* 46 */
/* 11174 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11182 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 11184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Ctrl */

/* 11192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11196 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter bstrKey */

/* 11198 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11202 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11214 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11218 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndNode */

/* 11222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11228 */	NdrFcShort( 0x2f ),	/* 47 */
/* 11230 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11238 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 11248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11252 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrNodeName */

/* 11254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11258 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetNode */

/* 11260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11264 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlInNode */

/* 11272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11278 */	NdrFcShort( 0x30 ),	/* 48 */
/* 11280 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11286 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11288 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 11298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11302 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter CtrlName */

/* 11304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppCtrl */

/* 11310 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11314 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 11316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11318 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHtmlDocument */

/* 11322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11328 */	NdrFcShort( 0x31 ),	/* 49 */
/* 11330 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11336 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWindow */

/* 11348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11352 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppHtmlDoc */

/* 11354 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11358 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 11360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromCtrl */

/* 11366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11372 */	NdrFcShort( 0x32 ),	/* 50 */
/* 11374 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11380 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11382 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ctrl */

/* 11392 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11396 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 11398 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11402 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 11404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11406 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectTangramCtrl */

/* 11410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11416 */	NdrFcShort( 0x33 ),	/* 51 */
/* 11418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11424 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11426 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventSource */

/* 11436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11440 */	NdrFcShort( 0x582 ),	/* Type Offset=1410 */

	/* Return value */

/* 11442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrameWithDefaultNode */

/* 11448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x34 ),	/* 52 */
/* 11456 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 11458 */	NdrFcShort( 0x16 ),	/* 22 */
/* 11460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11464 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hFrameWnd */

/* 11474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11478 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrameName */

/* 11480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11484 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDefaultNodeKey */

/* 11486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11496 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfig */

/* 11498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11500 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11502 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppNode */

/* 11504 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11506 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11508 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11512 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 11516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11522 */	NdrFcShort( 0x35 ),	/* 53 */
/* 11524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11526 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11530 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11532 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrames */

/* 11542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11546 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11552 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11554 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11556 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11558 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 11560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11562 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11564 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11568 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Ctrl */

/* 11572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11578 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11580 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11586 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11588 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 11590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 11598 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11602 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppCtrl */

/* 11604 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11608 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Return value */

/* 11610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCtrl */

/* 11616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0xb ),	/* 11 */
/* 11624 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11630 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11632 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 11642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11646 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 11648 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11652 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Return value */

/* 11654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 11660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11666 */	NdrFcShort( 0xd ),	/* 13 */
/* 11668 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11674 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11676 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11686 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11690 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 11692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11694 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Active */

/* 11698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11704 */	NdrFcShort( 0xe ),	/* 14 */
/* 11706 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11712 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11714 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 11724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseTangramUI */

/* 11730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11736 */	NdrFcShort( 0xf ),	/* 15 */
/* 11738 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11746 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 11756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11770 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11776 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11778 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11788 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11790 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11792 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11794 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11796 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11798 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 11800 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11804 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11808 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendInView */

/* 11812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11818 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11820 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11826 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11828 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 11838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11840 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 11844 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11846 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11848 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11854 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11856 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11858 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11860 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11864 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenURL */

/* 11868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11874 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11876 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11878 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 11884 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 11894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11898 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nDisposition */

/* 11900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11902 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11904 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 11906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11910 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11914 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11916 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDisp */

/* 11918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11920 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11922 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 11924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11926 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Show */

/* 11930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11936 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11940 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11946 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bShow */

/* 11956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11960 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11964 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11976 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11982 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11984 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11996 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11998 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12000 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12002 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12004 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12008 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12010 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12014 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitLyncApp */


	/* Procedure UnloadTangram */

/* 12018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12024 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 12034 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 12044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12046 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */

/* 12050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12056 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12058 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12062 */	NdrFcShort( 0x2c ),	/* 44 */
/* 12064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12066 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12078 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12080 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12084 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 12088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12096 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12118 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 12120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_tag */

/* 12126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12132 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12142 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12152 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 12154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12156 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 12158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_tag */

/* 12164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12170 */	NdrFcShort( 0xa ),	/* 10 */
/* 12172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12180 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 12182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 12190 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 12192 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12194 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 12196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12198 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppCtrl */

/* 12202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12208 */	NdrFcShort( 0xb ),	/* 11 */
/* 12210 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12212 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12216 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12218 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 12228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12230 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12232 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12236 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramHandle */

/* 12240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12246 */	NdrFcShort( 0xb ),	/* 11 */
/* 12248 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12256 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHandleName */

/* 12266 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12270 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 12272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12276 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EclipseViewHandle */

/* 12284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12290 */	NdrFcShort( 0xc ),	/* 12 */
/* 12292 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12296 */	NdrFcShort( 0x2c ),	/* 44 */
/* 12298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12310 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12314 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */

/* 12322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12328 */	NdrFcShort( 0xd ),	/* 13 */
/* 12330 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12336 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12348 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12352 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 12354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WorkBenchWindow */

/* 12360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12366 */	NdrFcShort( 0xe ),	/* 14 */
/* 12368 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12376 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12386 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12390 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 12392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopFrame */

/* 12398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12404 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12406 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12412 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12414 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12424 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12426 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12428 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 12430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12432 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveTopNode */

/* 12436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12442 */	NdrFcShort( 0x11 ),	/* 17 */
/* 12444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12450 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12452 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12462 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12466 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12470 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 12474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12480 */	NdrFcShort( 0x12 ),	/* 18 */
/* 12482 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12488 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12490 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 12492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 12500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12504 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 12506 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 12508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12510 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 12512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 12518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12524 */	NdrFcShort( 0x13 ),	/* 19 */
/* 12526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12534 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 12536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 12544 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12548 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 12550 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 12552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12554 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 12556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 12562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12568 */	NdrFcShort( 0x14 ),	/* 20 */
/* 12570 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 12572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12576 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12578 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 12588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12592 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 12594 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12598 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12600 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12604 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12606 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12610 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12614 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 12618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12624 */	NdrFcShort( 0x15 ),	/* 21 */
/* 12626 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 12628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12632 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12634 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 12644 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12646 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12648 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 12650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12654 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12658 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12662 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12664 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12666 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12670 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachCLRObjEvent */

/* 12674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12680 */	NdrFcShort( 0x17 ),	/* 23 */
/* 12682 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12684 */	NdrFcShort( 0xc ),	/* 12 */
/* 12686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12690 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Sender */

/* 12700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12702 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12704 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventType */

/* 12706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12708 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12710 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bAttachEvent */

/* 12712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12716 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12720 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ChromeAppServer_MIDL_TYPE_FORMAT_STRING ChromeAppServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 44 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 48 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 50 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 52 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 54 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 56 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 58 */	0x5d,		/* 93 */
			0x34,		/* 52 */
/* 60 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 62 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 78 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 84 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 88 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 90 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 92 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 94 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 96 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 98 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 110 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 112 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 114 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 116 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 118 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 120 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 122 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 124 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (60) */
/* 126 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 128 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 132 */	NdrFcShort( 0x6 ),	/* Offset= 6 (138) */
/* 134 */	
			0x13, 0x0,	/* FC_OP */
/* 136 */	NdrFcShort( 0xff8a ),	/* Offset= -118 (18) */
/* 138 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (134) */
/* 148 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 154 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 158 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 160 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 162 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 164 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 166 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 168 */	0xf7,		/* 247 */
			0xcd,		/* 205 */
/* 170 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 172 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 176 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 180 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 182 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 184 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 186 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 188 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 190 */	0x6c,		/* 108 */
			0x7d,		/* 125 */
/* 192 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 194 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1128) */
/* 200 */	
			0x12, 0x0,	/* FC_UP */
/* 202 */	NdrFcShort( 0x38a ),	/* Offset= 906 (1108) */
/* 204 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 206 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 212 */	NdrFcShort( 0x2 ),	/* Offset= 2 (214) */
/* 214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 216 */	NdrFcShort( 0x2f ),	/* 47 */
/* 218 */	NdrFcLong( 0x14 ),	/* 20 */
/* 222 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 224 */	NdrFcLong( 0x3 ),	/* 3 */
/* 228 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 230 */	NdrFcLong( 0x11 ),	/* 17 */
/* 234 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 236 */	NdrFcLong( 0x2 ),	/* 2 */
/* 240 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 242 */	NdrFcLong( 0x4 ),	/* 4 */
/* 246 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 248 */	NdrFcLong( 0x5 ),	/* 5 */
/* 252 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 254 */	NdrFcLong( 0xb ),	/* 11 */
/* 258 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 260 */	NdrFcLong( 0xa ),	/* 10 */
/* 264 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 266 */	NdrFcLong( 0x6 ),	/* 6 */
/* 270 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (502) */
/* 272 */	NdrFcLong( 0x7 ),	/* 7 */
/* 276 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 278 */	NdrFcLong( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0xfee8 ),	/* Offset= -280 (2) */
/* 284 */	NdrFcLong( 0xd ),	/* 13 */
/* 288 */	NdrFcShort( 0xdc ),	/* Offset= 220 (508) */
/* 290 */	NdrFcLong( 0x9 ),	/* 9 */
/* 294 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (60) */
/* 296 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 300 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (526) */
/* 302 */	NdrFcLong( 0x24 ),	/* 36 */
/* 306 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1034) */
/* 308 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 312 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1034) */
/* 314 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 318 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1038) */
/* 320 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 324 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1042) */
/* 326 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 330 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1046) */
/* 332 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 336 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1050) */
/* 338 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 342 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1054) */
/* 344 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 348 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1058) */
/* 350 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 354 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1042) */
/* 356 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 360 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1046) */
/* 362 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 366 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1062) */
/* 368 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 372 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1058) */
/* 374 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 378 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1066) */
/* 380 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 384 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1070) */
/* 386 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 390 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (1074) */
/* 392 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 396 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (1078) */
/* 398 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 402 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (1082) */
/* 404 */	NdrFcLong( 0x10 ),	/* 16 */
/* 408 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 410 */	NdrFcLong( 0x12 ),	/* 18 */
/* 414 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 416 */	NdrFcLong( 0x13 ),	/* 19 */
/* 420 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 422 */	NdrFcLong( 0x15 ),	/* 21 */
/* 426 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 428 */	NdrFcLong( 0x16 ),	/* 22 */
/* 432 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 434 */	NdrFcLong( 0x17 ),	/* 23 */
/* 438 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 440 */	NdrFcLong( 0xe ),	/* 14 */
/* 444 */	NdrFcShort( 0x286 ),	/* Offset= 646 (1090) */
/* 446 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 450 */	NdrFcShort( 0x28a ),	/* Offset= 650 (1100) */
/* 452 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 456 */	NdrFcShort( 0x288 ),	/* Offset= 648 (1104) */
/* 458 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 462 */	NdrFcShort( 0x244 ),	/* Offset= 580 (1042) */
/* 464 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 468 */	NdrFcShort( 0x242 ),	/* Offset= 578 (1046) */
/* 470 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 474 */	NdrFcShort( 0x240 ),	/* Offset= 576 (1050) */
/* 476 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 480 */	NdrFcShort( 0x236 ),	/* Offset= 566 (1046) */
/* 482 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 486 */	NdrFcShort( 0x230 ),	/* Offset= 560 (1046) */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x0 ),	/* Offset= 0 (492) */
/* 494 */	NdrFcLong( 0x1 ),	/* 1 */
/* 498 */	NdrFcShort( 0x0 ),	/* Offset= 0 (498) */
/* 500 */	NdrFcShort( 0xffff ),	/* Offset= -1 (499) */
/* 502 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 508 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 520 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 522 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 524 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 526 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (530) */
/* 530 */	
			0x12, 0x0,	/* FC_UP */
/* 532 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (1016) */
/* 534 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 536 */	NdrFcShort( 0x20 ),	/* 32 */
/* 538 */	NdrFcShort( 0xa ),	/* 10 */
/* 540 */	NdrFcLong( 0x8 ),	/* 8 */
/* 544 */	NdrFcShort( 0x50 ),	/* Offset= 80 (624) */
/* 546 */	NdrFcLong( 0xd ),	/* 13 */
/* 550 */	NdrFcShort( 0x70 ),	/* Offset= 112 (662) */
/* 552 */	NdrFcLong( 0x9 ),	/* 9 */
/* 556 */	NdrFcShort( 0x90 ),	/* Offset= 144 (700) */
/* 558 */	NdrFcLong( 0xc ),	/* 12 */
/* 562 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (738) */
/* 564 */	NdrFcLong( 0x24 ),	/* 36 */
/* 568 */	NdrFcShort( 0x102 ),	/* Offset= 258 (826) */
/* 570 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 574 */	NdrFcShort( 0x11e ),	/* Offset= 286 (860) */
/* 576 */	NdrFcLong( 0x10 ),	/* 16 */
/* 580 */	NdrFcShort( 0x138 ),	/* Offset= 312 (892) */
/* 582 */	NdrFcLong( 0x2 ),	/* 2 */
/* 586 */	NdrFcShort( 0x14e ),	/* Offset= 334 (920) */
/* 588 */	NdrFcLong( 0x3 ),	/* 3 */
/* 592 */	NdrFcShort( 0x164 ),	/* Offset= 356 (948) */
/* 594 */	NdrFcLong( 0x14 ),	/* 20 */
/* 598 */	NdrFcShort( 0x17a ),	/* Offset= 378 (976) */
/* 600 */	NdrFcShort( 0xffff ),	/* Offset= -1 (599) */
/* 602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 618 */	
			0x12, 0x0,	/* FC_UP */
/* 620 */	NdrFcShort( 0xfda6 ),	/* Offset= -602 (18) */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x6 ),	/* Offset= 6 (636) */
/* 632 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 634 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 636 */	
			0x11, 0x0,	/* FC_RP */
/* 638 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (602) */
/* 640 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 650 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 654 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 656 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 658 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (508) */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x6 ),	/* Offset= 6 (674) */
/* 670 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 672 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 674 */	
			0x11, 0x0,	/* FC_RP */
/* 676 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (640) */
/* 678 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 688 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 692 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (60) */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 702 */	NdrFcShort( 0x10 ),	/* 16 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x6 ),	/* Offset= 6 (712) */
/* 708 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 710 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 712 */	
			0x11, 0x0,	/* FC_RP */
/* 714 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (678) */
/* 716 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 726 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 730 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 732 */	
			0x12, 0x0,	/* FC_UP */
/* 734 */	NdrFcShort( 0x176 ),	/* Offset= 374 (1108) */
/* 736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* Offset= 6 (750) */
/* 746 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 748 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 750 */	
			0x11, 0x0,	/* FC_RP */
/* 752 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (716) */
/* 754 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 756 */	NdrFcLong( 0x2f ),	/* 47 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 766 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 768 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 770 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 772 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 776 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x18 ),	/* 24 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0xa ),	/* Offset= 10 (800) */
/* 792 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (754) */
/* 798 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 800 */	
			0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (772) */
/* 804 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 814 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 818 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 820 */	
			0x12, 0x0,	/* FC_UP */
/* 822 */	NdrFcShort( 0xffda ),	/* Offset= -38 (784) */
/* 824 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 826 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x6 ),	/* Offset= 6 (838) */
/* 834 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 836 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 838 */	
			0x11, 0x0,	/* FC_RP */
/* 840 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (804) */
/* 842 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 848 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x10 ),	/* 16 */
/* 852 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 854 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 856 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (842) */
			0x5b,		/* FC_END */
/* 860 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x20 ),	/* 32 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0xa ),	/* Offset= 10 (876) */
/* 868 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 870 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 872 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (848) */
			0x5b,		/* FC_END */
/* 876 */	
			0x11, 0x0,	/* FC_RP */
/* 878 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (640) */
/* 880 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 884 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 890 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x6 ),	/* Offset= 6 (904) */
/* 900 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 904 */	
			0x12, 0x0,	/* FC_UP */
/* 906 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (880) */
/* 908 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 912 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 918 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 920 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x10 ),	/* 16 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x6 ),	/* Offset= 6 (932) */
/* 928 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 930 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 932 */	
			0x12, 0x0,	/* FC_UP */
/* 934 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (908) */
/* 936 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x6 ),	/* Offset= 6 (960) */
/* 956 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 958 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 960 */	
			0x12, 0x0,	/* FC_UP */
/* 962 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (936) */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0xb,		/* FC_HYPER */
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
			0x12, 0x0,	/* FC_UP */
/* 990 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (964) */
/* 992 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1000 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1006 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1008 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1010 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1012 */	NdrFcShort( 0xffec ),	/* Offset= -20 (992) */
/* 1014 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1016 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1018 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1020 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1000) */
/* 1022 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1022) */
/* 1024 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1026 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1028 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1030 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (534) */
			0x5b,		/* FC_END */
/* 1034 */	
			0x12, 0x0,	/* FC_UP */
/* 1036 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (784) */
/* 1038 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1040 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1042 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1044 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1046 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1048 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1052 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1054 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1056 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1060 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1062 */	
			0x12, 0x0,	/* FC_UP */
/* 1064 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (502) */
/* 1066 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1068 */	NdrFcShort( 0xfbd6 ),	/* Offset= -1066 (2) */
/* 1070 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1072 */	NdrFcShort( 0xfdcc ),	/* Offset= -564 (508) */
/* 1074 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1076 */	NdrFcShort( 0xfc08 ),	/* Offset= -1016 (60) */
/* 1078 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1080 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (526) */
/* 1082 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1086) */
/* 1086 */	
			0x12, 0x0,	/* FC_UP */
/* 1088 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1108) */
/* 1090 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1092 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1094 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1096 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1098 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1090) */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1110 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1114) */
/* 1116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1118 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1120 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1122 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1124 */	NdrFcShort( 0xfc68 ),	/* Offset= -920 (204) */
/* 1126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1128 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (200) */
/* 1138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1140 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (508) */
/* 1142 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1144 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1148 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1152 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1154 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1156 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1158 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1160 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1162 */	0x83,		/* 131 */
			0xa5,		/* 165 */
/* 1164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1166 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1170 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1172 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1174 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1176 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1178 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1180 */	0x83,		/* 131 */
			0xa6,		/* 166 */
/* 1182 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1186) */
/* 1186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1188 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1192 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1194 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1196 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1198 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1200 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1202 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 1204 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1212) */
/* 1208 */	
			0x13, 0x0,	/* FC_OP */
/* 1210 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1108) */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1208) */
/* 1222 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1226) */
/* 1226 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1228 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1232 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1234 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1236 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1238 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1240 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1242 */	0x0,		/* 0 */
			0x17,		/* 23 */
/* 1244 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1246 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1248 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1252) */
/* 1252 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1254 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1258 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1260 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1262 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1264 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1266 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1268 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 1270 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1274) */
/* 1274 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1276 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1280 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1282 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1284 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1286 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1288 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1290 */	0x0,		/* 0 */
			0xa,		/* 10 */
/* 1292 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1296) */
/* 1296 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1298 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1302 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1304 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1306 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1308 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1310 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 1312 */	0x8,		/* 8 */
			0x24,		/* 36 */
/* 1314 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1318) */
/* 1318 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1320 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1324 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1326 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1328 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1330 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1332 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1334 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1340) */
/* 1340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1342 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1346 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1348 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1350 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1352 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1354 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1356 */	0x10,		/* 16 */
			0x17,		/* 23 */
/* 1358 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1362) */
/* 1362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1364 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1368 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1370 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1372 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1374 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1376 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1378 */	0x11,		/* 17 */
			0x1,		/* 1 */
/* 1380 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1384) */
/* 1384 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1386 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1390 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1392 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1394 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1396 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1398 */	0x20,		/* 32 */
			0x18,		/* 24 */
/* 1400 */	0x8,		/* 8 */
			0x28,		/* 40 */
/* 1402 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1404 */	NdrFcShort( 0xfac0 ),	/* Offset= -1344 (60) */
/* 1406 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1410) */
/* 1410 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1412 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1416 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1418 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1420 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1422 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1424 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1426 */	0x31,		/* 49 */
			0xdc,		/* 220 */
/* 1428 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1432) */
/* 1432 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1434 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1438 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1440 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1442 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1444 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1446 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1448 */	0x9,		/* 9 */
			0x28,		/* 40 */
/* 1450 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1454) */
/* 1454 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1456 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 1460 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 1462 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 1464 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 1466 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1468 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 1470 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 1472 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1476) */
/* 1476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1478 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1482 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1484 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1486 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1488 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1490 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1492 */	0x9,		/* 9 */
			0x12,		/* 18 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ChromeAppServer_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITangramExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x01,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITangramExtenderProxyVtbl = 
{
    &ITangramExtender_ProxyInfo,
    &IID_ITangramExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */
};


static const PRPC_STUB_FUNCTION ITangramExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramExtenderStubVtbl =
{
    &IID_ITangramExtender,
    &ITangramExtender_ServerInfo,
    9,
    &ITangramExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDesigner, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x03,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDesigner_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDesigner_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDesigner_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDesigner_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDesigner_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramDesignerProxyVtbl = 
{
    0,
    &IID_ITangramDesigner,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramDesigner_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramDesignerStubVtbl =
{
    &IID_ITangramDesigner,
    &ITangramDesigner_ServerInfo,
    7,
    &ITangramDesigner_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEclipseExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IEclipseExtenderProxyVtbl = 
{
    0,
    &IID_IEclipseExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation ITangramExtender::Close */ ,
    0 /* forced delegation ITangramExtender::get_ActiveWorkBenchWindow */
};


static const PRPC_STUB_FUNCTION IEclipseExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEclipseExtenderStubVtbl =
{
    &IID_IEclipseExtender,
    &IEclipseExtender_ServerInfo,
    9,
    &IEclipseExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x63,0x12,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    76,
    126,
    182,
    226,
    270
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOfficeExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IOfficeExtenderProxyVtbl = 
{
    &IOfficeExtender_ProxyInfo,
    &IID_IOfficeExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::AddVBAFormsScript */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::InitVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetFrameFromVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetActiveTopWndNode */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetObjectFromWnd */
};


static const PRPC_STUB_FUNCTION IOfficeExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOfficeExtenderStubVtbl =
{
    &IID_IOfficeExtender,
    &IOfficeExtender_ServerInfo,
    14,
    &IOfficeExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVSExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x89,0x07,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IVSExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    314,
    352,
    390,
    428,
    466,
    504,
    548,
    592,
    630
    };

static const MIDL_STUBLESS_PROXY_INFO IVSExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVSExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IVSExtenderProxyVtbl = 
{
    &IVSExtender_ProxyInfo,
    &IID_IVSExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_DesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_DesignRootNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_DesignRootNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_TangramCLRProject */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_TangramCLRProject */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_CurrentSelectedPrj */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::ExtendXmlUI */
};


static const PRPC_STUB_FUNCTION IVSExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVSExtenderStubVtbl =
{
    &IID_IVSExtender,
    &IVSExtender_ServerInfo,
    18,
    &IVSExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramRestNotify, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0xF7,0xCD}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramRestNotify_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramRestNotify_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramRestNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ITangramRestNotifyProxyVtbl = 
{
    &ITangramRestNotify_ProxyInfo,
    &IID_ITangramRestNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramRestNotify::Notify */
};


static const PRPC_STUB_FUNCTION ITangramRestNotify_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramRestNotifyStubVtbl =
{
    &IID_ITangramRestNotify,
    &ITangramRestNotify_ServerInfo,
    8,
    &ITangramRestNotify_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramRestObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x6C,0x7D}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramRestObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    718,
    756,
    794,
    832,
    870,
    914,
    958,
    996,
    1034,
    1072,
    1110,
    1166,
    1204,
    1260,
    1322,
    1354,
    1392,
    1430
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramRestObj_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramRestObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _ITangramRestObjProxyVtbl = 
{
    &ITangramRestObj_ProxyInfo,
    &IID_ITangramRestObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_TangramRestNotify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_TangramRestNotify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_NotifyHandle */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_NotifyHandle */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_Header */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_Header */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_RestKey */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_RestKey */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_TangramNode */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_TangramNode */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::AsyncRest */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::Notify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::UploadFile */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::RestData */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::ClearHeaders */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::Clone */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_State */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_State */
};


static const PRPC_STUB_FUNCTION ITangramRestObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramRestObjStubVtbl =
{
    &IID_ITangramRestObj,
    &ITangramRestObj_ServerInfo,
    25,
    &ITangramRestObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVSDocument, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x08,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short IVSDocument_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    1512,
    1550
    };

static const MIDL_STUBLESS_PROXY_INFO IVSDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVSDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IVSDocumentProxyVtbl = 
{
    &IVSDocument_ProxyInfo,
    &IID_IVSDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get_VSClass */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get_Count */
};


static const PRPC_STUB_FUNCTION IVSDocument_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVSDocumentStubVtbl =
{
    &IID_IVSDocument,
    &IVSDocument_ServerInfo,
    10,
    &IVSDocument_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITaskNotify, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x22,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short ITaskNotify_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680,
    1588
    };

static const MIDL_STUBLESS_PROXY_INFO ITaskNotify_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITaskNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITaskNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITaskNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITaskNotifyProxyVtbl = 
{
    &ITaskNotify_ProxyInfo,
    &IID_ITaskNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITaskNotify::Notify */ ,
    (void *) (INT_PTR) -1 /* ITaskNotify::NotifyEx */
};


static const PRPC_STUB_FUNCTION ITaskNotify_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITaskNotifyStubVtbl =
{
    &IID_ITaskNotify,
    &ITaskNotify_ServerInfo,
    9,
    &ITaskNotify_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0xC9,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeNode_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramTreeNodeProxyVtbl = 
{
    0,
    &IID_ITangramTreeNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramTreeNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramTreeNodeStubVtbl =
{
    &IID_ITangramTreeNode,
    &ITangramTreeNode_ServerInfo,
    7,
    &ITangramTreeNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeViewCallBack, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeViewCallBack_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1626,
    1664,
    1702,
    1746,
    1790,
    1828,
    1866
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeViewCallBack_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeViewCallBack_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeViewCallBack_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeViewCallBack_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _ITangramTreeViewCallBackProxyVtbl = 
{
    &ITangramTreeViewCallBack_ProxyInfo,
    &IID_ITangramTreeViewCallBack,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::put_WndNode */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::get_Pages */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnInitTreeView */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnClick */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnInit */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnNewPage */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::TangramAction */
};


static const PRPC_STUB_FUNCTION ITangramTreeViewCallBack_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramTreeViewCallBackStubVtbl =
{
    &IID_ITangramTreeViewCallBack,
    &ITangramTreeViewCallBack_ServerInfo,
    14,
    &ITangramTreeViewCallBack_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1910,
    1954,
    1992,
    2036
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeView_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeView_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeView_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITangramTreeViewProxyVtbl = 
{
    &ITangramTreeView_ProxyInfo,
    &IID_ITangramTreeView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::put_TangramTreeViewCallBack */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::get_FirstRoot */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::AddTreeNode */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::InsertNode */
};


static const PRPC_STUB_FUNCTION ITangramTreeView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramTreeViewStubVtbl =
{
    &IID_ITangramTreeView,
    &ITangramTreeView_ServerInfo,
    11,
    &ITangramTreeView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramApp, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x00}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramApp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2080
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramApp_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramApp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramApp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramApp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ITangramAppProxyVtbl = 
{
    &ITangramApp_ProxyInfo,
    &IID_ITangramApp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramApp::get_Tangram */
};


static const PRPC_STUB_FUNCTION ITangramApp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramAppStubVtbl =
{
    &IID_ITangramApp,
    &ITangramApp_ServerInfo,
    8,
    &ITangramApp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramEventObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramEventObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2118,
    2156,
    1550,
    2194,
    2232,
    2270,
    270,
    2308,
    2352,
    2396
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramEventObj_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEventObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramEventObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEventObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _ITangramEventObjProxyVtbl = 
{
    &ITangramEventObj_ProxyInfo,
    &IID_ITangramEventObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_eventSource */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_eventSource */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Index */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Index */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_EventName */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_EventName */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Object */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Object */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Value */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Value */
};


static const PRPC_STUB_FUNCTION ITangramEventObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramEventObjStubVtbl =
{
    &IID_ITangramEventObj,
    &ITangramEventObj_ServerInfo,
    17,
    &ITangramEventObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMessageObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x0a}} */

#pragma code_seg(".orpc")
static const unsigned short IMessageObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2440,
    2478,
    2516,
    2554,
    2592
    };

static const MIDL_STUBLESS_PROXY_INFO IMessageObj_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IMessageObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMessageObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IMessageObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IMessageObjProxyVtbl = 
{
    &IMessageObj_ProxyInfo,
    &IID_IMessageObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMessageObj::get_SenderSip */ ,
    (void *) (INT_PTR) -1 /* IMessageObj::get_TargetSip */ ,
    (void *) (INT_PTR) -1 /* IMessageObj::get_ReceivedMsg */ ,
    (void *) (INT_PTR) -1 /* IMessageObj::get_Node */ ,
    (void *) (INT_PTR) -1 /* IMessageObj::get_Sender */
};


static const PRPC_STUB_FUNCTION IMessageObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMessageObjStubVtbl =
{
    &IID_IMessageObj,
    &IMessageObj_ServerInfo,
    12,
    &IMessageObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEventProxy, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IEventProxy_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEventProxy_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEventProxy_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEventProxy_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEventProxy_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IEventProxyProxyVtbl = 
{
    0,
    &IID_IEventProxy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IEventProxy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IEventProxyStubVtbl =
{
    &IID_IEventProxy,
    &IEventProxy_ServerInfo,
    7,
    &IEventProxy_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IWndNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2630,
    1954,
    1550,
    2668,
    2706,
    2744,
    2782,
    2820,
    2858,
    2896,
    2934,
    2972,
    3016,
    3054,
    3092,
    3130,
    3168,
    3212,
    3250,
    3294,
    3338,
    3376,
    3414,
    3452,
    3490,
    3528,
    3566,
    3604,
    3642,
    3680,
    3718,
    3756,
    3794,
    3832,
    3870,
    3908,
    3946,
    3984,
    4022,
    4060,
    4098,
    4136,
    4174,
    4212,
    4250,
    4288,
    4326,
    4364,
    4402,
    4440,
    4478,
    4516,
    4554,
    4592,
    4630,
    4668,
    4706,
    4744,
    4782,
    4826,
    4870,
    4908,
    4946,
    4984,
    5022,
    5060,
    5116,
    5166,
    5216,
    5248,
    5298,
    5342,
    5404,
    5448,
    5498,
    5548,
    5598
    };

static const MIDL_STUBLESS_PROXY_INFO IWndNode_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(84) _IWndNodeProxyVtbl = 
{
    &IWndNode_ProxyInfo,
    &IID_IWndNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ChildNodes */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Rows */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Cols */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Row */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Col */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_NodeType */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ParentNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HTMLWindow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_RootNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_XObject */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_AxPlugIn */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Caption */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Caption */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Name */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Name */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Objects */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Attribute */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Attribute */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Tag */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Tag */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_OuterXml */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Key */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_NameAtWindowPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Width */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Height */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Frame */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_XML */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_DocXml */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Hmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Hmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Hmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Hmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Vmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Vmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Vmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Vmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HostNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_HostNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HostFrame */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_MasterRow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_MasterRow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_MasterCol */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_MasterCol */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_OfficeObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_SaveToConfigFile */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_DockObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_DockObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_CurMsgObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_VSDocument */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_URL */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_URL */ ,
    (void *) (INT_PTR) -1 /* IWndNode::ActiveTabPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNodes */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::Refresh */ ,
    (void *) (INT_PTR) -1 /* IWndNode::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndNode::LoadXML */ ,
    (void *) (INT_PTR) -1 /* IWndNode::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNodeByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::SendUCMAMsg */ ,
    (void *) (INT_PTR) -1 /* IWndNode::NavigateURL */
};


static const PRPC_STUB_FUNCTION IWndNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndNodeStubVtbl =
{
    &IID_IWndNode,
    &IWndNode_ServerInfo,
    84,
    &IWndNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x20,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IAppExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680
    };

static const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAppExtenderProxyVtbl = 
{
    &IAppExtender_ProxyInfo,
    &IID_IAppExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppExtender::ProcessNotify */
};


static const PRPC_STUB_FUNCTION IAppExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppExtenderStubVtbl =
{
    &IID_IAppExtender,
    &IAppExtender_ServerInfo,
    8,
    &IAppExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndContainer, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IWndContainer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWndContainer_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWndContainerProxyVtbl = 
{
    &IWndContainer_ProxyInfo,
    &IID_IWndContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndContainer::Save */
};


static const PRPC_STUB_FUNCTION IWndContainer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndContainerStubVtbl =
{
    &IID_IWndContainer,
    &IWndContainer_ServerInfo,
    8,
    &IWndContainer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICreator, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short ICreator_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5642,
    2478,
    5692
    };

static const MIDL_STUBLESS_PROXY_INFO ICreator_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ICreator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICreator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ICreator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ICreatorProxyVtbl = 
{
    &ICreator_ProxyInfo,
    &IID_ICreator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICreator::Create */ ,
    (void *) (INT_PTR) -1 /* ICreator::get_Names */ ,
    (void *) (INT_PTR) -1 /* ICreator::get_Tags */
};


static const PRPC_STUB_FUNCTION ICreator_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICreatorStubVtbl =
{
    &IID_ICreator,
    &ICreator_ServerInfo,
    10,
    &ICreator_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramEditor, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x66,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramEditor_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramEditor_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramEditor_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramEditorProxyVtbl = 
{
    0,
    &IID_ITangramEditor,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramEditor_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramEditorStubVtbl =
{
    &IID_ITangramEditor,
    &ITangramEditor_ServerInfo,
    7,
    &ITangramEditor_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDoc, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x11,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDoc_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2440,
    5736,
    5774,
    5812,
    5850,
    5888
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDoc_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDoc_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITangramDocProxyVtbl = 
{
    &ITangramDoc_ProxyInfo,
    &IID_ITangramDoc,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::get_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_DocType */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::get_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::GetFrameWndXml */
};


static const PRPC_STUB_FUNCTION ITangramDoc_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramDocStubVtbl =
{
    &IID_ITangramDoc,
    &ITangramDoc_ServerInfo,
    13,
    &ITangramDoc_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDocTemplate, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x07,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDocTemplate_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2440,
    5736,
    5774,
    5812,
    5850,
    5888
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDocTemplate_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDocTemplate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDocTemplate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDocTemplate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITangramDocTemplateProxyVtbl = 
{
    &ITangramDocTemplate_ProxyInfo,
    &IID_ITangramDocTemplate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::get_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_DocType */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::get_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::GetFrameWndXml */
};


static const PRPC_STUB_FUNCTION ITangramDocTemplate_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramDocTemplateStubVtbl =
{
    &IID_ITangramDocTemplate,
    &ITangramDocTemplate_ServerInfo,
    13,
    &ITangramDocTemplate_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangram, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangram_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2118,
    2156,
    5932,
    5976,
    6020,
    6064,
    6108,
    6146,
    1034,
    2896,
    6184,
    6228,
    6266,
    6304,
    6342,
    6380,
    6418,
    6456,
    6506,
    6550,
    6588,
    6632,
    6670,
    6714,
    6758,
    6802,
    6858,
    6908,
    6958,
    7020,
    7070,
    7102,
    3794,
    7140,
    7196,
    7240,
    7290,
    7346,
    7390,
    7446,
    7502,
    7546,
    7590,
    7622,
    7684,
    7740,
    7778,
    7816,
    7854,
    7916,
    7954,
    7998,
    8042,
    8104,
    8160,
    8204,
    8278,
    8310,
    8348,
    8380,
    8424,
    8462,
    8506,
    8550,
    8588,
    8632,
    8682
    };

static const MIDL_STUBLESS_PROXY_INFO ITangram_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangram_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangram_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangram_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(74) _ITangramProxyVtbl = 
{
    &ITangram_ProxyInfo,
    &IID_ITangram,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_Application */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_Application */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_AppExtender */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_AppExtender */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RootNodes */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_HostWnd */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_CurrentActiveNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_CreatingNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RemoteTangram */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_Extender */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_Extender */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_DesignNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_LyncExtender */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_TangramDoc */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_DocTemplate */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_ActiveChromeBrowserWnd */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateWndPage */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateOfficeDocument */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateCLRObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::StartApplication */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetWndFrame */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetItemText */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetItemText */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCLRControl */ ,
    (void *) (INT_PTR) -1 /* ITangram::MessageBox */ ,
    (void *) (INT_PTR) -1 /* ITangram::Encode */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetHostFocus */ ,
    (void *) (INT_PTR) -1 /* ITangram::UpdateWndNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::NewGUID */ ,
    (void *) (INT_PTR) -1 /* ITangram::ActiveCLRMethod */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetObject */ ,
    (void *) (INT_PTR) -1 /* ITangram::DownLoadFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetNodeFromHandle */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateTangramCtrl */ ,
    (void *) (INT_PTR) -1 /* ITangram::AttachObjEvent */ ,
    (void *) (INT_PTR) -1 /* ITangram::InitLyncApp */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetWindowClientDefaultNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetDocTemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::FireTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::ExtendFrames */ ,
    (void *) (INT_PTR) -1 /* ITangram::DeletePage */ ,
    (void *) (INT_PTR) -1 /* ITangram::LoadDocComponent */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramDocFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::SendUCMAMessage */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateOutLookObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::NewWorkBench */ ,
    (void *) (INT_PTR) -1 /* ITangram::ReadTextFromWeb */ ,
    (void *) (INT_PTR) -1 /* ITangram::ClearHeader */ ,
    (void *) (INT_PTR) -1 /* ITangram::DeleteFrame */ ,
    (void *) (INT_PTR) -1 /* ITangram::InitEclipseApp */ ,
    (void *) (INT_PTR) -1 /* ITangram::InitCLRApp */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramCommand */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetImage */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetVisible */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramOnLoad */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemCount */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemLabel */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemID */
};


static const PRPC_STUB_FUNCTION ITangram_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramStubVtbl =
{
    &IID_ITangram,
    &ITangram_ServerInfo,
    74,
    &ITangram_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndFrame, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IWndFrame_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8732,
    1512,
    794,
    2554,
    2232,
    8776,
    8814,
    8858,
    8902,
    8940,
    8978,
    9016,
    3016,
    9054,
    9092,
    9130,
    9168,
    9200,
    9232,
    9270,
    9320,
    9364,
    9432,
    9482
    };

static const MIDL_STUBLESS_PROXY_INFO IWndFrame_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndFrame_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(31) _IWndFrameProxyVtbl = 
{
    &IWndFrame_ProxyInfo,
    &IID_IWndFrame,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_WndNode */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_VisibleNode */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_CurrentNavigateKey */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameData */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::put_FrameData */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_DesignerState */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::put_DesignerState */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_RootNodes */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameXML */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_TangramDoc */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameType */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_Name */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Detach */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Attach */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::ModifyHost */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::GetXml */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::ExtendFromWeb */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::SendIPCMessage */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::SendToBackgroundWebProxy */
};


static const PRPC_STUB_FUNCTION IWndFrame_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndFrameStubVtbl =
{
    &IID_IWndFrame,
    &IWndFrame_ServerInfo,
    31,
    &IWndFrame_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndNodeCollection, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x17}} */

#pragma code_seg(".orpc")
static const unsigned short IWndNodeCollection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9532,
    9570,
    9614
    };

static const MIDL_STUBLESS_PROXY_INFO IWndNodeCollection_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNodeCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndNodeCollection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNodeCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWndNodeCollectionProxyVtbl = 
{
    &IWndNodeCollection_ProxyInfo,
    &IID_IWndNodeCollection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get_NodeCount */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get_Item */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IWndNodeCollection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndNodeCollectionStubVtbl =
{
    &IID_IWndNodeCollection,
    &IWndNodeCollection_ServerInfo,
    10,
    &IWndNodeCollection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndPage, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short IWndPage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9652,
    1512,
    1550,
    9696,
    1790,
    9734,
    9772,
    9810,
    9854,
    9898,
    9942,
    9986,
    10030,
    10074,
    10118,
    10162,
    1392,
    1430,
    10200,
    10238,
    10276,
    10314,
    10358,
    10396,
    10434,
    10472,
    10510,
    10548,
    10586,
    10624,
    10662,
    10718,
    10780,
    10830,
    10886,
    10942,
    11004,
    11054,
    11098,
    11166,
    11222,
    11272,
    11322,
    11366,
    11410,
    11448,
    11516
    };

static const MIDL_STUBLESS_PROXY_INFO IWndPage_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndPage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndPage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndPage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(54) _IWndPageProxyVtbl = 
{
    &IWndPage_ProxyInfo,
    &IID_IWndPage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Frame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_URL */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_URL */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_EnableSinkCLRCtrlCreatedEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_EnableSinkCLRCtrlCreatedEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_xtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_xtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_FrameName */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_WndFrame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Node */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_XObject */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_HtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Width */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Width */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Height */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Height */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_NodeNames */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_HTMLWindow */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_External */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_External */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_PageXML */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_ConfigName */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_CurrentDesignFrameType */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::CreateFrame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddObject */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddObjToHtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddNodesToPage */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachObjEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachNodeSubCtrlEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachNodeEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ExtendCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetWndNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetCtrlInNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetHtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetFrameFromCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ConnectTangramCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::CreateFrameWithDefaultNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ExtendFrames */
};


static const PRPC_STUB_FUNCTION IWndPage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndPageStubVtbl =
{
    &IID_IWndPage,
    &IWndPage_ServerInfo,
    54,
    &IWndPage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWorkBenchWindow, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x5D,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IWorkBenchWindow_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11572,
    1512,
    1550,
    5812,
    11616,
    8776,
    11660,
    11698,
    11730,
    11762,
    630,
    11812
    };

static const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IWorkBenchWindowProxyVtbl = 
{
    &IWorkBenchWindow_ProxyInfo,
    &IID_IWorkBenchWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Ctrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_TangramCtrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_WndFrame */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Active */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::CloseTangramUI */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Extend */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ExtendInView */
};


static const PRPC_STUB_FUNCTION IWorkBenchWindow_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWorkBenchWindowStubVtbl =
{
    &IID_IWorkBenchWindow,
    &IWorkBenchWindow_ServerInfo,
    19,
    &IWorkBenchWindow_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IChromeWebBrowser, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x08,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IChromeWebBrowser_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11868
    };

static const MIDL_STUBLESS_PROXY_INFO IChromeWebBrowser_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IChromeWebBrowser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IChromeWebBrowserProxyVtbl = 
{
    &IChromeWebBrowser_ProxyInfo,
    &IID_IChromeWebBrowser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IChromeWebBrowser::OpenURL */
};


static const PRPC_STUB_FUNCTION IChromeWebBrowser_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IChromeWebBrowserStubVtbl =
{
    &IID_IChromeWebBrowser,
    &IChromeWebBrowser_ServerInfo,
    8,
    &IChromeWebBrowser_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IChromeWebContent, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x09,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IChromeWebContent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IChromeWebContent_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebContent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IChromeWebContent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebContent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IChromeWebContentProxyVtbl = 
{
    0,
    &IID_IChromeWebContent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IChromeWebContent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IChromeWebContentStubVtbl =
{
    &IID_IChromeWebContent,
    &IChromeWebContent_ServerInfo,
    7,
    &IChromeWebContent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeObject, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x65,0x06,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11930,
    11968,
    12018
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOfficeObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IOfficeObjectProxyVtbl = 
{
    &IOfficeObject_ProxyInfo,
    &IID_IOfficeObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Show */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Extend */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::UnloadTangram */
};


static const PRPC_STUB_FUNCTION IOfficeObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOfficeObjectStubVtbl =
{
    &IID_IOfficeObject,
    &IOfficeObject_ServerInfo,
    10,
    &IOfficeObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x31,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12050,
    12088,
    12126,
    12164
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITangramCtrlProxyVtbl = 
{
    &ITangramCtrl_ProxyInfo,
    &IID_ITangramCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */
};


static const PRPC_STUB_FUNCTION ITangramCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramCtrlStubVtbl =
{
    &IID_ITangramCtrl,
    &ITangramCtrl_ServerInfo,
    11,
    &ITangramCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramAppCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x10,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramAppCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12050,
    12088,
    12126,
    12164,
    12202
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramAppCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramAppCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramAppCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramAppCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ITangramAppCtrlProxyVtbl = 
{
    &ITangramAppCtrl_ProxyInfo,
    &IID_ITangramAppCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramAppCtrl::put_AppCtrl */
};


static const PRPC_STUB_FUNCTION ITangramAppCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramAppCtrlStubVtbl =
{
    &IID_ITangramAppCtrl,
    &ITangramAppCtrl_ServerInfo,
    12,
    &ITangramAppCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12050,
    12088,
    12126,
    12164,
    12240,
    12284,
    12322,
    12360,
    2858,
    12398,
    12436,
    12474,
    12518,
    12562,
    12618,
    3130,
    12674
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IEclipseCtrlProxyVtbl = 
{
    &IEclipseCtrl_ProxyInfo,
    &IID_IEclipseCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_TangramHandle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_EclipseViewHandle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_WorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopPage */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopFrame */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_ActiveTopNode */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::Extend */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::InitCtrl */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::AttachCLRObjEvent */
};


static const PRPC_STUB_FUNCTION IEclipseCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEclipseCtrlStubVtbl =
{
    &IID_IEclipseCtrl,
    &IEclipseCtrl_ServerInfo,
    24,
    &IEclipseCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ILyncExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x10,0x17}} */

#pragma code_seg(".orpc")
static const unsigned short ILyncExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    12018
    };

static const MIDL_STUBLESS_PROXY_INFO ILyncExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ILyncExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILyncExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ILyncExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ILyncExtenderProxyVtbl = 
{
    &ILyncExtender_ProxyInfo,
    &IID_ILyncExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* ILyncExtender::InitLyncApp */
};


static const PRPC_STUB_FUNCTION ILyncExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ILyncExtenderStubVtbl =
{
    &IID_ILyncExtender,
    &ILyncExtender_ServerInfo,
    10,
    &ILyncExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
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
    ChromeAppServer__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
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

const CInterfaceProxyVtbl * const _ChromeAppServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOfficeExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOfficeObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramAppProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndPageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndFrameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEventProxyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICreatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMessageObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndNodeCollectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITaskNotifyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWorkBenchWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramEditorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeViewCallBackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVSExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramEventObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramAppCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILyncExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDocProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDesignerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDocTemplateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVSDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramRestObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramRestNotifyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IChromeWebBrowserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IChromeWebContentProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ChromeAppServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOfficeExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IOfficeObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramAppStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndPageStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndFrameStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IEventProxyStubVtbl,
    ( CInterfaceStubVtbl *) &_ICreatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IMessageObjStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndNodeCollectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITaskNotifyStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IWorkBenchWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramEditorStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeViewStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeViewCallBackStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IVSExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramEventObjStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramAppCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_ILyncExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDocStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDesignerStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDocTemplateStubVtbl,
    ( CInterfaceStubVtbl *) &_IVSDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramRestObjStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramRestNotifyStubVtbl,
    ( CInterfaceStubVtbl *) &_IChromeWebBrowserStubVtbl,
    ( CInterfaceStubVtbl *) &_IChromeWebContentStubVtbl,
    0
};

PCInterfaceName const _ChromeAppServer_InterfaceNamesList[] = 
{
    "IOfficeExtender",
    "IOfficeObject",
    "ITangramApp",
    "ITangram",
    "IWndPage",
    "IWndFrame",
    "IWndNode",
    "IEventProxy",
    "ICreator",
    "IWndContainer",
    "IMessageObj",
    "IWndNodeCollection",
    "IAppExtender",
    "ITaskNotify",
    "ITangramCtrl",
    "IWorkBenchWindow",
    "ITangramEditor",
    "ITangramTreeView",
    "ITangramTreeViewCallBack",
    "ITangramTreeNode",
    "IVSExtender",
    "ITangramExtender",
    "IEclipseCtrl",
    "IEclipseExtender",
    "ITangramEventObj",
    "ITangramAppCtrl",
    "ILyncExtender",
    "ITangramDoc",
    "ITangramDesigner",
    "ITangramDocTemplate",
    "IVSDocument",
    "ITangramRestObj",
    "ITangramRestNotify",
    "IChromeWebBrowser",
    "IChromeWebContent",
    0
};

const IID *  const _ChromeAppServer_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ChromeAppServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ChromeAppServer, pIID, n)

int __stdcall _ChromeAppServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ChromeAppServer, 35, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ChromeAppServer, 35, *pIndex )
    
}

const ExtendedProxyFileInfo ChromeAppServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ChromeAppServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ChromeAppServer_StubVtblList,
    (const PCInterfaceName * ) & _ChromeAppServer_InterfaceNamesList,
    (const IID ** ) & _ChromeAppServer_BaseIIDList,
    & _ChromeAppServer_IID_Lookup, 
    35,
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

