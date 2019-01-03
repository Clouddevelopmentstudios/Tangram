

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../chrome_proxy/com_server/ChromeAppServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
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


#include "ChromeAppServer.h"

#define TYPE_FORMAT_STRING_SIZE   1497                              
#define PROC_FORMAT_STRING_SIZE   11833                             
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


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
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
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveWorkBenchWindow */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 46 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 54 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 56 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 58 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 60 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 62 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 64 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddVBAFormsScript */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 88 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* 1 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OfficeObject */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrKey */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitVBAForm */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0xa ),	/* 10 */
/* 128 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 136 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nStyle */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 164 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 166 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromVBAForm */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xb ),	/* 11 */
/* 182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 208 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActiveTopWndNode */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xc ),	/* 12 */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 240 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter WndNode */

/* 246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Object */


	/* Procedure GetObjectFromWnd */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xd ),	/* 13 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */


	/* Parameter hWnd */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter ppObjFromWnd */

/* 288 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x9 ),	/* 9 */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRetVal */

/* 324 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentDesignNode */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0xa ),	/* 10 */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0xb ),	/* 11 */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 400 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignRootNode */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0xc ),	/* 12 */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 432 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignRootNode */

/* 444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0xd ),	/* 13 */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCLRProject */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0xe ),	/* 14 */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x22 ),	/* 34 */
/* 494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 496 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 514 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramCLRProject */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0xf ),	/* 15 */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0x6 ),	/* 6 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 538 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 546 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentSelectedPrj */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 580 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 588 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */


	/* Procedure ExtendXmlUI */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x11 ),	/* 17 */
/* 608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 616 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */


	/* Parameter bstrKey */

/* 624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */


	/* Parameter bstrXml */

/* 630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */


	/* Parameter ppNode */

/* 636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessNotify */


	/* Procedure Notify */


	/* Procedure Notify */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x7 ),	/* 7 */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXmlNotify */


	/* Parameter bstrInfo */


	/* Parameter bstrInfo */

/* 672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramRestNotify */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x7 ),	/* 7 */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 708 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramRestNotify */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */


	/* Procedure get_NotifyHandle */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x9 ),	/* 9 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x2c ),	/* 44 */
/* 770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NotifyHandle */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xa ),	/* 10 */
/* 800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Header */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0xb ),	/* 11 */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 844 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 856 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 858 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 862 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Header */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xc ),	/* 12 */
/* 878 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 886 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 900 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RestKey */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0xd ),	/* 13 */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 928 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 936 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 940 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RestKey */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0xe ),	/* 14 */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 976 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentActiveNode */


	/* Procedure get_TangramNode */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xf ),	/* 15 */
/* 992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1008 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramNode */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsyncRest */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1064 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1066 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1072 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 1086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1092 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1102 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNotify */

/* 1134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UploadFile */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1156 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1162 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bUpload */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilePath */

/* 1188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1192 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RestData */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1208 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1210 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1230 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeaders */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTargetObj */

/* 1314 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */


	/* Procedure get_State */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Width */


	/* Procedure put_State */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSClass */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1406 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1414 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 1422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1426 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter ppNode */

/* 1428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1430 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1432 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 1464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Cols */


	/* Procedure get_Index */


	/* Procedure get_Count */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1490 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pCount */


	/* Parameter nCols */


	/* Parameter nVal */


	/* Parameter pCount */

/* 1500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyEx */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1520 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1528 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varNotify */

/* 1536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1540 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_WndNode */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Pages */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1594 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1608 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInitTreeView */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1628 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1636 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramTreeView */

/* 1644 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1648 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */

	/* Parameter bstrXml */

/* 1650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1654 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClick */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0xa ),	/* 10 */
/* 1670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1676 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1678 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1686 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1690 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXmlData */

/* 1692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1696 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */


	/* Procedure OnInit */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0xb ),	/* 11 */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1718 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1720 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter bstrXml */

/* 1728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnNewPage */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0xc ),	/* 12 */
/* 1748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNewPage */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramAction */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0xd ),	/* 13 */
/* 1784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1792 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRetXml */

/* 1806 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramTreeViewCallBack */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1834 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 1842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 1848 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rows */


	/* Procedure get_FirstRoot */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRows */


	/* Parameter pVal */

/* 1884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddTreeNode */

/* 1896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1910 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1912 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hItem */

/* 1920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 1926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1930 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertNode */

/* 1938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0xa ),	/* 10 */
/* 1946 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1954 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1966 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hItem */

/* 1968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 1980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1994 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramCore */

/* 2004 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2008 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_eventSource */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2040 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Application */


	/* Procedure put_eventSource */

/* 2052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter eventSource */

/* 2076 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2080 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */


	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Index */

/* 2088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0xa ),	/* 10 */
/* 2096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentNavigateKey */


	/* Procedure get_EventName */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0xb ),	/* 11 */
/* 2132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2138 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2140 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2148 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2152 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EventName */

/* 2160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0xc ),	/* 12 */
/* 2168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2174 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2176 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2184 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2188 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Object */

/* 2196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0xe ),	/* 14 */
/* 2204 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2226 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2230 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */

/* 2238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0xf ),	/* 15 */
/* 2246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2252 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2254 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 2268 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2272 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Value */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2288 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2296 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ChildNodes */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2338 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 2346 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2350 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 2352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Row */

/* 2358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0xa ),	/* 10 */
/* 2366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2372 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2374 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 2382 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Col */

/* 2394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0xb ),	/* 11 */
/* 2402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2408 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2410 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCol */

/* 2418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeType */

/* 2430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0xc ),	/* 12 */
/* 2438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2446 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 2454 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 2456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2458 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ParentNode */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0xd ),	/* 13 */
/* 2474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2480 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2482 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNode */

/* 2490 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2494 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */

/* 2502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0xe ),	/* 14 */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2516 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2518 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2526 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2530 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopPage */


	/* Procedure get_WndPage */

/* 2538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0xf ),	/* 15 */
/* 2546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2552 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2562 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2566 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */


	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreatingNode */


	/* Procedure get_RootNode */

/* 2574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter ppNode */

/* 2598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2602 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 2604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 2610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2626 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 2634 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2638 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 2640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AxPlugIn */

/* 2646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2654 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2660 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2662 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPlugInName */

/* 2670 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2674 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 2676 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2680 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameXML */


	/* Procedure get_Caption */

/* 2688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2702 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2704 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2712 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2716 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 2724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2740 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 2748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2752 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 2760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2774 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2776 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2784 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2788 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCtrl */


	/* Procedure put_Name */

/* 2796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2812 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */


	/* Parameter bstrName */

