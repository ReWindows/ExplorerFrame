#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Viewer (likely; classinfo-template-instantiation).
class LinkedViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@LinkedViewer@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@LinkedViewer@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LinkedViewer@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@LinkedViewer@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@LinkedViewer@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LinkedViewer@@UEAA@XZ
    virtual ~LinkedViewer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScroller@LinkedViewer@@AEAAPEAVLineScroller@@XZ
    LineScroller * _GetScroller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalEnsureVisible@LinkedViewer@@AEAA_NHHHH@Z
    bool _InternalEnsureVisible(int, int, int, int);
};
