#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class WrappingLayoutBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@WrappingLayoutBase@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void Attach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@WrappingLayoutBase@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void Detach(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@WrappingLayoutBase@@UEAAPEAVElement@DirectUI@@PEAV23@0HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WrappingLayoutBase@@QEAAJPEBULAYOUTPARAM@@I@Z
    long Initialize(LAYOUTPARAM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdd@WrappingLayoutBase@@UEAAXPEAVElement@DirectUI@@PEAPEAV23@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutPosChanged@WrappingLayoutBase@@UEAAXPEAVElement@DirectUI@@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemove@WrappingLayoutBase@@UEAAXPEAVElement@DirectUI@@PEAPEAV23@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WrappingLayoutBase@@UEAA@XZ
    virtual ~WrappingLayoutBase();
};
