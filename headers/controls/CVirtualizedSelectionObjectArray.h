#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 29 member(s).
class CVirtualizedSelectionObjectArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFromArray@CVirtualizedSelectionObjectArray@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CVirtualizedSelectionObjectArray@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualizedSelectionObjectArray@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CVirtualizedSelectionObjectArray@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVirtualizedSelectionObjectArray@@UEAAJPEAUIShellFolder@@AEBU_GUID@@PEAPEAX@Z
    virtual long Create(IShellFolder *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CVirtualizedSelectionObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CVirtualizedSelectionObjectArray@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElapsedFullDevirtualizationTime@CVirtualizedSelectionObjectArray@@UEAAJPEAK@Z
    virtual long GetElapsedFullDevirtualizationTime(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedCount@CVirtualizedSelectionObjectArray@@UEAAJPEAI@Z
    virtual long GetEstimatedCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CVirtualizedSelectionObjectArray@@UEAAJW4VIRTUALIZEDSELECTIONARRAYVALUE@@PEAUtagVARIANT@@@Z
    virtual long GetValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDevirtualized@CVirtualizedSelectionObjectArray@@UEAAHXZ
    virtual int IsDevirtualized();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualizedSelectionObjectArray@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualizedSelectionObjectArray@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@CVirtualizedSelectionObjectArray@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStartingItemIndex@CVirtualizedSelectionObjectArray@@AEAAJXZ
    long _EnsureStartingItemIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CVirtualizedSelectionObjectArray@@AEAAJXZ
    long _Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualizedSelectionObjectArray@@AEAA@XZ
    ~CVirtualizedSelectionObjectArray();
};
