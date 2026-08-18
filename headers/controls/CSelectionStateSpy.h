#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CSelectionStateSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionStateSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSelectionStateSpy@@UEAAJW4SELECTIONSTATEVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionStateSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionStateSpy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSelectionStateSpy@@SAJAEBUSelectionState@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(SelectionState const &, _GUID const &, void * *);
};
