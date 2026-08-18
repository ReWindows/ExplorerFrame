#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CSearchDepthCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchDepthCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchDepthCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchDepthCommand@@UEAA@XZ
    virtual ~CSearchDepthCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSearchDepthCommand@@AEAAJXZ
    long _Initialize();
};
