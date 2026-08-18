#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CWaitCursorManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWaitCursorManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWaitCursorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitCursorManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@CWaitCursorManager@@UEAAJXZ
    virtual long Restore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CWaitCursorManager@@UEAAJW4CURSORID@@@Z
    virtual long Start(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CWaitCursorManager@@UEAAJW4CURSORID@@@Z
    virtual long Stop(int);
};
