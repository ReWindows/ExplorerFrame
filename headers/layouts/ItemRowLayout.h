#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 54 member(s).
// Base evidence: ItemLayout (likely; classinfo-template-instantiation).
class ItemRowLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRowCountFromItemCount@ItemRowLayout@@UEAAHH@Z
    virtual int CalculateRowCountFromItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScrollTickCountFromItemCount@ItemRowLayout@@UEAAHH@Z
    virtual int CalculateScrollTickCountFromItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSectionCountFromItemCount@ItemRowLayout@@UEAAHH@Z
    virtual int CalculateSectionCountFromItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVirtualUIGroupItems@ItemRowLayout@@QEAAXXZ
    void ClearVirtualUIGroupItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@ItemRowLayout@@UEAAPEAVUIBase@@I@Z
    virtual UIBase * FindItem(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@ItemRowLayout@@UEAAPEAVUIBase@@HH@Z
    virtual UIBase * FindItem(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorItemInRect@ItemRowLayout@@UEAAJAEBUVIRTUALRECT@@PEAUIItemCollection@@PEAPEAUIItem@@@Z
    virtual long GetAnchorItemInRect(VIRTUALRECT const &, IItemCollection *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ItemRowLayout@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForRow@ItemRowLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForRow(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForScrollTick@ItemRowLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForScrollTick(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInfoForSection@ItemRowLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetContentInfoForSection(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterLocation@ItemRowLayout@@UEAAXHHPEAUVerticalHitTest@@@Z
    virtual void GetGutterLocation(int, int, VerticalHitTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItem@ItemRowLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForItem(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItemFromModel@ItemRowLayout@@UEAAXHHPEAVSectionInfo@@@Z
    virtual void GetInfoForItemFromModel(int, int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForRow@ItemRowLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForRow(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForScrollTick@ItemRowLayout@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForScrollTick(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForSection@ItemRowLayout@@UEAAXHPEBVSectionInfo@@PEAV2@@Z
    virtual void GetInfoForSection(int, SectionInfo const *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsInRange@ItemRowLayout@@UEAAXAEBUVIRTUALRECT@@0PEAV?$CDSA@I@@11@Z
    virtual void GetItemsInRange(VIRTUALRECT const &, VIRTUALRECT const &, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownElementChildrenCount@ItemRowLayout@@UEAAIPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@@Z
    virtual unsigned int GetKnownElementChildrenCount(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionDesiredSize@ItemRowLayout@@UEAA?AUSIZEV@@HPEBVSectionInfo@@@Z
    virtual SIZEV GetSectionDesiredSize(int, SectionInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionRectangle@ItemRowLayout@@UEAAHHPEAURECTV@@@Z
    virtual int GetSectionRectangle(int, RECTV *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSeparatorLineHeight@ItemRowLayout@@QEAAHXZ
    int GetSeparatorLineHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseItemWidth@ItemRowLayout@@QEAA_NXZ
    bool GetUseItemWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalSpacing@ItemRowLayout@@UEAAIXZ
    virtual unsigned int GetVerticalSpacing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemGetAdjacent@ItemRowLayout@@UEAAPEAVElement@DirectUI@@PEAV23@W4INAVDIR@@@Z
    virtual ::DirectUI::Element * ItemGetAdjacent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureItems@ItemRowLayout@@UEAAXPEAPEAVElement@DirectUI@@H@Z
    virtual void MeasureItems(::DirectUI::Element * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ItemRowLayout@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsTicksChanged@ItemRowLayout@@UEAAXPEAVUIBase@@H@Z
    virtual void OnItemsTicksChanged(UIBase *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemRowLayout@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@ItemRowLayout@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ItemRowLayout@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SeparatorLineHeightProp@ItemRowLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SeparatorLineHeightProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SeparatorLineProp@ItemRowLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SeparatorLineProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SeparatorPaddingProp@ItemRowLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SeparatorPaddingProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllExpandoStates@ItemRowLayout@@QEAAXW4tagEXPANDOSTATE@@@Z
    void SetAllExpandoStates(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendItemTicksChangeNotifications@ItemRowLayout@@QEAAXH@Z
    void SuspendItemTicksChangeNotifications(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UseItemWidthProp@ItemRowLayout@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UseItemWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@ItemRowLayout@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@ItemRowLayout@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemRowLayout@@UEAA@XZ
    virtual ~ItemRowLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnLayoutChanged@ItemRowLayout@@AEAAXXZ
    void OnColumnLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AccumulateItems@ItemRowLayout@@AEAAXHHPEAV?$CDSA@I@@0@Z
    void _AccumulateItems(int, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandLineRect@ItemRowLayout@@AEAAXAEBUVIRTUALRECT@@PEAVInterval@@PEAW4ITEMGUTTER@@@Z
    void _ExpandLineRect(VIRTUALRECT const &, Interval *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtrapolateSections@ItemRowLayout@@AEAAXAEBVSectionInfo@@HPEAV2@@Z
    void _ExtrapolateSections(SectionInfo const &, int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextSection@ItemRowLayout@@AEAAXPEBVSectionInfo@@HPEAV2@@Z
    void _GetNextSection(SectionInfo const *, int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSeparatorHeight@ItemRowLayout@@AEAAHPEAH0@Z
    int _GetSeparatorHeight(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExpandedGroup@ItemRowLayout@@AEAAHAEBVSectionInfo@@@Z
    int _IsExpandedGroup(SectionInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemNavigate@ItemRowLayout@@AEAAXPEAUItemNavigateEvent@@@Z
    void _OnItemNavigate(ItemNavigateEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecomputeScrollTickCount@ItemRowLayout@@AEAAXXZ
    void _RecomputeScrollTickCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForSection@ItemRowLayout@@AEAAHP6AHAEBVSectionInfo@@_K@Z1PEAV2@@Z
    int _SearchForSection(int ( *)(SectionInfo const &, uint64_t), uint64_t, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForSectionInChildrenList@ItemRowLayout@@AEAAHP6AHAEBVSectionInfo@@_K@Z1PEAV2@@Z
    int _SearchForSectionInChildrenList(int ( *)(SectionInfo const &, uint64_t), uint64_t, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForSectionInVirtualUIGroupItemList@ItemRowLayout@@AEAAHP6AHAEBVSectionInfo@@_K@Z1PEAV2@@Z
    int _SearchForSectionInVirtualUIGroupItemList(int ( *)(SectionInfo const &, uint64_t), uint64_t, SectionInfo *);
};
