#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 130 member(s).
class CItemsView {
public:
    class CItemObjectCollection;
    class CItemsViewScroller;
    class COrderedItemObjectCollection;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemsView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeColumn@CItemsView@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long AutoSizeColumn(_tagpropertykey const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsView@@QEAA@XZ
    CItemsView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScroll@CItemsView@@UEAAJPEBUtagPOINT@@PEAH@Z
    virtual long CanScroll(tagPOINT const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CItemsView@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAllGroups@CItemsView@@UEAAJXZ
    virtual long CollapseAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CItemsView@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateControl@CItemsView@@UEAAJPEAUHWND__@@PEAUIListControlHost@@PEAUIViewSettings@@@Z
    virtual long CreateControl(HWND__*, IListControlHost *, IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CItemsView@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissEdit@CItemsView@@UEAAJXZ
    virtual long DismissEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragSelectItem@CItemsView@@UEAAJPEBUtagLCITEM@@@Z
    virtual long DragSelectItem(tagLCITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditItemLabel@CItemsView@@UEAAJPEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long EditItemLabel(tagLCITEM const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAlphaShadow@CItemsView@@UEAAJH@Z
    virtual long EnableAlphaShadow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@CItemsView@@UEAAJAEBUtagLCITEM@@@Z
    virtual long EnsureVisible(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandAllGroups@CItemsView@@UEAAJXZ
    virtual long ExpandAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@CItemsView@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItem(IItem *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemAndIndex@CItemsView@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItemAndIndex(IItem *, tagLCITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorItemAndCount@CItemsView@@UEAAJPEAPEAUIItem@@PEAI@Z
    virtual long GetAnchorItemAndCount(IItem * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CItemsView@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CItemsView@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CItemsView@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetFocusedItem(tagLCITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFont@CItemsView@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CItemsView@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMark@CItemsView@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetInsertMark(tagLCITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMarkRect@CItemsView@@UEAAJPEAUtagRECT@@@Z
    virtual long GetInsertMarkRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CItemsView@@UEAAJHPEAPEAUIItem@@@Z
    virtual long GetItem(int, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CItemsView@@UEAAJW4tagLC_ITEM_SET_TYPE@@PEAI@Z
    virtual long GetItemCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemHeight@CItemsView@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CItemsView@@UEAAJAEBUtagLCITEM@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(tagLCITEM const &, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CItemsView@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetItemRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSize@CItemsView@@UEAAJPEAH0@Z
    virtual long GetItemSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@CItemsView@@UEAAJPEAH0@Z
    virtual long GetItemSpacing(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CItemsView@@UEAAJAEBUtagLCITEM@@PEAW4LC_ITEM_FLAGS@@@Z
    virtual long GetItemState(tagLCITEM const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemToTranslate@CItemsView@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetItemToTranslate(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItems@CItemsView@@UEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetItems(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextIndex@CItemsView@@UEAAJHW4tagLC_NEXT_INDEX_STATE@@KPEAH@Z
    virtual long GetNextIndex(int, int, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollingWindow@CItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetScrollingWindow(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentBackground@CItemsView@@UEAAJPEAH@Z
    virtual long GetTransparentBackground(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItemCount@CItemsView@@UEAAJPEAI@Z
    virtual long GetVisibleItemCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CItemsView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostSelectedItems@CItemsView@@UEAAJH@Z
    virtual long GhostSelectedItems(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CItemsView@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestInsertMark@CItemsView@@UEAAJPEBUtagPOINT@@PEAUtagLCITEM@@@Z
    virtual long HitTestInsertMark(tagPOINT const *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CItemsView@@UEAAJPEBUtagPOINT@@HPEAUtagLCITEM@@@Z
    virtual long HitTestItem(tagPOINT const *, int, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CItemsView@@UEAAJUtagPOINT@@PEAH@Z
    virtual long HitTestItem(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateEmptyText@CItemsView@@UEAAJXZ
    virtual long InvalidateEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTryHarder@CItemsView@@UEAAJXZ
    virtual long InvalidateTryHarder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSelectionContextMenu@CItemsView@@UEAAJH@Z
    virtual long InvokeSelectionContextMenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoint@CItemsView@@UEAAJW4tagLC_POINT_TYPE@@PEBUtagPOINT@@0PEAU3@@Z
    virtual long MapPoint(int, tagPOINT const *, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRect@CItemsView@@UEAAJHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long MapRect(int, HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeSelectionContextMenu@CItemsView@@UEAAJPEAUHMENU__@@HPEBUtagPOINT@@@Z
    virtual long MergeSelectionContextMenu(HMENU__*, int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerWindowReady@CItemsView@@UEAAJXZ
    virtual long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CItemsView@@UEAAJK@Z
    virtual long OnSettingsChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsLoad@CItemsView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsLoad(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsSave@CItemsView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsSave(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChanging@CItemsView@@UEAAJW4tagLC_VIEW_CHANGING@@@Z
    virtual long OnViewChanging(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawItem@CItemsView@@UEAAJAEBUtagLCITEM@@@Z
    virtual long RedrawItem(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@CItemsView@@UEAAJXZ
    virtual long RefreshSettings();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemsView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresGetCountTask@CItemsView@@UEAAJXZ
    virtual long RequiresGetCountTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLine@CItemsView@@UEAAJHG@Z
    virtual long ScrollLine(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CItemsView@@UEAAJW4tagLC_SELECTION_MODE@@@Z
    virtual long Select(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CItemsView@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CItemsView@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CItemsView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerFocus@CItemsView@@UEAAJH@Z
    virtual long SetInnerFocus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertMark@CItemsView@@UEAAJPEBUtagLCITEM@@@Z
    virtual long SetInsertMark(tagLCITEM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@CItemsView@@UEAAJPEAUIItemCollection@@@Z
    virtual long SetItemCollection(IItemCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemHeight@CItemsView@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPosition@CItemsView@@UEAAJAEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long SetItemPosition(tagLCITEM const &, tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemState@CItemsView@@UEAAJAEBUtagLCITEM@@W4LC_ITEM_FLAGS@@1@Z
    virtual long SetItemState(tagLCITEM const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CItemsView@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CItemsView@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentBackground@CItemsView@@UEAAJH@Z
    virtual long SetTransparentBackground(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CItemsView@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CItemsView@@UEAAJPEBUtagPOINT@@@Z
    virtual long ShowContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CItemsView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CItemsView@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemsView@@UEAA@XZ
    virtual ~CItemsView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowCheckboxes@CItemsView@@AEAAXW4FOLDERFLAGS@@@Z
    void UpdateShowCheckboxes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyUIItemsView@CItemsView@@AEAAXXZ
    void _DestroyUIItemsView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetectThemedMode@CItemsView@@AEAAXXZ
    void _DetectThemedMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedItemObjectArray@CItemsView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetCachedItemObjectArray(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextDefaultIndex@CItemsView@@AEAAJHKPEAH@Z
    long _GetNextDefaultIndex(int, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextFocusedIndex@CItemsView@@AEAAJHPEAH@Z
    long _GetNextFocusedIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextSelectedIndex@CItemsView@@AEAAJHPEAH@Z
    long _GetNextSelectedIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextSelectionMarkIndex@CItemsView@@AEAAJPEAH@Z
    long _GetNextSelectionMarkIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItemCount@CItemsView@@AEAAJPEAI@Z
    long _GetSelectedItemCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItems@CItemsView@@AEAAJW4tagLC_ITEM_SET_ORDER@@AEBU_GUID@@PEAPEAX@Z
    long _GetSelectedItems(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CItemsView@@AEAAJPEAUHWND__@@PEAUIListControlHost@@PEAUIViewSettings@@@Z
    long _Initialize(HWND__*, IListControlHost *, IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGroupByChanged@CItemsView@@AEAAJXZ
    long _OnGroupByChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterViewSettings@CItemsView@@AEAAJPEAUIViewSettings@@@Z
    long _RegisterViewSettings(IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentCollection@CItemsView@@AEAAXXZ
    void _ReleaseCurrentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseViewSettings@CItemsView@@AEAAXXZ
    void _ReleaseViewSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSubsetStatus@CItemsView@@AEAAXW4FOLDERFLAGS@@@Z
    void _UpdateSubsetStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewsFolderFlags@CItemsView@@AEAAJXZ
    long _UpdateViewsFolderFlags();
};
