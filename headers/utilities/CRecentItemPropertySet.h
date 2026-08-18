#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CRecentItemPropertySet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecentItemPropertySet@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CRecentItemPropertySet@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecentItemPropertySet@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecentItemPropertySet@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecentItemPropertySet@@AEAA@XZ
    ~CRecentItemPropertySet();
};
