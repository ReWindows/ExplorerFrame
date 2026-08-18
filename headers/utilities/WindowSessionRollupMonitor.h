#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
namespace HeartbeatMonitor {
class WindowSessionRollupMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WindowSessionRollupMonitor@HeartbeatMonitor@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowSessionRollupMonitor@HeartbeatMonitor@@QEAA@XZ
    ~WindowSessionRollupMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeP90@WindowSessionRollupMonitor@HeartbeatMonitor@@AEAAIXZ
    unsigned int ComputeP90();
};
} // namespace HeartbeatMonitor
