#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
// Base evidence: CElementWithIUnknown (likely; classinfo-template-instantiation).
class CElementWithSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CElementWithSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CElementWithSite@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CElementWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CElementWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CElementWithSite@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CElementWithSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CElementWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
};
