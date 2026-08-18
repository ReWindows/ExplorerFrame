#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
namespace FileExplorerTelemetry {
class ShellBrowserCreate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ShellBrowserCreate@FileExplorerTelemetry@@QEAAXPEBD_N11111II@Z
    void StartActivityWithCorrelationVector(char const *, bool, bool, bool, bool, bool, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShellBrowserCreate@FileExplorerTelemetry@@QEAAXPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBD_NHHW4PROCESS_DPI_AWARENESS@@@Z
    void Stop(HWND__*, _ITEMIDLIST_ABSOLUTE const *, char const *, bool, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellBrowserCreate@FileExplorerTelemetry@@QEAA@XZ
    ~ShellBrowserCreate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShellBrowserCreate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShellBrowserCreate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