/* 2820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2824 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Objects */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2846 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppNodeColletion */

/* 2862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 2874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 2898 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2902 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attribute */

/* 2910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2924 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2926 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 2934 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2938 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 2940 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2944 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Attribute */

/* 2952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2968 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 2976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2980 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrVal */

/* 2982 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2986 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tag */

/* 2994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3008 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3010 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 3018 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3022 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 3024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Tag */

/* 3030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3038 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3044 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3046 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vVar */

/* 3054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3058 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 3060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OuterXml */

/* 3066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3080 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3082 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3090 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3094 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */

/* 3102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3118 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3126 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3130 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 3138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3166 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameAtWindowPage */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3190 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3198 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 3210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 3246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3270 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XML */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3334 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3342 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 3354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3382 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 3390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3418 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 3420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocXml */

/* 3426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3440 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3442 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3450 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3454 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbMiddle */

/* 3462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbMiddle */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbRightBottom */

/* 3534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbRightBottom */

/* 3570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbLeftTop */

/* 3606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbLeftTop */

/* 3642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3658 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmin */

/* 3678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmin */

/* 3714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3728 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3730 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmax */

/* 3750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3766 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmax */

/* 3786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmin */

/* 3822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3836 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmin */

/* 3858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmax */

/* 3894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmax */

/* 3930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostNode */

/* 3966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3972 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3980 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3990 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3994 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HostNode */

/* 4002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4016 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4030 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 4032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActivePage */

/* 4038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ActivePage */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostFrame */

/* 4110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4124 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4134 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4138 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 4140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterRow */

/* 4146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterRow */

/* 4182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4198 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterCol */

/* 4218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x3d ),	/* 61 */
/* 4226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterCol */

/* 4254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x3e ),	/* 62 */
/* 4262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4270 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OfficeObj */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x3f ),	/* 63 */
/* 4298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4314 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SaveToConfigFile */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4336 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4354 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DockObj */

/* 4362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4378 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4390 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 4392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4396 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DockObj */

/* 4404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4412 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4414 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4420 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4432 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 4434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4438 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSDocument */

/* 4446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4460 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4462 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVSDocument */

/* 4470 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4474 */	NdrFcShort( 0x524 ),	/* Type Offset=1316 */

	/* Return value */

/* 4476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 4482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4498 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4506 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 4512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */

/* 4518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4534 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4546 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveTabPage */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 4578 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4582 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 4584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodes */

/* 4590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4598 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4604 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4606 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4614 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4618 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 4620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4624 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter ppNodes */

/* 4626 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4630 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Parameter pCount */

/* 4632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4634 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNode */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4652 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4654 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 4674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppWndmNode */

/* 4680 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4684 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4700 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4702 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4708 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 4722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 4728 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4732 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 4734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Refresh */

/* 4740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 4770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x4b ),	/* 75 */
/* 4778 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4784 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4786 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 4794 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4798 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 4800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 4806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4810 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4814 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadXML */

/* 4818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4834 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 4842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXML */

/* 4848 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4852 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 4860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4868 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4870 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4874 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4876 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 4884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 4890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 4896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4900 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 4902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4906 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 4908 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4910 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4912 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4916 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeByName */

/* 4920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4934 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4936 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4948 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 4950 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4954 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 4956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 4962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4970 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4972 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4976 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4978 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4990 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 4992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4996 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 4998 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5002 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 5010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5018 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5020 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5024 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5026 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5038 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5044 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5054 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateURL */

/* 5058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x51 ),	/* 81 */
/* 5066 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5074 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 5082 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5086 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter dispObjforScript */

/* 5088 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5092 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 5100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5108 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5110 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5114 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hParentWnd */

/* 5124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5128 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pNode */

/* 5130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5134 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter hWnd */

/* 5136 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5144 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Names */

/* 5148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5162 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5164 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5172 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5176 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tags */

/* 5184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5190 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5200 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjName */

/* 5208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5212 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5214 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5218 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TemplateXml */


	/* Procedure get_TemplateXml */

/* 5226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5240 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5242 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrVal */


	/* Parameter bstrVal */

/* 5250 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5254 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 5256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TemplateXml */


	/* Procedure put_TemplateXml */

/* 5262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5278 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5286 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5290 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocType */


	/* Procedure put_DocType */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5314 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5326 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */


	/* Procedure get_DocID */


	/* Procedure get_DocID */

/* 5334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0xa ),	/* 10 */
/* 5342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5362 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 5364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocID */


	/* Procedure put_DocID */

/* 5370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5376 */	NdrFcShort( 0xb ),	/* 11 */
/* 5378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5380 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5384 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5386 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5398 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameWndXml */


	/* Procedure GetFrameWndXml */

/* 5406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0xc ),	/* 12 */
/* 5414 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5420 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5422 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWndID */


	/* Parameter bstrWndID */

/* 5430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5434 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndScriptVal */


	/* Parameter bstrWndScriptVal */

/* 5436 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5440 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5456 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5464 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5472 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5476 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5478 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5482 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 5484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 5490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0xa ),	/* 10 */
/* 5498 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5504 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5506 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5514 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5518 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 5520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5524 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 5526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5528 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppExtender */

/* 5532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0xb ),	/* 11 */
/* 5540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5546 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5548 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5556 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5560 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5562 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5566 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 5568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppExtender */

/* 5574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0xc ),	/* 12 */
/* 5582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5588 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5590 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5598 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5602 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 5604 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5608 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 5616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0xd ),	/* 13 */
/* 5624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5630 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 5640 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5644 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 5646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostWnd */

/* 5652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0xe ),	/* 14 */
/* 5660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5680 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteTangram */

/* 5688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5694 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5702 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5704 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 5712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5722 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 5724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 5730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5754 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5758 */	NdrFcShort( 0x53a ),	/* Type Offset=1338 */

	/* Return value */

/* 5760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 5766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5780 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 5790 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5794 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteHelperHWND */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5816 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5826 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteHelperHWND */

/* 5838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5848 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 5862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5866 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 5874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5898 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5902 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 5910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5916 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5918 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5920 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5926 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AppProxy */

/* 5934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5938 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nDocID */

/* 5940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5944 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 5946 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5948 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5950 */	NdrFcShort( 0x550 ),	/* Type Offset=1360 */

	/* Return value */

/* 5952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5954 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocTemplate */

/* 5958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5966 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5970 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5974 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 5982 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5984 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5986 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5988 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5990 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5992 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveChromeBrowserWnd */

/* 6000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6006 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6014 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 6024 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6028 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 6030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateWndPage */

/* 6036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6044 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6046 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6050 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6064 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppWndPage */

/* 6066 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6070 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */

/* 6072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6074 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOfficeDocument */

