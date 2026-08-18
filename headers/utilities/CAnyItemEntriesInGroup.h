#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class CAnyItemEntriesInGroup {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnyItemEntriesInGroup@@QEAA@PEAUIItem@@W4ITEM_IS_SELECTED@@PEAUICollectionCache@@@Z
    CAnyItemEntriesInGroup(IItem *, int, ICollectionCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CAnyItemEntriesInGroup@@QEAAHAEBV?$CComPtr@UIItem@@@ATL@@AEBUSelectionState@@@Z
    int Enum(WindissectOpaque const &, SelectionState const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnyItemEntriesInGroup@@QEAA@XZ
    ~CAnyItemEntriesInGroup();
};
