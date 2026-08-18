#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CSearchEditBoxHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSearchEditBoxHost@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchEditBoxHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CSearchEditBoxHost@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@CSearchEditBoxHost@@MEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@CSearchEditBoxHost@@MEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
