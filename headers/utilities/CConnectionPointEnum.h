#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CConnectionPointEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConnectionPointEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectionPointEnum@@QEAA@PEAVCConnectionPoint@@H@Z
    CConnectionPointEnum(CConnectionPoint *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CConnectionPointEnum@@UEAAJPEAPEAUIEnumConnections@@@Z
    virtual long Clone(IEnumConnections * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CConnectionPointEnum@@UEAAJKPEAUtagCONNECTDATA@@PEAK@Z
    virtual long Next(unsigned long, tagCONNECTDATA *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConnectionPointEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConnectionPointEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CConnectionPointEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CConnectionPointEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
