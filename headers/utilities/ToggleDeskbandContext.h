#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace DeskbandTelemetry {
class ToggleDeskbandContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ToggleDeskbandContext@DeskbandTelemetry@@QEAAXAEBU_GUID@@@Z
    void StartActivity(_GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToggleDeskbandContext@DeskbandTelemetry@@QEAA@XZ
    ~ToggleDeskbandContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ToggleDeskbandContext@DeskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ToggleDeskbandContext@DeskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DeskbandTelemetry
