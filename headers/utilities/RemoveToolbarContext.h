#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace DeskbandTelemetry {
class RemoveToolbarContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToolbar@RemoveToolbarContext@DeskbandTelemetry@@QEAAXXZ
    void RemoveToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveToolbarContext@DeskbandTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveToolbarContext@DeskbandTelemetry@@QEAA@XZ
    ~RemoveToolbarContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveToolbarContext@DeskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveToolbarContext@DeskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DeskbandTelemetry
