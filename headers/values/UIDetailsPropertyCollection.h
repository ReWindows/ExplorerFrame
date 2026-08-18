#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIDetailsPropertyCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIDetailsPropertyCollection@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIDetailsPropertyCollection@@SAJXZ
    static long Register();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusTarget@UIDetailsPropertyCollection@@AEAAPEAVElement@DirectUI@@PEAV23@@Z
    ::DirectUI::Element * GetFocusTarget(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIDetailsPropertyCollection@@EEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeAndReportDesiredWidth@UIDetailsPropertyCollection@@AEAAXPEAUColumnWidthRequestEvent@@@Z
    void _ComputeAndReportDesiredWidth(ColumnWidthRequestEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUIProperty@UIDetailsPropertyCollection@@AEAAJAEBU_tagpropertykey@@PEBGPEAPEAVElement@DirectUI@@@Z
    long _CreateUIProperty(_tagpropertykey const &, unsigned short const *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemNavigate@UIDetailsPropertyCollection@@AEAAXPEAUItemNavigateEvent@@@Z
    void _OnItemNavigate(ItemNavigateEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@UIDetailsPropertyCollection@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@UIDetailsPropertyCollection@@EEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
