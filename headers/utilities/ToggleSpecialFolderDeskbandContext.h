#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace DeskbandTelemetry {
class ToggleSpecialFolderDeskbandContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ToggleSpecialFolderDeskbandContext@DeskbandTelemetry@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToggleSpecialFolderDeskbandContext@DeskbandTelemetry@@QEAA@XZ
    ~ToggleSpecialFolderDeskbandContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ToggleSpecialFolderDeskbandContext@DeskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ToggleSpecialFolderDeskbandContext@DeskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DeskbandTelemetry
