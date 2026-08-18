#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIGroupHeaderExpandCollapseProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@UIGroupHeaderExpandCollapseProvider@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@UIGroupHeaderExpandCollapseProvider@@UEAAJXZ
    virtual long Expand();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIGroupHeaderExpandCollapseProvider@@QEAA@XZ
    UIGroupHeaderExpandCollapseProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@UIGroupHeaderExpandCollapseProvider@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
};
