#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CPrefetchTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CPrefetchTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CPrefetchTask@@SAJPEAVCItemsViewPrefetcher@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CItemsViewPrefetcher *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrefetchTask@@AEAA@PEAVCItemsViewPrefetcher@@@Z
    CPrefetchTask(CItemsViewPrefetcher *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrefetchTask@@EEAA@XZ
    virtual ~CPrefetchTask();
};
