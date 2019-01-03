/********************************************************************************
 *					Tangram Library - version 10.0.0
 **
 *********************************************************************************
 * Copyright (C) 2002-2019 by Tangram Team.   All Rights Reserved.
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

// begin ChromeProxy
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include "chrome_proxy/public/tangram.c"
#include "chrome_proxy/public/tangram.h"

// CChromeApp plays both the application (exe) module and the default CComClass.
// Through this class, we make Chrome as a COM server. You can create an
// instance of the default CComClass object with ProgID "ChromePlus.Tangram.1".
//
// Note that CChromeApp is an empty CComClass, it is just a shell. Instead of
// using COM_INTERFACE_ENTRY to define its own interface, it rewrote
// CreateInstance (Rewritten the ATL global table with the
// TANGRAM_OBJECT_ENTRY_AUTO macro). Returns the Tangram object in the current
// process.

class CChromeApp : public ATL::CComObjectRootBase,
                   public ATL::CComCoClass<CChromeApp>,
                   public ATL::CAtlExeModuleT<CChromeApp> {
 public:
  DECLARE_LIBID(LIBID_Tangram)
  CChromeApp(){};
  ~CChromeApp() override{};

  ITangram* m_pTangram;

  HRESULT PostMessageLoop() {
    HRESULT hr = CAtlExeModuleT::PostMessageLoop();

    // Prevent false memory leak reporting. ~CAtlWinModule may be too late.
    ATL::_AtlWinModule.Term();
    if (m_bComInitialized)
      CChromeApp::UninitializeCom();
    return hr;
  };

  HRESULT PreMessageLoop(int nShowCmd) {
    HRESULT hr = S_OK;
    if (ATL::CAtlBaseModule::m_bInitFailed) {
      ATLASSERT(0);
      return -2018;
    }
    if (ParseCommandLineforCOM(&hr))
      return 20180915;
    ::OleInitialize(nullptr);
    HMODULE hModule = ::LoadLibrary(L"tangramcore.dll");
    if (hModule == nullptr) {
      TCHAR m_szBuffer[MAX_PATH];
      HRESULT hr =
          SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer);
      if (hr == S_OK) {
        ATL::CString m_strProgramFilePath = ATL::CString(m_szBuffer);
        m_strProgramFilePath += _T("\\Tangram\\Tangramcore.dll");
        if (::PathFileExists(m_strProgramFilePath)) {
          hModule = ::LoadLibrary(m_strProgramFilePath);
        }
      }
    }
    if (hModule) {
      typedef ITangram*(__stdcall * GetTangram)();
      GetTangram _pTangramFunction;
      _pTangramFunction = (GetTangram)GetProcAddress(hModule, "GetTangram");
      if (_pTangramFunction != NULL) {
        m_pTangram = _pTangramFunction();
      }
    }

    return CAtlExeModuleT::PreMessageLoop(nShowCmd);
  };

  static HRESULT WINAPI UpdateRegistry(BOOL bRegister);

  static HRESULT WINAPI CreateInstance(void* pv, REFIID riid, LPVOID* ppv);

 private:
  // Chrome is a multi-process application, we only need the necessary
  // initialization of the COM server when starting the `browser` process
  // (process_type is empty).
  //
  // The application (exe) created as a COM server has two uses. When
  // starting up as a COM server (Including direct startup and startup by the
  // COM client), we normally initialize COM and register the COM object.
  // When used for Self-Registration, check if RegServer, UnregServer,
  // RegServerPerUser and UnregServerPerUser appear in the command line
  // parameters, perform the COM registration or deregistration process. Then
  // skip the Chrome code and exit directly.
  //
  // Self-Registration:
  // https://docs.microsoft.com/en-us/windows/desktop/com/self-registration
  int ParseCommandLineforCOM(_Out_ HRESULT* pnRetCode) throw() {
    *pnRetCode = S_OK;
    LPTSTR lpCmdLine = GetCommandLine();
    int nNeedCOMReg = 0;
    TCHAR szTokens[] = _T("-/");

    LPCTSTR lpszToken = CAtlModuleT<CChromeApp>::FindOneOf(lpCmdLine, szTokens);
    while (lpszToken != NULL) {
      if (CAtlModuleT<CChromeApp>::WordCmpI(lpszToken, _T("UnregServer")) ==
          0) {
        nNeedCOMReg = 1;
        break;
      }

      if (CAtlModuleT<CChromeApp>::WordCmpI(lpszToken, _T("RegServer")) == 0) {
        nNeedCOMReg = 2;
        break;
      }

      if (CAtlModuleT<CChromeApp>::WordCmpI(lpszToken,
                                            _T("UnregServerPerUser")) == 0) {
        nNeedCOMReg = 3;
        break;
      }

      if (CAtlModuleT<CChromeApp>::WordCmpI(lpszToken,
                                            _T("RegServerPerUser")) == 0) {
        nNeedCOMReg = 4;
        break;
      }

      lpszToken = CAtlModuleT<CChromeApp>::FindOneOf(lpszToken, szTokens);
    }

    if (1 <= nNeedCOMReg && nNeedCOMReg <= 4) {
      HRESULT hr = S_OK;
      hr = CChromeApp::InitializeCom();
      if (FAILED(hr)) {
        // Ignore RPC_E_CHANGED_MODE if CLR is loaded. Error is due to CLR
        // initializing COM and InitializeCOM trying to initialize COM with
        // different flags.
        if (hr != RPC_E_CHANGED_MODE ||
            GetModuleHandle(_T("Mscoree.dll")) == NULL) {
          ATLASSERT(0);
          return 5;
        }
      } else {
        m_bComInitialized = true;
      }
    }

    switch (nNeedCOMReg) {
      case 1: {
        *pnRetCode = UnregisterServer(TRUE);
        if (SUCCEEDED(*pnRetCode))
          *pnRetCode = UnregisterAppId();
      } break;
      case 2: {
        *pnRetCode = RegisterAppId();
        if (SUCCEEDED(*pnRetCode))
          *pnRetCode = RegisterServer(TRUE);
      } break;
      case 3: {
        *pnRetCode = ATL::AtlSetPerUserRegistration(true);
        if (FAILED(*pnRetCode)) {
          break;
        }

        *pnRetCode = UnregisterServer(TRUE);
        if (SUCCEEDED(*pnRetCode))
          *pnRetCode = UnregisterAppId();
      } break;
      case 4: {
        *pnRetCode = ATL::AtlSetPerUserRegistration(true);
        if (FAILED(*pnRetCode)) {
          break;
        }

        *pnRetCode = RegisterAppId();
        if (SUCCEEDED(*pnRetCode))
          *pnRetCode = RegisterServer(TRUE);
      } break;
    }
    if (nNeedCOMReg) {
      ATL::_AtlWinModule.Term();
      if (m_bComInitialized)
        CChromeApp::UninitializeCom();
    }
    return nNeedCOMReg;
  }
};

#define TANGRAM_OBJECT_ENTRY_AUTO(clsid, class)                             \
  __declspec(selectany) ATL::_ATL_OBJMAP_CACHE __objCache__##class = {NULL, \
                                                                      0};   \
  const ATL::_ATL_OBJMAP_ENTRY_EX __objMap_##class = {                      \
      &clsid,                                                               \
      class ::UpdateRegistry,                                               \
      class ::_ClassFactoryCreatorClass::CreateInstance,                    \
      class ::CreateInstance,                                               \
      &__objCache__##class,                                                 \
      class ::GetObjectDescription,                                         \
      class ::GetCategoryMap,                                               \
      class ::ObjectMain};                                                  \
  extern "C" __declspec(allocate("ATL$__m")) __declspec(selectany)          \
      const ATL::_ATL_OBJMAP_ENTRY_EX* const __pobjMap_##class              \
      = &__objMap_##class;                                                  \
  OBJECT_ENTRY_PRAGMA(class)

TANGRAM_OBJECT_ENTRY_AUTO(CLSID_Tangram, CChromeApp)

CChromeApp theApp;

#define IDR_CHROMEAPP 106
HRESULT CChromeApp::UpdateRegistry(BOOL bRegister) {
  return theApp.UpdateRegistryFromResource(IDR_CHROMEAPP, bRegister);
}

HRESULT CChromeApp::CreateInstance(void* pv, REFIID riid, LPVOID* ppv) {
  return theApp.m_pTangram->QueryInterface(riid, ppv);
}
// end ChromeProxy
