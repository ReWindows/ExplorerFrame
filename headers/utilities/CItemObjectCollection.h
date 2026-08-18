#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 20 member(s).
namespace CItemsView {
class CItemObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFromArray@CItemObjectCollection@CItemsView@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CItemObjectCollection@CItemsView@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemObjectCollection@CItemsView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CItemObjectCollection@CItemsView@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CItemObjectCollection@CItemsView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@CItemObjectCollection@CItemsView@@UEAAPEAUIItemCollection@@XZ
    virtual IItemCollection * GetCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CItemObjectCollection@CItemsView@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDevirtualized@CItemObjectCollection@CItemsView@@UEAAHXZ
    virtual int IsDevirtualized();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemObjectCollection@CItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemObjectCollection@CItemsView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@CItemObjectCollection@CItemsView@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Create@CItemObjectCollection@CItemsView@@SAJPEAUIItemCollection@@PEAUICollectionCache@@PEAUIFirstPageResults@@AEBU_GUID@@PEAPEAX@Z
    static long s_Create(IItemCollection *, ICollectionCache *, IFirstPageResults *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemObjectCollection@CItemsView@@UEAA@XZ
    virtual ~CItemObjectCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnsureDevirtualized@CItemObjectCollection@CItemsView@@MEAAJXZ
    virtual long v_EnsureDevirtualized();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DevirtualizeCollection@CItemObjectCollection@CItemsView@@AEAAJPEAUIItemCollection@@II@Z
    long _DevirtualizeCollection(IItemCollection *, unsigned int, unsigned int);
};
} // namespace CItemsView