/* 6078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6084 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6092 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6094 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 6102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */


	/* Procedure CreateCLRObj */

/* 6114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6120 */	NdrFcShort( 0x1c ),	/* 28 */
/* 6122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6128 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6130 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */


	/* Parameter bstrObjID */

/* 6138 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6142 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */


	/* Parameter ppDisp */

/* 6144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6148 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 6150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartApplication */

/* 6156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6162 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6164 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6172 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 6180 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6184 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 6186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6190 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndFrame */

/* 6198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6206 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6208 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 6222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6226 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppFrame */

/* 6228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6232 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 6234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemText */

/* 6240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6256 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6268 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxLengeh */

/* 6276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 6282 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6286 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6290 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetItemText */

/* 6294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6300 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6302 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6310 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6318 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6322 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrText */

/* 6330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCLRControl */

/* 6342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6348 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6350 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6356 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6358 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter CtrlDisp */

/* 6366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6370 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 6372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6376 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 6378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6382 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MessageBox */

/* 6390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6398 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6400 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6406 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6418 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 6420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6424 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrCaption */

/* 6426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6430 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nStyle */

/* 6432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6434 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRet */

/* 6438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6446 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 6450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0x23 ),	/* 35 */
/* 6458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6460 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6464 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6466 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSRC */

/* 6474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bEncode */

/* 6480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 6486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6490 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHostFocus */

/* 6498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateWndNode */

/* 6528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x25 ),	/* 37 */
/* 6536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6556 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 6558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewGUID */

/* 6564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x26 ),	/* 38 */
/* 6572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6578 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6580 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6588 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6592 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveCLRMethod */

/* 6600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6606 */	NdrFcShort( 0x27 ),	/* 39 */
/* 6608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6616 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 6624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMethod */

/* 6630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6634 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrParam */

/* 6636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6640 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 6642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6646 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6650 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetObject */

/* 6654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x28 ),	/* 40 */
/* 6662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SourceDisp */

/* 6678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6682 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ResultDisp */

/* 6684 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 6686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6688 */	NdrFcShort( 0x57c ),	/* Type Offset=1404 */

	/* Return value */

/* 6690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DownLoadFile */

/* 6696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0x29 ),	/* 41 */
/* 6704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6712 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strFileURL */

/* 6720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6724 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTargetFile */

/* 6726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6730 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrActionXml */

/* 6732 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6736 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 6744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6750 */	NdrFcShort( 0x2a ),	/* 42 */
/* 6752 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6754 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6758 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6760 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 6768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6772 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 6774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6778 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 6780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6784 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 6786 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6790 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeFromHandle */

/* 6798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6804 */	NdrFcShort( 0x2b ),	/* 43 */
/* 6806 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6808 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6812 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6826 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppRetNode */

/* 6828 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6832 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 6834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 6840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6846 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6850 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6854 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6856 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 6864 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6868 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 6870 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6874 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 6876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6880 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 6882 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6886 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 6894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6900 */	NdrFcShort( 0x2d ),	/* 45 */
/* 6902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6904 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6908 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6910 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 6918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6922 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 6924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6928 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 6930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6934 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 6936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6940 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramCtrl */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0x2e ),	/* 46 */
/* 6956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6962 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 6972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6976 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetCtrl */

/* 6978 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6982 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Return value */

/* 6984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 6990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x2f ),	/* 47 */
/* 6998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDisp */

/* 7014 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7018 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventIndex */

/* 7020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowClientDefaultNode */

/* 7032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7038 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7040 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7046 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7048 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddDisp */

/* 7056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7060 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter hParent */

/* 7062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7066 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrWndClaName */

/* 7068 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7072 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndPageName */

/* 7074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7078 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 7080 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7082 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7084 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 7086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7088 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDocTemplateXml */

/* 7092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7098 */	NdrFcShort( 0x31 ),	/* 49 */
/* 7100 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7106 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7108 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 7116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7120 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 7122 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7126 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilter */

/* 7128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7132 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTemplatePath */

/* 7134 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7136 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7138 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7142 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramFile */

/* 7146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7152 */	NdrFcShort( 0x32 ),	/* 50 */
/* 7154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7160 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDoc */

/* 7170 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7174 */	NdrFcShort( 0x550 ),	/* Type Offset=1360 */

	/* Return value */

/* 7176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramEventObj */

/* 7182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x33 ),	/* 51 */
/* 7190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7196 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7198 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramEventObj */

/* 7206 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7210 */	NdrFcShort( 0x596 ),	/* Type Offset=1430 */

	/* Return value */

/* 7212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireTangramEventObj */

/* 7218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7224 */	NdrFcShort( 0x34 ),	/* 52 */
/* 7226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramEventObj */

/* 7242 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7246 */	NdrFcShort( 0x59a ),	/* Type Offset=1434 */

	/* Return value */

/* 7248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 7254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7260 */	NdrFcShort( 0x35 ),	/* 53 */
/* 7262 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7264 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7268 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7270 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7282 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrames */

/* 7284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 7290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7294 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 7296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 7302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7304 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7306 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7310 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePage */

/* 7314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7320 */	NdrFcShort( 0x36 ),	/* 54 */
/* 7322 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7324 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7328 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PageHandle */

/* 7338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7342 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadDocComponent */

/* 7350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x37 ),	/* 55 */
/* 7358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7366 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrLib */

/* 7374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7378 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llAppProxy */

/* 7380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7384 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramDocFile */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x38 ),	/* 56 */
/* 7400 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFilePath */

/* 7416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppDoc */

/* 7422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	NdrFcShort( 0x550 ),	/* Type Offset=1360 */

	/* Return value */

/* 7428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOutLookObj */

/* 7434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7440 */	NdrFcShort( 0x39 ),	/* 57 */
/* 7442 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7448 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7450 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjType */

/* 7458 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7462 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nType */

/* 7464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 7470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7474 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 7476 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7480 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 7482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7484 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewWorkBench */

/* 7488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7494 */	NdrFcShort( 0x3a ),	/* 58 */
/* 7496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7502 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7504 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTangramDoc */

/* 7512 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7516 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppWorkBenchWindow */

/* 7518 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7522 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 7524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTextFromWeb */

/* 7530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7536 */	NdrFcShort( 0x3b ),	/* 59 */
/* 7538 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7540 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 7546 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7550 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 7554 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7558 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 7560 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7564 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 7566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7570 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 7572 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7576 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFile */

/* 7578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7580 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7582 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTarget */

/* 7584 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7586 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7588 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 7590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7592 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7594 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7598 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeader */

/* 7602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7608 */	NdrFcShort( 0x3c ),	/* 60 */
/* 7610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7618 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteFrame */

