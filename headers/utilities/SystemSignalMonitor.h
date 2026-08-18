#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class SystemSignalMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPrelaunchFileExplorer@SystemSignalMonitor@@QEAA?AUShouldPrelaunchFileExplorerResult@@AEAV?$tip_test@V?$merged_data@U_tip_PrelaunchEligibility@SystemSignalTip@@U12@@details@tip2@@@tip2@@@Z
    ShouldPrelaunchFileExplorerResult ShouldPrelaunchFileExplorer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPrelaunchFileExplorer_Old@SystemSignalMonitor@@QEAA_NAEAV?$tip_test@V?$merged_data@U_tip_PrelaunchEligibility@SystemSignalTip@@U12@@details@tip2@@@tip2@@@Z
    bool ShouldPrelaunchFileExplorer_Old(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPrelaunchCrashGuard@SystemSignalMonitor@@QEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque StartPrelaunchCrashGuard();
};
