#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class AddressComboBoxNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@AddressComboBoxNavigate@FileExplorerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddressComboBoxNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~AddressComboBoxNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddressComboBoxNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddressComboBoxNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
