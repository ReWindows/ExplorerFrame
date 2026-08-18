#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class AddressEditBoxNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@AddressEditBoxNavigate@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddressEditBoxNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~AddressEditBoxNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddressEditBoxNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddressEditBoxNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
