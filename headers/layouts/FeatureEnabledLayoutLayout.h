#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class FeatureEnabledLayoutLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FeatureEnabledLayoutLayout@@QEAAJPEBULAYOUTPARAM@@I@Z
    long Initialize(LAYOUTPARAM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@FeatureEnabledLayoutLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDesiredSizeWorker@FeatureEnabledLayoutLayout@@IEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    tagSIZE _UpdateDesiredSizeWorker(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
};
