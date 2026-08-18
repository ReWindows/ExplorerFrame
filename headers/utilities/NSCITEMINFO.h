#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class NSCITEMINFO {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NSCITEMINFO@@QEAA@XZ
    NSCITEMINFO();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NSCITEMINFO@@QEAAXH@Z
    void Release(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeData@NSCITEMINFO@@AEAAXXZ
    void _FreeData();
};
