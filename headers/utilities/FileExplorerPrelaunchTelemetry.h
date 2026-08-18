#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 32 member(s).
class FileExplorerPrelaunchTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@FileExplorerPrelaunchTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_AlreadyAttemptedSignalMonitorInit@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_AlreadyAttemptedSignalMonitorInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_BlockedPrelaunchBecauseNoSystemSignalMonitor@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_BlockedPrelaunchBecauseNoSystemSignalMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_BrowserDidNotPingUsBackInTime@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_BrowserDidNotPingUsBackInTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_Created@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_Created();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_DestroyUnusedPrelaunchedWindowOnTimerElapsed@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_DestroyUnusedPrelaunchedWindowOnTimerElapsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_ShowWindowNormal_@FileExplorerPrelaunchTelemetry@@QEAAXPEAUIETHREADPARAM@@@Z
    void PrelaunchExplorerHost_ShowWindowNormal_(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_StartLifetimeTimerForPrelaunchedWindow@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_StartLifetimeTimerForPrelaunchedWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_StopLifetimeTimerForUtilizedPrelaunchedWindow@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void PrelaunchExplorerHost_StopLifetimeTimerForUtilizedPrelaunchedWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchExplorerHost_UsePrelaunchWindow_@FileExplorerPrelaunchTelemetry@@QEAAXPEAUIETHREADPARAM@@@Z
    void PrelaunchExplorerHost_UsePrelaunchWindow_(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemSignal_DisarmingCrashGuard@FileExplorerPrelaunchTelemetry@@SAXXZ
    static void SystemSignal_DisarmingCrashGuard();
};
