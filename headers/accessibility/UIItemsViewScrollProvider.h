#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
class UIItemsViewScrollProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@UIItemsViewScrollProvider@@UEAAJW4ScrollAmount@@0@Z
    virtual long Scroll(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@UIItemsViewScrollProvider@@UEAAJNN@Z
    virtual long SetScrollPercent(double, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemsViewScrollProvider@@QEAA@XZ
    UIItemsViewScrollProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercent@UIItemsViewScrollProvider@@UEAAJPEAN@Z
    virtual long get_HorizontalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSize@UIItemsViewScrollProvider@@UEAAJPEAN@Z
    virtual long get_HorizontalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollable@UIItemsViewScrollProvider@@UEAAJPEAH@Z
    virtual long get_HorizontallyScrollable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercent@UIItemsViewScrollProvider@@UEAAJPEAN@Z
    virtual long get_VerticalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSize@UIItemsViewScrollProvider@@UEAAJPEAN@Z
    virtual long get_VerticalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollable@UIItemsViewScrollProvider@@UEAAJPEAH@Z
    virtual long get_VerticallyScrollable(int *);
};
