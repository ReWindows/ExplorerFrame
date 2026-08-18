#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 112 member(s).
class CBreadcrumbBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBreadcrumbBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBreadcrumbBar@@QEAA@XZ
    CBreadcrumbBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CBreadcrumbBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CBreadcrumbBar@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CBreadcrumbBar@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CBreadcrumbBar@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@PEAH@Z
    virtual long GetItemState(int, tagLVITEMW * const, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CBreadcrumbBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBreadcrumbBar@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitBreadcrumbBar@CBreadcrumbBar@@UEAAJPEAUHWND__@@@Z
    virtual long InitBreadcrumbBar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CBreadcrumbBar@@UEAAJXZ
    virtual long OnCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CBreadcrumbBar@@UEAAJXZ
    virtual long OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CBreadcrumbBar@@UEAAJH@Z
    virtual long OnDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSearchText@CBreadcrumbBar@@UEAAJW4SEARCHTEXTTYPE@@PEAGI@Z
    virtual long OnGetSearchText(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CBreadcrumbBar@@UEAAJW4LVPVIEWID@@PEBUtagNMLISTVIEW@@H@Z
    virtual long OnItemChanged(int, tagNMLISTVIEW const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemFocused@CBreadcrumbBar@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@1@Z
    virtual long OnItemFocused(int, tagLVITEMW * const, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInvoke@CBreadcrumbBar@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemInvoke(int, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemRemoved@CBreadcrumbBar@@UEAAJW4REMOVEITEMTYPE@@W4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemRemoved(int, int, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeave@CBreadcrumbBar@@UEAAJXZ
    virtual long OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropCtrlInvoke@CBreadcrumbBar@@UEAAJPEAUIFilterCondition@@@Z
    virtual long OnPropCtrlInvoke(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReposition@CBreadcrumbBar@@UEAAJPEBUtagRECT@@@Z
    virtual long OnRequestReposition(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetChanged@CBreadcrumbBar@@UEAAJPEAUIUpdatableItemSet@@W4tagUISCB_FLAGS@@_J@Z
    virtual long OnSetChanged(IUpdatableItemSet *, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinnerCancel@CBreadcrumbBar@@UEAAJW4LVPVIEWID@@@Z
    virtual long OnSpinnerCancel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolBarItemInvoke@CBreadcrumbBar@@UEAAJH@Z
    virtual long OnToolBarItemInvoke(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBreadcrumbBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CBreadcrumbBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBreadcrumbBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CBreadcrumbBar@@UEAAJXZ
    virtual long SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CBreadcrumbBar@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CBreadcrumbBar@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CBreadcrumbBar@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CBreadcrumbBar@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CBreadcrumbBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CBreadcrumbBar@@UEAAJPEBG@Z
    virtual long SetTheme(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpecialCharacter@CBreadcrumbBar@@UEAAJPEBUtagMSG@@H@Z
    virtual long SpecialCharacter(tagMSG const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBreadcrumbBar@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CBreadcrumbBar@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DeleteHistory@CBreadcrumbBar@@SAXXZ
    static void s_DeleteHistory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeIconIndexForPidl@CBreadcrumbBar@@AEAAHPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    int ComputeIconIndexForPidl(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CBreadcrumbBar@@EEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsDDT@CBreadcrumbBar@@EEAAJPEAPEAUHWND__@@0@Z
    virtual long GetWindowsDDT(HWND__* *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CBreadcrumbBar@@EEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CBreadcrumbBar@@EEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImagelist@CBreadcrumbBar@@AEAAXXZ
    void RefreshImagelist();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddButtonForIDList@CBreadcrumbBar@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@PEAUIViewFilters@@HHPEAH@Z
    long _AddButtonForIDList(_ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, IViewFilters *, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFilterButtons@CBreadcrumbBar@@AEAAJH@Z
    long _AddFilterButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToPopup@CBreadcrumbBar@@AEAAXW4LVPVIEWID@@PEAUIUnknown@@II@Z
    void _AddItemToPopup(int, IUnknown *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemsToPopup@CBreadcrumbBar@@AEAAXW4LVPVIEWID@@IPEAUIUpdatableItemSet@@@Z
    void _AddItemsToPopup(int, unsigned int, IUpdatableItemSet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRootDropdownItems@CBreadcrumbBar@@AEAAXW4LVPVIEWID@@@Z
    void _AddRootDropdownItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyToClipboard@CBreadcrumbBar@@AEAAXH@Z
    void _CopyToClipboard(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNotifications@CBreadcrumbBar@@AEAAXXZ
    void _EnsureNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayNameForPidl@CBreadcrumbBar@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellItem@@PEAPEAG@Z
    long _GetDisplayNameForPidl(_ITEMIDLIST_ABSOLUTE const *, IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDListForButtonID@CBreadcrumbBar@@AEAAJIPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GetIDListForButtonID(unsigned int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewFilters@CBreadcrumbBar@@AEAAJPEAPEAUIViewFilters@@@Z
    long _GetViewFilters(IViewFilters * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GoToEditMode@CBreadcrumbBar@@AEAAXW4AddressBarEditState@FileExplorerTelemetry@@@Z
    void _GoToEditMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMenuSelection@CBreadcrumbBar@@AEAAXI@Z
    void _HandleMenuSelection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFilterPidl@CBreadcrumbBar@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsFilterPidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillEnumerationForDroppedIndex@CBreadcrumbBar@@AEAAXXZ
    void _KillEnumerationForDroppedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LastCrumbHasExpando@CBreadcrumbBar@@AEAAHXZ
    int _LastCrumbHasExpando();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToIDList@CBreadcrumbBar@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4NavigationSource@FileExplorerTelemetryBase@@@Z
    long _NavigateToIDList(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBreadcrumbBar@CBreadcrumbBar@@AEAAHUtagPOINT@@@Z
    int _OnBreadcrumbBar(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnButtonPressNavigate@CBreadcrumbBar@@AEAA_JG@Z
    int64_t _OnButtonPressNavigate(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CBreadcrumbBar@@AEAA_JHH@Z
    int64_t _OnContextMenu(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragOut@CBreadcrumbBar@@AEAA_JPEAUtagNMTOOLBARW@@@Z
    int64_t _OnDragOut(tagNMTOOLBARW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDropDown@CBreadcrumbBar@@AEAA_JHUtagRECT@@H@Z
    int64_t _OnDropDown(int, tagRECT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CBreadcrumbBar@@AEAAXKPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _OnFSNotify(unsigned long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CBreadcrumbBar@@AEAA_J_J@Z
    int64_t _OnNotify(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CBreadcrumbBar@@AEAAXI@Z
    void _OnTimer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RebuildToolbar@CBreadcrumbBar@@AEAAJXZ
    long _RebuildToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshBandInfo@CBreadcrumbBar@@AEAAXXZ
    void _RefreshBandInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTheme@CBreadcrumbBar@@AEAAXXZ
    void _RefreshTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseNotifications@CBreadcrumbBar@@AEAAXXZ
    void _ReleaseNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetHotTracking@CBreadcrumbBar@@AEAAX_J@Z
    void _ResetHotTracking(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideTBButtons@CBreadcrumbBar@@AEAAXH@Z
    void _ShowHideTBButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIDLists@CBreadcrumbBar@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    long _UpdateIDLists(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CBreadcrumbBar@@AEAA_JI_K_J@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BreadcrumbWndProc@CBreadcrumbBar@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_BreadcrumbWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_KillEnumerationCB@CBreadcrumbBar@@CAHPEAUIUpdatableItemSet@@PEAX@Z
    static int s_KillEnumerationCB(IUpdatableItemSet *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TBWndProc@CBreadcrumbBar@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_TBWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBreadcrumbBar@@EEAA@XZ
    virtual ~CBreadcrumbBar();
};
