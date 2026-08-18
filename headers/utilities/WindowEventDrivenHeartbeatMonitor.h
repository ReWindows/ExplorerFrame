#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
namespace HeartbeatMonitor {
class WindowEventDrivenHeartbeatMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessage@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@QEAA_NI_J@Z
    bool HandleMessage(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIdle@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@QEAAXXZ
    void NotifyIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@QEAAXXZ
    void Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@QEAA@XZ
    ~WindowEventDrivenHeartbeatMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BudgetTimerCallback@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void BudgetTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBudgetTimer@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@AEAAXXZ
    void HandleBudgetTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPendingProbeUnderLock@WindowEventDrivenHeartbeatMonitor@HeartbeatMonitor@@AEAAXXZ
    void ResetPendingProbeUnderLock();
};
} // namespace HeartbeatMonitor
