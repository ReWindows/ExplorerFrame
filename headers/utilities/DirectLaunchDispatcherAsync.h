#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace DirectLaunch {
class DirectLaunchDispatcherAsync {
public:
    class SharedState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestShutdown@DirectLaunchDispatcherAsync@DirectLaunch@@QEAAPEAXXZ
    void * RequestShutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DirectLaunchDispatcherAsync@DirectLaunch@@QEAA@XZ
    ~DirectLaunchDispatcherAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainQueue@DirectLaunchDispatcherAsync@DirectLaunch@@CAXAEAUSharedState@12@AEAVDirectLaunchListener@2@@Z
    static void DrainQueue(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenerThreadProc@DirectLaunchDispatcherAsync@DirectLaunch@@CAXAEAUSharedState@12@@Z
    static void ListenerThreadProc(WindissectOpaque &);
};
} // namespace DirectLaunch
