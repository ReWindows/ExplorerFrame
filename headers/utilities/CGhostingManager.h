#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CGhostingManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGhostingManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGhosted@CGhostingManager@@UEAAHPEAUIItem@@@Z
    virtual int IsGhosted(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupByChanged@CGhostingManager@@UEAAJXZ
    virtual long OnGroupByChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGhostingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGhostingManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGhostedSelection@CGhostingManager@@UEAAJH@Z
    virtual long SetGhostedSelection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIItemsView@CGhostingManager@@UEAAJPEAVUIItemsView@@@Z
    virtual long SetUIItemsView(UIItemsView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGhostingManager@@QEAA@XZ
    ~CGhostingManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateElementGhostingTreeFromItemsHost@CGhostingManager@@AEAAJPEAVElement@DirectUI@@@Z
    long _UpdateElementGhostingTreeFromItemsHost(::DirectUI::Element *);
};
