#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class CachedExplorerExtensionState {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabsAvailable@CachedExplorerExtensionState@@SA_NXZ
    static bool IsTabsAvailable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXamlIslandAvailable@CachedExplorerExtensionState@@SA_NXZ
    static bool IsXamlIslandAvailable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinAppSDKAvailable@CachedExplorerExtensionState@@SAX_N@Z
    static void SetWinAppSDKAvailable(bool);
};
