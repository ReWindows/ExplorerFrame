#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
namespace CItemsView {
class COrderedItemObjectCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@COrderedItemObjectCollection@CItemsView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COrderedItemObjectCollection@CItemsView@@UEAA@XZ
    virtual ~COrderedItemObjectCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValidStartingItem@COrderedItemObjectCollection@CItemsView@@AEAAJPEAUIItem@@PEAPEAU3@@Z
    long _GetValidStartingItem(IItem *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnsureDevirtualized@COrderedItemObjectCollection@CItemsView@@EEAAJXZ
    virtual long v_EnsureDevirtualized();
};
} // namespace CItemsView
