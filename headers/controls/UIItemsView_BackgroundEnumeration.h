#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class UIItemsView_BackgroundEnumeration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UIItemsView_BackgroundEnumeration@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@UIItemsView_BackgroundEnumeration@FileExplorerTelemetry@@QEAAXIIIIPEBD@Z
    void Stop(unsigned int, unsigned int, unsigned int, unsigned int, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIItemsView_BackgroundEnumeration@FileExplorerTelemetry@@QEAA@XZ
    ~UIItemsView_BackgroundEnumeration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UIItemsView_BackgroundEnumeration@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UIItemsView_BackgroundEnumeration@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
