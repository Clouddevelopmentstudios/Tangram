/********************************************************************************
 *					Tangram Library - version 10.0.0
 **
 *********************************************************************************
 * Copyright (C) 2002-2018 by Tangram Team.   All Rights Reserved.
 **
 *
 * THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
 * BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
 * WRITTEN CONSENT OF TANGRAM TEAM.
 *
 * THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
 * OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM
 * GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
 * THIS SOFTWARE ON A SINGLE COMPUTER.
 *
 * CONTACT INFORMATION:
 * mailto:tangramteam@outlook.com
 * https://www.tangramteam.com
 *
 ********************************************************************************/
#pragma once

#include <atlstr.h>
#include <string>
#include "Tangram.h"

namespace ChromePlus {
	using namespace std;
	using namespace ATL;

#define WM_CHROMEWEBCLIENTCREATED (WM_USER + 0x00004031)
#define WM_CHROMERENDERERFRAMEHOSTINIT (WM_USER + 0x00004032)
#define WM_CHROMEOPENWINDOWMSG (WM_USER + 0x00004033)
#define WM_CHROMEDRAW (WM_USER + 0x00004034)
#define WM_CHROMEWNDPARENTCHANGED (WM_USER + 0x00004035)
#define WM_DEVICESCALEFACTORCHANGED (WM_USER + 0x00004036)
#define WM_CHROMEAPPINIT (WM_USER + 0x00004037)
#define WM_CHROMEBOOKMARKBARSTATECHANGED (WM_USER + 0x00004038)
#define WM_CHROMEMSG (WM_USER + 0x00004035)
#define WM_BACKGROUNDWEBPROXY_MSG (WM_USER + 0x00004039)
#define WM_CHROMEWNDNODEMSG (WM_USER + 0x00004040)
#define WM_DOCUMENTONLOADCOMPLETED (WM_USER + 0x00004043)
#define WM_DOCUMENTFAILLOADWITHERROR (WM_USER + 0x00004044)
#define WM_CHROMEOPENURLMSG (WM_USER + 0x00004048)
#define WM_EXTENDMESSAGE (WM_USER + 0x00004050)
#define WM_CHROMERENDERFRAMEHOSTCREATED (WM_USER + 0x00004051)
#define WM_CHROMEIPCMSG (WM_USER + 0x00004052)
#define WM_LBUTTONDOWNEX (WM_USER + 0x00004049)

	typedef struct {
		CString m_strType;
		CString m_strKey;
		CString m_strData;
	} IPCMsg;

	class CChromeBrowserBase;
	class CChromeBrowserProxy;
	class CChromeProcessProxy;
	class CChromeWebContentBase;
	class OmniboxViewViewsProxy;
	class CChromeWebContentProxyBase;
	class CChromeRenderFrameHostBase;
	class CChromeRenderFrameHostProxyBase;

	typedef ChromePlus::CChromeProcessProxy*(
		__stdcall* GetChromeProcessProxyFunction)();

	class CChromeProcessProxy {
	public:
		CChromeProcessProxy() {
			m_bClose = false;
			m_pActiveBrowser = nullptr;
			m_pCreatingOmniboxViewViews = nullptr;
		};

		virtual ~CChromeProcessProxy() {};
		bool m_bClose;
		CChromeBrowserBase* m_pActiveBrowser;
		OmniboxViewViewsProxy* m_pCreatingOmniboxViewViews;

		virtual void OnDocumentOnLoadCompleted(CChromeRenderFrameHostBase*,
			HWND hHtmlWnd,
			void*) = 0;
	};

	class OmniboxViewViewsProxy {
	public:
		OmniboxViewViewsProxy() {
			HMODULE hModule = ::GetModuleHandle(L"TangramCore.dll");
			if (hModule != nullptr) {
				ChromePlus::GetChromeProcessProxyFunction GetChromeProcessProxyFunction =
					(ChromePlus::GetChromeProcessProxyFunction)GetProcAddress(
						hModule, "GetChromeProcessProxy");
				if (GetChromeProcessProxyFunction != NULL) {
					ChromePlus::CChromeProcessProxy* _pProxy =
						GetChromeProcessProxyFunction();
					if (_pProxy) {
						_pProxy->m_pCreatingOmniboxViewViews = this;
					}
				}
			}
		};
		virtual ~OmniboxViewViewsProxy() {};

