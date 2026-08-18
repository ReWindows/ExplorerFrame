#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 62 member(s).
// Base evidence: ItemLayout (likely; classinfo-template-instantiation).
class ItemGridLayout {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AlignmentModeProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * AlignmentModeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRowCountFromItemCount@ItemGridLayout@@UEAAHH@Z
    virtual int CalculateRowCountFromItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScrollTickCountFromItemCount@ItemGridLayout@@UEAAHH@Z
    virtual int CalculateScrollTickCountFromItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSectionCountFromItemCount@ItemGridLayout@@UEAAHH@Z
    virtual int CalculateSectionCountFromItemCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnWidthProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@ItemGridLayout@@UEAAPEAVUIBase@@I@Z
    virtual UIBase * FindItem(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@ItemGridLayout@@UEAAPEAVUIBase@@HH@Z
    virtual UIBase * FindItem(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignmentMode@ItemGridLayout@@QEAA?AW4ITEM_GRID_MODE@@XZ
    int GetAlignmentMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorItemInRect@ItemGridLayout@@UEAAJAEBUVIRTUALRECT@@PEAUIItemCollection@@PEAPEAUIItem@@@Z
    virtual long GetAnchorItemInRect(VIRTUALRECT const &, IItemCollection *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ItemGridLayout@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnWidth@ItemGridLayout@@QEAAHXZ
    int GetColumnWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForRow@ItemGridLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForRow(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForScrollTick@ItemGridLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForScrollTick(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForSection@ItemGridLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForSection(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterLocation@ItemGridLayout@@UEAAXHHPEAUVerticalHitTest@@@Z
    virtual void GetGutterLocation(int, int, VerticalHitTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItem@ItemGridLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForItem(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItemFromModel@ItemGridLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetInfoForItemFromModel(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForRow@ItemGridLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForRow(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForScrollTick@ItemGridLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForScrollTick(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForSection@ItemGridLayout@@UEAAXHPEBVSectionInfo@@PEAV2@@Z
    virtual void GetInfoForSection(int, SectionInfo const *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialDSPass@ItemGridLayout@@QEAA_NXZ
    bool GetInitialDSPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemMaxSize@ItemGridLayout@@QEAAPEBUtagSIZE@@PEAPEAVValue@DirectUI@@@Z
    tagSIZE const * GetItemMaxSize(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemMinSize@ItemGridLayout@@QEAAPEBUtagSIZE@@PEAPEAVValue@DirectUI@@@Z
    tagSIZE const * GetItemMinSize(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@ItemGridLayout@@QEAAPEBUtagSIZE@@PEAPEAVValue@DirectUI@@@Z
    tagSIZE const * GetItemSpacing(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsInRange@ItemGridLayout@@UEAAXAEBUVIRTUALRECT@@0PEAV?$CDSA@I@@11@Z
    virtual void GetItemsInRange(VIRTUALRECT const &, VIRTUALRECT const &, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownElementChildrenCount@ItemGridLayout@@UEAAIPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@@Z
    virtual unsigned int GetKnownElementChildrenCount(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimumIconTextWidth@ItemGridLayout@@QEAAHXZ
    int GetMinimumIconTextWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionDesiredSize@ItemGridLayout@@UEAA?AUSIZEV@@HPEBVSectionInfo@@@Z
    virtual SIZEV GetSectionDesiredSize(int, SectionInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionRectangle@ItemGridLayout@@UEAAHHPEAURECTV@@@Z
    virtual int GetSectionRectangle(int, RECTV *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalSpacing@ItemGridLayout@@UEAAIXZ
    virtual unsigned int GetVerticalSpacing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?InitialDSPassProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * InitialDSPassProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnderSyncRootProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IsUnderSyncRootProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemGetAdjacent@ItemGridLayout@@UEAAPEAVElement@DirectUI@@PEAV23@W4INAVDIR@@@Z
    virtual ::DirectUI::Element * ItemGetAdjacent(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ItemMaxSizeProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ItemMaxSizeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ItemMinSizeProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ItemMinSizeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ItemSpacingProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ItemSpacingProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureItems@ItemGridLayout@@UEAAXPEAPEAVElement@DirectUI@@H@Z
    virtual void MeasureItems(::DirectUI::Element * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MinimumIconTextWidthProp@ItemGridLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MinimumIconTextWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ItemGridLayout@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsTicksChanged@ItemGridLayout@@UEAAXPEAVUIBase@@H@Z
    virtual void OnItemsTicksChanged(UIBase *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemGridLayout@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@ItemGridLayout@@UEAA_NPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ItemGridLayout@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnWidth@ItemGridLayout@@QEAAJH@Z
    long SetColumnWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialDSPass@ItemGridLayout@@QEAAJ_N@Z
    long SetInitialDSPass(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUnderSyncRoot@ItemGridLayout@@QEAAJ_N@Z
    long SetIsUnderSyncRoot(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@ItemGridLayout@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@ItemGridLayout@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AccumulateItems@ItemGridLayout@@AEAAXHHHHAEBUGridHitTestParameters@@@Z
    void _AccumulateItems(int, int, int, int, GridHitTestParameters const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetermineColumnWidth@ItemGridLayout@@AEAAXXZ
    void _DetermineColumnWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandLineRect@ItemGridLayout@@AEAAXAEBUVIRTUALRECT@@PEAURECTV@@@Z
    void _ExpandLineRect(VIRTUALRECT const &, RECTV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemsForRow@ItemGridLayout@@AEAAXAEBVSectionInfo@@PEAPEAVValue@DirectUI@@PEAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@4@PEAI@Z
    void _GetItemsForRow(SectionInfo const &, ::DirectUI::Value * *, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSectionRectangle@ItemGridLayout@@AEAAHAEBVInterval@@PEAURECTV@@@Z
    int _GetSectionRectangle(Interval const &, RECTV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsModel@ItemGridLayout@@AEAAHXZ
    int _IsModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemNavigate@ItemGridLayout@@AEAAXPEAUItemNavigateEvent@@@Z
    void _OnItemNavigate(ItemNavigateEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeItemByIndex@ItemGridLayout@@AEAAPEAVElement@DirectUI@@H@Z
    ::DirectUI::Element * _RealizeItemByIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecomputeSectionCount@ItemGridLayout@@AEAAXXZ
    void _RecomputeSectionCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateElementDesiredSize@ItemGridLayout@@AEAA?AUSIZEV@@PEAVElement@DirectUI@@HPEAVSurface@4@@Z
    SIZEV _UpdateElementDesiredSize(::DirectUI::Element *, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRowDesiredHeight@ItemGridLayout@@AEAAXIPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@HPEAVSurface@3@PEAHPEAI222@Z
    void _UpdateRowDesiredHeight(unsigned int, WindissectOpaque *, int, ::DirectUI::Surface *, int *, unsigned int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerticalHitTest@ItemGridLayout@@AEAAXHHPEAUVerticalHitTest@@@Z
    void _VerticalHitTest(int, int, VerticalHitTest *);
};
