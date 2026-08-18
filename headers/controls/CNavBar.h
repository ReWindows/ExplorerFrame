#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 109 member(s).
class CNavBar {
public:
    class CNavBandSite;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNavBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNavBar@@QEAA@XZ
    CNavBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanYieldFocus@CNavBar@@UEAAJXZ
    virtual long CanYieldFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CNavBar@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CNavBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CNavBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CNavBar@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchControl@CNavBar@@UEAAJPEAPEAUIShellSearchControl@@@Z
    virtual long GetSearchControl(IShellSearchControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CNavBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CNavBar@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CNavBar@@UEAAJPEAPEAGPEAH@Z
    virtual long GetText(unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CNavBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CNavBar@@UEAAJXZ
    virtual long InitNew();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CNavBar@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CNavBar@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CNavBar@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CNavBar@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNavBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CNavBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CNavBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CNavBar@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNavBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBorderDW@CNavBar@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertEditChanges@CNavBar@@UEAAJXZ
    virtual long RevertEditChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CNavBar@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandDisplay@CNavBar@@UEAAJW4NAVIGATION_SUB_BAND@@H@Z
    virtual long SetBandDisplay(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CNavBar@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CNavBar@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CNavBar@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CNavBar@@UEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CNavBar@@UEAAJPEAUIShellSearchTarget@@@Z
    virtual long SetSearchTarget(IShellSearchTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchText@CNavBar@@UEAAJPEBGW4tagSBSST_FLAGS@@@Z
    virtual long SetSearchText(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CNavBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CNavBar@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CNavBar@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CNavBar@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructNavBarThemeClassName@CNavBar@@IEAAJPEAPEAG@Z
    long ConstructNavBarThemeClassName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSpacerBand@CNavBar@@IEAAJW4NavigationBands@1@K@Z
    long _AddSpacerBand(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBackgroundBrush@CNavBar@@IEAAPEAUHBRUSH__@@XZ
    HBRUSH__* _CreateBackgroundBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBands@CNavBar@@IEAAJXZ
    long _CreateBands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBar@CNavBar@@IEAAJXZ
    long _CreateBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyBandSiteWindow@CNavBar@@IEAAXXZ
    void _DestroyBandSiteWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAddressBandAvailable@CNavBar@@IEAAHXZ
    int _GetAddressBandAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAddressBandWidth@CNavBar@@IEAAHXZ
    int _GetAddressBandWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppToAppBandToggle@CNavBar@@IEAAJF@Z
    long _HandleAppToAppBandToggle(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitThemeData@CNavBar@@IEAAXXZ
    void _InitThemeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinNavBarNotifyBands@CNavBar@@IEAAXXZ
    void _MinNavBarNotifyBands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@CNavBar@@IEAA_J_K_J@Z
    int64_t _OnActivate(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDrag@CNavBar@@IEAAHHW4NavBarDragOperation@1@@Z
    int _OnDrag(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFrameStateChanged@CNavBar@@IEAAXK@Z
    void _OnFrameStateChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSettingChange@CNavBar@@IEAA_JI_K_J@Z
    int64_t _OnSettingChange(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RebarSubclassWndProc@CNavBar@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _RebarSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMessageToBands@CNavBar@@IEAAXI_K_J@Z
    void _SendMessageToBands(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTheme@CNavBar@@IEAAXXZ
    void _SetTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RebarSubclassWndProc@CNavBar@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_RebarSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SizableWndProc@CNavBar@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_SizableWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNavBar@@MEAA@XZ
    virtual ~CNavBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHwndAccProperties@CNavBar@@AEAAXPEAUHWND__@@@Z
    void ClearHwndAccProperties(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeHwndInvisibleToNarrator@CNavBar@@AEAAXPEAUHWND__@@@Z
    void MakeHwndInvisibleToNarrator(HWND__*);
};
