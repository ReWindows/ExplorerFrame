#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CGalleryPropertySet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGalleryPropertySet@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGalleryPropertySet@@QEAA@PEAUIUIImage@@HHW4UI_COMMANDTYPE@@@Z
    CGalleryPropertySet(IUIImage *, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CGalleryPropertySet@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGalleryPropertySet@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGalleryPropertySet@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabel@CGalleryPropertySet@@QEAAJPEBG@Z
    long SetLabel(unsigned short const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGalleryPropertySet@@AEAA@XZ
    ~CGalleryPropertySet();
};
