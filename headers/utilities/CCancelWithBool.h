#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CCancelWithBool {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCancelWithBool@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCancelWithBool@@QEAA@XZ
    CCancelWithBool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CCancelWithBool@@UEAAJK@Z
    virtual long Cancel(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCancelWithBool@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCancelWithBool@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestCancel@CCancelWithBool@@UEAAJXZ
    virtual long TestCancel();
};
