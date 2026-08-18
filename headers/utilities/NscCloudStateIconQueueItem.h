#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class NscCloudStateIconQueueItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NscCloudStateIconQueueItem@@SAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@W4NscVisibleCloudStates@@IPEAPEAVCQueueItem@@@Z
    static long CreateInstance(_TREEITEM *, NSCITEMINFO *, int, unsigned int, CQueueItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@NscCloudStateIconQueueItem@@UEAAJPEAUIUnknown@@@Z
    virtual long Dispatch(IUnknown *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NscCloudStateIconQueueItem@@EEAA@XZ
    virtual ~NscCloudStateIconQueueItem();
};
