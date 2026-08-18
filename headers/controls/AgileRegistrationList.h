#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class AgileRegistrationList {
public:
    class AgileCallbackArray;
    class Item;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z
    long GetCallbackArray(IObjectArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z
    long Register(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@AgileRegistrationList@@QEAAJK@Z
    long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AgileRegistrationList@@QEAA@XZ
    ~AgileRegistrationList();
};
