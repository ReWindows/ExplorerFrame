#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 123 member(s).
class CListViewPopup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CListViewPopup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CListViewPopup@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearToolBar@CListViewPopup@@UEAAJXZ
    virtual long ClearToolBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CListViewPopup@@UEAAJH@Z
    virtual long Commit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CListViewPopup@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShow@CListViewPopup@@UEAAJPEAUHWND__@@PEBUtagLVPINITSTRUCT@@UtagPOINT@@UtagSIZE@@PEAGPEAUIListViewPopupCallback@@@Z
    virtual long CreateAndShow(HWND__*, tagLVPINITSTRUCT const *, tagPOINT, tagSIZE, unsigned short *, IListViewPopupCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectAllItems@CListViewPopup@@UEAAJW4LVPVIEWID@@@Z
    virtual long DeselectAllItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CListViewPopup@@UEAAJW4LVP_DESTROY_FLAGS@@@Z
    virtual long Destroy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CListViewPopup@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFont@CListViewPopup@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHotItem@CListViewPopup@@UEAAJW4LVPVIEWID@@PEAH@Z
    virtual long GetHotItem(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CListViewPopup@@UEAAJW4LVPVIEWID@@HPEAI@Z
    virtual long GetItemCount(int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemHeight@CListViewPopup@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CListViewPopup@@UEAAJW4LVPVIEWID@@HHKPEAK@Z
    virtual long GetItemState(int, int, int, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchControl@CListViewPopup@@UEAAJPEAPEAUIShellSearchControl@@@Z
    virtual long GetSearchControl(IShellSearchControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItems@CListViewPopup@@UEAAJW4LVPVIEWID@@PEAIPEAPEAUtagLVITEMW@@@Z
    virtual long GetSelectedItems(int, unsigned int *, tagLVITEMW * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CListViewPopup@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@CListViewPopup@@UEAAJXZ
    virtual long HasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertItem@CListViewPopup@@UEAAJW4LVPVIEWID@@HQEAUtagLVITEMW@@@Z
    virtual long InsertItem(int, int, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertToolBarItem@CListViewPopup@@UEAAJPEBU_TBBUTTON@@@Z
    virtual long InsertToolBarItem(_TBBUTTON const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CListViewPopup@@UEAAJXZ
    virtual long IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillFocus@CListViewPopup@@UEAAJW4LVPVIEWID@@@Z
    virtual long KillFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextControl@CListViewPopup@@UEAAJH@Z
    virtual long NextControl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanging@CListViewPopup@@UEAAJH@Z
    virtual long OnChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CListViewPopup@@UEAAJPEBG@Z
    virtual long OnInvokeVerb(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CListViewPopup@@UEAAJHPEAH@Z
    virtual long OnStateChange(int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CListViewPopup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CListViewPopup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllItems@CListViewPopup@@UEAAJW4LVPVIEWID@@@Z
    virtual long RemoveAllItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CListViewPopup@@UEAAJW4LVPVIEWID@@H@Z
    virtual long RemoveItem(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestResize@CListViewPopup@@UEAAJXZ
    virtual long RequestResize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CListViewPopup@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyText@CListViewPopup@@UEAAJPEBG@Z
    virtual long SetEmptyText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CListViewPopup@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemHeight@CListViewPopup@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemSelected@CListViewPopup@@UEAAJW4LVPVIEWID@@HHH@Z
    virtual long SetItemSelected(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetListViewFocus@CListViewPopup@@UEAAJW4LVPVIEWID@@H@Z
    virtual long SetListViewFocus(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxToolbarWidth@CListViewPopup@@UEAAJH@Z
    virtual long SetMaxToolbarWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CListViewPopup@@UEAAJII@Z
    virtual long SetPosition(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CListViewPopup@@UEAAJW4LVPVIEWID@@H@Z
    virtual long SetRedraw(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CListViewPopup@@UEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CListViewPopup@@UEAAJPEAUIShellSearchTarget@@@Z
    virtual long SetSearchTarget(IShellSearchTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchText@CListViewPopup@@UEAAJPEBGW4tagSBSST_FLAGS@@@Z
    virtual long SetSearchText(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CListViewPopup@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbarPrompt@CListViewPopup@@UEAAJPEBG@Z
    virtual long SetToolbarPrompt(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CListViewPopup@@UEAAJI@Z
    virtual long SetVisible(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CListViewPopup@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CListViewPopup@@UEAAJPEAPEAG@Z
    virtual long Validate(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassicHitTestMenuItem@CListViewPopup@@AEAA?AW4LVPHITTESTRESULT@@UtagPOINT@@AEAUtagRECT@@PEAU_IMAGELIST@@@Z
    int ClassicHitTestMenuItem(tagPOINT, tagRECT &, _IMAGELIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRemoveSpinner@CListViewPopup@@AEAAXHW4LVPVIEWID@@H@Z
    void _AddRemoveSpinner(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustItemRect@CListViewPopup@@AEAAXPEAUtagRECT@@H@Z
    void _AdjustItemRect(tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcProgressRecs@CListViewPopup@@AEAAXPEBUtagRECT@@PEAU2@111@Z
    void _CalcProgressRecs(tagRECT const *, tagRECT *, tagRECT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelSpinner@CListViewPopup@@AEAAXW4LVPVIEWID@@@Z
    void _CancelSpinner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClassicDrawMenuItem@CListViewPopup@@AEAAXPEBUtagDRAWITEMSTRUCT@@PEAGIPEAU_IMAGELIST@@2HH@Z
    void _ClassicDrawMenuItem(tagDRAWITEMSTRUCT const *, unsigned short *, unsigned int, _IMAGELIST *, _IMAGELIST *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClosePopup@CListViewPopup@@AEAAXXZ
    void _ClosePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyInitData@CListViewPopup@@AEAAJPEBUtagLVPINITSTRUCT@@@Z
    long _CopyInitData(tagLVPINITSTRUCT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateListView@CListViewPopup@@AEAAJHW4LVPCONTROL@@@Z
    long _CreateListView(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CtrlToLVIndex@CListViewPopup@@AEAAHW4LVPCONTROL@@@Z
    int _CtrlToLVIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawBackground@CListViewPopup@@AEAAXPEAUHDC__@@PEBUtagRECT@@@Z
    void _DrawBackground(HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawEmptyText@CListViewPopup@@AEAAXPEAUHDC__@@@Z
    void _DrawEmptyText(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawItem@CListViewPopup@@AEAAXPEAUtagDRAWITEMSTRUCT@@HPEAGIHH@Z
    void _DrawItem(tagDRAWITEMSTRUCT *, int, unsigned short *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawProgressItem@CListViewPopup@@AEAAXPEBGPEAUtagDRAWITEMSTRUCT@@@Z
    void _DrawProgressItem(unsigned short const *, tagDRAWITEMSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawSeparator@CListViewPopup@@AEAAXPEAUHDC__@@H@Z
    void _DrawSeparator(HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawToolbarPrompt@CListViewPopup@@AEAAXPEAUHDC__@@@Z
    void _DrawToolbarPrompt(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSpinnerImageList@CListViewPopup@@AEAAHXZ
    int _EnsureSpinnerImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureThemeAndFont@CListViewPopup@@AEAAXXZ
    void _EnsureThemeAndFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemContentRect@CListViewPopup@@AEAAJW4LVPCONTROL@@HPEAUtagRECT@@@Z
    long _GetItemContentRect(int, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemHeight@CListViewPopup@@AEAAIXZ
    unsigned int _GetItemHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemState@CListViewPopup@@AEAAJW4LVPCONTROL@@HPEAH@Z
    long _GetItemState(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemWidth@CListViewPopup@@AEAAHW4LVPCONTROL@@PEAUIListView@@H@Z
    int _GetItemWidth(int, IListView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListView@CListViewPopup@@AEAAJW4LVPVIEWID@@PEAPEAUIListView@@@Z
    long _GetListView(int, IListView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewRequiredSize@CListViewPopup@@AEAAXPEAUtagSIZE@@0000@Z
    void _GetListViewRequiredSize(tagSIZE *, tagSIZE *, tagSIZE *, tagSIZE *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewType@CListViewPopup@@AEAA?AW4tagLVPLISTVIEWTYPE@@H@Z
    int _GetListViewType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewWindow@CListViewPopup@@AEAAJW4LVPVIEWID@@PEAPEAUHWND__@@@Z
    long _GetListViewWindow(int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextControl@CListViewPopup@@AEAA?AW4LVPCONTROL@@W42@K@Z
    int _GetNextControl(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropCtrlRequiredSize@CListViewPopup@@AEAAXPEAUtagSIZE@@@Z
    void _GetPropCtrlRequiredSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetToolBarRequiredSize@CListViewPopup@@AEAAXPEAUtagSIZE@@@Z
    void _GetToolBarRequiredSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasItemTheme@CListViewPopup@@AEAAHXZ
    int _HasItemTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitProgressItem@CListViewPopup@@AEAA?AW4LVPHITTESTRESULT@@UtagPOINT@@PEBUtagRECT@@@Z
    int _HitProgressItem(tagPOINT, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestItem@CListViewPopup@@AEAA?AW4LVPHITTESTRESULT@@W4LVPCONTROL@@HUtagPOINT@@@Z
    int _HitTestItem(int, int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestRect@CListViewPopup@@AEAA?AW4LVPHITTESTRESULT@@UtagPOINT@@AEAUtagRECT@@@Z
    int _HitTestRect(tagPOINT, tagRECT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestResultToFlags@CListViewPopup@@AEAAKW4LVPHITTESTRESULT@@@Z
    unsigned long _HitTestResultToFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemDisabled@CListViewPopup@@AEAAHW4LVPCONTROL@@H@Z
    int _IsItemDisabled(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LVSubProc@CListViewPopup@@AEAA_JW4LVPCONTROL@@PEAUHWND__@@I_K_J@Z
    int64_t _LVSubProc(int, HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogMenuPopupEvent@CListViewPopup@@AEAAXK@Z
    void _LogMenuPopupEvent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MainWindowProc@CListViewPopup@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _MainWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MeasureMenu@CListViewPopup@@AEAAXPEAUtagMEASUREITEMSTRUCT@@PEBGHH@Z
    void _MeasureMenu(tagMEASUREITEMSTRUCT *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCheckboxLVNotify@CListViewPopup@@AEAA_JPEAUtagNMLISTVIEW@@@Z
    int64_t _OnCheckboxLVNotify(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CListViewPopup@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedSetVisible@CListViewPopup@@AEAAXXZ
    void _OnDelayedSetVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDropDownTranslateMessage@CListViewPopup@@AEAA_JPEBUtagMSG@@@Z
    int64_t _OnDropDownTranslateMessage(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CListViewPopup@@AEAAXPEAUtagNMLVGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMLVGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeKey@CListViewPopup@@AEAA_JK@Z
    int64_t _OnInvokeKey(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMovementKey@CListViewPopup@@AEAA_JIK@Z
    int64_t _OnMovementKey(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CListViewPopup@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnProcessDeleteKey@CListViewPopup@@AEAA_JXZ
    int64_t _OnProcessDeleteKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectItem@CListViewPopup@@AEAAXW4LVPCONTROL@@I@Z
    void _OnSelectItem(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSimpleLVNotify@CListViewPopup@@AEAA_JPEAUtagNMLISTVIEW@@@Z
    int64_t _OnSimpleLVNotify(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionPropCtrl@CListViewPopup@@AEAAXHHHH@Z
    void _PositionPropCtrl(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionSearchBox@CListViewPopup@@AEAAXHHHH@Z
    void _PositionSearchBox(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CListViewPopup@@AEAAXXZ
    void _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusToControl@CListViewPopup@@AEAAXW4LVPCONTROL@@H@Z
    void _SetFocusToControl(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusToListViewItem@CListViewPopup@@AEAAXW4LVPVIEWID@@H@Z
    void _SetFocusToListViewItem(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNextControlFocus@CListViewPopup@@AEAAHIKW4LVPCONTROL@@H@Z
    int _SetNextControlFocus(unsigned int, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeToContent@CListViewPopup@@AEAAXXZ
    void _SizeToContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TBSubProc@CListViewPopup@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _TBSubProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryMoveFocus@CListViewPopup@@AEAAHW4LVPCONTROL@@KH@Z
    int _TryMoveFocus(int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LVSubClassProc@CListViewPopup@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_LVSubClassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MainWindowProc@CListViewPopup@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MainWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TBSubClassProc@CListViewPopup@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_TBSubClassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CListViewPopup@@AEAA@XZ
    ~CListViewPopup();
};
