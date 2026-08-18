#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 37 member(s).
class CDeskBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeskBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeskBar@@QEAA@XZ
    CDeskBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestricted@CDeskBar@@UEAAJPEBU_GUID@@KPEAUtagVARIANT@@PEAK@Z
    virtual long IsRestricted(_GUID const *, unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeskBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDeskBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeskBar@@UEAAKXZ
    virtual unsigned long Release();
};
