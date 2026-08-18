#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class AddressEditAccessible {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AddressEditAccessible@@QEAA@PEAUIAccessible@@PEAUHWND__@@@Z
    AddressEditAccessible(IAccessible *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@AddressEditAccessible@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@AddressEditAccessible@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@AddressEditAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddressEditAccessible@@UEAA@XZ
    virtual ~AddressEditAccessible();
};
