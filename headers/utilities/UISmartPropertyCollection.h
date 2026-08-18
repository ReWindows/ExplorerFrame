#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 26 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UISmartPropertyCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnCountProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnsMaxProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnsMaxProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnsPercentProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnsPercentProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UISmartPropertyCollection@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@UISmartPropertyCollection@@QEAAHXZ
    int GetColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxWidth@UISmartPropertyCollection@@QEAAHXZ
    int GetMaxWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@UISmartPropertyCollection@@QEAAHXZ
    int GetRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MaxWidthProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MaxWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UISmartPropertyCollection@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PropWidthPatternProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PropWidthPatternProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UISmartPropertyCollection@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RowCountProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RowCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropWidthPattern@UISmartPropertyCollection@@QEAAJPEBG@Z
    long SetPropWidthPattern(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?WidthPatternMapProp@UISmartPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * WidthPatternMapProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UISmartPropertyCollection@@UEAA@XZ
    virtual ~UISmartPropertyCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransferProgressControl@UISmartPropertyCollection@@AEAAJXZ
    long AddTransferProgressControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillChildGrid@UISmartPropertyCollection@@AEAAXPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@AEAV?$CDSA@USmartColumnInfo@UISmartPropertyCollection@@@@PEAHHH@Z
    void _FillChildGrid(WindissectOpaque *, WindissectOpaque &, int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnsInfo@UISmartPropertyCollection@@AEAAJHAEAV?$CDSA@USmartColumnInfo@UISmartPropertyCollection@@@@@Z
    long _GetColumnsInfo(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWidthPatternForSize@UISmartPropertyCollection@@AEAAJHPEBGPEAPEAGPEAH2@Z
    long _GetWidthPatternForSize(int, unsigned short const *, unsigned short * *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@UISmartPropertyCollection@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@UISmartPropertyCollection@@EEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UISmartPropertyCollection@@AEAAJPEAUIItem@@@Z
    long _Update(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePatternOnWidth@UISmartPropertyCollection@@AEAAXH@Z
    void _UpdatePatternOnWidth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUIProperties@UISmartPropertyCollection@@AEAAXXZ
    void _UpdateUIProperties();
};