/* 7632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0x3d ),	/* 61 */
/* 7640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWndFrame */

/* 7656 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7660 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 7662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitEclipseApp */

/* 7668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7674 */	NdrFcShort( 0x3e ),	/* 62 */
/* 7676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCLRApp */

/* 7698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x3f ),	/* 63 */
/* 7706 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7714 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strInitXml */

/* 7722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7726 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llHandle */

/* 7728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7732 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramCommand */

/* 7740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x40 ),	/* 64 */
/* 7748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7754 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 7764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7768 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 7770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetImage */

/* 7776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7782 */	NdrFcShort( 0x41 ),	/* 65 */
/* 7784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7792 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strValue */

/* 7800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppdispImage */

/* 7806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7810 */	NdrFcShort( 0x5ac ),	/* Type Offset=1452 */

	/* Return value */

/* 7812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetVisible */

/* 7818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7824 */	NdrFcShort( 0x42 ),	/* 66 */
/* 7826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7832 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7834 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 7842 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7846 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter varVisible */

/* 7848 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7852 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 7854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramOnLoad */

/* 7860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7866 */	NdrFcShort( 0x43 ),	/* 67 */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7874 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 7884 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7888 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 7890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemCount */

/* 7896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7902 */	NdrFcShort( 0x44 ),	/* 68 */
/* 7904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7910 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7912 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 7920 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7924 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nCount */

/* 7926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemLabel */

/* 7938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7944 */	NdrFcShort( 0x45 ),	/* 69 */
/* 7946 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7952 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7954 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 7962 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7966 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 7968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLabel */

/* 7974 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7978 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemID */

/* 7986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7992 */	NdrFcShort( 0x46 ),	/* 70 */
/* 7994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8000 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8002 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8014 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 8016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrID */

/* 8022 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8026 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndNode */

/* 8034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8040 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8042 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8048 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8050 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 8058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8062 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter ppNode */

/* 8064 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8066 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8068 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8072 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VisibleNode */

/* 8076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0xa ),	/* 10 */
/* 8084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8090 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8100 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8104 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */


	/* Procedure get_WndPage */

/* 8112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8118 */	NdrFcShort( 0xc ),	/* 12 */
/* 8120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 8136 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8140 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */


	/* Return value */

/* 8142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameData */

/* 8148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8154 */	NdrFcShort( 0xd ),	/* 13 */
/* 8156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8164 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8176 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 8178 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 8180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8182 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 8184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FrameData */

/* 8190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0xe ),	/* 14 */
/* 8198 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8206 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8218 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 8220 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8224 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 8226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8228 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignerState */

/* 8232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8238 */	NdrFcShort( 0xf ),	/* 15 */
/* 8240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8244 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8260 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignerState */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8278 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8296 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 8304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8310 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 8328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 8340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8346 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 8364 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8368 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 8370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 8376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8382 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8390 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8400 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8404 */	NdrFcShort( 0x550 ),	/* Type Offset=1360 */

	/* Return value */

/* 8406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameType */

/* 8412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8418 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8424 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8436 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8440 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 8442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 8448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8454 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8464 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8472 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8476 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Detach */

/* 8484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8490 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attach */

/* 8514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8528 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8530 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyHost */

/* 8544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8554 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 8568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8572 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 8580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8586 */	NdrFcShort( 0x1a ),	/* 26 */
/* 8588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8594 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8596 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8604 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8608 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 8610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8614 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 8616 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8620 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXml */

/* 8628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8634 */	NdrFcShort( 0x1b ),	/* 27 */
/* 8636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8644 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrRootName */

/* 8652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8656 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRet */

/* 8658 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8662 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFromWeb */

/* 8670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8676 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8678 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 8686 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURLBase */

/* 8694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8698 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 8700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8704 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 8706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 8712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8714 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 8718 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8720 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8722 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 8724 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8726 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8728 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8732 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendIPCMessage */

/* 8736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8742 */	NdrFcShort( 0x1d ),	/* 29 */
/* 8744 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8752 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MessageType */

/* 8760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrMessage */

/* 8766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8770 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMessageData */

/* 8772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8776 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendToBackgroundWebProxy */

/* 8784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8792 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8800 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 8808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8812 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 8814 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8818 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 8820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8824 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeCount */

/* 8832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8838 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 8856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 8868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8876 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8882 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8884 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 8892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTopWindow */

/* 8898 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8902 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 8910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8916 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8926 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 8934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8938 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 8940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 8946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8952 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8954 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8960 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8962 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 8970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8974 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter ppFrame */

/* 8976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8978 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8980 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 8982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8984 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 8988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0xa ),	/* 10 */
/* 8996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9004 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9012 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9016 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EnableSinkCLRCtrlCreatedEvent */

/* 9024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9030 */	NdrFcShort( 0xc ),	/* 12 */
/* 9032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9036 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9052 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EnableSinkCLRCtrlCreatedEvent */

/* 9060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0xd ),	/* 13 */
/* 9068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9070 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9088 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_xtml */

/* 9096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0xe ),	/* 14 */
/* 9104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9112 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9126 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9130 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_xtml */

/* 9138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9144 */	NdrFcShort( 0xf ),	/* 15 */
/* 9146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9166 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 9168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9172 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 9180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9186 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9194 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 9204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9214 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 9216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 9222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0x11 ),	/* 17 */
/* 9230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9238 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 9246 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9250 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 9252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9256 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 9258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameName */

/* 9264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9270 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9278 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9280 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHwnd */

/* 9288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9292 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 9294 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9298 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 9306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9312 */	NdrFcShort( 0x13 ),	/* 19 */
/* 9314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9320 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9322 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 9330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9336 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9340 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 9342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Node */

/* 9348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9362 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9364 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNodeName */

/* 9372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9376 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9382 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 9390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9396 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9406 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 9414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9418 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9420 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9424 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 9426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 9432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9438 */	NdrFcShort( 0x16 ),	/* 22 */
/* 9440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9446 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9456 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9460 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 9462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 9468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x19 ),	/* 25 */
/* 9476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9480 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Height */

/* 9504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9510 */	NdrFcShort( 0x1a ),	/* 26 */
/* 9512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeNames */

/* 9540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9546 */	NdrFcShort( 0x1b ),	/* 27 */
/* 9548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9554 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9556 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9568 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 9576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9582 */	NdrFcShort( 0x1d ),	/* 29 */
/* 9584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9604 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */

/* 9606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_External */

/* 9612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9618 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9626 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9640 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 9642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_External */

/* 9648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9654 */	NdrFcShort( 0x1f ),	/* 31 */
/* 9656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9672 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9676 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 9678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 9684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9690 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9696 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9712 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 9714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PageXML */

