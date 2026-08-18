#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class BreadcrumbBarNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@BreadcrumbBarNavigate@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BreadcrumbBarNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~BreadcrumbBarNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BreadcrumbBarNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BreadcrumbBarNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
