#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTabsTelemetry {
class RemoveTab {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveTab@FileExplorerTabsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveTab@FileExplorerTabsTelemetry@@QEAA@XZ
    ~RemoveTab();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveTab@FileExplorerTabsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveTab@FileExplorerTabsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTabsTelemetry
