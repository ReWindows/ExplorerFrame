#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIItemValueProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@UIItemValueProvider@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemValueProvider@@QEAA@XZ
    UIItemValueProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@UIItemValueProvider@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@UIItemValueProvider@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
};
