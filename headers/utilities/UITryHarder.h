#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
// Base evidence: UIBase (likely; classinfo-template-instantiation).
class UITryHarder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UITryHarder@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTryHarder@UITryHarder@@QEAAXPEAUIObjectArray@@@Z
    void InvalidateTryHarder(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UITryHarder@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ScrollTicksProp@UITryHarder@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ScrollTicksProp();
};
