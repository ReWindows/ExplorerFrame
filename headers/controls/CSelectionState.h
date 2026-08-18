#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 50 member(s).
class CSelectionState {
public:
    class CInvertStates;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSelectionState@@QEAA@XZ
    CSelectionState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSelectedItem@CSelectionState@@QEAAJPEAPEAUIItem@@@Z
    long GetFirstSelectedItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastExplicitlySelectedItem@CSelectionState@@QEAAJPEAUIItem@@PEAUIItemCollection@@PEAI@Z
    long GetLastExplicitlySelectedItem(IItem *, IItemCollection *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSelectedIndex@CSelectionState@@QEAAJHPEAH@Z
    long GetNextSelectedIndex(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CSelectionState@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelection@CSelectionState@@QEAAHXZ
    int HasSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateSelectionArrays@CSelectionState@@QEAAXXZ
    void InvalidateSelectionArrays();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectAll@CSelectionState@@QEAAHXZ
    int IsSelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CSelectionState@@QEAAHPEAUIItem@@@Z
    int IsSelected(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionEvent@CSelectionState@@QEAAJPEAUIItemCollection@@PEBUCollectionEventParams@@@Z
    long OnCollectionEvent(IItemCollection *, CollectionEventParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupByChanged@CSelectionState@@QEAAJXZ
    long OnGroupByChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllSelectionStates@CSelectionState@@QEAAXXZ
    void RemoveAllSelectionStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChange@CSelectionState@@QEAAJW4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAUIItem@@@Z
    long SelectionChange(int, IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIItemsView@CSelectionState@@QEAAJPEAVUIItemsView@@@Z
    long SetUIItemsView(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionStateIfNewer@CSelectionState@@QEAAXPEAUIItem@@@Z
    void UpdateSelectionStateIfNewer(IItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSelectionState@@QEAA@XZ
    ~CSelectionState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySelectionChange@CSelectionState@@AEAAJW4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAPEAUIItem@@HPEAU3@@Z
    long _ApplySelectionChange(int, IItem * *, int, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BubbleImplicitSelectionToGroupOfItem@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _BubbleImplicitSelectionToGroupOfItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearSelectionState@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _ClearSelectionState(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSelectionArrayWithStartingItem@CSelectionState@@AEAAJPEAUIItem@@AEBU_GUID@@PEAPEAX@Z
    long _CreateSelectionArrayWithStartingItem(IItem *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CtrlSelectOrDeselect@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _CtrlSelectOrDeselect(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Deselect@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _Deselect(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeselectAll@CSelectionState@@AEAAJXZ
    long _DeselectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeselectGroup@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _DeselectGroup(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeselectItem@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _DeselectItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSharedItemDevirtualizerInitialState@CSelectionState@@AEAAJXZ
    long _EnsureSharedItemDevirtualizerInitialState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSharedVOFullItemDevirtualizer@CSelectionState@@AEAAJXZ
    long _EnsureSharedVOFullItemDevirtualizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindFirstItemInCollection@CSelectionState@@AEAAJPEAUIItemCollection@@P6AHPEAUIItem@@PEAV1@@ZPEAPEAU3@@Z
    long _FindFirstItemInCollection(IItemCollection *, int ( *)(IItem *, CSelectionState *), IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectionState@CSelectionState@@AEAAJPEAUIItem@@PEAUSelectionState@@W4ISGROUP@1@@Z
    long _GetSelectionState(IItem *, SelectionState *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvertSelection@CSelectionState@@AEAAJXZ
    long _InvertSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFocusFirstArrayInvalidated@CSelectionState@@AEAAHPEAUIItem@@@Z
    int _IsFocusFirstArrayInvalidated(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSelected@CSelectionState@@AEAAJPEAUIItem@@PEAHPEAW4SELECTED_TYPE@@W4ISGROUP@1@@Z
    long _IsSelected(IItem *, int *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSelectedByParentChain@CSelectionState@@AEAAJPEAUIItem@@PEAW4ITEM_IS_SELECTED@@W4ISGROUP@1@@Z
    long _IsSelectedByParentChain(IItem *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAllStaleGroupsContainingItem@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _RemoveAllStaleGroupsContainingItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveChildSelectionStates@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _RemoveChildSelectionStates(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveStaleGroup@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _RemoveStaleGroup(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveStaleRoot@CSelectionState@@AEAAJXZ
    long _RemoveStaleRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Select@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _Select(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectGroup@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _SelectGroup(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItem@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _SelectItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItemsExclusive@CSelectionState@@AEAAJPEAUIItemCollection@@PEAUIItem@@1HPEAH@Z
    long _SelectItemsExclusive(IItemCollection *, IItem *, IItem *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItemsFromExclusive@CSelectionState@@AEAAJPEAUIItemCollection@@PEAUIItem@@H@Z
    long _SelectItemsFromExclusive(IItemCollection *, IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItemsToExclusive@CSelectionState@@AEAAJPEAUIItemCollection@@PEAUIItem@@H@Z
    long _SelectItemsToExclusive(IItemCollection *, IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectRange@CSelectionState@@AEAAJPEAUIItemCollection@@IIIH@Z
    long _SelectRange(IItemCollection *, unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAnchor@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _SetAnchor(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectionState@CSelectionState@@AEAAJPEAUIItem@@W4GROUPNESS_HINT@@W4ITEM_IS_SELECTED@@W4SELECTED_TYPE@@@Z
    long _SetSelectionState(IItem *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShiftSelect@CSelectionState@@AEAAJPEAUIItem@@H@Z
    long _ShiftSelect(IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SingleSelect@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _SingleSelect(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnsetSelectionState@CSelectionState@@AEAAJPEAUIItem@@@Z
    long _UnsetSelectionState(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UseMVPAlgorithms@CSelectionState@@AEAAHXZ
    int _UseMVPAlgorithms();
};
