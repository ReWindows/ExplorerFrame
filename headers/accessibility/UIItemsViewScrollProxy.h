#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class UIItemsViewScrollProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@UIItemsViewScrollProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollBar@UIItemsViewScrollProxy@@AEAAJHPEAPEAVLineScrollbarBase@@@Z
    long _GetScrollBar(int, LineScrollbarBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollPercent@UIItemsViewScrollProxy@@AEAAJHPEAN@Z
    long _GetScrollPercent(int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollable@UIItemsViewScrollProxy@@AEAAJHPEAH@Z
    long _GetScrollable(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewSize@UIItemsViewScrollProxy@@AEAAJHPEAN@Z
    long _GetViewSize(int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Scroll@UIItemsViewScrollProxy@@AEAAJHW4ScrollAmount@@@Z
    long _Scroll(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollPercent@UIItemsViewScrollProxy@@AEAAJHN@Z
    long _ScrollPercent(int, double);
};
