#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 22 member(s).
class CTypeAhead {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTypeAhead@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTypeAhead@@QEAA@PEAUIItemCollection@@PEAUISelectionManager@@PEAUIFocusManager@@PEAVUIItemsView@@PEAUICollectionCache@@@Z
    CTypeAhead(IItemCollection *, ISelectionManager *, IFocusManager *, UIItemsView *, ICollectionCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBackspace@CTypeAhead@@UEAAJXZ
    virtual long HandleBackspace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputEvent@CTypeAhead@@UEAAJPEAUInputEvent@DirectUI@@@Z
    virtual long HandleInputEvent(::DirectUI::InputEvent *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTypeAhead@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTypeAhead@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CTypeAhead@@AEAAJPEBGHPEAPEAUIItem@@PEAVItemIndex@@@Z
    long _FindItem(unsigned short const *, int, IItem * *, ItemIndex *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItemInCollection@CTypeAhead@@AEAAJPEBGHPEAVItemIndex@@IPEAUIItemCollection@@PEAPEAUIItem@@@Z
    long _FindItemInCollection(unsigned short const *, int, ItemIndex *, unsigned int, IItemCollection *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFocusIndex@CTypeAhead@@AEAAJPEAVItemIndex@@@Z
    long _GetFocusIndex(ItemIndex *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasSearchStringTimedOut@CTypeAhead@@AEAAHXZ
    int _HasSearchStringTimedOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideVisual@CTypeAhead@@AEAAXXZ
    void _HideVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncrementSearchString@CTypeAhead@@AEAAJG@Z
    long _IncrementSearchString(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchStringWithItem@CTypeAhead@@AEAAHPEBGPEAUIItem@@@Z
    int _MatchStringWithItem(unsigned short const *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetSearchString@CTypeAhead@@AEAAXXZ
    void _ResetSearchString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestartTypeAheadTimeout@CTypeAhead@@AEAAXXZ
    void _RestartTypeAheadTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItem@CTypeAhead@@AEAAJPEAUIItem@@AEBVItemIndex@@@Z
    long _SelectItem(IItem *, ItemIndex const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimer@CTypeAhead@@AEAAXXZ
    void _StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TATimeoutCallback@CTypeAhead@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_TATimeoutCallback(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeAhead@@AEAA@XZ
    ~CTypeAhead();
};
