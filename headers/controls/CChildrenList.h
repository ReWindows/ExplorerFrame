#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CChildrenList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CChildrenList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CChildrenList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CChildrenList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CChildrenList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CChildrenList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CChildrenList@@SAJPEAVElement@DirectUI@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(::DirectUI::Element *, _GUID const &, void * *);
};
