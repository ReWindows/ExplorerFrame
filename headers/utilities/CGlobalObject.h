#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CGlobalObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGlobalObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalObject@@QEAA@P6AJAEBU_GUID@@PEAPEAX@Z@Z
    CGlobalObject(long ( *)(_GUID const &, void * *));
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGlobalObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CGlobalObject@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGlobalObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CGlobalObject@@QEAAXXZ
    void Uninitialize();
};
