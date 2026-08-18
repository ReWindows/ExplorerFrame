#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 16 member(s).
class UIItemProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIItemProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@UIItemProvider@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetElement(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndices@UIItemProvider@@UEAAJPEAUINDEX_AND_VERSION@@IPEAI@Z
    virtual long GetIndices(INDEX_AND_VERSION *, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIItemProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIItemProvider@@UEAAKXZ
    virtual unsigned long Release();
};
