#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CAggregatedUnknown {
public:
    class CUnkInner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAggregatedUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HandleDelete@CAggregatedUnknown@@MEAAHPEAJ@Z
    virtual int v_HandleDelete(long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAggregatedUnknown@@MEAA@XZ
    virtual ~CAggregatedUnknown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCanonicalOuter@CAggregatedUnknown@@AEAAPEAUIUnknown@@XZ
    IUnknown * _GetCanonicalOuter();
};
