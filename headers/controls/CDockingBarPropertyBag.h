#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CDockingBarPropertyBag {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDockingBarPropertyBag@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDockingBarPropertyBag@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CDockingBarPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDockingBarPropertyBag@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataDWORD@CDockingBarPropertyBag@@UEAAJW4ENUMPROPDATA@@K@Z
    virtual long SetDataDWORD(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CDockingBarPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDockingBarPropertyBag@@IEAA@XZ
    CDockingBarPropertyBag();
};
