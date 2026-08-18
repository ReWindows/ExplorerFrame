#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class FirstVisibleElementOnlyLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@FirstVisibleElementOnlyLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDesiredSizeWorker@FirstVisibleElementOnlyLayout@@IEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    tagSIZE _UpdateDesiredSizeWorker(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
};
