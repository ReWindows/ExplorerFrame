#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CFrameWorkItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFrameWorkItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatchable@CFrameWorkItem@@UEAAJPEAH@Z
    virtual long GetDispatchable(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFrameWorkItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFrameWorkItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDispatchable@CFrameWorkItem@@UEAAJH@Z
    virtual long SetDispatchable(int);
};
