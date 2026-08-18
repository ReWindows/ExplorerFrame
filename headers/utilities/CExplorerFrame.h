#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 223 member(s).
class CExplorerFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessagePumpCallback@CExplorerFrame@@UEAAJPEAUIExplorerFrameCallback@@@Z
    virtual long AddMessagePumpCallback(IExplorerFrameCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessagePumpOneTimeIdleCallback@CExplorerFrame@@UEAAJPEAUIExplorerFrameCallback@@@Z
    virtual long AddMessagePumpOneTimeIdleCallback(IExplorerFrameCallback *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerFrame@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTab@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4NewTabEntryPoint@@PEAU_GUID@@@Z
    virtual long AddTab(_ITEMIDLIST_ABSOLUTE const *, int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTabAtIndex@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4NewTabEntryPoint@@HPEAU_GUID@@@Z
    virtual long AddTabAtIndex(_ITEMIDLIST_ABSOLUTE const *, int, int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToolbar@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBGK@Z
    virtual long AddToolbar(IUnknown *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CExplorerFrame@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CExplorerFrame@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CExplorerFrame@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CExplorerFrame@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainCallbackQueue@CExplorerFrame@@QEAAXPEAV?$CDPA@UIExplorerFrameCallback@@V?$CTContainer_PolicyUnOwned@UIExplorerFrameCallback@@@@@@@Z
    void DrainCallbackQueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CExplorerFrame@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CExplorerFrame@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExplorerTimerCallback@CExplorerFrame@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void ExplorerTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindToolbar@CExplorerFrame@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long FindToolbar(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameMessagePump@CExplorerFrame@@QEAAXXZ
    void FrameMessagePump();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEAUtagRECT@@@Z
    virtual long GetBorderDW(IUnknown *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowser@CExplorerFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetBrowser(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMode@CExplorerFrame@@UEAAJPEAW4SHELL_BROWSER_FRAME_MODE@@@Z
    virtual long GetFrameMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameOptions@CExplorerFrame@@UEAAJPEAK@Z
    virtual long GetFrameOptions(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameRect@CExplorerFrame@@UEAAJPEAUtagRECT@@@Z
    virtual long GetFrameRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CExplorerFrame@@UEAAJPEAJ000@Z
    virtual long GetPosition(long *, long *, long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabDataById@CExplorerFrame@@UEAAJPEAUFileExplorerTabData@@@Z
    virtual long GetTabDataById(FileExplorerTabData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CExplorerFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCloseOnTabs@CExplorerFrame@@QEAAHUtagMSG@@@Z
    int HandleCloseOnTabs(tagMSG);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CExplorerFrame@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExplorerFrame@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CExplorerFrame@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorOn@CExplorerFrame@@UEAAJPEAH@Z
    virtual long IsMonitorOn(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CExplorerFrame@@UEAAJXZ
    virtual long IsVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowInPrelaunchState@CExplorerFrame@@UEAAHXZ
    virtual int IsWindowInPrelaunchState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@CExplorerFrame@@UEAAJXZ
    virtual long MakeVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSelectedTabToPosition@CExplorerFrame@@QEAAJI@Z
    long MoveSelectedTabToPosition(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveTabToNewWindow@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long MoveTabToNewWindow(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserClosed@CExplorerFrame@@UEAAJXZ
    virtual long OnBrowserClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserCreated@CExplorerFrame@@UEAAJXZ
    virtual long OnBrowserCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserStateChanged@CExplorerFrame@@UEAAJK@Z
    virtual long OnBrowserStateChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragRegionOffsetChanged@CExplorerFrame@@UEAAJJ@Z
    virtual long OnDragRegionOffsetChanged(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedViewStartedToShow@CExplorerFrame@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@U_GUID@@PEAD@Z
    virtual void OnNavigatedViewStartedToShow(_ITEMIDLIST_ABSOLUTE const *, _GUID, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrelaunchedViewStartedToShow@CExplorerFrame@@UEAAXXZ
    virtual void OnPrelaunchedViewStartedToShow();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CExplorerFrame@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CExplorerFrame@@UEAAJPEBU_GUID@@KPEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD *, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewLoadedOnNextViewShown@CExplorerFrame@@UEAAXHU_GUID@@@Z
    virtual void RaiseViewLoadedOnNextViewShown(int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNavigationEventHandler@CExplorerFrame@@UEAAJPEAUIShellNavigationBand@@PEAK@Z
    virtual long RegisterNavigationEventHandler(IShellNavigationBand *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSearchEventHandler@CExplorerFrame@@UEAAJPEAUIShellSearchBand@@PEAK@Z
    virtual long RegisterSearchEventHandler(IShellSearchBand *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTabEventsHandler@CExplorerFrame@@UEAAJPEAUIFileExplorerTabEventsHandler@@PEAK@Z
    virtual long RegisterTabEventsHandler(IFileExplorerTabEventsHandler *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerFrame@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTab@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long RemoveTab(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToolbar@CExplorerFrame@@UEAAJPEAUIUnknown@@K@Z
    virtual long RemoveToolbar(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTabDragCompletedInternal@CExplorerFrame@@UEAAJXZ
    virtual long ReportTabDragCompletedInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTabDragStartedInternal@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long ReportTabDragStartedInternal(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBorderSpaceDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long RequestBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartInSeparateProcess@CExplorerFrame@@UEAAJPEAUIShellItem@@H@Z
    virtual long RestartInSeparateProcess(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveFrameState@CExplorerFrame@@UEAAJXZ
    virtual long SaveFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTab@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long SelectTab(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderSpaceDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long SetBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CExplorerFrame@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameMode@CExplorerFrame@@UEAAJW4SHELL_BROWSER_FRAME_MODE@@@Z
    virtual long SetFrameMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameOptions@CExplorerFrame@@UEAAJK@Z
    virtual long SetFrameOptions(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameTitle@CExplorerFrame@@QEAAXPEBGU_GUID@@@Z
    void SetFrameTitle(unsigned short const *, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CExplorerFrame@@UEAAJJJJJI@Z
    virtual long SetPosition(long, long, long, long, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRibbonHeight@CExplorerFrame@@UEAAJI@Z
    virtual long SetRibbonHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabProgress@CExplorerFrame@@QEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJAEBU_GUID@@@Z
    void SetTabProgress(int, long, long, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CExplorerFrame@@UEAAJH@Z
    virtual long SetVisible(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPrecreatedWindow@CExplorerFrame@@UEAAJPEBULAUNCH_REQUEST_ARGS@@@Z
    virtual long ShowPrecreatedWindow(LAUNCH_REQUEST_ARGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CExplorerFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CExplorerFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterNavigationEventHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterNavigationEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSearchEventHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterSearchEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTabEventsHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterTabEventsHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlDragCompleted@CExplorerFrame@@UEAAXXZ
    virtual void XamlDragCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlDragStarted@CExplorerFrame@@UEAAXXZ
    virtual void XamlDragStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveClientRect@CExplorerFrame@@UEAAJPEAUtagRECT@@@Z
    virtual long get_EffectiveClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReservedBorder@CExplorerFrame@@UEAAJPEAUtagSIZE@@@Z
    virtual long get_ReservedBorder(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@CExplorerFrame@@UEAAJPEAJ@Z
    virtual long get_TitleBarHeight(long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerFrame@@IEAA@PEAUIETHREADPARAM@@@Z
    CExplorerFrame(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultFocus@CExplorerFrame@@MEAAXXZ
    virtual void _SetDefaultFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerFrame@@MEAA@XZ
    virtual ~CExplorerFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRestartList_Tabs@CExplorerFrame@@AEAAJXZ
    long AddToRestartList_Tabs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeInitialWindowLocation@CExplorerFrame@@AEAAXPEAU_ITEMIDLIST_ABSOLUTE@@PEAH111@Z
    void ComputeInitialWindowLocation(_ITEMIDLIST_ABSOLUTE *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMinimumFrameSize@CExplorerFrame@@AEBAXPEAH0@Z
    void ComputeMinimumFrameSize(int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTargetWindowPlacement@CExplorerFrame@@AEAAXPEAUIETHREADPARAM@@PEAH111@Z
    void ComputeTargetWindowPlacement(IETHREADPARAM *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUserActivity@CExplorerFrame@@CA?AUUserActivity@UserActivities@ApplicationModel@Windows@winrt@@PEAUIShellItem2@@@Z
    static WindissectOpaque CreateUserActivity(IShellItem2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDispatcherQueueController@CExplorerFrame@@AEAAJXZ
    long EnsureDispatcherQueueController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowsXamlManager@CExplorerFrame@@AEAAXXZ
    void EnsureWindowsXamlManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendFrameIntoClient@CExplorerFrame@@AEAA_NXZ
    bool ExtendFrameIntoClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallBackToExplorerRibbon@CExplorerFrame@@AEAAXXZ
    void FallBackToExplorerRibbon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationProgressChangedEvent@CExplorerFrame@@AEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    void FireNavigationProgressChangedEvent(int, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationStateChangedEvent@CExplorerFrame@@AEAAXK@Z
    void FireNavigationStateChangedEvent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationTargetChangedEvent@CExplorerFrame@@AEAAXPEAUIShellNavigationTarget@@@Z
    void FireNavigationTargetChangedEvent(IShellNavigationTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTabChangedEvent@CExplorerFrame@@AEAAXW4EXPLORER_TAB_ACTION@@AEBUFileExplorerTabData@@AEBUFEBrowserTab@@@Z
    void FireTabChangedEvent(int, FileExplorerTabData const &, FEBrowserTab const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserTabFromId@CExplorerFrame@@AEBAJU_GUID@@AEAUFEBrowserTab@@@Z
    long GetBrowserTabFromId(_GUID, FEBrowserTab &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTabShellItem@CExplorerFrame@@AEAAJPEAPEAUIShellItem@@@Z
    long GetSelectedTabShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCommandBarEnabledAndAvailable@CExplorerFrame@@AEAA_NXZ
    bool IsCommandBarEnabledAndAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySearchControlOfResize@CExplorerFrame@@AEAAX_N@Z
    void NotifySearchControlOfResize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CExplorerFrame@@AEAAXPEAUHWND__@@_J@Z
    void OnDPIChanged(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PossiblyRestartInSecondaryProcessOnMove@CExplorerFrame@@AEAAX_N@Z
    void PossiblyRestartInSecondaryProcessOnMove(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImmersiveColorSettings@CExplorerFrame@@AEAAJXZ
    long RefreshImmersiveColorSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPidlToDefaultLocation@CExplorerFrame@@AEAAJXZ
    long ResetPidlToDefaultLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBoundedWindowPosOpt@CExplorerFrame@@AEAAXPEAUHWND__@@HHHHHII@Z
    void SetBoundedWindowPosOpt(HWND__*, int, int, int, int, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowTabs@CExplorerFrame@@AEAA_N_N@Z
    bool ShouldShowTabs(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToUserActivityRequest@CExplorerFrame@@AEAAJXZ
    long SubscribeToUserActivityRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionFrameLaunchStateIfValid@CExplorerFrame@@AEAA_NW4FrameLaunchState@@@Z
    bool TransitionFrameLaunchStateIfValid(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFileExplorerTabsExtensionHelpers@CExplorerFrame@@AEAAJIPEAPEAUIFileExplorerTabsExtensionHelpers@@@Z
    long TryGetFileExplorerTabsExtensionHelpers(unsigned int, IFileExplorerTabsExtensionHelpers * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeToUserActivityRequest@CExplorerFrame@@AEAAJXZ
    long UnsubscribeToUserActivityRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColor@CExplorerFrame@@AEAAXPEAUHWND__@@@Z
    void UpdateBackgroundColor(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationState@CExplorerFrame@@AEAAXK@Z
    void UpdateNavigationState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationTarget@CExplorerFrame@@AEAAXPEAUIShellNavigationTarget@@@Z
    void UpdateNavigationTarget(IShellNavigationTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchState@CExplorerFrame@@AEAAXW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    void UpdateSearchState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchTarget@CExplorerFrame@@AEAAXPEAUIShellSearchTarget@@@Z
    void UpdateSearchTarget(IShellSearchTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitlebar@CExplorerFrame@@AEAAX_N@Z
    void UpdateTitlebar(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CExplorerFrame@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNavBar@CExplorerFrame@@AEAAJXZ
    long _CreateNavBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyFRAMETOOLBARITEM@CExplorerFrame@@CAHPEAUFRAMETOOLBARITEM@@PEAX@Z
    static int _DestroyFRAMETOOLBARITEM(FRAMETOOLBARITEM *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEndOfGroup@CExplorerFrame@@AEAAHK@Z
    int _FindEndOfGroup(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindToolbar@CExplorerFrame@@AEAAHPEAUIUnknown@@@Z
    int _FindToolbar(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindToolbar@CExplorerFrame@@AEAAHPEBG@Z
    int _FindToolbar(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDropTarget@CExplorerFrame@@AEAAJPEAPEAUIDropTarget@@@Z
    long _GetDropTarget(IDropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWarmScheduler@CExplorerFrame@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetWarmScheduler(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertToolbar@CExplorerFrame@@AEAAJPEAUFRAMETOOLBARITEM@@@Z
    long _InsertToolbar(FRAMETOOLBARITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFrameState@CExplorerFrame@@AEAAXPEAUIETHREADPARAM@@@Z
    void _LoadFrameState(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyFrameStateChanged@CExplorerFrame@@AEAAXXZ
    void _NotifyFrameStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppCommand@CExplorerFrame@@AEAAH_K_J@Z
    int _OnAppCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@CExplorerFrame@@AEAAXXZ
    void _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CExplorerFrame@@AEAAX_K_J@Z
    void _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CExplorerFrame@@AEAAHPEAUHWND__@@@Z
    int _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@CExplorerFrame@@AEAAXXZ
    void _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CExplorerFrame@@AEAAX_K_J@Z
    void _OnFSNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFrameShutdown@CExplorerFrame@@AEAAXXZ
    void _OnFrameShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CExplorerFrame@@AEAAXXZ
    void _OnSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterFrameClass@CExplorerFrame@@AEAAXXZ
    void _RegisterFrameClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveFrameState@CExplorerFrame@@AEAAXW4PEFSAVEFLAGS@@H@Z
    void _SaveFrameState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMessageToNavBar@CExplorerFrame@@AEAAXI_K_J@Z
    void _SendMessageToNavBar(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMessageToToolbars@CExplorerFrame@@AEAAXI_K_J@Z
    void _SendMessageToToolbars(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFrameMode@CExplorerFrame@@AEAAJW4SHELL_BROWSER_FRAME_MODE@@H@Z
    long _SetFrameMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSaveFrameState@CExplorerFrame@@AEAAHXZ
    int _ShouldSaveFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncInputObjects@CExplorerFrame@@AEAAX_N@Z
    void _SyncInputObjects(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFrameState@CExplorerFrame@@AEAAXXZ
    void _UpdateFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNavigationProgress@CExplorerFrame@@AEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    void _UpdateNavigationProgress(int, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNavigationState@CExplorerFrame@@AEAAXK@Z
    void _UpdateNavigationState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSearchState@CExplorerFrame@@AEAAXW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    void _UpdateSearchState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTargets@CExplorerFrame@@AEAAXPEAUIBrowserHost@@@Z
    void _UpdateTargets(IBrowserHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTheater@CExplorerFrame@@AEAAJH@Z
    long _UpdateTheater(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbars@CExplorerFrame@@AEAAXXZ
    void _UpdateToolbars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CExplorerFrame@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
