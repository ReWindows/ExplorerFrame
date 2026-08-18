#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CSearchSendToHistoryVaultCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSearchSendToHistoryVaultCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchSendToHistoryVaultCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSendToHistoryVaultCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSendToHistoryVaultCommand@@UEAA@XZ
    virtual ~CSearchSendToHistoryVaultCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSearchSendToHistoryVaultCommand@@AEAAJXZ
    long _Initialize();
};
