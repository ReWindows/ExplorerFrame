#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
namespace AgileRegistrationList {
class AgileCallbackArray {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
};
} // namespace AgileRegistrationList
