#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CCollectionCache {
public:
    class CacheEntry;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCollectionCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionFromItem@CCollectionCache@@UEAAJW4REALIZE_MODE@@PEAUIItem@@PEAPEAUIItemCollection@@@Z
    virtual long GetCollectionFromItem(int, IItem *, IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkCollectionsUnused@CCollectionCache@@UEAAJXZ
    virtual long MarkCollectionsUnused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeUnusedCollections@CCollectionCache@@UEAAJXZ
    virtual long PurgeUnusedCollections();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCollectionCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCollectionCache@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntry@CCollectionCache@@AEAAJPEAUIItem@@PEAPEAUIItemCollection@@@Z
    long _GetEntry(IItem *, IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CCollectionCache@@AEAAJPEAUIItem@@PEAUIItemCollection@@@Z
    long _Initialize(IItem *, IItemCollection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCollectionCache@@AEAA@XZ
    ~CCollectionCache();
};
