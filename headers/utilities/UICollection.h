#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 106 member(s).
// Base evidence: UIBase (likely; classinfo-template-instantiation).
class UICollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePhysicalImageSize@UICollection@@QEAAIPEAVUIItemsView@@@Z
    unsigned int CalculatePhysicalImageSize(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPageToSection@UICollection@@UEAAHH@Z
    virtual int CanPageToSection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDirection@UICollection@@UEAAXW4REALIZEDIRECTION@@H@Z
    virtual void DestroyDirection(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?DevirtualizeItemsProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * DevirtualizeItemsProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@UICollection@@UEAAPEAVUIBase@@I@Z
    virtual UIBase * FindItem(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?FooterScrollTicksProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * FooterScrollTicksProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorItemInRect@UICollection@@QEAAJAEBUVIRTUALRECT@@PEAPEAUIItem@@@Z
    long GetAnchorItemInRect(VIRTUALRECT const &, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UICollection@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@UICollection@@QEAAHXZ
    int GetColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnWidth@UICollection@@QEAAHXZ
    int GetColumnWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevirtualizeItems@UICollection@@QEAA_NXZ
    bool GetDevirtualizeItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@UICollection@@UEAAPEAVUIBase@@XZ
    virtual UIBase * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventActionCB@UICollection@@QEAAJPEAUIUnknown@@HPEAUCollectionEventParams@@PEAW4tagEVENTACTION@@@Z
    long GetEventActionCB(IUnknown *, int, CollectionEventParams *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFooterScrollTicks@UICollection@@QEAAHXZ
    int GetFooterScrollTicks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterLocation@UICollection@@UEAAXHHPEAUVerticalHitTest@@@Z
    virtual void GetGutterLocation(int, int, VerticalHitTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderScrollTicks@UICollection@@QEAAHXZ
    int GetHeaderScrollTicks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIItemAtIndex@UICollection@@QEAAJIPEAPEAUIItem@@@Z
    long GetIItemAtIndex(unsigned int, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForElement@UICollection@@UEAAXPEAVElement@DirectUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForElement(::DirectUI::Element *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIItem@UICollection@@UEAAJW4INDEX_OF_MODE@@PEAUIItem@@PEAIPEAVSectionInfo@@@Z
    virtual long GetInfoForIItem(int, IItem *, unsigned int *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIVirtualizedUI@UICollection@@UEAAXPEAUIVirtualizedUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItem@UICollection@@QEAAXIPEAVSectionInfo@@@Z
    void GetInfoForItem(unsigned int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForRow@UICollection@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForRow(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForScrollTick@UICollection@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForScrollTick(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForSection@UICollection@@UEAAXHPEBVSectionInfo@@PEAV2@@Z
    virtual void GetInfoForSection(int, SectionInfo const *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForTreeIndex@UICollection@@UEAAJPEAUINDEX_AND_VERSION@@IPEAIPEAVSectionInfo@@PEAPEAUIItem@@@Z
    virtual long GetInfoForTreeIndex(INDEX_AND_VERSION *, unsigned int, unsigned int *, SectionInfo *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUnderSyncRoot@UICollection@@QEAA_NXZ
    bool GetIsUnderSyncRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCollection@UICollection@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetItemCollection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemLayout@UICollection@@QEAAPEAVItemLayout@@XZ
    ItemLayout * GetItemLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutTickCount@UICollection@@QEAAHXZ
    int GetLayoutTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentVirtualizedUI@UICollection@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetParentVirtualizedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@UICollection@@UEAAHXZ
    virtual int GetRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollTickCount@UICollection@@UEAAHXZ
    virtual int GetScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionCount@UICollection@@UEAAHXZ
    virtual int GetSectionCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionDesiredSize@UICollection@@UEAA?AUSIZEV@@AEBVSectionInfo@@PEBV3@@Z
    virtual SIZEV GetSectionDesiredSize(SectionInfo const &, SectionInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubsetItemCount@UICollection@@QEAAHXZ
    int GetSubsetItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubsetItemCountFromGroup@UICollection@@QEAAHPEAUIItem@@PEAUIItemCollection@@@Z
    int GetSubsetItemCountFromGroup(IItem *, IItemCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDirection@UICollection@@QEAA?AW4VIRTUALDIRECTION@@XZ
    int GetVirtualDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualUIGroupItem@UICollection@@UEAAPEAUIVirtualUIGroupItem@@XZ
    virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedUI@UICollection@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetVirtualizedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HeaderScrollTicksProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * HeaderScrollTicksProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnderSyncRootProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IsUnderSyncRootProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemGetAdjacent@UICollection@@UEAAPEAVElement@DirectUI@@PEAV23@W4INAVDIR@@@Z
    virtual ::DirectUI::Element * ItemGetAdjacent(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?LogicalImageSizeProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * LogicalImageSizeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionEventCB@UICollection@@QEAAJPEAUIUnknown@@PEAUCollectionEventParams@@@Z
    long OnCollectionEventCB(IUnknown *, CollectionEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UICollection@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UICollection@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UICollection@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UICollection@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeSection@UICollection@@UEAAJPEAVSectionInfo@@@Z
    virtual long RealizeSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UICollection@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollAndSelectOnlyItem@UICollection@@QEAAXXZ
    void ScrollAndSelectOnlyItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLayoutSectionIntoView@UICollection@@QEAAXAEBVSectionInfo@@@Z
    void ScrollLayoutSectionIntoView(SectionInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToItem@UICollection@@UEAAPEAVElement@DirectUI@@PEAV23@HH@Z
    virtual ::DirectUI::Element * SetFocusToItem(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFooterScrollTicks@UICollection@@QEAAJH@Z
    long SetFooterScrollTicks(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeaderScrollTicks@UICollection@@QEAAJH@Z
    long SetHeaderScrollTicks(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUnderSyncRoot@UICollection@@QEAAJ_N@Z
    long SetIsUnderSyncRoot(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@UICollection@@QEAAJPEAUIItemCollection@@@Z
    long SetItemCollection(IItemCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopCollection@UICollection@@QEAAJ_N@Z
    long SetTopCollection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TopCollectionProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TopCollectionProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryToRealizeIndex@UICollection@@QEAAPEAVUIItem@@AEBVItemIndex@@I@Z
    UIItem * TryToRealizeIndex(ItemIndex const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryToRealizeItem@UICollection@@QEAAPEAVUIItem@@PEAUIItem@@@Z
    UIItem * TryToRealizeItem(IItem *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UICollection@@QEAA@XZ
    UICollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UIItemCreationPropMapProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UIItemCreationPropMapProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UICollection@@QEAAXW4COLLECTION_CHANGE_STATE@@@Z
    void Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEmptyText@UICollection@@QEAAJXZ
    long UpdateEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubsetFooter@UICollection@@QEAAXI@Z
    void UpdateSubsetFooter(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualDirectionProp@UICollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualDirectionProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UICollection@@UEAA@XZ
    virtual ~UICollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsUnderSyncRootFromCollection@UICollection@@IEAAJXZ
    long CheckIsUnderSyncRootFromCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRowMarginsToSectionRectangle@UICollection@@IEAAXHPEAURECTV@@@Z
    void _AddRowMarginsToSectionRectangle(int, RECTV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInsertItems@UICollection@@IEAAJPEAVItemLayout@@III@Z
    long _CreateAndInsertItems(ItemLayout *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUIItemFromResId@UICollection@@IEAAJPEBGIPEAUIItem@@PEAVElement@DirectUI@@PEAPEAVUIItem@@@Z
    long _CreateUIItemFromResId(unsigned short const *, unsigned int, IItem *, ::DirectUI::Element *, UIItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVirtualUIGroupItemFromIndex@UICollection@@IEAAJIPEAUHWND__@@PEAVIEventQueue@@PEAUIFirstPageResults@@PEAVUIGroupItem@@PEAPEAUIVirtualUIGroupItem@@@Z
    long _CreateVirtualUIGroupItemFromIndex(unsigned int, HWND__*, IEventQueue *, IFirstPageResults *, UIGroupItem *, IVirtualUIGroupItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVirtualUIGroupItems@UICollection@@IEAAJII@Z
    long _CreateVirtualUIGroupItems(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyItems@UICollection@@IEAAXW4REALIZEDIRECTION@@I@Z
    void _DestroyItems(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUIGroupItemModel@UICollection@@IEAAJXZ
    long _EnsureUIGroupItemModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBareSectionRectangle@UICollection@@IEAAJHPEAURECTV@@@Z
    long _GetBareSectionRectangle(int, RECTV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementSection@UICollection@@IEAA?AW4SECTIONTYPE@@PEAVElement@DirectUI@@@Z
    int _GetElementSection(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstLayoutSection@UICollection@@IEAAHXZ
    int _GetFirstLayoutSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFooterRowCount@UICollection@@IEAAHXZ
    int _GetFooterRowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHeaderFooterElement@UICollection@@IEAAPEAVElement@DirectUI@@W4SECTIONTYPE@@@Z
    ::DirectUI::Element * _GetHeaderFooterElement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHeaderFooterSectionInfo@UICollection@@IEAAXW4SECTIONTYPE@@PEAVSectionInfo@@@Z
    void _GetHeaderFooterSectionInfo(int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHeaderRowCount@UICollection@@IEAAHXZ
    int _GetHeaderRowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoFromTreeIndexAndIVirtualUIGroupItem@UICollection@@IEAAJPEAUIVirtualUIGroupItem@@PEAUINDEX_AND_VERSION@@IPEAIPEAVSectionInfo@@PEAPEAUIItem@@@Z
    long _GetInfoFromTreeIndexAndIVirtualUIGroupItem(IVirtualUIGroupItem *, INDEX_AND_VERSION *, unsigned int, unsigned int *, SectionInfo *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoFromTreeIndexAndUIGroupItem@UICollection@@IEAAJPEAVUIGroupItem@@PEAUINDEX_AND_VERSION@@IPEAIPEAVSectionInfo@@PEAPEAUIItem@@@Z
    long _GetInfoFromTreeIndexAndUIGroupItem(UIGroupItem *, INDEX_AND_VERSION *, unsigned int, unsigned int *, SectionInfo *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemCountFromCollection@UICollection@@IEAAIXZ
    unsigned int _GetItemCountFromCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutRowCount@UICollection@@IEAAHXZ
    int _GetLayoutRowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutSectionCount@UICollection@@IEAAHXZ
    int _GetLayoutSectionCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRowType@UICollection@@IEAA?AW4SECTIONTYPE@@H@Z
    int _GetRowType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSectionType@UICollection@@IEAA?AW4SECTIONTYPE@@H@Z
    int _GetSectionType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIItemResId@UICollection@@IEAAJPEAUIItem@@PEAPEAG@Z
    long _GetUIItemResId(IItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTopCollection@UICollection@@IEAAHXZ
    int _IsTopCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapCollectionSectionToLayoutSection@UICollection@@IEAAXPEAVSectionInfo@@@Z
    void _MapCollectionSectionToLayoutSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapLayoutSectionToCollectionSection@UICollection@@IEAAXPEAVSectionInfo@@@Z
    void _MapLayoutSectionToCollectionSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChildChanged@UICollection@@IEAAXPEAVUIItem@@W4ITEM_CHANGED_TYPE@@@Z
    void _OnChildChanged(UIItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeItems@UICollection@@IEAAJII@Z
    long _RealizeItems(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecreateUIItem@UICollection@@IEAAJPEAVUIItem@@PEAUIItem@@PEBG@Z
    long _RecreateUIItem(UIItem *, IItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestRefreshViewIfStartMenu@UICollection@@IEAAXXZ
    void _RequestRefreshViewIfStartMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReuseAndDestroyExistingChildren@UICollection@@IEAAXPEAVItemLayout@@@Z
    void _ReuseAndDestroyExistingChildren(ItemLayout *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnrealizeItem@UICollection@@IEAAXPEAVUIItem@@@Z
    void _UnrealizeItem(UIItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UICollection@@IEAAJW4COLLECTION_CHANGE_STATE@@@Z
    long _Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImageSize@UICollection@@IEAAXXZ
    void _UpdateImageSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemCount@UICollection@@IEAAXXZ
    void _UpdateItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSubsetingOnColumnChange@UICollection@@IEAAXXZ
    void _UpdateSubsetingOnColumnChange();
};
