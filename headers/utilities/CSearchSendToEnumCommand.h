#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CSearchSendToEnumCommand {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSearchSendToEnumCommand@@MEAAJXZ
    virtual long _Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldIncludeKnownFolder@CSearchSendToEnumCommand@@AEAA_NAEBU_GUID@@@Z
    bool _ShouldIncludeKnownFolder(_GUID const &);
};
