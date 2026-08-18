#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CSearchTabHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchTabHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CSearchTabHandler@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchTabHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchTabHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CSearchTabHandler@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
};
