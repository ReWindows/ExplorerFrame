#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class FileExplorerContextMenu {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissActiveContextMenuFromSite@FileExplorerContextMenu@@YAXPEAUIUnknown@@PEBG@Z
    void DismissActiveContextMenuFromSite(IUnknown *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContextMenuInvokeVerbsForContext@FileExplorerContextMenu@@YAXPEAUIContextMenu@@W4LOCATION_CONTEXT_FLAGS@@@Z
    void PrepareContextMenuInvokeVerbsForContext(IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOwnerDrawAppliedHMenu@FileExplorerContextMenu@@YAIPEAUHMENU__@@PEAUHWND__@@UtagPOINT@@_N3W4CONTEXT_MENU_PRESENTER_FLAGS@@@Z
    unsigned int ShowOwnerDrawAppliedHMenu(HMENU__*, HWND__*, tagPOINT, bool, bool, int);
};
