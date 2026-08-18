#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CPendingNavigation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPendingNavigation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelNavigation@CPendingNavigation@@UEAAJXZ
    virtual long CancelNavigation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CPendingNavigation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetLocation(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionCreated@CPendingNavigation@@UEAAJJPEAUIUnknown@@@Z
    virtual long OnConnectionCreated(long, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPendingNavigation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CPendingNavigation@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPendingNavigation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPendingNavigation@@QEAA@XZ
    ~CPendingNavigation();
};
