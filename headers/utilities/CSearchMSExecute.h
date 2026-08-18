#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CSearchMSExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CSearchMSExecute@@UEAAJXZ
    virtual long Execute();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdList@CSearchMSExecute@@MEAAJPEAUIShellItem@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@PEA_N@Z
    virtual long GetIdList(IShellItem *, _ITEMIDLIST_ABSOLUTE * *, bool *);
};
