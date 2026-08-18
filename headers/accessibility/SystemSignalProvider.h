#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class SystemSignalProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrelaunchAttemptCount@SystemSignalProvider@@UEBAKXZ
    virtual unsigned long GetPrelaunchAttemptCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrelaunchProfile@SystemSignalProvider@@UEBA?AUDevicePrelaunchProfile@@XZ
    virtual DevicePrelaunchProfile PrelaunchProfile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePrelaunchAttemptCount@SystemSignalProvider@@UEBAXK@Z
    virtual void WritePrelaunchAttemptCount(unsigned long) const;
};
