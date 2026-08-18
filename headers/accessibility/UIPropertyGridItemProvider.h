#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class UIPropertyGridItemProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIPropertyGridItemProvider@@QEAA@XZ
    UIPropertyGridItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@UIPropertyGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpan@UIPropertyGridItemProvider@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGrid@UIPropertyGridItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_ContainingGrid(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Row@UIPropertyGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpan@UIPropertyGridItemProvider@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
};
