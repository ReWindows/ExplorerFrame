#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CLineScrollerSpy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLineScrollerSpy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CLineScrollerSpy@@UEAAJW4LINESCROLLERVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLineScrollerSpy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLineScrollerSpy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CLineScrollerSpy@@SAJPEAVLineScroller@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(LineScroller *, _GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLineScrollerSpy@@AEAA@XZ
    ~CLineScrollerSpy();
};
