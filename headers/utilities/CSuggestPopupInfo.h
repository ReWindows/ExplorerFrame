#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CSuggestPopupInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSuggestPopupInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSuggestPopupInfo@@QEAA@XZ
    CSuggestPopupInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSuggestPopupInfo@@UEAAJPEAW4SUGGESTPOPUPINFOFLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CSuggestPopupInfo@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropvariant@CSuggestPopupInfo@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetPropvariant(tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSuggestPopupInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSuggestPopupInfo@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuggestPopupInfo@@AEAA@XZ
    ~CSuggestPopupInfo();
};
