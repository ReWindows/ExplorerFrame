#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class UIItemsViewItemContainerProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@UIItemsViewItemContainerProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVirtualElementProvider@UIItemsViewItemContainerProxy@@AEAAJPEAUIItem@@PEAUINDEX_AND_VERSION@@IPEAPEAUIRawElementProviderSimple@@@Z
    long _CreateVirtualElementProvider(IItem *, INDEX_AND_VERSION *, unsigned int, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItemByProperty@UIItemsViewItemContainerProxy@@AEAAJPEAUIRawElementProviderSimple@@HAEBUtagVARIANT@@PEAPEAU2@@Z
    long _FindItemByProperty(IRawElementProviderSimple *, int, tagVARIANT const &, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunItemFinder@UIItemsViewItemContainerProxy@@AEAAJPEAVCItemFinder@@HAEBUtagVARIANT@@PEAPEAUIRawElementProviderSimple@@@Z
    long _RunItemFinder(CItemFinder *, int, tagVARIANT const &, IRawElementProviderSimple * *);
};
