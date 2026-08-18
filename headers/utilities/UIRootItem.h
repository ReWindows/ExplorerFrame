#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
// Base evidence: UIItemCollectionBase (likely; classinfo-template-instantiation).
class UIRootItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnPaddingProp@UIRootItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnPaddingProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIRootItem@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnPadding@UIRootItem@@QEAAHXZ
    int GetColumnPadding();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexForSubItem@UIRootItem@@UEAAHPEAVElement@DirectUI@@@Z
    virtual int GetIndexForSubItem(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIRootItem@@SAJXZ
    static long Register();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UIRootItem@@MEAAJW4UPDATEUIITEMTYPE@@@Z
    virtual long _Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccessibleProps@UIRootItem@@MEAAXXZ
    virtual void _UpdateAccessibleProps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateSelectedProperty@UIRootItem@@MEAAXXZ
    virtual void v_UpdateSelectedProperty();
};
