#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CItemDevirtualizerInitialState {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemDevirtualizerInitialState@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionCache@CItemDevirtualizerInitialState@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetCollectionCache(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemDevirtualizerInitialState@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemDevirtualizerInitialState@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemDevirtualizerInitialState@@QEAA@XZ
    ~CItemDevirtualizerInitialState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CItemDevirtualizerInitialState@@AEAAJPEBV?$CCoSimpleArray@USelectionState@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@USelectionState@@@@@@@Z
    long _Initialize(WindissectOpaque const *);
};
