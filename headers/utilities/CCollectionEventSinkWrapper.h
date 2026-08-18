#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 22 member(s).
class CCollectionEventSinkWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCollectionEventSinkWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CCollectionEventSinkWrapper@@QEAAJXZ
    long Advise();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CCollectionEventSinkWrapper@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CCollectionEventSinkWrapper@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CCollectionEventSinkWrapper@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CCollectionEventSinkWrapper@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CCollectionEventSinkWrapper@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CCollectionEventSinkWrapper@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CCollectionEventSinkWrapper@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrepareDone@CCollectionEventSinkWrapper@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CCollectionEventSinkWrapper@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCollectionEventSinkWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCollectionEventSinkWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CCollectionEventSinkWrapper@@UEAAJXZ
    virtual long Unadvise();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCollectionEventSinkWrapper@@UEAA@XZ
    virtual ~CCollectionEventSinkWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSender@CCollectionEventSinkWrapper@@MEAAPEAUIUnknown@@XZ
    virtual IUnknown * _GetSender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostEvent@CCollectionEventSinkWrapper@@IEAAJAEAUCollectionEventParams@@@Z
    long _PostEvent(CollectionEventParams &);
};
