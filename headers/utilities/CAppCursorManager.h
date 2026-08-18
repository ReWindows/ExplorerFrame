#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
class CAppCursorManager {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HaltAppCursor@CAppCursorManager@@IEAAXPEAUIUnknown@@@Z
    void _HaltAppCursor(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideAppStartingCursor@CAppCursorManager@@IEAAXPEAUIUnknown@@_NW4APPCURSORCONTEXT@@@Z
    void _ShowHideAppStartingCursor(IUnknown *, bool, int);
};
