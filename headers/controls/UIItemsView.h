#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 136 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class UIItemsView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@UIItemsView@@UEAAXPEAVElement@DirectUI@@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIItemsView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseCollection@UIItemsView@@QEAAJPEAUIItemCollection@@W4ADVISE_TYPE@@@Z
    long AdviseCollection(IItemCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeColumn@UIItemsView@@QEAAJAEBU_tagpropertykey@@@Z
    long AutoSizeColumn(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockRedrawWithTimeout@UIItemsView@@QEAAXM@Z
    void BlockRedrawWithTimeout(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastViewSettingsChanged@UIItemsView@@QEAAXK@Z
    void BroadcastViewSettingsChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScroll@UIItemsView@@QEAAHPEBUtagPOINT@@@Z
    int CanScroll(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAllGroups@UIItemsView@@QEAAXXZ
    void CollapseAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@UIItemsView@@SAJPEAUHWND__@@PEAUIUnknown@@PEAUIListControlHost@@PEAUIViewSettings@@_NIPEAKPEAPEAV1@@Z
    static long Create(HWND__*, IUnknown *, IListControlHost *, IViewSettings *, bool, unsigned int, unsigned long *, UIItemsView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferContentsChanged@UIItemsView@@QEAAXW4ChangeIncludesSelection@@@Z
    void DeferContentsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DontForwardKeyboardNavigate@UIItemsView@@UEAAHXZ
    virtual int DontForwardKeyboardNavigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@UIItemsView@@QEAAJPEAUIItem@@@Z
    long EnsureVisible(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumUIItems@UIItemsView@@QEAAJP6AJPEAVUIItem@@PEAX@Z1@Z
    long EnumUIItems(long ( *)(UIItem *, void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandAllGroups@UIItemsView@@QEAAXXZ
    void ExpandAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireVisualChangeEvent@UIItemsView@@QEAAXPEAVElement@DirectUI@@W4VISUALCHANGETYPE@@@Z
    void FireVisualChangeEvent(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIItemsView@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionAction@UIItemsView@@QEAA?AW4tagEVENTACTION@@H@Z
    int GetCollectionAction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionCache@UIItemsView@@QEAAJPEAPEAUICollectionCache@@@Z
    long GetCollectionCache(ICollectionCache * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionCreationMap@UIItemsView@@QEAAPEBGXZ
    unsigned short const * GetCollectionCreationMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFocusRegion@UIItemsView@@QEAA?AW4FOCUS_REGION@1@XZ
    int GetCurrentFocusRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIItemsView@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstPageResults@UIItemsView@@QEAAJPEAPEAUIFirstPageResults@@@Z
    long GetFirstPageResults(IFirstPageResults * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManager@UIItemsView@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetFocusManager(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGhostingManager@UIItemsView@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetGhostingManager(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHDC@UIItemsView@@QEAAPEAUHDC__@@XZ
    HDC__* GetHDC();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputHandler@UIItemsView@@QEAAJW4InputHandlersType@@AEBU_GUID@@PEAPEAX@Z
    long GetInputHandler(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFromPoint@UIItemsView@@QEAAJPEBUtagPOINT@@PEAPEAUIItem@@@Z
    long GetItemFromPoint(tagPOINT const *, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIndexFromPoint@UIItemsView@@QEAAJPEBUtagPOINT@@PEAH@Z
    long GetItemIndexFromPoint(tagPOINT const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineHScrollBar@UIItemsView@@QEAAPEAVLineHScrollBar@@XZ
    LineHScrollBar * GetLineHScrollBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineScroller@UIItemsView@@QEAAPEAVLineScroller@@XZ
    LineScroller * GetLineScroller();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineVScrollBar@UIItemsView@@QEAAPEAVLineVScrollBar@@XZ
    LineVScrollBar * GetLineVScrollBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineViewer@UIItemsView@@QEAAPEAVLineViewer@@XZ
    LineViewer * GetLineViewer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListControlHost@UIItemsView@@QEAAJPEAPEAUIListControlHost@@@Z
    long GetListControlHost(IListControlHost * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryDC@UIItemsView@@QEAAPEAUHDC__@@XZ
    HDC__* GetMemoryDC();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootCollection@UIItemsView@@QEAAJPEAPEAUIItemCollection@@@Z
    long GetRootCollection(IItemCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootItem@UIItemsView@@QEAAJPEAPEAUIItem@@@Z
    long GetRootItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootUICollection@UIItemsView@@QEAAPEAVUICollection@@XZ
    UICollection * GetRootUICollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootUIItemsHost@UIItemsView@@QEAAPEAVItemLayout@@XZ
    ItemLayout * GetRootUIItemsHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowFocusRect@UIItemsView@@QEAAHXZ
    int GetShowFocusRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@UIItemsView@@QEAAJPEAPEAUIUnknown@@@Z
    long GetSite(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewSettings@UIItemsView@@QEAAJPEAPEAUIViewSettings@@@Z
    long GetViewSettings(IViewSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTab@UIItemsView@@QEAAJ_N@Z
    long HandleTab(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFileNames@UIItemsView@@QEAAHXZ
    int HideFileNames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UIItemsView@@QEAAJPEAUHWND__@@_NIPEAVElement@DirectUI@@PEAUIUnknown@@PEAK@Z
    long Initialize(HWND__*, bool, unsigned int, ::DirectUI::Element *, IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTryHarder@UIItemsView@@QEAAXXZ
    void InvalidateTryHarder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContextMenuOpen@UIItemsView@@QEAA_NXZ
    bool IsContextMenuOpen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraggableItem@UIItemsView@@QEAAHPEAVElement@DirectUI@@@Z
    int IsDraggableItem(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInRenameMode@UIItemsView@@QEAAHXZ
    int IsInRenameMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSelectMode@UIItemsView@@QEAA_NXZ
    bool IsInSelectMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMSAAEnabled@UIItemsView@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewGrouped@UIItemsView@@QEAAHXZ
    int IsViewGrouped();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewGroupedByMVP@UIItemsView@@QEAAHXZ
    int IsViewGroupedByMVP();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemActivateAsync@UIItemsView@@QEAAXK@Z
    void ItemActivateAsync(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutDone@UIItemsView@@QEAAXXZ
    void LayoutDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocateFocusedItem@UIItemsView@@QEAAXPEAUIItem@@@Z
    void LocateFocusedItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySpyClient@UIItemsView@@QEAAXXZ
    void NotifySpyClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@UIItemsView@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIItemsView@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerWindowReady@UIItemsView@@QEAAJXZ
    long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialEnumerationDoneAsync@UIItemsView@@QEAAXXZ
    void OnInitialEnumerationDoneAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIItemsView@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsInserted@UIItemsView@@QEAAXXZ
    void OnItemsInserted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsReused@UIItemsView@@QEAAXXZ
    void OnItemsReused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@UIItemsView@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIItemsView@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRealizeEnd@UIItemsView@@QEAAXXZ
    void OnRealizeEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollThumbTracking@UIItemsView@@QEAAXH@Z
    void OnScrollThumbTracking(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@UIItemsView@@UEAAXPEAUThemeChangedEvent@DirectUI@@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostVisualChangeEvent@UIItemsView@@QEAAXPEAVElement@DirectUI@@W4VISUALCHANGETYPE@@@Z
    void PostVisualChangeEvent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessEventQueue@UIItemsView@@QEAAXXZ
    void PreProcessEventQueue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUIHeader@UIItemsView@@QEAAPEAVUIViewHeader@@XZ
    UIViewHeader * QueryUIHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIItemsView@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIItemsView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadUnderlineStyles@UIItemsView@@QEAAXXZ
    void ReloadUnderlineStyles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTooltip@UIItemsView@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresGetCountTask@UIItemsView@@QEAAJXZ
    long RequiresGetCountTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreListFocus@UIItemsView@@QEAAJXZ
    long RestoreListFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLine@UIItemsView@@QEAAXHG@Z
    void ScrollLine(int, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterInterfaces@UIItemsView@@QEAAXPEAUIUnknown@@PEAUIListControlHost@@PEAUIViewSettings@@@Z
    void SetOuterInterfaces(IUnknown *, IListControlHost *, IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@UIItemsView@@QEAAJPEBUtagPOINT@@@Z
    long ShowContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDestroy@UIItemsView@@QEAAXXZ
    void SyncDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@UIItemsView@@QEAAJPEAUtagMSG@@@Z
    long TranslateAcceleratorIO(tagMSG *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemsView@@QEAA@XZ
    UIItemsView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnblockRedraw@UIItemsView@@QEAAXXZ
    void UnblockRedraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltip@UIItemsView@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@UIItemsView@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UIItemsViewSubclassProc@UIItemsView@@QEAA_JPEAUHWND__@@I_K_J1@Z
    int64_t _UIItemsViewSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UIItemsViewSubclassProc@UIItemsView@@SA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_UIItemsViewSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIItemsView@@UEAA@XZ
    virtual ~UIItemsView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBatchTimer@UIItemsView@@AEAA_NXZ
    bool DeleteBatchTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitScrollBarForDarkMode@UIItemsView@@AEAAJPEAVLineScrollbarBase@@@Z
    long InitScrollBarForDarkMode(LineScrollbarBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateViewMode@UIItemsView@@AEAA?AW4FOLDERVIEWMODE@@XZ
    int _CalculateViewMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelFadeHitTimer@UIItemsView@@AEAAXXZ
    void _CancelFadeHitTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelPrefetch@UIItemsView@@AEAAXXZ
    void _CancelPrefetch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearGroupHeaderClickAction@UIItemsView@@AEAAXXZ
    void _ClearGroupHeaderClickAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFadeHitTimer@UIItemsView@@AEAAXXZ
    void _CreateFadeHitTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFirstPageResults@UIItemsView@@AEAAJXZ
    long _CreateFirstPageResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyPerLocationObjects@UIItemsView@@AEAAXXZ
    void _DestroyPerLocationObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableAnimations@UIItemsView@@AEAAXXZ
    void _EnableAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBatching@UIItemsView@@AEAAJXZ
    long _EnsureBatching();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFocusManager@UIItemsView@@AEAAJXZ
    long _EnsureFocusManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureGhostingManager@UIItemsView@@AEAAJXZ
    long _EnsureGhostingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInplaceRename@UIItemsView@@AEAAJXZ
    long _EnsureInplaceRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureItemActionsManager@UIItemsView@@AEAAJXZ
    long _EnsureItemActionsManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureQueryParser@UIItemsView@@AEAAJXZ
    long _EnsureQueryParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSelectionManager@UIItemsView@@AEAAJXZ
    long _EnsureSelectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTypeAhead@UIItemsView@@AEAAJXZ
    long _EnsureTypeAhead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EstablishSinks@UIItemsView@@AEAAJPEAUIItemCollection@@W4EstablishSinksOptions@1@@Z
    long _EstablishSinks(IItemCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireVisibleColumnsChangedEvent@UIItemsView@@AEAAXXZ
    void _FireVisibleColumnsChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushDeferContentsChanged@UIItemsView@@AEAAXXZ
    void _FlushDeferContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEventActionCB@UIItemsView@@AEAAJPEAUIUnknown@@HPEAUCollectionEventParams@@PEAW4tagEVENTACTION@@@Z
    long _GetEventActionCB(IUnknown *, int, CollectionEventParams *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFocusPosition@UIItemsView@@AEAA?AW4FOCUSPOSITION@1@W4FOCUSDIRECTION@1@_NPEAVElement@DirectUI@@@Z
    int _GetFocusPosition(int, bool, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderCondition@UIItemsView@@AEAAJPEAPEAUICondition2@@@Z
    long _GetFolderCondition(ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextFocusPosition@UIItemsView@@AEAA?AW4FOCUSPOSITION@1@W421@_NW4FOCUSDIRECTION@1@@Z
    int _GetNextFocusPosition(int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Marshal@UIItemsView@@AEAAPEAXK@Z
    void * _Marshal(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBatchTimer@UIItemsView@@AEAAXPEAUGMA_ACTIONINFO@@@Z
    void _OnBatchTimer(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionEventCB@UIItemsView@@AEAAJPEAUIUnknown@@PEAUCollectionEventParams@@@Z
    long _OnCollectionEventCB(IUnknown *, CollectionEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGesture@UIItemsView@@AEAA_JPEAUtagGESTUREINFO@@PEAH@Z
    int64_t _OnGesture(tagGESTUREINFO *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGestureNotify@UIItemsView@@AEAA_JPEAUtagGESTURENOTIFYSTRUCT@@PEAH@Z
    int64_t _OnGestureNotify(tagGESTURENOTIFYSTRUCT *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnStartPrefetch@UIItemsView@@AEAAXXZ
    void _OnStartPrefetch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostUpdateFocus@UIItemsView@@AEAAXXZ
    void _PostUpdateFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshView@UIItemsView@@AEAAXXZ
    void _RefreshView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseAllSinks@UIItemsView@@AEAAXXZ
    void _ReleaseAllSinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetAnimations@UIItemsView@@AEAAXXZ
    void _ResetAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetDUITree@UIItemsView@@AEAAJW4RESET_DUI_TREE_FLAGS@@@Z
    long _ResetDUITree(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetHighlightConditions@UIItemsView@@AEAAXXZ
    void _ResetHighlightConditions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetRoot@UIItemsView@@AEAAJPEAUIItem@@PEAUIItemCollection@@@Z
    long _ResetRoot(IItem *, IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BatchTimerCallback@UIItemsView@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_BatchTimerCallback(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BlockRedrawTimeoutProc@UIItemsView@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_BlockRedrawTimeoutProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FadeHitTimerCallback@UIItemsView@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_FadeHitTimerCallback(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GroupHeaderClickCallback@UIItemsView@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_GroupHeaderClickCallback(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PrefetchTimerCallback@UIItemsView@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_PrefetchTimerCallback(GMA_ACTIONINFO *);
};
