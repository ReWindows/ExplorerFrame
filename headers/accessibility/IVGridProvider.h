#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class IVGridProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@IVGridProvider@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetItem(int, int, IRawElementProviderSimple * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IVGridProvider@@QEAA@XZ
    IVGridProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnCount@IVGridProvider@@UEAAJPEAH@Z
    virtual long get_ColumnCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowCount@IVGridProvider@@UEAAJPEAH@Z
    virtual long get_RowCount(int *);
};
