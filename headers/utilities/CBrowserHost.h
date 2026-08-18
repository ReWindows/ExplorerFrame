#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 98 member(s).
class CBrowserHost {
public:
    class ParseTaskState;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToFront@CBrowserHost@@UEAAJXZ
    virtual long BringToFront();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CBrowserHost@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CBrowserHost@@SAJPEAVCExplorerFrame@@AEBU_GUID@@PEAPEAV1@@Z
    static long CreateInstance(CExplorerFrame *, _GUID const &, CBrowserHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CBrowserHost@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardMessageToBrowser@CBrowserHost@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long ForwardMessageToBrowser(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTranslateAccelerator@CBrowserHost@@UEAAJPEAUtagMSG@@K@Z
    virtual long FrameTranslateAccelerator(tagMSG *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowser@CBrowserHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetBrowser(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CBrowserHost@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationItem@CBrowserHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetLocationItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationState@CBrowserHost@@UEAAJPEAK@Z
    virtual long GetNavigationState(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CBrowserHost@@UEAAJPEAW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@PEAJ1@Z
    virtual long GetProgress(int *, long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchState@CBrowserHost@@UEAAJPEAW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long GetSearchState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabIcon@CBrowserHost@@UEAAJPEAPEAUHICON__@@@Z
    virtual long GetTabIcon(HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetItem@CBrowserHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetTargetItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CBrowserHost@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CBrowserHost@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CBrowserHost@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CBrowserHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBack@CBrowserHost@@UEAAJXZ
    virtual long GoBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForward@CBrowserHost@@UEAAJXZ
    virtual long GoForward();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBrowserHost@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBrowserHost@@QEAAJPEAUIETHREADPARAM@@K@Z
    long Initialize(IETHREADPARAM *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CBrowserHost@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParseTaskPending@CBrowserHost@@UEAAJPEAH@Z
    virtual long IsParseTaskPending(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPidl@CBrowserHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToUrl@CBrowserHost@@UEAAJPEBGJ@Z
    virtual long NavigateToUrl(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateWithParseAsync@CBrowserHost@@UEAAJPEBGPEAUIUnknown@@PEAUIShellUrl@@PEAPEAU2@@Z
    virtual long NavigateWithParseAsync(unsigned short const *, IUnknown *, IShellUrl *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserActive@CBrowserHost@@UEAAJXZ
    virtual long OnBrowserActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserClosed@CBrowserHost@@UEAAJH@Z
    virtual long OnBrowserClosed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserCreated@CBrowserHost@@UEAAJPEAUHWND__@@PEAUIDispatch@@PEAUIShellItem@@@Z
    virtual long OnBrowserCreated(HWND__*, IDispatch *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CBrowserHost@@UEAAJXZ
    virtual long OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseWindow@CBrowserHost@@UEAAJXZ
    virtual long OnCloseWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationCompleted@CBrowserHost@@UEAAJJ@Z
    virtual long OnNavigationCompleted(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSize@CBrowserHost@@UEAAJXZ
    virtual long OnSize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CBrowserHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CBrowserHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CBrowserHost@@UEAAJPEBU_GUID@@KPEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD *, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CBrowserHost@@UEAAJJ@Z
    virtual long Refresh(long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFrame@CBrowserHost@@UEAAJXZ
    virtual long RestoreFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExplorerRibbonProxy@CBrowserHost@@QEAAXPEAUIExplorerRibbon@@@Z
    void SetExplorerRibbonProxy(IExplorerRibbon *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@CBrowserHost@@UEAAJPEAUHICON__@@H@Z
    virtual long SetIcon(HICON__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CBrowserHost@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CBrowserHost@@QEAAJH@Z
    long SetVisible(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CBrowserHost@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CBrowserHost@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBrowserHost@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CBrowserHost@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserHost@@IEAA@PEAVCExplorerFrame@@AEBU_GUID@@@Z
    CBrowserHost(CExplorerFrame *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateBrowser@CBrowserHost@@IEAAXXZ
    void _ActivateBrowser();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowserHost@@MEAA@XZ
    virtual ~CBrowserHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndProgressState@CBrowserHost@@AEAAXH@Z
    void EndProgressState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstablishProgressState@CBrowserHost@@AEAAXH@Z
    void EstablishProgressState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteParseActionAsync@CBrowserHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@U2345@U?$com_ptr@UIShellUrl@@@5@@Z
    WindissectOpaque ExecuteParseActionAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateBackForwardCommands@CBrowserHost@@AEAAXXZ
    void InvalidateBackForwardCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CBrowserHost@@AEAAJ_N@Z
    long OnClose(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Advise@CBrowserHost@@AEAAJXZ
    long _Advise();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CBrowserHost@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessPendingNavigate@CBrowserHost@@AEAAJXZ
    long _ProcessPendingNavigate();
};
