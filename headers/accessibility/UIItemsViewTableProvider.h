#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIItemsViewTableProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaders@UIItemsViewTableProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaders(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaders@UIItemsViewTableProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaders(tagSAFEARRAY * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemsViewTableProvider@@QEAA@XZ
    UIItemsViewTableProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajor@UIItemsViewTableProvider@@UEAAJPEAW4RowOrColumnMajor@@@Z
    virtual long get_RowOrColumnMajor(int *);
};
