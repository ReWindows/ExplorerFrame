#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 329 member(s).
class CNscTree {
public:
    class CNSCContextMenu;
    class CSelectionContextMenu;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNscTree@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSpecialCaseStringsToAccessibleName@CNscTree@@QEAAJPEAU_TREEITEM@@PEAUIShellItem@@PEAPEAG@Z
    long AddSpecialCaseStringsToAccessibleName(_TREEITEM *, IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CNscTree@@UEAAXPEAUIImmersiveContextMenuOwnerDrawHelper@@@Z
    virtual void Advise(IImmersiveContextMenuOwnerDrawHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendRoot@CNscTree@@UEAAJPEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    virtual long AppendRoot(IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseObject@CNscTree@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseObject(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNscTree@@QEAA@XZ
    CNscTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAll@CNscTree@@UEAAJXZ
    virtual long CollapseAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CNscTree@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFolder@CNscTree@@UEAAJXZ
    virtual long CreateNewFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CNscTree@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CNscTree@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModelessSB@CNscTree@@UEAAJH@Z
    virtual long EnableModelessSB(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureItemVisible@CNscTree@@UEAAJPEAUIShellItem@@@Z
    virtual long EnsureItemVisible(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleName@CNscTree@@QEAAJPEAUtagVARIANT@@PEAPEAG@Z
    long GetAccessibleName(tagVARIANT *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CNscTree@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlStyle@CNscTree@@UEAAJKPEAK@Z
    virtual long GetControlStyle(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlStyle2@CNscTree@@UEAAJW4NSTCSTYLE2@@PEAW42@@Z
    virtual long GetControlStyle2(int, int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlWindow@CNscTree@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetControlWindow(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetItem@CNscTree@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetCurrentTargetItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropPosition@CNscTree@@QEAAXPEAH@Z
    void GetDropPosition(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFont@CNscTree@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@PEAH@Z
    virtual long GetItemCustomState(IShellItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemHeight@CNscTree@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CNscTree@@UEAAJPEAUIShellItem@@PEAUtagRECT@@@Z
    virtual long GetItemRect(IShellItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CNscTree@@UEAAJPEAUIShellItem@@KPEAK@Z
    virtual long GetItemState(IShellItem *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextItem@CNscTree@@UEAAJPEAUIShellItem@@W4NSTCGNI@@PEAPEAU2@@Z
    virtual long GetNextItem(IShellItem *, int, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CNscTree@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootItems@CNscTree@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRootItems(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItems@CNscTree@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetSelectedItems(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopMargin@CNscTree@@UEAAJPEAI@Z
    virtual long GetTopMargin(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewStateStream@CNscTree@@UEAAJKPEAPEAUIStream@@@Z
    virtual long GetViewStateStream(unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CNscTree@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsDDT@CNscTree@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetWindowsDDT(HWND__* *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CNscTree@@UEAAJPEAUtagPOINT@@PEAPEAUIShellItem@@@Z
    virtual long HitTest(tagPOINT *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CNscTree@@UEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItems@CNscTree@@UEAAJPEAH@Z
    virtual long IncludeItems(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNscTree@@UEAAJPEAUHWND__@@PEAUtagRECT@@K@Z
    virtual long Initialize(HWND__*, tagRECT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMenusSB@CNscTree@@UEAAJPEAUHMENU__@@PEAUtagOleMenuGroupWidths@@@Z
    virtual long InsertMenusSB(HMENU__*, tagOleMenuGroupWidths *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRoot@CNscTree@@UEAAJHPEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    virtual long InsertRoot(int, IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CNscTree@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationFinished@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigationFinished(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationStarted@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigationStarted(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWinEvent@CNscTree@@UEAAJPEAUIShellItem@@K@Z
    virtual long NotifyWinEvent(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CNscTree@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CNscTree@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAccDefaultAction@CNscTree@@QEAAJPEAUtagVARIANT@@PEAPEAG@Z
    long OnGetAccDefaultAction(tagVARIANT *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAccRole@CNscTree@@QEAAJPEAUtagVARIANT@@0@Z
    long OnGetAccRole(tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateChangeNotify@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00PEAU_TREEITEM@@PEAUNSCITEMINFO@@W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    virtual long OnQIUpdateChangeNotify(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM *, NSCITEMINFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateCloudStateIcon@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@W4NscVisibleCloudStates@@I@Z
    virtual long OnQIUpdateCloudStateIcon(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateEnumDone@CNscTree@@UEAAJPEAUNSC_BKGDENUMDONEDATA@@@Z
    virtual long OnQIUpdateEnumDone(NSC_BKGDENUMDONEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateIcon@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HHKI@Z
    virtual long OnQIUpdateIcon(_TREEITEM *, NSCITEMINFO *, int, int, unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateInfoTip@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBGI@Z
    virtual long OnQIUpdateInfoTip(_TREEITEM *, NSCITEMINFO *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateOverlay@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdateOverlay(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdatePlus@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdatePlus(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateRegisterNotify@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@@Z
    virtual long OnQIUpdateRegisterNotify(_TREEITEM *, NSCITEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateValidation@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdateValidation(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewWindowActive@CNscTree@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewWindowActive(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActiveShellView@CNscTree@@UEAAJPEAPEAUIShellView@@@Z
    virtual long QueryActiveShellView(IShellView * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNscTree@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CNscTree@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNscTree@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllRoots@CNscTree@@UEAAJXZ
    virtual long RemoveAllRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMenusSB@CNscTree@@UEAAJPEAUHMENU__@@@Z
    virtual long RemoveMenusSB(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRoot@CNscTree@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveRoot(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndEditItem@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long SelectAndEditItem(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendControlMsg@CNscTree@@UEAAJII_K_JPEA_J@Z
    virtual long SendControlMsg(unsigned int, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CNscTree@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlStyle@CNscTree@@UEAAJKK@Z
    virtual long SetControlStyle(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlStyle2@CNscTree@@UEAAJW4NSTCSTYLE2@@0@Z
    virtual long SetControlStyle2(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@H@Z
    virtual long SetDirectItemCustomState(IShellItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@CNscTree@@UEAAJPEAUIUnknown@@@Z
    virtual long SetFilter(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CNscTree@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CNscTree@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndentValue@CNscTree@@UEAAXH@Z
    virtual void SetIndentValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertionThresholdValue@CNscTree@@UEAAXH@Z
    virtual void SetInsertionThresholdValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntegralValue@CNscTree@@UEAAXH@Z
    virtual void SetIntegralValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@H@Z
    virtual long SetItemCustomState(IShellItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemHeight@CNscTree@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemState@CNscTree@@UEAAJPEAUIShellItem@@KK@Z
    virtual long SetItemState(IShellItem *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuSB@CNscTree@@UEAAJPEAUHMENU__@@PEAXPEAUHWND__@@@Z
    virtual long SetMenuSB(HMENU__*, void *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPaddings@CNscTree@@UEAAXHH@Z
    virtual void SetPaddings(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateFlags@CNscTree@@UEAAJW4NSTCFLAGSPRIVATE@@@Z
    virtual long SetPrivateFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateImageList@CNscTree@@UEAAJPEAU_IMAGELIST@@@Z
    virtual long SetStateImageList(_IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatusTextSB@CNscTree@@UEAAJPEBG@Z
    virtual long SetStatusTextSB(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CNscTree@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CNscTree@@UEAAJPEBG@Z
    virtual long SetTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbarItems@CNscTree@@UEAAJPEAU_TBBUTTON@@II@Z
    virtual long SetToolbarItems(_TBBUTTON *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopMargin@CNscTree@@UEAAJI@Z
    virtual long SetTopMargin(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CNscTree@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowIsHidden@CNscTree@@UEAAXH@Z
    virtual void SetWindowIsHidden(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorSB@CNscTree@@UEAAJPEAUtagMSG@@G@Z
    virtual long TranslateAcceleratorSB(tagMSG *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeAdvise@CNscTree@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long TreeAdvise(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeUnadvise@CNscTree@@UEAAJK@Z
    virtual long TreeUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnAdvise@CNscTree@@UEAAXXZ
    virtual void UnAdvise();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExpandIDList@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_ExpandIDList(CNscTree *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SelectIDList@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_SelectIDList(CNscTree *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SelectIDListNoExpand@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_SelectIDListNoExpand(CNscTree *, IShellItem *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChange@CNscTree@@MEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00_J@Z
    virtual long _OnChange(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscTree@@MEAA@XZ
    virtual ~CNscTree();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTopMargin@CNscTree@@AEAAJXZ
    long ApplyTopMargin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterContextMenu@CNscTree@@AEAAXXZ
    void CleanupAfterContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoClassicMenu@CNscTree@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@AEBUtagPOINT@@PEAU_TREEITEM@@@Z
    void DoClassicMenu(IContextMenu *, HMENU__*, tagPOINT const &, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCuratedContextMenu@CNscTree@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@W4LOCATION_CONTEXT_FLAGS@@AEBUtagPOINT@@PEAU_TREEITEM@@PEAUIShellItem@@@Z
    void DoCuratedContextMenu(IContextMenu *, HMENU__*, int, tagPOINT const &, _TREEITEM *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDefaultActionWithItem@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long DoDefaultActionWithItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDivider@CNscTree@@AEAAXPEAUHDC__@@PEAU_TREEITEM@@@Z
    void DrawDivider(HDC__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextMenuPresenter@CNscTree@@AEAAJXZ
    long EnsureContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuTelemetryEvent@CNscTree@@AEAAXPEAUHMENU__@@IPEAUIContextMenu@@W4ContextMenuType@FileExplorerTelemetryCommon@@@Z
    void FireContextMenuTelemetryEvent(HMENU__*, unsigned int, IContextMenu *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuParentWindow@CNscTree@@AEAAPEAUHWND__@@XZ
    HWND__* GetContextMenuParentWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTextAlloc@CNscTree@@AEAAJPEAUHWND__@@PEAU_TREEITEM@@PEAPEAG@Z
    long GetItemTextAlloc(HWND__*, _TREEITEM *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationContext@CNscTree@@AEAA?AW4LOCATION_CONTEXT_FLAGS@@PEAU_TREEITEM@@@Z
    int GetLocationContext(_TREEITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumn@CNscTree@@AEAAJPEAUIShellFolder@@PEAK@Z
    long GetSortColumn(IShellFolder *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeItemDisplayName@CNscTree@@AEAAXPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@KPEAPEAG@Z
    void GetTreeItemDisplayName(IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *, unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileDialog@CNscTree@@AEAAHXZ
    int IsFileDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrast@CNscTree@@AEAA_NXZ
    bool IsHighContrast();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTreeItemIndexInDPA@CNscTree@@AEAA_NPEAV?$CDPA@UORDERITEM@@V?$CTContainer_PolicyUnOwned@UORDERITEM@@@@@@PEAUIShellFolder@@PEAU_TREEITEM@@HPEAH@Z
    bool IsTreeItemIndexInDPA(WindissectOpaque *, IShellFolder *, _TREEITEM *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveItemUpOrDown@CNscTree@@AEAAJ_N@Z
    long MoveItemUpOrDown(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CNscTree@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecurseSetItemIntegralAndPadding@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void RecurseSetItemIntegralAndPadding(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshThemeColors@CNscTree@@AEAAXXZ
    void RefreshThemeColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetIndent@CNscTree@@AEAAXXZ
    void ScaleAndSetIndent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetRowHeight@CNscTree@@AEAAXXZ
    void ScaleAndSetRowHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleDivider@CNscTree@@AEAAXXZ
    void ScaleDivider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomTooltipStyle@CNscTree@@AEAAXXZ
    void SetCustomTooltipStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageList@CNscTree@@AEAAXXZ
    void SetImageList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemIntegralAndPadding@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void SetItemIntegralAndPadding(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowMiniMenu@CNscTree@@AEAA_NPEAU_TREEITEM@@@Z
    bool ShouldShowMiniMenu(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncOrderItemWithTreeOrder@CNscTree@@AEAAXPEAU_TREEITEM@@PEAV?$CDPA@UORDERITEM@@V?$CTContainer_PolicyUnOwned@UORDERITEM@@@@@@@Z
    void SyncOrderItemWithTreeOrder(_TREEITEM *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEditIntegralAndPadding@CNscTree@@AEAAXAEAUtagTVITEMEXW@@PEAU_TREEITEM@@1@Z
    void TryEditIntegralAndPadding(tagTVITEMEXW &, _TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveDivider@CNscTree@@AEAAXPEAU_TREEITEM@@0@Z
    void TryMoveDivider(_TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDividers@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@@Z
    void UpdateDividers(_TREEITEM *, NSCITEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCustomNodeItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _AddCustomNodeItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToTree@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMIDLIST_RELATIVE@@HKPEAUIShellItemFilter@@H0HHHH@Z
    _TREEITEM * _AddItemToTree(_TREEITEM *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_RELATIVE & volatile *, int, unsigned long, IShellItemFilter *, int, _TREEITEM *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToExpandingIconsDSA@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _AddToExpandingIconsDSA(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToLegacySFC@CNscTree@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@@Z
    void _AddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyCmd@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUIContextMenu@@IPEBG@Z
    void _ApplyCmd(_TREEITEM *, IContextMenu *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignPidl@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEFBU_ITEMID_CHILD@@H@Z
    void _AssignPidl(_TREEITEM *, NSCITEMINFO *, _ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollapseItems@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _CollapseItems(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareIDs@CNscTree@@AEAAJPEAUIShellFolder@@KPEFBU_ITEMID_CHILD@@1@Z
    long _CompareIDs(IShellFolder *, unsigned long, _ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertChildId@CNscTree@@AEAAJW4FOLDER_ENUM_MODE@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU4@PEAPEAU5@@Z
    long _ConvertChildId(int, _ITEMIDLIST_ABSOLUTE const *, IShellFolder *, _ITEMID_CHILD & volatile *, IShellFolder * *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAccName@CNscTree@@AEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreateAccName(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateContextMenu@CNscTree@@AEAAPEAUHMENU__@@PEAUIContextMenu@@PEAU_TREEITEM@@W4Mode@FileExplorerContextMenu@@W4LOCATION_CONTEXT_FLAGS@@@Z
    HMENU__* _CreateContextMenu(IContextMenu *, _TREEITEM *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewFolder@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long _CreateNewFolder(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTreeview@CNscTree@@AEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreateTreeview(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteHotItem@CNscTree@@AEAAXXZ
    void _DeleteHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItemWithBeforeDeleteEvent@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _DeleteItemWithBeforeDeleteEvent(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawIcon@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUHDC__@@HPEBUtagRECT@@K@Z
    void _DrawIcon(_TREEITEM *, HDC__*, int, tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawItem@CNscTree@@AEAAXPEAU_TREEITEM@@PEBGPEAUHDC__@@PEBUtagRECT@@KHKK@Z
    void _DrawItem(_TREEITEM *, unsigned short const *, HDC__*, tagRECT const *, unsigned long, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DtRegister@CNscTree@@AEAAXXZ
    void _DtRegister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureScheduler@CNscTree@@AEAAJXZ
    long _EnsureScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureVisible@CNscTree@@AEAAXPEAU_TREEITEM@@W4ENSURE_VISIBLE_FLAGS@@@Z
    void _EnsureVisible(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterNewFolderEditMode@CNscTree@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _EnterNewFolderEditMode(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumBackgroundDone@CNscTree@@AEAAXPEAUNSC_BKGDENUMDONEDATA@@@Z
    void _EnumBackgroundDone(NSC_BKGDENUMDONEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Expand@CNscTree@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _Expand(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandNode@CNscTree@@AEAAJPEAU_TREEITEM@@IH@Z
    long _ExpandNode(_TREEITEM *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandToItem@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    _TREEITEM * _ExpandToItem(_ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandingIconsDSAUpdate@CNscTree@@AEAAXXZ
    void _ExpandingIconsDSAUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChild@CNscTree@@AEAAPEAU_TREEITEM@@PEAUIShellFolder@@PEAU2@PEFBU_ITEMID_CHILD@@@Z
    _TREEITEM * _FindChild(IShellFolder *, _TREEITEM *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChildTreeItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    _TREEITEM * _FindChildTreeItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindFromRoot@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@1H@Z
    _TREEITEM * _FindFromRoot(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CNscTree@@AEAAJPEAUIShellItem@@HPEAPEAU_TREEITEM@@_N@Z
    long _FindItem(IShellItem *, int, _TREEITEM * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRootForItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    _TREEITEM * _FindRootForItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireClickEvent@CNscTree@@AEAAJPEAU_TREEITEM@@KK@Z
    long _FireClickEvent(_TREEITEM *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlagsFromStyles@CNscTree@@AEAAXKPEAK0@Z
    void _FlagsFromStyles(unsigned long, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributesFromSelection@CNscTree@@AEAAKK@Z
    unsigned long _GetAttributesFromSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildren@CNscTree@@AEAAHPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@@Z
    int _GetChildren(IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuFromSelection@CNscTree@@AEAAJPEAU_TREEITEM@@HPEAPEAUIContextMenu@@PEAPEAUIShellItem@@@Z
    long _GetContextMenuFromSelection(_TREEITEM *, int, IContextMenu * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumFlags@CNscTree@@AEAAKPEAU_TREEITEM@@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@@Z
    unsigned long _GetEnumFlags(_TREEITEM *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstRootPidl@CNscTree@@AEAAPEAU_ITEMIDLIST_ABSOLUTE@@XZ
    _ITEMIDLIST_ABSOLUTE * _GetFirstRootPidl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullIDList@CNscTree@@AEAAPEAU_ITEMIDLIST_ABSOLUTE@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    _ITEMIDLIST_ABSOLUTE * _GetFullIDList(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLock@CNscTree@@AEAAJPEAPEAVCNscLock@@@Z
    long _GetLock(CNscLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOrderStream@CNscTree@@AEAAPEAUIStream@@PEBU_ITEMIDLIST_ABSOLUTE@@K@Z
    IStream * _GetOrderStream(_ITEMIDLIST_ABSOLUTE const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPreviousTopLevelTreeItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@@Z
    _TREEITEM * _GetPreviousTopLevelTreeItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CNscTree@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _GetSelectedItem(_ITEMIDLIST_ABSOLUTE * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemFolder@CNscTree@@AEAAJPEAU_TREEITEM@@AEBU_GUID@@PEAPEAX@Z
    long _GetTreeItemFolder(_TREEITEM *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemIDList@CNscTree@@AEAAPEFBU_ITEMIDLIST_RELATIVE@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    _ITEMIDLIST_RELATIVE & volatile * _GetTreeItemIDList(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemInfo@CNscTree@@AEAAPEAUNSCITEMINFO@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    NSCITEMINFO * _GetTreeItemInfo(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemParentFolder@CNscTree@@AEAAJPEAU_TREEITEM@@AEBU_GUID@@PEAPEAXPEAPEFBU_ITEMID_CHILD@@@Z
    long _GetTreeItemParentFolder(_TREEITEM *, _GUID const &, void * *, _ITEMID_CHILD & volatile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeOrderItem@CNscTree@@AEAAPEAUORDERITEM@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    ORDERITEM * _GetTreeOrderItem(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWinIniChange@CNscTree@@AEAAJXZ
    long _HandleWinIniChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideFloater@CNscTree@@AEAAXH@Z
    void _HideFloater(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFloater@CNscTree@@AEAAXXZ
    void _InitFloater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertChild@CNscTree@@AEAAJPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@HHHPEAPEAU2@@Z
    long _InsertChild(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *, int, int, int, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertRoot@CNscTree@@AEAAJPEAU_TREEITEM@@PEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    long _InsertRoot(_TREEITEM *, IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvalidateImageIndex@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _InvalidateImageIndex(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuCommand@CNscTree@@AEAAJPEBG@Z
    long _InvokeContextMenuCommand(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExpandable@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsExpandable(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFlatNode@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsFlatNode(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemNameInTree@CNscTree@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsItemNameInTree(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLastChild@CNscTree@@AEBA_NPEAU_TREEITEM@@@Z
    bool _IsLastChild(_TREEITEM *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOrdered@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsOrdered(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTreeItemVisible@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsTreeItemVisible(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LabelEditIsNewValueValid@CNscTree@@AEAAHPEAUtagTVDISPINFOW@@@Z
    int _LabelEditIsNewValueValid(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSF@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAHH@Z
    long _LoadSF(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeAddToLegacySFC@CNscTree@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@@Z
    void _MaybeAddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModeSupportsOrder@CNscTree@@AEAA_NPEAU_TREEITEM@@@Z
    bool _ModeSupportsOrder(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseInTree@CNscTree@@AEAAHXZ
    int _MouseInTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveNode@CNscTree@@AEAAHHHPEFBU_ITEMID_CHILD@@@Z
    int _MoveNode(int, int, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginDrag@CNscTree@@AEAAXPEAUtagNMTREEVIEWW@@@Z
    void _OnBeginDrag(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginLabelEdit@CNscTree@@AEAA_JPEAUtagTVDISPINFOW@@@Z
    int64_t _OnBeginLabelEdit(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDNotify@CNscTree@@AEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    int64_t _OnCDNotify(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChangeNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@J11W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    void _OnChangeNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CNscTree@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CNscTree@@AEAA_JFFW4Mode@FileExplorerContextMenu@@PEAUtagPOINT@@@Z
    int64_t _OnContextMenu(short, short, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDeleteItem@CNscTree@@AEAAJPEAUtagNMTREEVIEWW@@@Z
    long _OnDeleteItem(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndLabelEdit@CNscTree@@AEAA_JPEAUtagTVDISPINFOW@@@Z
    int64_t _OnEndLabelEdit(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetDisplayInfo@CNscTree@@AEAAXPEAUtagTVDISPINFOEXW@@@Z
    void _OnGetDisplayInfo(tagTVDISPINFOEXW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CNscTree@@AEAAXPEAUtagNMTVGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMTVGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemExpanding@CNscTree@@AEAAHPEAU_TREEITEM@@IHH@Z
    int _OnItemExpanding(_TREEITEM *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemExpandingMsg@CNscTree@@AEAAHPEAUtagNMTREEVIEWW@@@Z
    int _OnItemExpandingMsg(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardInput@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnKeyboardInput(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CNscTree@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyCreate@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@10@Z
    long _OnSHNotifyCreate(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyDelete@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1PEAPEAU2@@Z
    long _OnSHNotifyDelete(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyRename@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@11W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    long _OnSHNotifyRename(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyUpdateDir@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    long _OnSHNotifyUpdateDir(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyUpdateItem@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    void _OnSHNotifyUpdateItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelChange@CNscTree@@AEAAHXZ
    int _OnSelChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetCursor@CNscTree@@AEAA_JPEAUtagNMMOUSE@@@Z
    int64_t _OnSetCursor(tagNMMOUSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetSelection@CNscTree@@AEAAXXZ
    void _OnSetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSubclassKeyboardInput@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnSubclassKeyboardInput(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowCleanup@CNscTree@@AEAAJXZ
    long _OnWindowCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistChildOrder@CNscTree@@AEAAXPEAU_TREEITEM@@_N@Z
    void _PersistChildOrder(_TREEITEM *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QuerySelection@CNscTree@@AEAAJPEAPEAUIContextMenu@@PEAPEAU_TREEITEM@@@Z
    long _QuerySelection(IContextMenu * *, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReExtractIcon@CNscTree@@AEAAXPEAUtagNMTVASYNCDRAW@@@Z
    void _ReExtractIcon(tagNMTVASYNCDRAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecursiveRegisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RecursiveRegisterNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecursiveUnregisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RecursiveUnregisterNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawLastHotItem@CNscTree@@AEAAXXZ
    void _RedrawLastHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Refresh@CNscTree@@AEAAJXZ
    long _Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshHotItem@CNscTree@@AEAAXXZ
    void _RefreshHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RegisterNotify(_TREEITEM *, NSCITEMINFO *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveEmptyTextItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _RemoveEmptyTextItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromExpandingIconsDSA@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _RemoveFromExpandingIconsDSA(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItem@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HHH@Z
    _TREEITEM * _SelectItem(_ITEMIDLIST_ABSOLUTE const *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectPidl@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    _TREEITEM * _SelectPidl(_ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExStyle@CNscTree@@AEAAKK@Z
    unsigned long _SetExStyle(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPaddingToFirstTreeItem@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _SetPaddingToFirstTreeItem(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectedItem@CNscTree@@AEAAJPEAUIShellItem@@@Z
    long _SetSelectedItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectedItemNoExpand@CNscTree@@AEAAJPEAUIShellItem@@@Z
    long _SetSelectedItemNoExpand(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStyle@CNscTree@@AEAAKK@Z
    unsigned long _SetStyle(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShellItemForTreeItem@CNscTree@@AEAAJHPEAU_TREEITEM@@PEAPEAUIShellItem@@@Z
    long _ShellItemForTreeItem(int, _TREEITEM *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldApplyPadding@CNscTree@@AEAAHPEAU_TREEITEM@@0@Z
    int _ShouldApplyPadding(_TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInsertChild@CNscTree@@AEAAHPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldInsertChild(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInsertChildCheckPin@CNscTree@@AEAAHPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldInsertChildCheckPin(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShow@CNscTree@@AEAAHPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowFloater@CNscTree@@AEAAXUtagRECT@@PEAU_TREEITEM@@W4tagFLOATERTYPE@@@Z
    void _ShowFloater(tagRECT, _TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Sort@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUIShellFolder@@HK@Z
    void _Sort(_TREEITEM *, IShellFolder *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SortByName@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long _SortByName(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartBackgroundEnum@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAHHH@Z
    long _StartBackgroundEnum(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClass@CNscTree@@AEAAXXZ
    void _SubClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClassTreeWndProc@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubClassTreeWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SupportsCustomNode@CNscTree@@AEAAHXZ
    int _SupportsCustomNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TVStateFromFlags@CNscTree@@AEAAKK@Z
    unsigned long _TVStateFromFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeCompare@CNscTree@@CAH_J00@Z
    static int _TreeCompare(int64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeGhostCutItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _TreeGhostCutItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeInvalidateItemInfo@CNscTree@@AEAAXPEAU_TREEITEM@@I@Z
    void _TreeInvalidateItemInfo(_TREEITEM *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeOrder@CNscTree@@CAH_J00@Z
    static int _TreeOrder(int64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeRemoveCutState@CNscTree@@AEAAJXZ
    long _TreeRemoveCutState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeSetItemState@CNscTree@@AEAAXPEAU_TREEITEM@@II@Z
    void _TreeSetItemState(_TREEITEM *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnSubClass@CNscTree@@AEAAXPEAUHWND__@@@Z
    void _UnSubClass(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _UnregisterNotify(_TREEITEM *, NSCITEMINFO *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDir@CNscTree@@AEAAJPEAU_TREEITEM@@H@Z
    long _UpdateDir(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemDisplayInfo@CNscTree@@AEAAHKPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@PEAH3@Z
    int _UpdateItemDisplayInfo(unsigned long, IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WasRenamed@CNscTree@@AEAAHPEAUIShellFolder@@PEAU_ITEMID_CHILD@@@Z
    int _WasRenamed(IShellFolder *, _ITEMID_CHILD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SFCDestroyCB@CNscTree@@CAHPEAUSFCITEM@1@PEAX@Z
    static int s_SFCDestroyCB(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubClassTreeWndProc@CNscTree@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubClassTreeWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CNscTree@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
