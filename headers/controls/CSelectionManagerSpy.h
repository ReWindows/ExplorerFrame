#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CSelectionManagerSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionManagerSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSelectionManagerSpy@@UEAAJW4SELECTIONMANAGERVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionManagerSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionManagerSpy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSelectionManagerSpy@@SAJPEAVCSelectionManager@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CSelectionManager *, _GUID const &, void * *);
};