/* 9720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9734 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9736 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9744 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9748 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ConfigName */

/* 9756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9762 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9784 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignFrameType */

/* 9792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9798 */	NdrFcShort( 0x23 ),	/* 35 */
/* 9800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9816 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9820 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 9822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 9828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9834 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9852 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9856 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrame */

/* 9864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9870 */	NdrFcShort( 0x25 ),	/* 37 */
/* 9872 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 9874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9878 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9880 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParentObj */

/* 9888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9892 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter HostWnd */

/* 9894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9898 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter bstrFrameName */

/* 9900 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9902 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9904 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetFrame */

/* 9906 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9908 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 9910 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 9912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9914 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 9916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObject */

/* 9918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9924 */	NdrFcShort( 0x26 ),	/* 38 */
/* 9926 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9928 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9930 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9932 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9934 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 9942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9946 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pObject */

/* 9948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9952 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrObjName */

/* 9954 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9958 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSinkEvent */

/* 9960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9964 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bResult */

/* 9966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9970 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjToHtml */

/* 9978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9984 */	NdrFcShort( 0x27 ),	/* 39 */
/* 9986 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9992 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9994 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strObjName */

/* 10002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10006 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bConnectEvent */

/* 10008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10012 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pObjDisp */

/* 10014 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10018 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNodesToPage */

/* 10026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10032 */	NdrFcShort( 0x28 ),	/* 40 */
/* 10034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10036 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10038 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10042 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 10050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10054 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrNodeNames */

/* 10056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10060 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bAdd */

/* 10062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10066 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSuccess */

/* 10068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10072 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 10080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10086 */	NdrFcShort( 0x29 ),	/* 41 */
/* 10088 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10096 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HTMLWindow */

/* 10104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10108 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter SourceObj */

/* 10110 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10114 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrEventName */

/* 10116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10120 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 10122 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10126 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10130 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeSubCtrlEvent */

/* 10134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x2a ),	/* 42 */
/* 10142 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10150 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWndDisp */

/* 10158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10162 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter Node */

/* 10164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10168 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter Ctrl */

/* 10170 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10172 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10174 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter EventName */

/* 10176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10178 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 10180 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 10182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10184 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10186 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10190 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 10192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachEvent */

/* 10194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10200 */	NdrFcShort( 0x2b ),	/* 43 */
/* 10202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10206 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10210 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 10218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10222 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pHtmlWnd */

/* 10224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10228 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bResult */

/* 10230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10234 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeEvent */

/* 10242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10248 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10258 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 10266 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10270 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWndDisp */

/* 10272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10276 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 10284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10290 */	NdrFcShort( 0x2d ),	/* 45 */
/* 10292 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 10300 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Parent */

/* 10308 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10312 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter CtrlName */

/* 10314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10318 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FrameName */

/* 10320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10324 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 10326 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10330 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 10332 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10334 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10336 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 10338 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10340 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10342 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10346 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendCtrl */

/* 10350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x2e ),	/* 46 */
/* 10358 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10364 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10366 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Ctrl */

/* 10374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10378 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter bstrKey */

/* 10380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10384 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 10386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10388 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10390 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 10392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10394 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10396 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10400 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndNode */

/* 10404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10410 */	NdrFcShort( 0x2f ),	/* 47 */
/* 10412 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10420 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 10428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10432 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrNodeName */

/* 10434 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10438 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetNode */

/* 10440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10444 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlInNode */

/* 10452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x30 ),	/* 48 */
/* 10460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10468 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 10476 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10480 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter CtrlName */

/* 10482 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10486 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppCtrl */

/* 10488 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10492 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHtmlDocument */

/* 10500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10506 */	NdrFcShort( 0x31 ),	/* 49 */
/* 10508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10514 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWindow */

/* 10524 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10528 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppHtmlDoc */

/* 10530 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10534 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromCtrl */

/* 10542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10548 */	NdrFcShort( 0x32 ),	/* 50 */
/* 10550 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10556 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10558 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ctrl */

/* 10566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10570 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 10572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10576 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectTangramCtrl */

/* 10584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10590 */	NdrFcShort( 0x33 ),	/* 51 */
/* 10592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10598 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventSource */

/* 10608 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10612 */	NdrFcShort( 0x584 ),	/* Type Offset=1412 */

	/* Return value */

/* 10614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrameWithDefaultNode */

/* 10620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10626 */	NdrFcShort( 0x34 ),	/* 52 */
/* 10628 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10630 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10634 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 10636 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hFrameWnd */

/* 10644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10648 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrameName */

/* 10650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10654 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDefaultNodeKey */

/* 10656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 10662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10666 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfig */

/* 10668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10670 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10672 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppNode */

/* 10674 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10676 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10678 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10682 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 10686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10692 */	NdrFcShort( 0x35 ),	/* 53 */
/* 10694 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10696 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10702 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrames */

/* 10710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10714 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 10716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10720 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 10722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10726 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 10728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10730 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10732 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10736 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Ctrl */

/* 10740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10746 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10748 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10754 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10756 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 10764 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10768 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter ppCtrl */

/* 10770 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10772 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10774 */	NdrFcShort( 0x5c2 ),	/* Type Offset=1474 */

	/* Return value */

/* 10776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10778 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCtrl */

/* 10782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10788 */	NdrFcShort( 0xb ),	/* 11 */
/* 10790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10792 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10796 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10798 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 10806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10810 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 10812 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10816 */	NdrFcShort( 0x5c2 ),	/* Type Offset=1474 */

	/* Return value */

/* 10818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10820 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 10824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10830 */	NdrFcShort( 0xd ),	/* 13 */
/* 10832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10838 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10840 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10848 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10852 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Active */

/* 10860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10866 */	NdrFcShort( 0xe ),	/* 14 */
/* 10868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 10876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 10884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseTangramUI */

/* 10890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10896 */	NdrFcShort( 0xf ),	/* 15 */
/* 10898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10904 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 10906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 10914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 10920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10928 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10934 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10936 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 10944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10948 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 10950 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10954 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 10956 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10960 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendInView */

/* 10968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10974 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10976 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10982 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10984 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 10992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 10998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11002 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11004 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11008 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11010 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11014 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11018 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenURL */

/* 11022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11028 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11030 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11032 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11036 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11038 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 11046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11048 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nDisposition */

/* 11052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11054 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11056 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 11058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11062 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11064 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11066 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11068 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 11070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11072 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Show */

/* 11076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11082 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11086 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bShow */

/* 11100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11104 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11120 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11126 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11128 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11140 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 11148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11152 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnloadTangram */

/* 11160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11166 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11174 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 11184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */

