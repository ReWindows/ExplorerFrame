#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CSiteWithNamespacePropertyBag {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSiteWithNamespacePropertyBag@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSiteWithNamespacePropertyBag@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSiteWithNamespacePropertyBag@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSiteWithNamespacePropertyBag@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSiteWithNamespacePropertyBag@@MEAA@XZ
    virtual ~CSiteWithNamespacePropertyBag();
};
