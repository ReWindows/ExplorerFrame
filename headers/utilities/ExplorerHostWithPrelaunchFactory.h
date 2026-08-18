#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class ExplorerHostWithPrelaunchFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ExplorerHostWithPrelaunchFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExplorerHostWithPrelaunchFactory@@QEAA@XZ
    ExplorerHostWithPrelaunchFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@ExplorerHostWithPrelaunchFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplorerHostWithPrelaunchFactory@@UEAA@XZ
    virtual ~ExplorerHostWithPrelaunchFactory();
};
