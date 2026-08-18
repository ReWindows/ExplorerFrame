#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CSearchSendToInternetCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSearchSendToInternetCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchSendToInternetCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSendToInternetCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSendToInternetCommand@@UEAA@XZ
    virtual ~CSearchSendToInternetCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSearchSendToInternetCommand@@AEAAJXZ
    long _Initialize();
};
