#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
class CItemsViewSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemsViewSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseIItemsViewSpyClient@CItemsViewSpy@@UEAAJPEAUIItemsViewSpyClient@@@Z
    virtual long AdviseIItemsViewSpyClient(IItemsViewSpyClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CItemsViewSpy@@UEAAJW4ITEMSVIEWSPYVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemsViewSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemsViewSpy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CItemsViewSpy@@SAJPEAVUIItemsView@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(UIItemsView *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FirstPageResults_GetState@CItemsViewSpy@@AEAAJPEAGH@Z
    long _FirstPageResults_GetState(unsigned short *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemsViewSpy@@AEAA@XZ
    ~CItemsViewSpy();
};
