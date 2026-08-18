#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
namespace DirectLaunch::details {
class MessageWindow {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageWindow@details@DirectLaunch@@QEAA@XZ
    ~MessageWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageWndProc@MessageWindow@details@DirectLaunch@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t MessageWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace DirectLaunch::details
