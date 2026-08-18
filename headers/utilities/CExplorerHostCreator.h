#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CExplorerHostCreator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerHostCreator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerHostCreator@@QEAA@XZ
    CExplorerHostCreator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHost@CExplorerHostCreator@@UEAAJAEBU_GUID@@@Z
    virtual long CreateHost(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerHostCreator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerHostCreator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunHost@CExplorerHostCreator@@UEAAJXZ
    virtual long RunHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUp@CExplorerHostCreator@@AEAAXXZ
    void _CleanUp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerHostCreator@@AEAA@XZ
    ~CExplorerHostCreator();
};
