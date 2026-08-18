#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class UIItemsViewSelectionProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@UIItemsViewSelectionProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemsViewSelectionProvider@@QEAA@XZ
    UIItemsViewSelectionProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@UIItemsViewSelectionProvider@@UEAAJPEAH@Z
    virtual long get_CanSelectMultiple(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@UIItemsViewSelectionProvider@@UEAAJPEAH@Z
    virtual long get_IsSelectionRequired(int *);
};
