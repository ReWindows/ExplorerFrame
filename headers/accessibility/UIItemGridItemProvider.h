#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class UIItemGridItemProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemGridItemProvider@@QEAA@XZ
    UIItemGridItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@UIItemGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpan@UIItemGridItemProvider@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGrid@UIItemGridItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_ContainingGrid(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Row@UIItemGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpan@UIItemGridItemProvider@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
};
