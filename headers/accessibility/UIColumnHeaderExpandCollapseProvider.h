#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIColumnHeaderExpandCollapseProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@UIColumnHeaderExpandCollapseProvider@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@UIColumnHeaderExpandCollapseProvider@@UEAAJXZ
    virtual long Expand();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIColumnHeaderExpandCollapseProvider@@QEAA@XZ
    UIColumnHeaderExpandCollapseProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@UIColumnHeaderExpandCollapseProvider@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
};
