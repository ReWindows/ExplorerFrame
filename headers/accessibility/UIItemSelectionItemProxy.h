#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
class UIItemSelectionItemProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@UIItemSelectionItemProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@UIItemSelectionItemProxy@@IEAAJPEAVUIItemsView@@PEAVUIItem@@W4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@@Z
    long SetSelection(UIItemsView *, UIItem *, int);
};
