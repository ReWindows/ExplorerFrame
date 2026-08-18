#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class ShStrW {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ShStrW@@QEAAJPEBGK@Z
    long Append(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ShStrW@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@ShStrW@@QEAAJK@Z
    long SetSize(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShStrW@@QEAA@XZ
    ~ShStrW();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStr@ShStrW@@AEAAJPEBDK@Z
    long _SetStr(char const *, unsigned long);
};
