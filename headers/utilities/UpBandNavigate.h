#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class UpBandNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@UpBandNavigate@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpBandNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~UpBandNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpBandNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpBandNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
