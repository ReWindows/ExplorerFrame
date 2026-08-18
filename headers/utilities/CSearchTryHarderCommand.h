#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CSearchTryHarderCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSearchTryHarderCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchTryHarderCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchTryHarderCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchTryHarderCommand@@UEAA@XZ
    virtual ~CSearchTryHarderCommand();
};
