#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 16 member(s).
class CItemActionsManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemActionsManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMightBeShowingContextMenu@CItemActionsManager@@UEAAHXZ
    virtual int GetMightBeShowingContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputEvent@CItemActionsManager@@UEAAJPEAUInputEvent@DirectUI@@@Z
    virtual long HandleInputEvent(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsReused@CItemActionsManager@@UEAAJXZ
    virtual long OnItemsReused();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemActionsManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemActionsManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextMenuCleared@CItemActionsManager@@UEAAXXZ
    virtual void SetContextMenuCleared();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSingleClickMode@CItemActionsManager@@UEAAJH@Z
    virtual long SetSingleClickMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginDragSource@CItemActionsManager@@AEAAXPEAUMouseDragEvent@DirectUI@@@Z
    void _BeginDragSource(::DirectUI::MouseDragEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCheckboxTarget@CItemActionsManager@@AEAAHPEAUMouseEvent@DirectUI@@@Z
    int _IsCheckboxTarget(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemActivate@CItemActionsManager@@AEAA_NPEAUInputEvent@DirectUI@@@Z
    bool _ItemActivate(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContextMenu@CItemActionsManager@@AEAAXPEAUMouseEvent@DirectUI@@@Z
    void _ShowContextMenu(::DirectUI::MouseEvent *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemActionsManager@@AEAA@XZ
    ~CItemActionsManager();
};
