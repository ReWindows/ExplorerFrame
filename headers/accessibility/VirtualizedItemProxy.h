#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class VirtualizedItemProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@VirtualizedItemProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollItem@VirtualizedItemProxy@@AEAAJPEAUIItem@@PEAPEAUIRawElementProviderSimple@@@Z
    long ScrollItem(IItem *, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRealizedItem@VirtualizedItemProxy@@AEAAJPEAUINDEX_AND_VERSION@@IPEBGPEAPEAUIItem@@@Z
    long _FindRealizedItem(INDEX_AND_VERSION *, unsigned int, unsigned short const *, IItem * *);
};
