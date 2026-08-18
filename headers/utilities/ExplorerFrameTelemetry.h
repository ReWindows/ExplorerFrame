#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 48 member(s).
class ExplorerFrameTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptLaunchTipTestNotRunningByViewLoadedEvent@ExplorerFrameTelemetry@@SAXXZ
    static void AttemptLaunchTipTestNotRunningByViewLoadedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExplorerLauncher_WindowRequested_@ExplorerFrameTelemetry@@QEBAXPEBD@Z
    void ExplorerLauncher_WindowRequested_(char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FEDirectLaunch_DispatchCompleted_@ExplorerFrameTelemetry@@QEBAXJ_K0@Z
    void FEDirectLaunch_DispatchCompleted_(long, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FEDirectLaunch_DispatchStarted_@ExplorerFrameTelemetry@@QEBAXXZ
    void FEDirectLaunch_DispatchStarted_() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FEDirectLaunch_RegistrationCompleted_@ExplorerFrameTelemetry@@QEBAX_N@Z
    void FEDirectLaunch_RegistrationCompleted_(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewLoadedOnWindowCreationFromTelemetryProps_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBDI_N@Z
    void FirstViewLoadedOnWindowCreationFromTelemetryProps_(WindissectOpaque const &, _GUID, char const *, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewLoadedOnWindowCreationImmediate_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBDI_N@Z
    void FirstViewLoadedOnWindowCreationImmediate_(WindissectOpaque const &, _GUID, char const *, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewLoadedOnWindowCreation_@ExplorerFrameTelemetry@@QEBAXAEAVPiiSafeShellitemParsingNameProperties@@U_GUID@@PEBDI_N@Z
    void FirstViewLoadedOnWindowCreation_(PiiSafeShellitemParsingNameProperties &, _GUID, char const *, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewStartedToShowFromTelemetryProps_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBDI@Z
    void FirstViewStartedToShowFromTelemetryProps_(WindissectOpaque const &, _GUID, char const *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewStartedToShowImmediate_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBDI@Z
    void FirstViewStartedToShowImmediate_(WindissectOpaque const &, _GUID, char const *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstViewStartedToShow_@ExplorerFrameTelemetry@@QEBAXAEAVPiiSafeShellitemParsingNameProperties@@U_GUID@@PEBDI@Z
    void FirstViewStartedToShow_(PiiSafeShellitemParsingNameProperties &, _GUID, char const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ExplorerFrameTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogRibbonColors_@ExplorerFrameTelemetry@@QEAAXPEBGKK@Z
    void LogRibbonColors_(unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavpaneRefresh@ExplorerFrameTelemetry@@SAXXZ
    static void NavpaneRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchedWindowStartedToShowFromTelemetryProps_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBD_N@Z
    void PrelaunchedWindowStartedToShowFromTelemetryProps_(WindissectOpaque const &, _GUID, char const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchedWindowStartedToShowImmediate_@ExplorerFrameTelemetry@@QEBAXAEBVPiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@U_GUID@@PEBD_N@Z
    void PrelaunchedWindowStartedToShowImmediate_(WindissectOpaque const &, _GUID, char const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchedWindowStartedToShow_@ExplorerFrameTelemetry@@QEBAXAEAVPiiSafeShellitemParsingNameProperties@@U_GUID@@PEBD_N@Z
    void PrelaunchedWindowStartedToShow_(PiiSafeShellitemParsingNameProperties &, _GUID, char const *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemedRibbonColor_@ExplorerFrameTelemetry@@QEAAX_N@Z
    void SetThemedRibbonColor_(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UICollection_UpdateEmptyText@ExplorerFrameTelemetry@@SAXXZ
    static void UICollection_UpdateEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_BatchTimerCreated@ExplorerFrameTelemetry@@SAXXZ
    static void UIItemsView_BatchTimerCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_BatchTimerDeleted@ExplorerFrameTelemetry@@SAXXZ
    static void UIItemsView_BatchTimerDeleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_OnDestroy@ExplorerFrameTelemetry@@SAXXZ
    static void UIItemsView_OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_ResetDUITree_Defer@ExplorerFrameTelemetry@@SAXXZ
    static void UIItemsView_ResetDUITree_Defer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_ResetDUITree_Retry@ExplorerFrameTelemetry@@SAXXZ
    static void UIItemsView_ResetDUITree_Retry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIRootItem_ResetCollection@ExplorerFrameTelemetry@@SAXXZ
    static void UIRootItem_ResetCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowPlacementOnLaunch_@ExplorerFrameTelemetry@@QEBAXPEAUHWND__@@PEBUtagWINDOWPLACEMENT@@PEBG@Z
    void WindowPlacementOnLaunch_(HWND__*, tagWINDOWPLACEMENT const *, unsigned short const *) const;
};
