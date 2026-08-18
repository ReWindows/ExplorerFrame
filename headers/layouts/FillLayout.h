#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
namespace DirectUI {
class FillLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FillLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@FillLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@FillLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
};
} // namespace DirectUI
