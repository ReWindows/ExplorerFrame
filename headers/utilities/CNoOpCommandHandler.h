#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CNoOpCommandHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNoOpCommandHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNoOpCommandHandler@@QEAA@XZ
    CNoOpCommandHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CNoOpCommandHandler@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNoOpCommandHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNoOpCommandHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CNoOpCommandHandler@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
};
