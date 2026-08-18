#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class FileActionMetadata {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmarshal@FileActionMetadata@@QEAAXXZ
    void Unmarshal();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileActionMetadata@@UEAA@XZ
    virtual ~FileActionMetadata();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureItemsAndViewData@FileActionMetadata@@AEAAXPEAUIUnknown@@_NPEAUIShellItemArray@@@Z
    void CaptureItemsAndViewData(IUnknown *, bool, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureViewData@FileActionMetadata@@AEAAXPEAUIUnknown@@_NPEAUIShellItemArray@@@Z
    void CaptureViewData(IUnknown *, bool, IShellItemArray *);
};
