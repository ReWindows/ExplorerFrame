#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CPrefetcherEventSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrefetcherEventSink@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrefetcherEventSink@@QEAA@XZ
    CPrefetcherEventSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CPrefetcherEventSink@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CPrefetcherEventSink@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanging@CPrefetcherEventSink@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrefetcherEventSink@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrefetcherEventSink@@UEAAKXZ
    virtual unsigned long Release();
};
