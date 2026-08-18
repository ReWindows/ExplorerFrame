#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class CBrowserThreadHandshake {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserThreadHandshake@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserThreadHandshake@@QEAA@PEAXPEAUIStream@@PEAG@Z
    CBrowserThreadHandshake(void *, IStream *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAgileBrowserReference@CBrowserThreadHandshake@@UEAAJPEAPEAUIAgileReference@@@Z
    virtual long GetAgileBrowserReference(IAgileReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventName@CBrowserThreadHandshake@@UEAAJPEAPEAG@Z
    virtual long GetEventName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CBrowserThreadHandshake@@UEAAJXZ
    virtual long GetResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CBrowserThreadHandshake@@UEAAJPEAPEAUIStream@@@Z
    virtual long GetStream(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAgileBrowserReference@CBrowserThreadHandshake@@UEAAJPEAUIAgileReference@@@Z
    virtual long PutAgileBrowserReference(IAgileReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutResult@CBrowserThreadHandshake@@UEAAJJ@Z
    virtual long PutResult(long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserThreadHandshake@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserThreadHandshake@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalEvent@CBrowserThreadHandshake@@UEAAJXZ
    virtual long SetInternalEvent();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowserThreadHandshake@@AEAA@XZ
    ~CBrowserThreadHandshake();
};
