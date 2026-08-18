#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CNscLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNscLock@@QEAA@XZ
    CNscLock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNscHwnd@CNscLock@@QEAAPEAUHWND__@@XZ
    HWND__* GetNscHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CNscLock@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetObjectW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNscLock@@QEAAJPEAVCNscTree@@@Z
    long Init(CNscTree *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeviewDestroyed@CNscLock@@QEAAXXZ
    void OnTreeviewDestroyed();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostMessage@CNscLock@@EEAA_NXZ
    virtual bool _PostMessage();
};
