#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 76 member(s).
class CVirtualUIGroupItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualUIGroupItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPageToSection@CVirtualUIGroupItem@@UEAAHH@Z
    virtual int CanPageToSection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDirection@CVirtualUIGroupItem@@UEAAXW4REALIZEDIRECTION@@H@Z
    virtual void DestroyDirection(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@CVirtualUIGroupItem@@UEAAPEAVUIBase@@I@Z
    virtual UIBase * FindItem(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionVersion@CVirtualUIGroupItem@@UEAAIXZ
    virtual unsigned int GetCollectionVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CVirtualUIGroupItem@@UEAAPEAVUIBase@@XZ
    virtual UIBase * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpandoState@CVirtualUIGroupItem@@UEAA?AW4tagEXPANDOSTATE@@XZ
    virtual int GetExpandoState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterLocation@CVirtualUIGroupItem@@UEAAXHHPEAUVerticalHitTest@@@Z
    virtual void GetGutterLocation(int, int, VerticalHitTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderRowCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetHeaderRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderScrollTickCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetHeaderScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIItem@CVirtualUIGroupItem@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetIItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIItemCollection@CVirtualUIGroupItem@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long GetIItemCollection(IItemCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForElement@CVirtualUIGroupItem@@UEAAXPEAVElement@DirectUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForElement(::DirectUI::Element *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIItem@CVirtualUIGroupItem@@UEAAJW4INDEX_OF_MODE@@PEAUIItem@@PEAIPEAVSectionInfo@@@Z
    virtual long GetInfoForIItem(int, IItem *, unsigned int *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIVirtualizedUI@CVirtualUIGroupItem@@UEAAXPEAUIVirtualizedUI@@PEAVSectionInfo@@@Z
    virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForItem@CVirtualUIGroupItem@@UEAAJIPEAVSectionInfo@@@Z
    virtual long GetInfoForItem(unsigned int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForRow@CVirtualUIGroupItem@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForRow(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForScrollTick@CVirtualUIGroupItem@@UEAAXHPEAVSectionInfo@@@Z
    virtual void GetInfoForScrollTick(int, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForSection@CVirtualUIGroupItem@@UEAAXHPEBVSectionInfo@@PEAV2@@Z
    virtual void GetInfoForSection(int, SectionInfo const *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForTreeIndex@CVirtualUIGroupItem@@UEAAJPEAUINDEX_AND_VERSION@@IPEAIPEAVSectionInfo@@PEAPEAUIItem@@@Z
    virtual long GetInfoForTreeIndex(INDEX_AND_VERSION *, unsigned int, unsigned int *, SectionInfo *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CVirtualUIGroupItem@@UEAAIXZ
    virtual unsigned int GetItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIndex@CVirtualUIGroupItem@@UEAAIXZ
    virtual unsigned int GetItemIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastEmptyTextCheckItemCount@CVirtualUIGroupItem@@UEAAIPEAW4VALUE_STATE@@@Z
    virtual unsigned int GetLastEmptyTextCheckItemCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentVirtualizedUI@CVirtualUIGroupItem@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetParentVirtualizedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawItemCount@CVirtualUIGroupItem@@UEAAIXZ
    virtual unsigned int GetRawItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawItemCountValueState@CVirtualUIGroupItem@@UEAA?AW4VALUE_STATE@@XZ
    virtual int GetRawItemCountValueState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollTickCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetSectionCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionDesiredSize@CVirtualUIGroupItem@@UEAA?AUSIZEV@@AEBVSectionInfo@@PEBV3@@Z
    virtual SIZEV GetSectionDesiredSize(SectionInfo const &, SectionInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUICollectionFooterRowCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetUICollectionFooterRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUICollectionFooterScrollTickCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetUICollectionFooterScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUICollectionHeaderRowCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetUICollectionHeaderRowCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUICollectionHeaderScrollTickCount@CVirtualUIGroupItem@@UEAAHXZ
    virtual int GetUICollectionHeaderScrollTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualUIGroupItem@CVirtualUIGroupItem@@UEAAPEAUIVirtualUIGroupItem@@XZ
    virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedUI@CVirtualUIGroupItem@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetVirtualizedUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemGetAdjacent@CVirtualUIGroupItem@@UEAAPEAVElement@DirectUI@@PEAV23@W4INAVDIR@@@Z
    virtual ::DirectUI::Element * ItemGetAdjacent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemGridLayoutColumnCountUpdate@CVirtualUIGroupItem@@UEAAXXZ
    virtual void OnItemGridLayoutColumnCountUpdate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualUIGroupItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeSection@CVirtualUIGroupItem@@UEAAJPEAVSectionInfo@@@Z
    virtual long RealizeSection(SectionInfo *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualUIGroupItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpandoState@CVirtualUIGroupItem@@UEAAXW4tagEXPANDOSTATE@@@Z
    virtual void SetExpandoState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToItem@CVirtualUIGroupItem@@UEAAPEAVElement@DirectUI@@PEAV23@HH@Z
    virtual ::DirectUI::Element * SetFocusToItem(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CVirtualUIGroupItem@@UEAAJPEAUIItem@@@Z
    virtual long SetItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemIndex@CVirtualUIGroupItem@@UEAAXI@Z
    virtual void SetItemIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentVirtualizedUI@CVirtualUIGroupItem@@UEAAXPEAUIVirtualizedUI@@@Z
    virtual void SetParentVirtualizedUI(IVirtualizedUI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealizedUIGroupItem@CVirtualUIGroupItem@@UEAAXPEAVUIGroupItem@@@Z
    virtual void SetRealizedUIGroupItem(UIGroupItem *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCollectionEventActionCB@CVirtualUIGroupItem@@AEAAJPEAUIUnknown@@HPEAUCollectionEventParams@@PEAW4tagEVENTACTION@@@Z
    long _GetCollectionEventActionCB(IUnknown *, int, CollectionEventParams *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoForContainerRow@CVirtualUIGroupItem@@AEAAXHPEAVSectionInfo@@@Z
    void _GetInfoForContainerRow(int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoForContainerScrollTick@CVirtualUIGroupItem@@AEAAXHPEAVSectionInfo@@@Z
    void _GetInfoForContainerScrollTick(int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoForHeaderSection@CVirtualUIGroupItem@@AEAAXPEAVSectionInfo@@@Z
    void _GetInfoForHeaderSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemEventActionCB@CVirtualUIGroupItem@@AEAAJPEAUIUnknown@@HPEAUItemEventParams@@PEAW4tagEVENTACTION@@@Z
    long _GetItemEventActionCB(IUnknown *, int, ItemEventParams *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRealizedGroupCollection@CVirtualUIGroupItem@@AEAAPEAVUICollection@@XZ
    UICollection * _GetRealizedGroupCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionFirstLayoutSection@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionFirstLayoutSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionHeaderFooterSectionInfo@CVirtualUIGroupItem@@AEAAXW4SECTIONTYPE@@PEAVSectionInfo@@@Z
    void _GetUICollectionHeaderFooterSectionInfo(int, SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionLayoutRowCount@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionLayoutRowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionLayoutScrollTickCount@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionLayoutScrollTickCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionLayoutSectionCount@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionLayoutSectionCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionRowCount@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionRowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionScrollTickCount@CVirtualUIGroupItem@@AEAAHXZ
    int _GetUICollectionScrollTickCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CVirtualUIGroupItem@@AEAAJPEAUHWND__@@PEAVIEventQueue@@PEAUIFirstPageResults@@PEAUICollectionCache@@PEAVUIGroupItem@@@Z
    long _Initialize(HWND__*, IEventQueue *, IFirstPageResults *, ICollectionCache *, UIGroupItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHeaderFloating@CVirtualUIGroupItem@@AEAAHXZ
    int _IsHeaderFloating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHeaderRow@CVirtualUIGroupItem@@AEAAHH@Z
    int _IsHeaderRow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapContentSectionToGroupItemSection@CVirtualUIGroupItem@@AEAAXPEAVSectionInfo@@@Z
    void _MapContentSectionToGroupItemSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapLayoutSectionToCollectionSection@CVirtualUIGroupItem@@AEAAXPEAVSectionInfo@@@Z
    void _MapLayoutSectionToCollectionSection(SectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionEventCB@CVirtualUIGroupItem@@AEAAJPEAUIUnknown@@PEAUCollectionEventParams@@@Z
    long _OnCollectionEventCB(IUnknown *, CollectionEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemEventCB@CVirtualUIGroupItem@@AEAAJPEAUIUnknown@@PEAUItemEventParams@@@Z
    long _OnItemEventCB(IUnknown *, ItemEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLayoutPropertyChanged@CVirtualUIGroupItem@@AEAAXXZ
    void _OnLayoutPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UICollectionExists@CVirtualUIGroupItem@@AEAAHXZ
    int _UICollectionExists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CVirtualUIGroupItem@@AEAAJXZ
    long _Update();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCollectionFromItem@CVirtualUIGroupItem@@AEAAJXZ
    long _UpdateCollectionFromItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplayedItemCount@CVirtualUIGroupItem@@AEAAXXZ
    void _UpdateDisplayedItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemLayoutProperties@CVirtualUIGroupItem@@AEAAXW4UPDATEITEMLAYOUTPROPOPTIONS@1@@Z
    void _UpdateItemLayoutProperties(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUICollectionFooterScrollTickCount@CVirtualUIGroupItem@@AEAAXXZ
    void _UpdateUICollectionFooterScrollTickCount();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualUIGroupItem@@AEAA@XZ
    ~CVirtualUIGroupItem();
};
