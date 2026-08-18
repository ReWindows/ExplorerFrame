#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class UITryHarderButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UITryHarderButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UITryHarderButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UITryHarderButton@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UITryHarderButton@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@UITryHarderButton@@QEAAXPEAUITryHarderItem@@@Z
    void SetItem(ITryHarderItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UITryHarderButton@@UEAA@XZ
    virtual ~UITryHarderButton();
};
