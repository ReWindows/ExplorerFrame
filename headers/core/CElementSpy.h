#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CElementSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CElementSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CElementSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CElementSpy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CElementSpy@@SAJPEAVElement@DirectUI@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(::DirectUI::Element *, _GUID const &, void * *);
};
