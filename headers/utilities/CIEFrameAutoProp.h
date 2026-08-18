#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CIEFrameAutoProp {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOurProp@CIEFrameAutoProp@@QEAAHPEAG@Z
    int IsOurProp(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CIEFrameAutoProp@@QEAAJPEAUtagVARIANT@@PEAUIWebBrowser2@@@Z
    long SetValue(tagVARIANT *, IWebBrowser2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VariantClear@CIEFrameAutoProp@@QEAAXXZ
    void _VariantClear();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIEFrameAutoProp@@QEAA@XZ
    ~CIEFrameAutoProp();
};
