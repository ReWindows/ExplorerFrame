#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
namespace CItemsView {
class CItemsViewScroller {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemsViewScroller@CItemsView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsViewScroller@CItemsView@@QEAA@PEAUHWND__@@@Z
    CItemsViewScroller(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScroll@CItemsViewScroller@CItemsView@@UEAAJPEBUtagPOINT@@PEAH@Z
    virtual long CanScroll(tagPOINT const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemsViewScroller@CItemsView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemsViewScroller@CItemsView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLine@CItemsViewScroller@CItemsView@@UEAAJHG@Z
    virtual long ScrollLine(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Create@CItemsViewScroller@CItemsView@@SAJPEAVUIItemsView@@AEBU_GUID@@PEAPEAX@Z
    static long s_Create(UIItemsView *, _GUID const &, void * *);
};
} // namespace CItemsView
