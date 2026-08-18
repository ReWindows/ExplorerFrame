#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 28 member(s).
class CItemDevirtualizer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemDevirtualizer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CItemDevirtualizer@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CItemDevirtualizer@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElapsedFullDevirtualizationTime@CItemDevirtualizer@@UEAAJPEAK@Z
    virtual long GetElapsedFullDevirtualizationTime(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedCount@CItemDevirtualizer@@UEAAJPEAI@Z
    virtual long GetEstimatedCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CItemDevirtualizer@@UEAAJW4ITEMDEVIRTUALIZERVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDevirtualized@CItemDevirtualizer@@UEAAHXZ
    virtual int IsDevirtualized();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemDevirtualizer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemDevirtualizer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Create@CItemDevirtualizer@@SAJPEAVCItemDevirtualizerInitialState@@PEAUIItem@@W4DEVIRTUALIZATION_TYPE@@AEBU_GUID@@PEAPEAX@Z
    static long s_Create(CItemDevirtualizerInitialState *, IItem *, int, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Devirtualize@CItemDevirtualizer@@AEAAJXZ
    long _Devirtualize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DevirtualizeGroupItem@CItemDevirtualizer@@AEAAJPEAUIItemCollection@@PEAUIItem@@PEAUICollectionCache@@PEBVItemIndex@@3I@Z
    long _DevirtualizeGroupItem(IItemCollection *, IItem *, ICollectionCache *, ItemIndex const *, ItemIndex const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DevirtualizeWorker@CItemDevirtualizer@@AEAAJPEBVItemIndex@@@Z
    long _DevirtualizeWorker(ItemIndex const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIndex@CItemDevirtualizer@@AEAAJPEAUIItem@@PEAVItemIndex@@@Z
    long _GetIndex(IItem *, ItemIndex *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRootItemAndCollectionCache@CItemDevirtualizer@@AEAAJPEAPEAUIItem@@PEAPEAUICollectionCache@@@Z
    long _GetRootItemAndCollectionCache(IItem * *, ICollectionCache * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMVPEcludeArrayFromGroupItem@CItemDevirtualizer@@AEAAJPEAUIItemCollection@@PEAUIItem@@PEAUICollectionCache@@@Z
    long _InitMVPEcludeArrayFromGroupItem(IItemCollection *, IItem *, ICollectionCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMVPExcludeArray@CItemDevirtualizer@@AEAAJPEAUIItem@@PEAUICollectionCache@@@Z
    long _InitMVPExcludeArray(IItem *, ICollectionCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldContinueDevirtualization@CItemDevirtualizer@@AEAAHXZ
    int _ShouldContinueDevirtualization();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemDevirtualizer@@AEAA@XZ
    ~CItemDevirtualizer();
};
