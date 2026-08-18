#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CElementSpyBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CElementSpyBase@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetChildren(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CElementSpyBase@@UEAAJPEAPEAUIElementSpy@@@Z
    virtual long GetParent(IElementSpy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CElementSpyBase@@UEAAJW4ELEMENTSPYVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayName@CElementSpyBase@@AEAAJPEAGH@Z
    long _GetDisplayName(unsigned short *, int);
};
