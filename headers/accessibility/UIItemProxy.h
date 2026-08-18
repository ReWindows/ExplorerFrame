#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIItemProxy {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSet@UIItemProxy@@AEAAJPEAI@Z
    long GetPositionInSet(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSet@UIItemProxy@@AEAAJPEAI@Z
    long GetSizeOfSet(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCollectionCount@UIItemProxy@@AEAAJPEAUIItemCollection@@PEAUICollectionCache@@PEAI@Z
    long _GetCollectionCount(IItemCollection *, ICollectionCache *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIndex@UIItemProxy@@AEAAJPEAI@Z
    long _GetItemIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProperty@UIItemProxy@@EEAAJPEAUtagVARIANT@@H@Z
    virtual long _GetProperty(tagVARIANT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewItemCount@UIItemProxy@@AEAAJPEAI@Z
    long _GetViewItemCount(unsigned int *);
};
