#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 92 member(s).
class CAddressEditBox {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddressEditBox@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BandSizeChanged@CAddressEditBox@@UEAAJXZ
    virtual long BandSizeChanged();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddressEditBox@@QEAA@XZ
    CAddressEditBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CAddressEditBox@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CAddressEditBox@@UEAAJK@Z
    virtual long Execute(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CAddressEditBox@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CAddressEditBox@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CAddressEditBox@@UEAAJPEAPEAGPEAH@Z
    virtual long GetText(unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChanged@CAddressEditBox@@UEAAJPEBGPEAH@Z
    virtual long HasChanged(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAddressEditBox@@UEAAJPEAUHWND__@@0KPEAUIUnknown@@@Z
    virtual long Init(HWND__*, HWND__*, unsigned long, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedToBrowser@CAddressEditBox@@UEAAJPEAH@Z
    virtual long IsConnectedToBrowser(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CAddressEditBox@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CAddressEditBox@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CAddressEditBox@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPidl@CAddressEditBox@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBG@Z
    virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CAddressEditBox@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CAddressEditBox@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseNow@CAddressEditBox@@UEAAJK@Z
    virtual long ParseNow(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddressEditBox@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CAddressEditBox@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CAddressEditBox@@UEAAJPEAUtagVARIANT@@@Z
    virtual long Refresh(tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddressEditBox@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertEditChanges@CAddressEditBox@@UEAAJXZ
    virtual long RevertEditChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CAddressEditBox@@UEAAJK@Z
    virtual long Save(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CAddressEditBox@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDir@CAddressEditBox@@UEAAJPEBG@Z
    virtual long SetCurrentDir(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditMode@CAddressEditBox@@UEAAJH@Z
    virtual long SetEditMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CAddressEditBox@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CAddressEditBox@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CAddressEditBox@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CAddressEditBox@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReadOnly@CAddressEditBox@@UEAAJH@Z
    virtual long SetReadOnly(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitAutoComplete@CAddressEditBox@@IEAAJPEAUIUnknown@@@Z
    long CreateAndInitAutoComplete(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDarkModeColors@CAddressEditBox@@IEAA_NXZ
    bool EnsureDarkModeColors();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpAutoComplete@CAddressEditBox@@IEAAJXZ
    long SetUpAutoComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanStompCurrentText@CAddressEditBox@@IEAAHXZ
    int _CanStompCurrentText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelNavigation@CAddressEditBox@@IEAAJXZ
    long _CancelNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelPreviousParse@CAddressEditBox@@IEAAXXZ
    void _CancelPreviousParse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDirtyFlag@CAddressEditBox@@IEAAXXZ
    void _ClearDirtyFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComboExSubclassWndProc@CAddressEditBox@@IEAA_JPEAUHWND__@@I_K_J1@Z
    int64_t _ComboExSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToBrwsrWnd@CAddressEditBox@@IEAAJXZ
    long _ConnectToBrwsrWnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditWndProc@CAddressEditBox@@IEAA_JPEAUHWND__@@I_K_J1@Z
    int64_t _EditWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureShellUrl@CAddressEditBox@@IEAAJXZ
    long _EnsureShellUrl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishNavigate@CAddressEditBox@@IEAAJXZ
    long _FinishNavigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetIDList@CAddressEditBox@@IEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GetTargetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleNavigateError@CAddressEditBox@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    long _HandleNavigateError(_ITEMIDLIST_ABSOLUTE const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleParseCompletion@CAddressEditBox@@IEAAX_K_J@Z
    void _HandleParseCompletion(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleUserAction@CAddressEditBox@@IEAAJPEBGHH@Z
    long _HandleUserAction(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InstallHookIfDirty@CAddressEditBox@@IEAAXXZ
    void _InstallHookIfDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDirty@CAddressEditBox@@IEAAHXZ
    int _IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MsgHook@CAddressEditBox@@KA_JH_K_J@Z
    static int64_t _MsgHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MsgHook@CAddressEditBox@@IEAA_JH_KPEAUtagMOUSEHOOKSTRUCT@@@Z
    int64_t _MsgHook(int, uint64_t, tagMOUSEHOOKSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateAfterParse@CAddressEditBox@@IEAAJPEAUIShellUrl@@@Z
    long _NavigateAfterParse(IShellUrl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToComboDropdownSelection@CAddressEditBox@@IEAAJH@Z
    long _NavigateToComboDropdownSelection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigationComplete@CAddressEditBox@@IEAAJPEBGHH@Z
    long _NavigationComplete(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CAddressEditBox@@IEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndEditA@CAddressEditBox@@IEAA_JPEAUNMCBEENDEDITA@@@Z
    int64_t _OnEndEditA(NMCBEENDEDITA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CAddressEditBox@@IEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveHook@CAddressEditBox@@IEAAXXZ
    void _RemoveHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAutocompleteOptions@CAddressEditBox@@IEAAXXZ
    void _SetAutocompleteOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartParse@CAddressEditBox@@IEAAJPEAPEAUICancelMethodCalls@@@Z
    long _StartParse(ICancelMethodCalls * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLeaveEditMode@CAddressEditBox@@IEAAXPEAUHWND__@@@Z
    void _TryLeaveEditMode(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFromCurrentLocation@CAddressEditBox@@IEAAJXZ
    long _UpdateFromCurrentLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UseNewList@CAddressEditBox@@IEAAJW4ENUMLISTTYPE@@@Z
    long _UseNewList(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ComboExSubclassWndProc@CAddressEditBox@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ComboExSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ComboSubclassWndProc@CAddressEditBox@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ComboSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditSubclassWndProc@CAddressEditBox@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddressEditBox@@IEAA@XZ
    ~CAddressEditBox();
};
