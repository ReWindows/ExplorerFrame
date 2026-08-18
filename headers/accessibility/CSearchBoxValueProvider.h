#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CSearchBoxValueProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSearchBoxValueProvider@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CSearchBoxValueProvider@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CSearchBoxValueProvider@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
};
