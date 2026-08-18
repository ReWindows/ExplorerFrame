#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class HorizontalBorderLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@HorizontalBorderLayout@@UEAAXPEAVElement@DirectUI@@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HorizontalBorderLayout@@QEAA@XZ
    HorizontalBorderLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@HorizontalBorderLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoLayoutWorker@HorizontalBorderLayout@@IEAAXPEAVElement@DirectUI@@AEBUtagRECT@@@Z
    void _DoLayoutWorker(::DirectUI::Element *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDesiredSizeWorker@HorizontalBorderLayout@@IEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    tagSIZE _UpdateDesiredSizeWorker(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
};
