#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 70 member(s).
// Base evidence: UIItemCollectionBase (likely; classinfo-template-instantiation).
class UIGroupItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPageToSection@UIGroupItem@@UEAAHH@Z
    virtual int CanPageToSection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@UIGroupItem@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDirection@UIGroupItem@@UEAAXW4REALIZEDIRECTION@@H@Z
    virtual void DestroyDirection(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoGroupZoom@UIGroupItem@@QEAAXXZ
    void DoGroupZoom();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ExpandoStateProp@UIGroupItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ExpandoStateProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@UIGroupItem@@UEAAPEAVUIBase@@I@Z
    virtual UIBase * FindItem(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIGroupItem@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultExpandoState@UIGroupItem@@QEAA?AW4tagEXPANDOSTATE@@XZ
    int GetDefaultExpandoState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredExpandoStateFromItem@UIGroupItem@@QEAA?AW4tagEXPANDOSTATE@@PEAUIItem@@@Z
    int GetDesiredExpandoStateFromItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@UIGroupItem@@UEAAPEAVUIBase@@XZ
    virtual UIBase * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpandoState@UIGroupItem@@QEAA?AW4tagEXPANDOSTATE@@XZ
    int GetExpandoState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusIndicator@UIGroupItem@@UEAAPEAVElement@DirectUI@@H@Z
    virtual ::DirectUI::Element * GetFocusIndicator(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCollection@UIGroupItem@@QEAAPEAVUICollection@@XZ
    UICollection * GetGroupCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterLocation@UIGroupItem@@UEAAXHHPEAUVerticalHitTest@@@Z
    virtual void GetGutterLocation(int, int, VerticalHitTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderRowCount@UIGroupItem@@QEAAHXZ
    int GetHeaderRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderTickCount@UIGroupItem@@QEAAHXZ
    int GetHeaderTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForElement@UIGroupItem@@UEAAXPEAVElement@DirectUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForElement(::DirectUI::Element *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIItem@UIGroupItem@@UEAAJW4INDEX_OF_MODE@@PEAUIItem@@PEAIPEAVSectionInfo@@@Z
    virtual long GetInfoForIItem(int, IItem *, unsigned int *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIVirtualizedUI@UIGroupItem@@UEAAXPEAUIVirtualizedUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForRow@UIGroupItem@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForRow(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForScrollTick@UIGroupItem@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForScrollTick(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForSection@UIGroupItem@@UEAAXHPEBVSectionInfo@@PEAV2@@Z
    virtual void GetInfoForSection(int, SectionInfo const *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForTreeIndex@UIGroupItem@@UEAAJPEAUINDEX_AND_VERSION@@IPEAIPEAVSectionInfo@@PEAPEAUIItem@@@Z
    virtual long GetInfoForTreeIndex(INDEX_AND_VERSION *, unsigned int, unsigned int *, SectionInfo *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentVirtualizedUI@UIGroupItem@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetParentVirtualizedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@UIGroupItem@@UEAAHXZ
    virtual int GetRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollTickCount@UIGroupItem@@UEAAHXZ
    virtual int GetScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionCount@UIGroupItem@@UEAAHXZ
    virtual int GetSectionCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionDesiredSize@UIGroupItem@@UEAA?AUSIZEV@@AEBVSectionInfo@@PEBV3@@Z
    virtual SIZEV GetSectionDesiredSize(SectionInfo const &, SectionInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIItemsHost@UIGroupItem@@QEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * GetUIItemsHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDirection@UIGroupItem@@QEAA?AW4VIRTUALDIRECTION@@XZ
    int GetVirtualDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualUIGroupItem@UIGroupItem@@UEAAPEAUIVirtualUIGroupItem@@XZ
    virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedUI@UIGroupItem@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetVirtualizedUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@UIGroupItem@@UEAAJPEAPEAVElement@DirectUI@@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupExpanded@UIGroupItem@@QEAAHXZ
    int IsGroupExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemGetAdjacent@UIGroupItem@@UEAAPEAVElement@DirectUI@@PEAV23@W4INAVDIR@@@Z
    virtual ::DirectUI::Element * ItemGetAdjacent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepAliveRelease@UIGroupItem@@UEAAXXZ
    virtual void KeepAliveRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIGroupItem@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIGroupItem@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@UIGroupItem@@UEAA_NPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeSection@UIGroupItem@@UEAAJPEAVSectionInfo@@@Z
    virtual long RealizeSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIGroupItem@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndSaveExpandoState@UIGroupItem@@QEAAXW4tagEXPANDOSTATE@@@Z
    void SetAndSaveExpandoState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpandoState@UIGroupItem@@QEAAJW4tagEXPANDOSTATE@@@Z
    long SetExpandoState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToItem@UIGroupItem@@UEAAPEAVElement@DirectUI@@PEAV23@HH@Z
    virtual ::DirectUI::Element * SetFocusToItem(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@UIGroupItem@@UEAAJPEAUIItem@@@Z
    virtual long SetItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepAlive@UIGroupItem@@UEAAHXZ
    virtual int ShouldKeepAlive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeWithIVirtualUIGroupItem@UIGroupItem@@QEAAXXZ
    void SynchronizeWithIVirtualUIGroupItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleExpansion@UIGroupItem@@QEAAXXZ
    void ToggleExpansion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualDirectionProp@UIGroupItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualDirectionProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateModel@UIGroupItem@@SAJPEBGW4VIRTUALDIRECTION@@PEAPEAV1@@Z
    static long s_CreateModel(unsigned short const *, int, UIGroupItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SaveExpandoState@UIGroupItem@@SAXPEAUIViewSettings@@PEAUIItem@@W4tagEXPANDOSTATE@@@Z
    static void s_SaveExpandoState(IViewSettings *, IItem *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIGroupItem@@UEAA@XZ
    virtual ~UIGroupItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireExpandoStateChangeEvent@UIGroupItem@@IEAAXXZ
    void _FireExpandoStateChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCatInfoFlagsFromItem@UIGroupItem@@IEAA?AW4CATEGORYINFO_FLAGS@@PEAUIItem@@@Z
    int _GetCatInfoFlagsFromItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildVirtualizedUI@UIGroupItem@@IEAAPEAUIVirtualizedUI@@XZ
    IVirtualizedUI * _GetChildVirtualizedUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHeaderDesiredSize@UIGroupItem@@IEAAHXZ
    int _GetHeaderDesiredSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoForSection@UIGroupItem@@IEAAXW4SECTIONTYPE@@PEAVSectionInfo@@@Z
    void _GetInfoForSection(int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSectionType@UIGroupItem@@IEAA?AW4SECTIONTYPE@@H@Z
    int _GetSectionType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionHost@UIGroupItem@@MEAAPEAVElement@DirectUI@@XZ
    virtual ::DirectUI::Element * _GetUICollectionHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsGroupedListMode@UIGroupItem@@IEAAHXZ
    int _IsGroupedListMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHeaderFloating@UIGroupItem@@IEAAHXZ
    int _IsHeaderFloating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHeaderRow@UIGroupItem@@IEAAHH@Z
    int _IsHeaderRow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemNavigate@UIGroupItem@@IEAAXPEAUItemNavigateEvent@@@Z
    void _OnItemNavigate(ItemNavigateEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UIGroupItem@@MEAAJW4UPDATEUIITEMTYPE@@@Z
    virtual long _Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccessibleProps@UIGroupItem@@MEAAXXZ
    virtual void _UpdateAccessibleProps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChildren@UIGroupItem@@IEAAXPEAVElement@DirectUI@@PEAVValue@3@@Z
    void _UpdateChildren(::DirectUI::Element *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCollection@UIGroupItem@@IEAAJPEAVElement@DirectUI@@@Z
    long _UpdateCollection(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHeaderVisuals@UIGroupItem@@IEAAXPEAVElement@DirectUI@@W4tagEXPANDOSTATE@@@Z
    void _UpdateHeaderVisuals(::DirectUI::Element *, int);
};
