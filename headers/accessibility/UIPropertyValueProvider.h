#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIPropertyValueProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@UIPropertyValueProvider@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIPropertyValueProvider@@QEAA@XZ
    UIPropertyValueProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@UIPropertyValueProvider@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@UIPropertyValueProvider@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
};
