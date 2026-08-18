#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class ExplorerDirectLaunchHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegistered@ExplorerDirectLaunchHandler@@QEAAXXZ
    void EnsureRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ExplorerDirectLaunchHandler@@QEAAXXZ
    void Shutdown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@ExplorerDirectLaunchHandler@@AEAAXXZ
    void Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueDispatch@ExplorerDirectLaunchHandler@@AEAAXXZ
    void EnqueueDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchWindow@ExplorerDirectLaunchHandler@@CAJAEA_K@Z
    static long LaunchWindow(uint64_t &);
};
