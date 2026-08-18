#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CItemFinder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextMatch@CItemFinder@@QEAAJHAEBUtagVARIANT@@PEAPEAUIItem@@PEAUINDEX_AND_VERSION@@IPEAI@Z
    long FindNextMatch(int, tagVARIANT const &, IItem * *, INDEX_AND_VERSION *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStart@CItemFinder@@QEAAJPEAUIItem@@@Z
    long SetStart(IItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemFinder@@QEAA@XZ
    ~CItemFinder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesItemNameMatch@CItemFinder@@AEAAJPEAUIItem@@PEBGPEAPEAU2@PEAH@Z
    long _DoesItemNameMatch(IItem *, unsigned short const *, IItem * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStart@CItemFinder@@AEAAJXZ
    long _EnsureStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchInCollection@CItemFinder@@AEAAJPEAUIItemCollection@@IHAEBUtagVARIANT@@PEAPEAUIItem@@PEAI@Z
    long _FindMatchInCollection(IItemCollection *, unsigned int, int, tagVARIANT const &, IItem * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextCollection@CItemFinder@@AEAAJXZ
    long _GetNextCollection();
};
