#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CItemsViewEventQueue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemsViewEventQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsViewEventQueue@@QEAA@PEAUHWND__@@@Z
    CItemsViewEventQueue(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOutCollectionEvents@CItemsViewEventQueue@@UEAAJH@Z
    virtual long FilterOutCollectionEvents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllEvents@CItemsViewEventQueue@@UEAAIXZ
    virtual unsigned int FlushAllEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CItemsViewEventQueue@@UEAA_KXZ
    virtual uint64_t GetSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEvent@CItemsViewEventQueue@@UEAAJAEBUQueuedEvent@@@Z
    virtual long PostEvent(QueuedEvent const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostponeQueue@CItemsViewEventQueue@@UEAAXH@Z
    virtual void PostponeQueue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessEventQueue@CItemsViewEventQueue@@UEAAXPEAH00@Z
    virtual void PreProcessEventQueue(int *, int *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemsViewEventQueue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemsViewEventQueue@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackEvents@CItemsViewEventQueue@@UEAAXPEAUITrackEvents@@@Z
    virtual void SetTrackEvents(ITrackEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CItemsViewEventQueue@@UEAAXXZ
    virtual void Unadvise();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushEventsPriorTo@CItemsViewEventQueue@@AEAAI_K@Z
    unsigned int _FlushEventsPriorTo(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreProcessEventQueue@CItemsViewEventQueue@@AEAAXPEAH00@Z
    void _PreProcessEventQueue(int *, int *, int *);
};
