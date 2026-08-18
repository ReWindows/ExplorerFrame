#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CAddressEditAccessible {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddressEditAccessible@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddressEditAccessible@@QEAA@PEAUHWND__@@0@Z
    CAddressEditAccessible(HWND__*, HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddressEditAccessible@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddressEditAccessible@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CAddressEditAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accValue@CAddressEditAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddressEditAccessible@@MEAA@XZ
    virtual ~CAddressEditAccessible();
};
