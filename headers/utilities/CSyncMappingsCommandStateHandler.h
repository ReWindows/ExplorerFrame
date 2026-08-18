#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CSyncMappingsCommandStateHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSyncMappingsCommandStateHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSyncMappingsCommandStateHandler@@QEAA@XZ
    CSyncMappingsCommandStateHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSyncMappingsCommandStateHandler@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSyncMappingsCommandStateHandler@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSyncMappingsCommandStateHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSyncMappingsCommandStateHandler@@UEAAKXZ
    virtual unsigned long Release();
};
