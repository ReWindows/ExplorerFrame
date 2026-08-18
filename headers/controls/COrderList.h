#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class COrderList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COrderList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocOrderItem@COrderList@@UEAAJPEAPEAUORDERITEM@@PEFBU_ITEMID_CHILD@@@Z
    virtual long AllocOrderItem(ORDERITEM * *, _ITEMID_CHILD & volatile *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COrderList@@QEAA@XZ
    COrderList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeOrderItem@COrderList@@UEAAJPEAUORDERITEM@@@Z
    virtual long FreeOrderItem(ORDERITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeOrderList@COrderList@@UEAAJPEAU_DPA@@@Z
    virtual long FreeOrderList(_DPA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@COrderList@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrderList@COrderList@@UEAAJPEAPEAU_DPA@@@Z
    virtual long GetOrderList(_DPA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COrderList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromStream@COrderList@@UEAAJPEAUIStream@@PEAPEAU_DPA@@PEAUIShellFolder@@@Z
    virtual long LoadFromStream(IStream *, _DPA * *, IShellFolder *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COrderList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COrderList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStream@COrderList@@UEAAJPEAUIStream@@PEAU_DPA@@@Z
    virtual long SaveToStream(IStream *, _DPA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrderList@COrderList@@UEAAJPEAU_DPA@@PEAUIShellFolder@@@Z
    virtual long SetOrderList(_DPA *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortOrderList@COrderList@@UEAAJPEAU_DPA@@K@Z
    virtual long SortOrderList(_DPA *, unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COrderList@@AEAA@XZ
    ~COrderList();
};
