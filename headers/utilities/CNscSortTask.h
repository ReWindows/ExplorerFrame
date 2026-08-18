#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CNscSortTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNscSortTask@@QEAA@PEAVCNscLock@@PEAU_TREEITEM@@PEAUNSCITEMINFO@@KKPEAV?$CDPA@UORDERITEM@@V?$CTContainer_PolicyUnOwned@UORDERITEM@@@@@@@Z
    CNscSortTask(CNscLock *, _TREEITEM *, NSCITEMINFO *, unsigned long, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CNscSortTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInitRT@CNscSortTask@@UEAAJXZ
    virtual long RunInitRT();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscSortTask@@MEAA@XZ
    virtual ~CNscSortTask();
};
