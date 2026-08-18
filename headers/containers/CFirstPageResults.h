#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 45 member(s).
class CFirstPageResults {
public:
    class CollectionIndirected;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFirstPageResults@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CFirstPageResults@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountForCollection@CFirstPageResults@@UEAAJPEAUIItemCollection@@W4COUNT_TYPE@@PEAIPEAW4VALUE_STATE@@@Z
    virtual long GetCountForCollection(IItemCollection *, int, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstPageResultsState@CFirstPageResults@@UEAA?AW4tagFIRSTPAGERESULTSSTATE@@XZ
    virtual int GetFirstPageResultsState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFirstPageResults@@UEAAJPEAVUIItemsView@@@Z
    virtual long Initialize(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CFirstPageResults@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CFirstPageResults@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CFirstPageResults@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CFirstPageResults@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CFirstPageResults@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CFirstPageResults@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CFirstPageResults@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrepareDone@CFirstPageResults@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CFirstPageResults@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CFirstPageResults@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFirstPageResults@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGlobalSink@CFirstPageResults@@UEAAJPEAUICollectionEventSink@@@Z
    virtual long RegisterGlobalSink(ICollectionEventSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSinkOnCollection@CFirstPageResults@@UEAAJPEAUIItemCollection@@PEAUICollectionEventSink@@@Z
    virtual long RegisterSinkOnCollection(IItemCollection *, ICollectionEventSink *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFirstPageResults@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresGetCountTask@CFirstPageResults@@UEAAJXZ
    virtual long RequiresGetCountTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunBackgroundEnumeration@CFirstPageResults@@QEAAXXZ
    void RunBackgroundEnumeration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialSubsetAndMode@CFirstPageResults@@UEAAJIW4tagFIRSTPAGERESULTSMODE@@@Z
    virtual long SetInitialSubsetAndMode(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchOut@CFirstPageResults@@UEAAJXZ
    virtual long SwitchOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSink@CFirstPageResults@@UEAAJPEAUICollectionEventSink@@@Z
    virtual long UnregisterSink(ICollectionEventSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewIsFull@CFirstPageResults@@UEAAJI@Z
    virtual long ViewIsFull(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewIsNotFull@CFirstPageResults@@UEAAJI@Z
    virtual long ViewIsNotFull(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFirstPageResults@@QEAA@XZ
    ~CFirstPageResults();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckEnumerationDone@CFirstPageResults@@AEAAJXZ
    long _CheckEnumerationDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountLeafItems@CFirstPageResults@@AEAAIPEAUIItemCollection@@@Z
    unsigned int _CountLeafItems(IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CurtailOverallCountAt@CFirstPageResults@@AEAAXPEAUIItemCollection@@PEAI@Z
    void _CurtailOverallCountAt(IItemCollection *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoRemoveOneFromIndirectedCollectionAtIndex@CFirstPageResults@@AEAAHPEAUCollectionIndirected@1@IH@Z
    int _DoRemoveOneFromIndirectedCollectionAtIndex(WindissectOpaque *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBackgroundThreadRunning@CFirstPageResults@@AEAAJXZ
    long _EnsureBackgroundThreadRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureIndirection@CFirstPageResults@@AEAAJPEAUIItemCollection@@@Z
    long _EnsureIndirection(IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateCollection@CFirstPageResults@@AEAAXPEAUIItemCollection@@IPEAH@Z
    void _EnumerateCollection(IItemCollection *, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FirstPassComplete@CFirstPageResults@@AEAAXXZ
    void _FirstPassComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KeepOnlyItemsThatFit@CFirstPageResults@@AEAAXI@Z
    void _KeepOnlyItemsThatFit(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapToCollectionIndirected@CFirstPageResults@@AEAAPEAUCollectionIndirected@1@PEAUIItemCollection@@@Z
    WindissectOpaque * _MapToCollectionIndirected(IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveLastAddedItem@CFirstPageResults@@AEAAHPEAUIItemCollection@@H@Z
    int _RemoveLastAddedItem(IItemCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCount@CFirstPageResults@@AEAAHIPEAUIItemCollection@@IW4SendNotificationFlag@1@@Z
    int _UpdateCount(unsigned int, IItemCollection *, unsigned int, int);
};
