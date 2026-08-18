#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CWaitTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitTask@@QEAAKXZ
    unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursor@CWaitTask@@QEAAJW4CURSORID@@@Z
    long SetCursor(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CWaitTask@@AEAAJXZ
    long _Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartWaitCursor@CWaitTask@@AEAAXXZ
    void _StartWaitCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WaitBeforeCursing@CWaitTask@@CAXPEAXE@Z
    static void s_WaitBeforeCursing(void *, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitTask@@AEAA@XZ
    ~CWaitTask();
};
