#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class DisplayMonitor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayMonitor@@QEAA@XZ
    DisplayMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DisplayMonitor@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceStatusChangedForPrelaunch@DisplayMonitor@@SAKPEAXK0@Z
    static unsigned long OnDeviceStatusChangedForPrelaunch(void *, unsigned long, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayMonitor@@QEAA@XZ
    ~DisplayMonitor();
};
