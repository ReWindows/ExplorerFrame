#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 20 member(s).
class CActionIdExecute {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActionIdExecute@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CActionIdExecute@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CActionIdExecute@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActionIdExecute@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActionIdExecute@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActionIdExecute@@UEAA@XZ
    virtual ~CActionIdExecute();
};