		virtual void Blur() = 0;
	};

	class CChromeBrowserBase {
	public:
		CChromeBrowserBase() {
			HMODULE hModule = ::GetModuleHandle(L"TangramCore.dll");
			if (hModule != nullptr) {
				ChromePlus::GetChromeProcessProxyFunction GetChromeProcessProxyFunction =
					(ChromePlus::GetChromeProcessProxyFunction)GetProcAddress(
						hModule, "GetChromeProcessProxy");
				if (GetChromeProcessProxyFunction != NULL) {
					ChromePlus::CChromeProcessProxy* _pProxy =
						GetChromeProcessProxyFunction();
					if (_pProxy) {
						m_pProxy = nullptr;
						_pProxy->m_pActiveBrowser = this;
					}
				}
			}
		};

		virtual ~CChromeBrowserBase() {};

		CChromeBrowserProxy* m_pProxy;

		virtual int GetType() = 0;
		virtual void LayoutBrowser() = 0;
		virtual void OpenURL(std::wstring strURL,
			BrowserWndOpenDisposition nPos,
			void* pVoid) = 0;
	};

	class CChromeBrowserProxy {
	public:
		CChromeBrowserProxy() {
			m_pOmniboxViewViews = nullptr;
			HMODULE hModule = ::GetModuleHandle(L"TangramCore.dll");
			if (hModule != nullptr) {
				ChromePlus::GetChromeProcessProxyFunction GetChromeProcessProxyFunction =
					(ChromePlus::GetChromeProcessProxyFunction)GetProcAddress(
						hModule, "GetChromeProcessProxy");
				if (GetChromeProcessProxyFunction != NULL) {
					ChromePlus::CChromeProcessProxy* _pProxy =
						GetChromeProcessProxyFunction();
					if (_pProxy) {
						if (_pProxy->m_pCreatingOmniboxViewViews) {
							m_pOmniboxViewViews = _pProxy->m_pCreatingOmniboxViewViews;
							_pProxy->m_pCreatingOmniboxViewViews = nullptr;
							ATLTRACE(_T("******Current Creating OmniboxViewViews : %x******\n"), m_pOmniboxViewViews);
						}
					}
				}
			}
		};

		virtual ~CChromeBrowserProxy() {};

		CChromeBrowserBase* m_pBrowser;
		OmniboxViewViewsProxy* m_pOmniboxViewViews;

		virtual void UpdateContentRect(RECT& rc, int nTopFix) = 0;
	};

	class CChromeWebContentBase {
	public:
		CChromeWebContentBase() { m_pProxy = nullptr; };

		virtual ~CChromeWebContentBase() {};

		CChromeWebContentProxyBase* m_pProxy;

		virtual CChromeRenderFrameHostBase* GetMainRenderFrameHost() = 0;
	};

	class CChromeWebContentProxyBase {
	public:
		CChromeWebContentProxyBase() { m_pWebContent = nullptr; };

		virtual ~CChromeWebContentProxyBase() {};

		CChromeWebContentBase* m_pWebContent;
	};

	class CChromeRenderFrameHostBase {
	public:
		CChromeRenderFrameHostBase() {
			m_pMsg = nullptr;
			m_pProxy = nullptr;
			m_strLastCommitUrl = "";
		};

		IPCMsg* m_pMsg;
		std::string m_strLastCommitUrl;
		CChromeRenderFrameHostProxyBase* m_pProxy;

		virtual ~CChromeRenderFrameHostBase() {};

		virtual void InternalSend(IPCMsg*) = 0;
		virtual std::string Get_LastCommittedURL() = 0;
		virtual void SendTangramMessage(std::wstring channel,
			std::wstring arg1,
			std::wstring arg2) = 0;
	};

	class CChromeRenderFrameHostProxyBase {
	public:
		CChromeRenderFrameHostProxyBase() { m_pChromeRenderFrameHost = nullptr; };

		virtual ~CChromeRenderFrameHostProxyBase() {};

		CChromeRenderFrameHostBase* m_pChromeRenderFrameHost;
	};

	class CChromeRendererFrameBase {
	public:
		CChromeRendererFrameBase() {};

		virtual ~CChromeRendererFrameBase() {};

		virtual void OnTangramExtend(std::wstring strXml,
			std::wstring strKey,
			std::wstring strFeatures) {};
	};

}  // namespace ChromePlus
