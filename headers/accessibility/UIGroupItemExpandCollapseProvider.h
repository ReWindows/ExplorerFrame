#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIGroupItemExpandCollapseProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@UIGroupItemExpandCollapseProvider@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@UIGroupItemExpandCollapseProvider@@UEAAJXZ
    virtual long Expand();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIGroupItemExpandCollapseProvider@@QEAA@XZ
    UIGroupItemExpandCollapseProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@UIGroupItemExpandCollapseProvider@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
};
