#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class UIPropertyTableItemProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaderItems@UIPropertyTableItemProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItems@UIPropertyTableItemProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaderItems(tagSAFEARRAY * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIPropertyTableItemProvider@@QEAA@XZ
    UIPropertyTableItemProvider();
};
