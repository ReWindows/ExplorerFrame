#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class PaintSurrogate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@PaintSurrogate@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@PaintSurrogate@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@PaintSurrogate@@SAJXZ
    static long Register();
};
