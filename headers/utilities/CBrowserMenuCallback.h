#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 17 member(s).
class CBrowserMenuCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserMenuCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserMenuCallback@@QEAA@XZ
    CBrowserMenuCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackSM@CBrowserMenuCallback@@UEAAJPEAUtagSMDATA@@I_K_J@Z
    virtual long CallbackSM(tagSMDATA *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserMenuCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserMenuCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CBrowserMenuCallback@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAutoExpandState@CBrowserMenuCallback@@AEAAJPEAK@Z
    long _GetAutoExpandState(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultIcon@CBrowserMenuCallback@@AEAAJPEAGPEAH@Z
    long _GetDefaultIcon(unsigned short *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetObject@CBrowserMenuCallback@@AEAAJPEAUtagSMDATA@@AEBU_GUID@@PEAPEAX@Z
    long _GetObject(tagSMDATA *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CBrowserMenuCallback@@AEAAJPEAUHMENU__@@IPEAUIUnknown@@@Z
    long _Init(HMENU__*, unsigned int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItem@CBrowserMenuCallback@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    long _SelectItem(_ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
};
