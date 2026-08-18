#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 104 member(s).
class CSuggestPopup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSuggestPopup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHide@CSuggestPopup@@UEAAJXZ
    virtual long AutoHide();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSuggestPopup@@QEAA@XZ
    CSuggestPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingTasks@CSuggestPopup@@UEAAJXZ
    virtual long CancelPendingTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMRU@CSuggestPopup@@UEAAJXZ
    virtual long ClearMRU();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@CSuggestPopup@@UEAAJW4CM_ENUM_FLAGS@@PEAI@Z
    virtual long GetColumnCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnInfo@CSuggestPopup@@UEAAJAEBU_tagpropertykey@@PEAUCM_COLUMNINFO@@@Z
    virtual long GetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumns@CSuggestPopup@@UEAAJW4CM_ENUM_FLAGS@@PEAU_tagpropertykey@@I@Z
    virtual long GetColumns(int, _tagpropertykey *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CSuggestPopup@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@PEAH@Z
    virtual long GetItemState(int, tagLVITEMW * const, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CSuggestPopup@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HidePopup@CSuggestPopup@@UEAAJXZ
    virtual long HidePopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFilterVisible@CSuggestPopup@@UEAAJXZ
    virtual long IsFilterVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMRUVisible@CSuggestPopup@@UEAAJXZ
    virtual long IsMRUVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CSuggestPopup@@UEAAJXZ
    virtual long IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillSelection@CSuggestPopup@@UEAAJXZ
    virtual long KillSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelAsyncFilters@CSuggestPopup@@UEAAJI@Z
    virtual long OnCancelAsyncFilters(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearFilterPreview@CSuggestPopup@@UEAAJI@Z
    virtual long OnClearFilterPreview(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommit@CSuggestPopup@@UEAAJIAEBU_tagpropertykey@@W4tagARRANGE_MODE@@@Z
    virtual long OnCommit(unsigned int, _tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CSuggestPopup@@UEAAJXZ
    virtual long OnCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CSuggestPopup@@UEAAJXZ
    virtual long OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyFilterControl@CSuggestPopup@@UEAAJI@Z
    virtual long OnDestroyFilterControl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CSuggestPopup@@UEAAJH@Z
    virtual long OnDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterChanged@CSuggestPopup@@UEAAJIAEBU_tagpropertykey@@PEAUIFilterCondition@@@Z
    virtual long OnFilterChanged(unsigned int, _tagpropertykey const &, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFiltersReady@CSuggestPopup@@UEAAJKW4SUGGESTFILTERFLAGS@@PEAUIObjectCollection@@@Z
    virtual long OnFiltersReady(unsigned long, int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSearchText@CSuggestPopup@@UEAAJW4SEARCHTEXTTYPE@@PEAGI@Z
    virtual long OnGetSearchText(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CSuggestPopup@@UEAAJW4LVPVIEWID@@PEBUtagNMLISTVIEW@@H@Z
    virtual long OnItemChanged(int, tagNMLISTVIEW const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemFocused@CSuggestPopup@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@1@Z
    virtual long OnItemFocused(int, tagLVITEMW * const, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInvoke@CSuggestPopup@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemInvoke(int, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemRemoved@CSuggestPopup@@UEAAJW4REMOVEITEMTYPE@@W4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemRemoved(int, int, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMRUReady@CSuggestPopup@@UEAAJKPEAUIObjectCollection@@@Z
    virtual long OnMRUReady(unsigned long, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeave@CSuggestPopup@@UEAAJXZ
    virtual long OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropCtrlInvoke@CSuggestPopup@@UEAAJPEAUIFilterCondition@@@Z
    virtual long OnPropCtrlInvoke(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReposition@CSuggestPopup@@UEAAJIPEBUtagRECT@@@Z
    virtual long OnRequestReposition(unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReposition@CSuggestPopup@@UEAAJPEBUtagRECT@@@Z
    virtual long OnRequestReposition(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinnerCancel@CSuggestPopup@@UEAAJW4LVPVIEWID@@@Z
    virtual long OnSpinnerCancel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolBarItemInvoke@CSuggestPopup@@UEAAJH@Z
    virtual long OnToolBarItemInvoke(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PruneFilters@CSuggestPopup@@UEAAJPEBG@Z
    virtual long PruneFilters(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSuggestPopup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSuggestPopup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSuggestPopup@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnInfo@CSuggestPopup@@UEAAJAEBU_tagpropertykey@@PEBUCM_COLUMNINFO@@@Z
    virtual long SetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumns@CSuggestPopup@@UEAAJPEBU_tagpropertykey@@I@Z
    virtual long SetColumns(_tagpropertykey const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomMRU@CSuggestPopup@@UEAAJAEBU_GUID@@@Z
    virtual long SetCustomMRU(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAutoHide@CSuggestPopup@@UEAAJXZ
    virtual long ShouldAutoHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowFilter@CSuggestPopup@@UEAAJPEAPEAUIPropertyKeyStore@@@Z
    virtual long ShouldShowFilter(IPropertyKeyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFilterPopup@CSuggestPopup@@UEAAJPEAUHWND__@@HW4SUGGESTPOPUPFLAGS@@W4FILTERWORKERFLAGS@@PEAUIShellItem@@PEAUIPropertyKeyStore@@AEBU_tagpropertykey@@PEBGPEAUISuggestPopupCallback@@@Z
    virtual long ShowFilterPopup(HWND__*, int, int, int, IShellItem *, IPropertyKeyStore *, _tagpropertykey const &, unsigned short const *, ISuggestPopupCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMRUPopup@CSuggestPopup@@UEAAJPEAUHWND__@@W4SUGGESTPOPUPFLAGS@@PEBGPEAUIPropertyKeyStore@@PEAUIShellItem@@PEAUISuggestPopupCallback@@@Z
    virtual long ShowMRUPopup(HWND__*, int, unsigned short const *, IPropertyKeyStore *, IShellItem *, ISuggestPopupCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpecialCharacter@CSuggestPopup@@UEAAJPEBUtagMSG@@H@Z
    virtual long SpecialCharacter(tagMSG const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CSuggestPopup@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CSuggestPopup@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMRU@CSuggestPopup@@UEAAJPEBG@Z
    virtual long UpdateMRU(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDefaultSuggestedProperties@CSuggestPopup@@AEAAJPEAUIPropertyKeyStore@@@Z
    long _AddDefaultSuggestedProperties(IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFilterConditionToCollection@CSuggestPopup@@AEAAJPEAUIFilterCondition@@PEAUIObjectCollection@@@Z
    long _AddFilterConditionToCollection(IFilterCondition *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddMRUItems@CSuggestPopup@@AEAAJPEAUIListViewPopup@@PEAUIObjectCollection@@@Z
    long _AddMRUItems(IListViewPopup *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPerFolderSuggestedProperties@CSuggestPopup@@AEAAJPEAUIPropertyKeyStore@@@Z
    long _AddPerFolderSuggestedProperties(IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertyButton@CSuggestPopup@@AEAAJPEAUIPropertyDescription@@I@Z
    long _AddPropertyButton(IPropertyDescription *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSuggestedPropertiesToPopup@CSuggestPopup@@AEAAJXZ
    long _AddSuggestedPropertiesToPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendUnspecifiedFilterIfNeeded@CSuggestPopup@@AEAAJPEAUIPropertyDescription@@PEAUIObjectCollection@@@Z
    long _AppendUnspecifiedFilterIfNeeded(IPropertyDescription *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFilterControl@CSuggestPopup@@AEAAJH@Z
    long _EnsureFilterControl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFrameTaskManager@CSuggestPopup@@AEAAJXZ
    long _EnsureFrameTaskManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMRUCache@CSuggestPopup@@AEAAJXZ
    long _EnsureMRUCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePopup@CSuggestPopup@@AEAAJXZ
    long _EnsurePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSuggestedProperties@CSuggestPopup@@AEAAJXZ
    long _EnsureSuggestedProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateStaticFilters@CSuggestPopup@@AEAAJXZ
    long _EnumerateStaticFilters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherFilterResults@CSuggestPopup@@AEAAJI@Z
    long _GatherFilterResults(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherMRUResults@CSuggestPopup@@AEAAJH@Z
    long _GatherMRUResults(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPopupLocation@CSuggestPopup@@AEAA?AUtagPOINT@@XZ
    tagPOINT _GetPopupLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPopupWidth@CSuggestPopup@@AEAAHXZ
    int _GetPopupWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyControlKey@CSuggestPopup@@AEAAJPEAU_tagpropertykey@@@Z
    long _GetPropertyControlKey(_tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSpecialCharacter@CSuggestPopup@@AEAAJPEAUtagMSG@@H@Z
    long _IsSpecialCharacter(tagMSG *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KeysMatch@CSuggestPopup@@AEAAHPEAUIPropertyKeyStore@@0@Z
    int _KeysMatch(IPropertyKeyStore *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinimumWidth@CSuggestPopup@@AEAAHXZ
    int _MinimumWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NoResults@CSuggestPopup@@AEAAJI@Z
    long _NoResults(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnReplaceQuery@CSuggestPopup@@AEAAJPEAUISuggestPopupInfo@@@Z
    long _OnReplaceQuery(ISuggestPopupInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneFilters@CSuggestPopup@@AEAAJXZ
    long _PruneFilters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Reset@CSuggestPopup@@AEAAXXZ
    void _Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFilterCollection@CSuggestPopup@@AEAAXW4SFCFLAGS@@PEAUIObjectCollection@@@Z
    void _SetFilterCollection(int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowPropertiesPopup@CSuggestPopup@@AEAAJXZ
    long _ShowPropertiesPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SplitFilteredItem@CSuggestPopup@@AEAAJPEAUIShellItem@@PEAPEAU2@PEAPEAUICondition@@@Z
    long _SplitFilteredItem(IShellItem *, IShellItem * *, ICondition * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuggestPopup@@EEAA@XZ
    virtual ~CSuggestPopup();
};
