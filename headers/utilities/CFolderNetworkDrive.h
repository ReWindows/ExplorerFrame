#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CFolderNetworkDrive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolderNetworkDrive@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPath@CFolderNetworkDrive@@AEAAJPEAUIShellItemArray@@PEAPEAG@Z
    long _GetPath(IShellItemArray *, unsigned short * *);
};
