#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
namespace DirectUI {
class CenteringLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CenteringLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CenteringLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@CenteringLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
};
} // namespace DirectUI
