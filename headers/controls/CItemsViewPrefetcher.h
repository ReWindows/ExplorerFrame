#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 28 member(s).
class CItemsViewPrefetcher {
public:
    class ViewInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemsViewPrefetcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsViewPrefetcher@@QEAA@XZ
    CItemsViewPrefetcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPrefetching@CItemsViewPrefetcher@@UEAAJXZ
    virtual long CancelPrefetching();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CItemsViewPrefetcher@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemsViewPrefetcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemsViewPrefetcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunPrefetchTask@CItemsViewPrefetcher@@QEAAXXZ
    void RunPrefetchTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPrefetching@CItemsViewPrefetcher@@UEAAJPEAVUIItemsView@@IIH@Z
    virtual long StartPrefetching(UIItemsView *, unsigned int, unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanStartPrefetch@CItemsViewPrefetcher@@AEAAHXZ
    int _CanStartPrefetch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeterminePrefetchInfo@CItemsViewPrefetcher@@AEAAJPEAVUIItemsView@@IIHPEAPEAUViewInfo@1@@Z
    long _DeterminePrefetchInfo(UIItemsView *, unsigned int, unsigned int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnqueueRow@CItemsViewPrefetcher@@AEAAJPEAUViewInfo@1@AEBVRowInfo@@H@Z
    long _EnqueueRow(WindissectOpaque *, RowInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnqueueRowsInDirection@CItemsViewPrefetcher@@AEAAJPEAUViewInfo@1@PEAVLineScroller@@AEAVRowInfo@@W4SCROLLDIR@@HH@Z
    long _EnqueueRowsInDirection(WindissectOpaque *, LineScroller *, RowInfo &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextViewInfo@CItemsViewPrefetcher@@AEAAPEBUViewInfo@1@XZ
    WindissectOpaque const * _GetNextViewInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchDetailsProperties@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@@Z
    void _PrefetchDetailsProperties(WindissectOpaque const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchImageProperties@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@@Z
    void _PrefetchImageProperties(WindissectOpaque const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchItem@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@@Z
    void _PrefetchItem(WindissectOpaque const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchPropListProperties@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@PEAUIPropertyDescriptionList@@@Z
    void _PrefetchPropListProperties(WindissectOpaque const *, IItem *, IPropertyDescriptionList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchProperty@CItemsViewPrefetcher@@AEAAXPEAUIItem@@AEBU_tagpropertykey@@@Z
    void _PrefetchProperty(IItem *, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchRow@CItemsViewPrefetcher@@AEAAJPEBUViewInfo@1@AEBURowPrefetchInfo@@@Z
    long _PrefetchRow(WindissectOpaque const *, RowPrefetchInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchSmartProperties@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@@Z
    void _PrefetchSmartProperties(WindissectOpaque const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchTilesProperties@CItemsViewPrefetcher@@AEAAXPEBUViewInfo@1@PEAUIItem@@@Z
    void _PrefetchTilesProperties(WindissectOpaque const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueWork@CItemsViewPrefetcher@@AEAAJPEBUViewInfo@1@@Z
    long _QueueWork(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackItem@CItemsViewPrefetcher@@AEAAJPEAUIItem@@@Z
    long _TrackItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unadvise@CItemsViewPrefetcher@@AEAAXXZ
    void _Unadvise();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemsViewPrefetcher@@AEAA@XZ
    ~CItemsViewPrefetcher();
};
