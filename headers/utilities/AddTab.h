#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTabsTelemetry {
class AddTab {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddTab@FileExplorerTabsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddTab@FileExplorerTabsTelemetry@@QEAA@XZ
    ~AddTab();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddTab@FileExplorerTabsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddTab@FileExplorerTabsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTabsTelemetry
