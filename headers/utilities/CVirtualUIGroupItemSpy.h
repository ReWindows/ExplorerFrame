#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CVirtualUIGroupItemSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualUIGroupItemSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CVirtualUIGroupItemSpy@@UEAAJW4VIRTUALUIGROUPITEMVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualUIGroupItemSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualUIGroupItemSpy@@UEAAKXZ
    virtual unsigned long Release();
};
