#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
namespace HeartbeatMonitor {
class WindowMessageHeartbeatMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@WindowMessageHeartbeatMonitor@HeartbeatMonitor@@QEAAXXZ
    void Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WindowMessageHeartbeatMonitor@HeartbeatMonitor@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowMessageHeartbeatMonitor@HeartbeatMonitor@@QEAA@XZ
    ~WindowMessageHeartbeatMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PollingTimerCallback@WindowMessageHeartbeatMonitor@HeartbeatMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void PollingTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostHeartbeatNow@WindowMessageHeartbeatMonitor@HeartbeatMonitor@@AEAAXXZ
    void PostHeartbeatNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPollingTimer@WindowMessageHeartbeatMonitor@HeartbeatMonitor@@AEAAXXZ
    void StartPollingTimer();
};
} // namespace HeartbeatMonitor
