#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CVirtualUIGroupItemList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualUIGroupItemList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CVirtualUIGroupItemList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CVirtualUIGroupItemList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualUIGroupItemList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualUIGroupItemList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CVirtualUIGroupItemList@@SAJPEAVItemRowLayout@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(ItemRowLayout *, _GUID const &, void * *);
};
