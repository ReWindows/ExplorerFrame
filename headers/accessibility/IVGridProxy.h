#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class IVGridProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@IVGridProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGridColumnCount@IVGridProxy@@AEAAJPEAH@Z
    long _GetGridColumnCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGridItem@IVGridProxy@@AEAAJHHPEAPEAUIRawElementProviderSimple@@@Z
    long _GetGridItem(int, int, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGridRowCount@IVGridProxy@@AEAAJPEAH@Z
    long _GetGridRowCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemGridLayout@IVGridProxy@@AEAAJPEAPEAVItemGridLayout@@@Z
    long _GetItemGridLayout(ItemGridLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemRowLayout@IVGridProxy@@AEAAJPEAPEAVItemRowLayout@@@Z
    long _GetItemRowLayout(ItemRowLayout * *);
};
