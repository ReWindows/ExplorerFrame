#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CTheater {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTheater@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToolBars@CTheater@@QEAAXK@Z
    void ShowToolBars(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolbars@CTheater@@QEAAJHPEAUHWND__@@0@Z
    long UpdateToolbars(int, HWND__*, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTheater@@QEAA@XZ
    ~CTheater();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseHook@CTheater@@AEAAXUtagPOINT@@@Z
    void _MouseHook(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseHook@CTheater@@CA_JH_K_J@Z
    static int64_t s_MouseHook(int, uint64_t, int64_t);
};
