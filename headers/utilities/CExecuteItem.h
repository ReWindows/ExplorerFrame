#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CExecuteItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteItem@@QEAAJXZ
    long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociationOverride@CExecuteItem@@QEAAJKPEBG@Z
    long SetAssociationOverride(unsigned long, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExecuteItem@@QEAA@XZ
    ~CExecuteItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CExecuteItem@@AEAAJPEAPEAUIContextMenu@@@Z
    long _GetContextMenu(IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMembers@CExecuteItem@@AEAAXXZ
    void _InitMembers();
};
