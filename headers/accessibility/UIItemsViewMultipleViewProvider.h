#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class UIItemsViewMultipleViewProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedViews@UIItemsViewMultipleViewProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSupportedViews(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewName@UIItemsViewMultipleViewProvider@@UEAAJHPEAPEAG@Z
    virtual long GetViewName(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentView@UIItemsViewMultipleViewProvider@@UEAAJH@Z
    virtual long SetCurrentView(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemsViewMultipleViewProvider@@QEAA@XZ
    UIItemsViewMultipleViewProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentView@UIItemsViewMultipleViewProvider@@UEAAJPEAH@Z
    virtual long get_CurrentView(int *);
};
