#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class FloatingHeaderLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@FloatingHeaderLayout@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void Attach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@FloatingHeaderLayout@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void Detach(::DirectUI::Element *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FloatingHeaderLayout@@QEAA@XZ
    FloatingHeaderLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@FloatingHeaderLayout@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@FloatingHeaderLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FloatingHeaderLayout@@UEAA@XZ
    virtual ~FloatingHeaderLayout();
};