/* 11190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11196 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11202 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11218 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 11220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 11226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11240 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11250 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11254 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 11256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_tag */

/* 11262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11268 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11276 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11278 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11286 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 11288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11290 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 11292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_tag */

/* 11298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11304 */	NdrFcShort( 0xa ),	/* 10 */
/* 11306 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11314 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 11322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11326 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 11328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppCtrl */

/* 11334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11340 */	NdrFcShort( 0xb ),	/* 11 */
/* 11342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11344 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 11358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11362 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramHandle */

/* 11370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11376 */	NdrFcShort( 0xb ),	/* 11 */
/* 11378 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11380 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11386 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHandleName */

/* 11394 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11398 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 11400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11404 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 11406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11408 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EclipseViewHandle */

/* 11412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11418 */	NdrFcShort( 0xc ),	/* 12 */
/* 11420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11424 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11440 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 11442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */

/* 11448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0xd ),	/* 13 */
/* 11456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11472 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11476 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */

/* 11478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WorkBenchWindow */

/* 11484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0xe ),	/* 14 */
/* 11492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11508 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11512 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 11514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopFrame */

/* 11520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11526 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11534 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11544 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11548 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 11550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveTopNode */

/* 11556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11562 */	NdrFcShort( 0x11 ),	/* 17 */
/* 11564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11580 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11584 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 11592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11598 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11600 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11606 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11608 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11620 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 11622 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 11624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11626 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 11628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 11634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11640 */	NdrFcShort( 0x13 ),	/* 19 */
/* 11642 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11650 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11658 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11662 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 11664 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11668 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 11670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11672 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11682 */	NdrFcShort( 0x14 ),	/* 20 */
/* 11684 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11690 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 11700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11704 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 11718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11722 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11726 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 11730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11736 */	NdrFcShort( 0x15 ),	/* 21 */
/* 11738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11746 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 11754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11758 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11760 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11764 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11770 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 11772 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11774 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11776 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11780 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachCLRObjEvent */

/* 11784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11790 */	NdrFcShort( 0x17 ),	/* 23 */
/* 11792 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11794 */	NdrFcShort( 0xc ),	/* 12 */
/* 11796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Sender */

/* 11808 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11812 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventType */

/* 11814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11818 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bAttachEvent */

/* 11820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11824 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11830 */	0x8,		/* FC_LONG */
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
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
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
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
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
			0x12, 0x0,	/* FC_UP */
/* 198 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1154) */
/* 200 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 202 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 204 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 206 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 212 */	NdrFcShort( 0x2f ),	/* 47 */
/* 214 */	NdrFcLong( 0x14 ),	/* 20 */
/* 218 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 220 */	NdrFcLong( 0x3 ),	/* 3 */
/* 224 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 226 */	NdrFcLong( 0x11 ),	/* 17 */
/* 230 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 232 */	NdrFcLong( 0x2 ),	/* 2 */
/* 236 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 238 */	NdrFcLong( 0x4 ),	/* 4 */
/* 242 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 244 */	NdrFcLong( 0x5 ),	/* 5 */
/* 248 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 250 */	NdrFcLong( 0xb ),	/* 11 */
/* 254 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 256 */	NdrFcLong( 0xa ),	/* 10 */
/* 260 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 262 */	NdrFcLong( 0x6 ),	/* 6 */
/* 266 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (498) */
/* 268 */	NdrFcLong( 0x7 ),	/* 7 */
/* 272 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 274 */	NdrFcLong( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0xfeec ),	/* Offset= -276 (2) */
/* 280 */	NdrFcLong( 0xd ),	/* 13 */
/* 284 */	NdrFcShort( 0xdc ),	/* Offset= 220 (504) */
/* 286 */	NdrFcLong( 0x9 ),	/* 9 */
/* 290 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (60) */
/* 292 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 296 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (522) */
/* 298 */	NdrFcLong( 0x24 ),	/* 36 */
/* 302 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1080) */
/* 304 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 308 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1080) */
/* 310 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 314 */	NdrFcShort( 0x302 ),	/* Offset= 770 (1084) */
/* 316 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 320 */	NdrFcShort( 0x300 ),	/* Offset= 768 (1088) */
/* 322 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 326 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (1092) */
/* 328 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 332 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1096) */
/* 334 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 338 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1100) */
/* 340 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 344 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1104) */
/* 346 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 350 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1088) */
/* 352 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 356 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1092) */
/* 358 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 362 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1108) */
/* 364 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 368 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1104) */
/* 370 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 374 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1112) */
/* 376 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 380 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1116) */
/* 382 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 386 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1120) */
/* 388 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 392 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1124) */
/* 394 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 398 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1128) */
/* 400 */	NdrFcLong( 0x10 ),	/* 16 */
/* 404 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 406 */	NdrFcLong( 0x12 ),	/* 18 */
/* 410 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 412 */	NdrFcLong( 0x13 ),	/* 19 */
/* 416 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 418 */	NdrFcLong( 0x15 ),	/* 21 */
/* 422 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 424 */	NdrFcLong( 0x16 ),	/* 22 */
/* 428 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 430 */	NdrFcLong( 0x17 ),	/* 23 */
/* 434 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 436 */	NdrFcLong( 0xe ),	/* 14 */
/* 440 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1136) */
/* 442 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 446 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1146) */
/* 448 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 452 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1150) */
/* 454 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 458 */	NdrFcShort( 0x276 ),	/* Offset= 630 (1088) */
/* 460 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 464 */	NdrFcShort( 0x274 ),	/* Offset= 628 (1092) */
/* 466 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 470 */	NdrFcShort( 0x272 ),	/* Offset= 626 (1096) */
/* 472 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 476 */	NdrFcShort( 0x268 ),	/* Offset= 616 (1092) */
/* 478 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 482 */	NdrFcShort( 0x262 ),	/* Offset= 610 (1092) */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* Offset= 0 (488) */
/* 490 */	NdrFcLong( 0x1 ),	/* 1 */
/* 494 */	NdrFcShort( 0x0 ),	/* Offset= 0 (494) */
/* 496 */	NdrFcShort( 0xffff ),	/* Offset= -1 (495) */
/* 498 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 502 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 504 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 516 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 518 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 520 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 522 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 524 */	NdrFcShort( 0x2 ),	/* Offset= 2 (526) */
/* 526 */	
			0x12, 0x0,	/* FC_UP */
