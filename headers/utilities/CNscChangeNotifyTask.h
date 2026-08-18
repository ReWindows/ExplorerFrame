#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CNscChangeNotifyTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CNscChangeNotifyTask@@UEAAJXZ
    virtual long InternalResumeRT();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertIDList@CNscChangeNotifyTask@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long _ConvertIDList(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SHCNERealFromSHCNEReceived@CNscChangeNotifyTask@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAJ@Z
    long _SHCNERealFromSHCNEReceived(_ITEMIDLIST_ABSOLUTE const *, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscChangeNotifyTask@@MEAA@XZ
    virtual ~CNscChangeNotifyTask();
};
