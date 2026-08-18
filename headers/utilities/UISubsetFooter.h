#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UISubsetFooter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@UISubsetFooter@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UISubsetFooter@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UISubsetFooter@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UISubsetFooter@@SAJXZ
    static long Register();
};
