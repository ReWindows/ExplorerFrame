#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace FileExplorerPerf {
class NavigateEndPerf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NavigateEndPerf@FileExplorerPerf@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigateEndPerf@FileExplorerPerf@@QEAA@XZ
    ~NavigateEndPerf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigateEndPerf@FileExplorerPerf@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigateEndPerf@FileExplorerPerf@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerPerf
