#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CTestabilityUICollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CTestabilityUICollection@@UEAAJPEAUIUnknown@@@Z
    virtual long Add(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTestabilityUICollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CTestabilityUICollection@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CTestabilityUICollection@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CTestabilityUICollection@@UEAAJIPEAPEAUIUnknown@@@Z
    virtual long GetItem(unsigned int, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CTestabilityUICollection@@UEAAJIPEAUIUnknown@@@Z
    virtual long Insert(unsigned int, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTestabilityUICollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTestabilityUICollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CTestabilityUICollection@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Replace@CTestabilityUICollection@@UEAAJIPEAUIUnknown@@@Z
    virtual long Replace(unsigned int, IUnknown *);
};
