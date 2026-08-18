#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 120 member(s).
class CAddressBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddressBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BandSizeChanged@CAddressBand@@UEAAJXZ
    virtual long BandSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CAddressBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CAddressBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CAddressBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CAddressBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CAddressBand@@UEAAJPEAPEAGPEAH@Z
    virtual long GetText(unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CAddressBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedToBrowser@CAddressBand@@UEAAJPEAH@Z
    virtual long IsConnectedToBrowser(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CAddressBand@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CAddressBand@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CAddressBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPidl@CAddressBand@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBG@Z
    virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CAddressBand@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CAddressBand@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CAddressBand@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddressBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CAddressBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CAddressBand@@UEAAJPEAUtagVARIANT@@@Z
    virtual long Refresh(tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddressBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertEditChanges@CAddressBand@@UEAAJXZ
    virtual long RevertEditChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CAddressBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditMode@CAddressBand@@UEAAJH@Z
    virtual long SetEditMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CAddressBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CAddressBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CAddressBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CAddressBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CAddressBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CAddressBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CAddressBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CAddressBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CAddressBand@@SAJW4ADRESSBANDFLAGS@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(int, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddressBand@@AEAA@W4ADRESSBANDFLAGS@@@Z
    CAddressBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBandHeight@CAddressBand@@AEAAIXZ
    unsigned int CalculateBandHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandHeight@CAddressBand@@AEAAIXZ
    unsigned int GetBandHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexForToolbarSettings@CAddressBand@@AEAAHPEAX@Z
    int IndexForToolbarSettings(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorOn@CAddressBand@@AEAAHXZ
    int IsMonitorOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionComboBox@CAddressBand@@AEAAXAEBUtagRECT@@H@Z
    void PositionComboBox(tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeToolbarButtons@CAddressBand@@AEAAXAEBUtagRECT@@@Z
    void ResizeToolbarButtons(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnNextTabStop@CAddressBand@@AEAA_NXZ
    bool SetFocusOnNextTabStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAddressGreenBarActivity@CAddressBand@@AEAAXXZ
    void StartAddressGreenBarActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgressStateAndPosition@CAddressBand@@AEAAXJ@Z
    void UpdateProgressStateAndPosition(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddressBandWndProc@CAddressBand@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _AddressBandWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowBreadcrumbBar@CAddressBand@@AEAAHXZ
    int _AllowBreadcrumbBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyStateBasedAddressBandThemeChanges@CAddressBand@@AEAAJXZ
    long _ApplyStateBasedAddressBandThemeChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyStateBasedChildThemeChanges@CAddressBand@@AEAAXXZ
    void _ApplyStateBasedChildThemeChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ButtonSwitch@CAddressBand@@AEAAXW4ENUMBUTTONTYPE@@@Z
    void _ButtonSwitch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CAddressBand@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupTabletPCContext@CAddressBand@@AEAAXXZ
    void _CleanupTabletPCContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComboExEditProc@CAddressBand@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _ComboExEditProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAddressBand@CAddressBand@@AEAAJPEAUIUnknown@@@Z
    long _CreateAddressBand(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAddressToolbar@CAddressBand@@AEAAJXZ
    long _CreateAddressToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateProgressBar@CAddressBand@@AEAAJXZ
    long _CreateProgressBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyToolbarImageLists@CAddressBand@@AEAAXXZ
    void _DestroyToolbarImageLists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndProgress@CAddressBand@@AEAAXXZ
    void _EndProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAddressEditBox@CAddressBand@@AEAAJXZ
    long _EnsureAddressEditBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBreadcrumbBar@CAddressBand@@AEAAJXZ
    long _EnsureBreadcrumbBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatToolbarTooltip@CAddressBand@@AEAAXW4ENUMBUTTONTYPE@@PEAGH@Z
    void _FormatToolbarTooltip(int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAddressControlParent@CAddressBand@@AEAAPEAUHWND__@@XZ
    HWND__* _GetAddressControlParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdjustedClientRect@CAddressBand@@AEAAXPEAUtagRECT@@@Z
    void _GetAdjustedClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonGroup@CAddressBand@@AEAA?AW4ENUMBUTTONGROUP@@I@Z
    int _GetButtonGroup(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemMenu@CAddressBand@@AEAAPEAUHMENU__@@XZ
    HMENU__* _GetSystemMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTabletPCContext@CAddressBand@@AEAAXPEAUHWND__@@@Z
    void _InitTabletPCContext(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsProgressShowing@CAddressBand@@AEAAHXZ
    int _IsProgressShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBackgroundStateChanged@CAddressBand@@AEAAXXZ
    void _OnBackgroundStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CAddressBand@@AEAA_JI_K_J@Z
    int64_t _OnCommand(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCustomDraw@CAddressBand@@AEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    int64_t _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CAddressBand@@AEAAXPEAUtagNMTBGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMTBGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChanged@CAddressBand@@AEAA_JXZ
    int64_t _OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionChildWindows@CAddressBand@@AEAAXXZ
    void _PositionChildWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProgressWndProc@CAddressBand@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ProgressWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusAndEditMode@CAddressBand@@AEAAXXZ
    void _SetFocusAndEditMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNavBandNavigationState@CAddressBand@@AEAAXXZ
    void _SetNavBandNavigationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNavigationTarget@CAddressBand@@AEAAJPEAUIShellNavigationTarget@@@Z
    long _SetNavigationTarget(IShellNavigationTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetReadOnly@CAddressBand@@AEAAXH@Z
    void _SetReadOnly(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarImageLists@CAddressBand@@AEAAXXZ
    void _SetToolbarImageLists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartProgress@CAddressBand@@AEAAXXZ
    void _StartProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbar@CAddressBand@@AEAAXH@Z
    void _UpdateToolbar(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddressBandWndProc@CAddressBand@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_AddressBandWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProgressWndProc@CAddressBand@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ProgressWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TBWndProc@CAddressBand@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_TBWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddressBand@@EEAA@XZ
    virtual ~CAddressBand();
};
