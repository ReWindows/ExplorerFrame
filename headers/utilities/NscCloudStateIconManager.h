#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
class NscCloudStateIconManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNscCloudStateIconTask@NscCloudStateIconManager@@QEAAJPEAUIShellTaskScheduler@@PEAVCNscLock@@PEAU_TREEITEM@@PEAU_ITEMIDLIST_ABSOLUTE@@PEAUNSCITEMINFO@@I@Z
    long AddNscCloudStateIconTask(IShellTaskScheduler *, CNscLock *, _TREEITEM *, _ITEMIDLIST_ABSOLUTE *, NSCITEMINFO *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCloudStateIcon@NscCloudStateIconManager@@QEAAXPEAUHWND__@@PEAU_TREEITEM@@W4NscVisibleCloudStates@@@Z
    void SetCloudStateIcon(HWND__*, _TREEITEM *, int);
};
