#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class CAppMenuHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppMenuHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CAppMenuHandler@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppMenuHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppMenuHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CAppMenuHandler@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppMenuHandler@@UEAA@XZ
    virtual ~CAppMenuHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToFrequentPlaceByIndex@CAppMenuHandler@@AEAAJI@Z
    long _BrowseToFrequentPlaceByIndex(unsigned int);
};
