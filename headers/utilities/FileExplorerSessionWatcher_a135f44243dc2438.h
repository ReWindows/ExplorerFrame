#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
class FileExplorerSessionWatcher {
public:
    class details;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEventThroughSite@FileExplorerSessionWatcher@@YAJPEAUIUnknown@@W4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    long PostEventThroughSite(IUnknown *, int, SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordEventThroughSite@FileExplorerSessionWatcher@@YAJPEAUIUnknown@@W4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    long RecordEventThroughSite(IUnknown *, int, SESSION_EVENT_METADATA *);
};
