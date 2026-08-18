#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class AddressGreenBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddressGreenBar@FileExplorerTelemetry@@QEAAXJ_NU_GUID@@JPEAUIShellItem@@0PEBD@Z
    void StartActivity(long, bool, _GUID, long, IShellItem *, bool, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddressGreenBar@FileExplorerTelemetry@@QEAA@XZ
    ~AddressGreenBar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddressGreenBar@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddressGreenBar@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
