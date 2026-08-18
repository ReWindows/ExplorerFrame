#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
// Base evidence: UICheckbox (likely; classinfo-template-instantiation).
class UIColumnHeaderCheckbox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIColumnHeaderCheckbox@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIColumnHeaderCheckbox@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIColumnHeaderCheckbox@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@UIColumnHeaderCheckbox@@QEAAXXZ
    void SelectionChanged();
};
