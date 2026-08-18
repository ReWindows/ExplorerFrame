#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class FileExplorerTelemetryDesktop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserSessionId@FileExplorerTelemetryDesktop@@SAJPEAUIUnknown@@PEAU_GUID@@@Z
    static long GetBrowserSessionId(IUnknown *, _GUID *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiInfo@FileExplorerTelemetryDesktop@@IEAAJPEAUHWND__@@PEAH1PEAW4PROCESS_DPI_AWARENESS@@@Z
    long GetDpiInfo(HWND__*, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAndFolderInViewName@FileExplorerTelemetryDesktop@@IEBAJPEAUIUnknown@@W4_SIGDN@@PEAPEAGPEAPEAUIShellItem@@@Z
    long GetItemAndFolderInViewName(IUnknown *, int, unsigned short * *, IShellItem * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsingName@FileExplorerTelemetryDesktop@@IEBAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAG@Z
    long GetParsingName(_ITEMIDLIST_ABSOLUTE const *, unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAndCursorDetails@FileExplorerTelemetryDesktop@@IEBA?AUtagRECT@@XZ
    tagRECT GetWindowAndCursorDetails() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileExplorerTelemetryDesktop@@MEAAXXZ
    virtual void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemInSearch@FileExplorerTelemetryDesktop@@KA_NPEAUIShellItem@@@Z
    static bool IsItemInSearch(IShellItem *);
};
