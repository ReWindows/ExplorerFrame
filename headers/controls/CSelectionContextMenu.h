#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
namespace CNscTree {
class CSelectionContextMenu {
protected:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionContextMenu@CNscTree@@MEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CSelectionContextMenu@CNscTree@@MEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CSelectionContextMenu@CNscTree@@MEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CSelectionContextMenu@CNscTree@@MEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CSelectionContextMenu@CNscTree@@MEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionContextMenu@CNscTree@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionContextMenu@CNscTree@@MEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSelectionContextMenu@CNscTree@@IEAA@XZ
    ~CSelectionContextMenu();
};
} // namespace CNscTree
