#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class NavigateWithinView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NavigateWithinView@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigateWithinView@FileExplorerTelemetry@@QEAA@XZ
    ~NavigateWithinView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigateWithinView@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigateWithinView@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