/* 528 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1062) */
/* 530 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 532 */	NdrFcShort( 0x18 ),	/* 24 */
/* 534 */	NdrFcShort( 0xa ),	/* 10 */
/* 536 */	NdrFcLong( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x5a ),	/* Offset= 90 (630) */
/* 542 */	NdrFcLong( 0xd ),	/* 13 */
/* 546 */	NdrFcShort( 0x7e ),	/* Offset= 126 (672) */
/* 548 */	NdrFcLong( 0x9 ),	/* 9 */
/* 552 */	NdrFcShort( 0x9e ),	/* Offset= 158 (710) */
/* 554 */	NdrFcLong( 0xc ),	/* 12 */
/* 558 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (758) */
/* 560 */	NdrFcLong( 0x24 ),	/* 36 */
/* 564 */	NdrFcShort( 0x124 ),	/* Offset= 292 (856) */
/* 566 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 570 */	NdrFcShort( 0x140 ),	/* Offset= 320 (890) */
/* 572 */	NdrFcLong( 0x10 ),	/* 16 */
/* 576 */	NdrFcShort( 0x15a ),	/* Offset= 346 (922) */
/* 578 */	NdrFcLong( 0x2 ),	/* 2 */
/* 582 */	NdrFcShort( 0x174 ),	/* Offset= 372 (954) */
/* 584 */	NdrFcLong( 0x3 ),	/* 3 */
/* 588 */	NdrFcShort( 0x18e ),	/* Offset= 398 (986) */
/* 590 */	NdrFcLong( 0x14 ),	/* 20 */
/* 594 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (1018) */
/* 596 */	NdrFcShort( 0xffff ),	/* Offset= -1 (595) */
/* 598 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 602 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 608 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 610 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 612 */	NdrFcShort( 0x4 ),	/* 4 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	0x12, 0x0,	/* FC_UP */
/* 624 */	NdrFcShort( 0xfda2 ),	/* Offset= -606 (18) */
/* 626 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 630 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 634 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 636 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 638 */	NdrFcShort( 0x4 ),	/* 4 */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	0x11, 0x0,	/* FC_RP */
/* 644 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (598) */
/* 646 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 648 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 650 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 660 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 664 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (504) */
/* 670 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 672 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x6 ),	/* Offset= 6 (684) */
/* 680 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x11, 0x0,	/* FC_RP */
/* 686 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (650) */
/* 688 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 698 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 702 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0xfd7a ),	/* Offset= -646 (60) */
/* 708 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 710 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x6 ),	/* Offset= 6 (722) */
/* 718 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 720 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 722 */	
			0x11, 0x0,	/* FC_RP */
/* 724 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (688) */
/* 726 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 736 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 738 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 740 */	NdrFcShort( 0x4 ),	/* 4 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	0x12, 0x0,	/* FC_UP */
/* 752 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1154) */
/* 754 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x6 ),	/* Offset= 6 (770) */
/* 766 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (726) */
/* 774 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 776 */	NdrFcLong( 0x2f ),	/* 47 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 786 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 788 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 790 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 792 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 796 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 804 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0xa ),	/* Offset= 10 (820) */
/* 812 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 814 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 816 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (774) */
/* 818 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 820 */	
			0x12, 0x0,	/* FC_UP */
/* 822 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (792) */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 834 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 836 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	0x12, 0x0,	/* FC_UP */
/* 850 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (804) */
/* 852 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x6 ),	/* Offset= 6 (868) */
/* 864 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 866 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 868 */	
			0x11, 0x0,	/* FC_RP */
/* 870 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (824) */
/* 872 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 876 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 878 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x10 ),	/* 16 */
/* 882 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 884 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 886 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (872) */
			0x5b,		/* FC_END */
/* 890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x18 ),	/* 24 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0xa ),	/* Offset= 10 (906) */
/* 898 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 900 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 902 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (878) */
/* 904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 906 */	
			0x11, 0x0,	/* FC_RP */
/* 908 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (650) */
/* 910 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 914 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 920 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	0x12, 0x0,	/* FC_UP */
/* 936 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (910) */
/* 938 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 942 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 944 */	NdrFcShort( 0x2 ),	/* 2 */
/* 946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 952 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 954 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	0x12, 0x0,	/* FC_UP */
/* 968 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (942) */
/* 970 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 972 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 974 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 978 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 984 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 986 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 992 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 998 */	0x12, 0x0,	/* FC_UP */
/* 1000 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (974) */
/* 1002 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1004 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1006 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1016 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1018 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1026 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1028 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1030 */	0x12, 0x0,	/* FC_UP */
/* 1032 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1006) */
/* 1034 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1036 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1038 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1044 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1046 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1050 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1052 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1054 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1038) */
/* 1060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1066 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1046) */
/* 1068 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1068) */
/* 1070 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1074 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1076 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (530) */
/* 1078 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1080 */	
			0x12, 0x0,	/* FC_UP */
/* 1082 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (804) */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1098 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1102 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x12, 0x0,	/* FC_UP */
/* 1110 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (498) */
/* 1112 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1114 */	NdrFcShort( 0xfba8 ),	/* Offset= -1112 (2) */
/* 1116 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1118 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (504) */
/* 1120 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1122 */	NdrFcShort( 0xfbda ),	/* Offset= -1062 (60) */
/* 1124 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1126 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (522) */
/* 1128 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x12, 0x0,	/* FC_UP */
/* 1134 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1154) */
/* 1136 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1140 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1142 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1144 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1146 */	
			0x12, 0x0,	/* FC_UP */
/* 1148 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1136) */
/* 1150 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1152 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1154 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1160) */
/* 1162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1164 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1166 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (200) */
/* 1172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1174 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (196) */
/* 1184 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1186 */	NdrFcShort( 0xfd56 ),	/* Offset= -682 (504) */
/* 1188 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1190 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1194 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1198 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1200 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1202 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1204 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1206 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1208 */	0x83,		/* 131 */
			0xa5,		/* 165 */
/* 1210 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1212 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1216 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1218 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1220 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1222 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1224 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1226 */	0x83,		/* 131 */
			0xa6,		/* 166 */
/* 1228 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1232) */
/* 1232 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1234 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1238 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1240 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1242 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1244 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1246 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1248 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 1250 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1252 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1258) */
/* 1254 */	
			0x13, 0x0,	/* FC_OP */
/* 1256 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1154) */
/* 1258 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1262 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1254) */
/* 1268 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1272) */
/* 1272 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1274 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1278 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1280 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1282 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1284 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1286 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1288 */	0x0,		/* 0 */
			0x17,		/* 23 */
/* 1290 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1292 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1294 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1298) */
/* 1298 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1300 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1304 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1306 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1308 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1310 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1312 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1314 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 1316 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1318 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1320) */
/* 1320 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1322 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1326 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1328 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1330 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1332 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1334 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 1336 */	0x8,		/* 8 */
			0x24,		/* 36 */
