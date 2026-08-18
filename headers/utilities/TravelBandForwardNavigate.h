#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class TravelBandForwardNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@TravelBandForwardNavigate@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TravelBandForwardNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~TravelBandForwardNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TravelBandForwardNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TravelBandForwardNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
