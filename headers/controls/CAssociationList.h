#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CAssociationList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CAssociationList@@QEAAHKPEAX@Z
    int Add(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CAssociationList@@QEAAXK@Z
    void Delete(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CAssociationList@@QEAAJKPEAPEAX@Z
    long Find(unsigned long, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntry@CAssociationList@@IEAAHK@Z
    int FindEntry(unsigned long);
};
