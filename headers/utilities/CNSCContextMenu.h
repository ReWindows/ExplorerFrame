#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
namespace CNscTree {
class CNSCContextMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNSCContextMenu@CNscTree@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CNSCContextMenu@CNscTree@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CNSCContextMenu@CNscTree@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CNSCContextMenu@CNscTree@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNSCContextMenu@CNscTree@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNSCContextMenu@CNscTree@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CNscTree