/* 1338 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1340 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1342) */
/* 1342 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1344 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1348 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1350 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1352 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1354 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1356 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1358 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1360 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1362 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1364) */
/* 1364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1366 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1370 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1372 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1374 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1376 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1378 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1380 */	0x11,		/* 17 */
			0x1,		/* 1 */
/* 1382 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1386) */
/* 1386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1388 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1392 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1394 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1396 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1398 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1400 */	0x20,		/* 32 */
			0x18,		/* 24 */
/* 1402 */	0x8,		/* 8 */
			0x28,		/* 40 */
/* 1404 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1406 */	NdrFcShort( 0xfabe ),	/* Offset= -1346 (60) */
/* 1408 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1412) */
/* 1412 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1414 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1418 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1420 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1422 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1424 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1426 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1428 */	0x31,		/* 49 */
			0xdc,		/* 220 */
/* 1430 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1432 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1434) */
/* 1434 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1436 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1440 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1442 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1444 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1446 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1448 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1450 */	0x9,		/* 9 */
			0x28,		/* 40 */
/* 1452 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1454 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1456) */
/* 1456 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1458 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 1462 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 1464 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 1466 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 1468 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1470 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 1472 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 1474 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1478) */
/* 1478 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1480 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1484 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1486 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1488 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1490 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1492 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1494 */	0x9,		/* 9 */
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
    30
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
    30,
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
    30,
    72,
    120,
    174,
    216,
    258
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
    30,
    300,
    336,
    372,
    408,
    444,
    480,
    522,
    564,
    600
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
    648
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
    684,
    720,
    756,
    792,
    828,
    870,
    912,
    948,
    984,
    1020,
    1056,
    1110,
    1146,
    1200,
    1260,
    1290,
    1326,
    1362
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
    1398,
    1440,
    1476
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
    648,
    1512
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
    1548,
    1584,
    1620,
    1662,
    1704,
    1740,
    1776
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
    1818,
    1860,
    1896,
    1938
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
    1980
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
    2016,
    2052,
    1476,
    2088,
    2124,
    2160,
    258,
    2196,
    2238,
    2280
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
    2322,
    1860,
    1476,
    2358,
    2394,
    2430,
    2466,
    2502,
    2538,
    2574,
    2610,
    2646,
    2688,
    2724,
    2760,
    2796,
    2832,
    2874,
    2910,
    2952,
    2994,
    3030,
    3066,
    3102,
    3138,
    3174,
    3210,
    3246,
    3282,
    3318,
    3354,
    3390,
    3426,
    3462,
    3498,
    3534,
    3570,
    3606,
    3642,
    3678,
    3714,
    3750,
    3786,
    3822,
    3858,
    3894,
    3930,
    3966,
    4002,
    4038,
    4074,
    4110,
    4146,
    4182,
    4218,
    4254,
    4290,
    4326,
    4362,
    4404,
    4446,
    4482,
    4518,
    4554,
    4590,
    4644,
    4692,
    4740,
    4770,
    4818,
    4860,
    4920,
    4962,
    5010,
    5058
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
CINTERFACE_PROXY_VTABLE(82) _IWndNodeProxyVtbl = 
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
    NdrStubCall2
};

CInterfaceStubVtbl _IWndNodeStubVtbl =
{
    &IID_IWndNode,
    &IWndNode_ServerInfo,
    82,
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
    648
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
    5100,
    5148,
    5184
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
    5226,
    5262,
    5298,
    5334,
    5370,
    5406
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
    5226,
    5262,
    5298,
    5334,
    5370,
    5406
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
    2016,
    2052,
    5448,
    5490,
    5532,
    5574,
    5616,
    5652,
    984,
    2574,
    5688,
    5730,
    5766,
    5802,
    5838,
    5874,
    5910,
    5958,
    6000,
    6036,
    6078,
    6114,
    6156,
    6198,
    6240,
    6294,
    6342,
    6390,
    6450,
    6498,
    6528,
    6564,
    6600,
    6654,
    6696,
    6744,
    6798,
    6840,
    6894,
    6948,
    6990,
    7032,
    7092,
    7146,
    7182,
    7218,
    7254,
    7314,
    7350,
    7392,
    7434,
    7488,
    7530,
    7602,
    7632,
    7668,
    7698,
    7740,
    7776,
    7818,
    7860,
    7896,
    7938,
    7986
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
CINTERFACE_PROXY_VTABLE(71) _ITangramProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* ITangram::GetWindowClientDefaultNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetDocTemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::FireTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::ExtendFrames */ ,
    (void *) (INT_PTR) -1 /* ITangram::DeletePage */ ,
    (void *) (INT_PTR) -1 /* ITangram::LoadDocComponent */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramDocFile */ ,
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
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramStubVtbl =
{
    &IID_ITangram,
    &ITangram_ServerInfo,
    71,
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
    8034,
    1440,
    756,
    8076,
    2124,
    8112,
    8148,
    8190,
    8232,
    8268,
    8304,
    8340,
    2688,
    8376,
    8412,
    8448,
    8484,
    8514,
    8544,
    8580,
    8628,
    8670,
    8736,
    8784
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
    8832,
    8868,
    8910
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
    8946,
    1440,
    1476,
    8988,
    1704,
    9024,
    9060,
    9096,
    9138,
    9180,
    9222,
    9264,
    9306,
    9348,
    9390,
    9432,
    1326,
    1362,
    9468,
    9504,
    9540,
    6114,
    9576,
    9612,
    9648,
    9684,
    9720,
    9756,
    9792,
    9828,
    9864,
    9918,
    9978,
    10026,
    10080,
    10134,
    10194,
    10242,
    10284,
    10350,
    10404,
    10452,
    10500,
    10542,
    10584,
    10620,
    10686
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
    10740,
    1440,
    1476,
    5334,
    10782,
    8112,
    10824,
    10860,
    10890,
    10920,
    600,
    10968
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
    11022
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
    11076,
    11112,
    11160
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
    11190,
    11226,
    11262,
    11298
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
    11190,
    11226,
    11262,
    11298,
    11334
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
    11190,
    11226,
    11262,
    11298,
    11370,
    11412,
    11448,
    11484,
    2538,
    11520,
    11556,
    11592,
    11634,
    11676,
    11730,
    2796,
    11784
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
    0
};


#define _ChromeAppServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ChromeAppServer, pIID, n)

int __stdcall _ChromeAppServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ChromeAppServer, 33, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ChromeAppServer, 33, *pIndex )
    
}

const ExtendedProxyFileInfo ChromeAppServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ChromeAppServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ChromeAppServer_StubVtblList,
    (const PCInterfaceName * ) & _ChromeAppServer_InterfaceNamesList,
    (const IID ** ) & _ChromeAppServer_BaseIIDList,
    & _ChromeAppServer_IID_Lookup, 
    33,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

