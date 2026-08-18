#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CFirstPageTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CFirstPageTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CFirstPageTask@@SAJPEAVCFirstPageResults@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CFirstPageResults *, _GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFirstPageTask@@EEAA@XZ
    virtual ~CFirstPageTask();
};
