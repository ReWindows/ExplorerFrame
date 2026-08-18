#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 27 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class ItemLayout {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnCountProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ItemLayout@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@ItemLayout@@QEAAHXZ
    int GetColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@ItemLayout@@QEAAHXZ
    int GetItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@ItemLayout@@QEAAHXZ
    int GetRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollTickCount@ItemLayout@@QEAAHXZ
    int GetScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollTicksPerSection@ItemLayout@@QEAAHXZ
    int GetScrollTicksPerSection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionCount@ItemLayout@@QEAAHXZ
    int GetSectionCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDirection@ItemLayout@@QEAA?AW4VIRTUALDIRECTION@@XZ
    int GetVirtualDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedGroups@ItemLayout@@QEAA_NXZ
    bool GetVirtualizedGroups();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ItemCountProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ItemCountProp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemLayout@@QEAA@XZ
    ItemLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RowCountProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RowCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ScrollTickCountProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ScrollTickCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ScrollTicksPerSectionProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ScrollTicksPerSectionProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SectionCountProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SectionCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnCount@ItemLayout@@QEAAJH@Z
    long SetColumnCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCount@ItemLayout@@QEAAJH@Z
    long SetItemCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRowCount@ItemLayout@@QEAAJH@Z
    long SetRowCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollTickCount@ItemLayout@@QEAAJH@Z
    long SetScrollTickCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabletMode@ItemLayout@@QEAAJ_N@Z
    long SetTabletMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizedGroups@ItemLayout@@QEAAJ_N@Z
    long SetVirtualizedGroups(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TabletModeProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TabletModeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualDirectionProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualDirectionProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualizedGroupsProp@ItemLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualizedGroupsProp();
};
