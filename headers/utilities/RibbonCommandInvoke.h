#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class RibbonCommandInvoke {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@RibbonCommandInvoke@FileExplorerTelemetry@@QEAAXPEBDHW4UI_EXECUTIONVERB@@PEAUIShellItemArray@@@Z
    void StartActivityWithCorrelationVector(char const *, int, int, IShellItemArray *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RibbonCommandInvoke@FileExplorerTelemetry@@QEAA@XZ
    ~RibbonCommandInvoke();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RibbonCommandInvoke@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RibbonCommandInvoke@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
