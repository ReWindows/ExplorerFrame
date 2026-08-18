#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 21 member(s).
class CFocusManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFocusManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CFocusManager@@UEAAJPEAUIFocusAdviseSink@@PEAK@Z
    virtual long Advise(IFocusAdviseSink *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@CFocusManager@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetFocusedElement(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CFocusManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFocusedItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedSubItemIndex@CFocusManager@@UEAAJPEAH@Z
    virtual long GetFocusedSubItemIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdealFocusedItem@CFocusManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetIdealFocusedItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdealFocusedItemIndex@CFocusManager@@UEAAJPEAVItemIndex@@@Z
    virtual long GetIdealFocusedItemIndex(ItemIndex *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusedItemIdeal@CFocusManager@@UEAAJXZ
    virtual long IsFocusedItemIdeal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionEvent@CFocusManager@@UEAAJPEAUIItemCollection@@PEBUCollectionEventParams@@@Z
    virtual long OnCollectionEvent(IItemCollection *, CollectionEventParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerAttach@CFocusManager@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CFocusManager@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFocusManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFocusManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElement@CFocusManager@@UEAAJPEAVElement@DirectUI@@W4__MIDL___MIDL_itf_itemsview_0000_0003_0001@@@Z
    virtual long SetFocusedElement(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIItemsView@CFocusManager@@UEAAJPEAVUIItemsView@@@Z
    virtual long SetUIItemsView(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CFocusManager@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusedElement@CFocusManager@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long UpdateFocusedElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusedSubItemIndex@CFocusManager@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long UpdateFocusedSubItemIndex(::DirectUI::Element *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFocusManager@@AEAA@XZ
    CFocusManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGroupedItemIndex@CFocusManager@@AEAA?AVItemIndex@@PEAVUIItem@@@Z
    ItemIndex _GetGroupedItemIndex(UIItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFocusManager@@AEAA@XZ
    ~CFocusManager();
};
