#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 60 member(s).
class CSelectionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSelectionManager@@QEAA@PEAUIFocusManager@@@Z
    CSelectionManager(IFocusManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@CSelectionManager@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long FocusChanged(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSelectedItem@CSelectionManager@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetFirstSelectedItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastExplicitlySelectedItem@CSelectionManager@@UEAAJPEAUIItem@@PEAUIItemCollection@@PEAI@Z
    virtual long GetLastExplicitlySelectedItem(IItem *, IItemCollection *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSelectedIndex@CSelectionManager@@UEAAJHPEAH@Z
    virtual long GetNextSelectedIndex(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CSelectionManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionManagerSpy@CSelectionManager@@UEAAJPEAPEAUISelectionManagerSpy@@@Z
    virtual long GetSelectionManagerSpy(ISelectionManagerSpy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMarkedItem@CSelectionManager@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetSelectionMarkedItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionModes@CSelectionManager@@UEAAJPEAW4__MIDL___MIDL_itf_itemsview_0000_0005_0001@@@Z
    virtual long GetSelectionModes(int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStartingWithItem@CSelectionManager@@UEAAJPEAUIItem@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSelectionStartingWithItem(IItem *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionState@CSelectionManager@@UEAAJPEAPEBVCSelectionState@@@Z
    virtual long GetSelectionState(CSelectionState const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputEvent@CSelectionManager@@UEAAJPEAUInputEvent@DirectUI@@@Z
    virtual long HandleInputEvent(::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelection@CSelectionManager@@UEAAHXZ
    virtual int HasSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSelectMode@CSelectionManager@@UEAAHXZ
    virtual int IsInSelectMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMarqueeActive@CSelectionManager@@UEAAHXZ
    virtual int IsMarqueeActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectAll@CSelectionManager@@UEAAHXZ
    virtual int IsSelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CSelectionManager@@UEAAHPEAUIItem@@@Z
    virtual int IsSelected(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionEvent@CSelectionManager@@UEAAJPEAUIItemCollection@@PEBUCollectionEventParams@@@Z
    virtual long OnCollectionEvent(IItemCollection *, CollectionEventParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupByChanged@CSelectionManager@@UEAAJXZ
    virtual long OnGroupByChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemsModified@CSelectionManager@@UEAAXXZ
    virtual void OnSelectedItemsModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CSelectionManager@@UEAAJW4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@@Z
    virtual long OnSelectionChanged(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@CSelectionManager@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChange@CSelectionManager@@UEAAJW4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAUIItem@@@Z
    virtual long SelectionChange(int, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChangeList@CSelectionManager@@UEAAJW4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAPEAUIItem@@H@Z
    virtual long SelectionChangeList(int, IItem * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectMode@CSelectionManager@@UEAAXH@Z
    virtual void SetSelectMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionModes@CSelectionManager@@UEAAJW4FOLDERFLAGS@@@Z
    virtual long SetSelectionModes(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIItemsView@CSelectionManager@@UEAAJPEAVUIItemsView@@@Z
    virtual long SetUIItemsView(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionStateIfNewer@CSelectionManager@@UEAAXPEAUIItem@@@Z
    virtual void UpdateSelectionStateIfNewer(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserMovedFocusWithKeyboard@CSelectionManager@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long UserMovedFocusWithKeyboard(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSelectionManager@@QEAA@XZ
    ~CSelectionManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForWhitespaceInElementTree@CSelectionManager@@AEAAXPEAVElement@DirectUI@@PEAUCheckWhitespaceEvent@@@Z
    void _CheckForWhitespaceInElementTree(::DirectUI::Element *, CheckWhitespaceEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearSelectionForBackgroundClick@CSelectionManager@@AEAAXPEAUMouseEvent@DirectUI@@@Z
    void _ClearSelectionForBackgroundClick(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMarquee@CSelectionManager@@AEAAJXZ
    long _CreateMarquee();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectableItemFromElement@CSelectionManager@@AEAAJPEAVElement@DirectUI@@PEAPEAUIItem@@PEAPEAVUIItem@@@Z
    long _GetSelectableItemFromElement(::DirectUI::Element *, IItem * *, UIItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleHoverSelect@CSelectionManager@@AEAAJPEAUMouseEvent@DirectUI@@@Z
    long _HandleHoverSelect(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleLeftMouseDown@CSelectionManager@@AEAAJPEAUMouseEvent@DirectUI@@@Z
    long _HandleLeftMouseDown(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleLeftMouseUp@CSelectionManager@@AEAAJPEAUMouseEvent@DirectUI@@@Z
    long _HandleLeftMouseUp(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleRightMouseDown@CSelectionManager@@AEAAJPEAUMouseEvent@DirectUI@@@Z
    long _HandleRightMouseDown(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSpaceKey@CSelectionManager@@AEAAJPEAUKeyboardEvent@DirectUI@@@Z
    long _HandleSpaceKey(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsClickInItemWhitespace@CSelectionManager@@AEAAHPEAUMouseEvent@DirectUI@@@Z
    int _IsClickInItemWhitespace(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateElementTreeFromItemsHost@CSelectionManager@@AEAAJPEAVElement@DirectUI@@W4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@@Z
    long _UpdateElementTreeFromItemsHost(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateElementTreeFromItemsHostWorker@CSelectionManager@@AEAAJPEAVElement@DirectUI@@W4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAUSelectionEventChange@1@@Z
    long _UpdateElementTreeFromItemsHostWorker(::DirectUI::Element *, int, WindissectOpaque *);
};
