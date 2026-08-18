#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CSearchMruCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchMruCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchMruCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchMruCommand@@EEAA@XZ
    virtual ~CSearchMruCommand();
};
