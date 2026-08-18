#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 15 member(s).
class CItemEventSinkWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemEventSinkWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CItemEventSinkWrapper@@UEAAJPEAX@Z
    virtual long Dispatch(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CItemEventSinkWrapper@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CItemEventSinkWrapper@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanging@CItemEventSinkWrapper@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemEventSinkWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemEventSinkWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CItemEventSinkWrapper@@UEAAJXZ
    virtual long Unadvise();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSender@CItemEventSinkWrapper@@MEAAPEAUIUnknown@@XZ
    virtual IUnknown * _GetSender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostEvent@CItemEventSinkWrapper@@IEAAJAEBUItemEventParams@@@Z
    long _PostEvent(ItemEventParams const &);
};
