#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CSelectionStateList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionStateList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CSelectionStateList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CSelectionStateList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionStateList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionStateList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSelectionStateList@@SAJPEAV?$CCoSimpleArray@USelectionState@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@USelectionState@@@@@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(WindissectOpaque *, _GUID const &, void * *);
};
