#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CFloatingWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToolbar@CFloatingWindow@@QEAAJPEAUHWND__@@@Z
    long AddToolbar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentToolbars@CFloatingWindow@@QEAAXH@Z
    void ReparentToolbars(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHideFloater@CFloatingWindow@@QEAAHUtagPOINT@@@Z
    int ShouldHideFloater(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowFloater@CFloatingWindow@@QEAAHUtagPOINT@@@Z
    int ShouldShowFloater(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFloater@CFloatingWindow@@QEAAXHK@Z
    void ShowFloater(int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFloatingWindow@@QEAA@XZ
    ~CFloatingWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FloaterWndProc@CFloatingWindow@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _FloaterWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFloaterPosition@CFloatingWindow@@AEAA?AUtagPOINT@@M@Z
    tagPOINT _GetFloaterPosition(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InterpolatePosition@CFloatingWindow@@AEAAHHHM@Z
    int _InterpolatePosition(int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseAtEdge@CFloatingWindow@@AEAAHUtagPOINT@@H@Z
    int _MouseAtEdge(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveFloater@CFloatingWindow@@AEAAXM@Z
    void _MoveFloater(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeFloater@CFloatingWindow@@AEAAXXZ
    void _SizeFloater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FloaterWndProc@CFloatingWindow@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_FloaterWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
