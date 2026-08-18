#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::Thumb (likely; classinfo-template-instantiation).
class Resizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Resizer@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@Resizer@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@Resizer@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@Resizer@@SAJXZ
    static long Register();
};
