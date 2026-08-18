#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class BaselineLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@BaselineLayout@@UEAAXPEAVElement@DirectUI@@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@BaselineLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
};
