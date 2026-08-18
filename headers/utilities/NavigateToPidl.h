#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class NavigateToPidl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@NavigateToPidl@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@NavigateToPidl@FileExplorerTelemetry@@QEAAXPEBU_ITEMIDLIST_ABSOLUTE@@_N@Z
    void Stop(_ITEMIDLIST_ABSOLUTE const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigateToPidl@FileExplorerTelemetry@@QEAA@XZ
    ~NavigateToPidl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigateToPidl@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigateToPidl@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
