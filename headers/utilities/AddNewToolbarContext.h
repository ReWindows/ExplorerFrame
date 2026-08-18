#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace DeskbandTelemetry {
class AddNewToolbarContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewToolbar@AddNewToolbarContext@DeskbandTelemetry@@QEAAXXZ
    void AddNewToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddNewToolbarContext@DeskbandTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddNewToolbarContext@DeskbandTelemetry@@QEAA@XZ
    ~AddNewToolbarContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddNewToolbarContext@DeskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddNewToolbarContext@DeskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DeskbandTelemetry
