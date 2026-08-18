#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CSearchCloseTabCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchCloseTabCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchCloseTabCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
};
