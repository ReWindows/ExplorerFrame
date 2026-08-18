#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
class CPersistExplorerFrame {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPersistExplorerFrame@@QEAA@PEAUIUnknown@@@Z
    CPersistExplorerFrame(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillIEThreadParam@CPersistExplorerFrame@@QEAAXPEAUHWND__@@PEAUIETHREADPARAM@@PEAH@Z
    void FillIEThreadParam(HWND__*, IETHREADPARAM *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPersistExplorerFrame@@QEAAXPEAUIShellItem@@PEAUHMONITOR__@@PEAUHWND__@@_N@Z
    void Load(IShellItem *, HMONITOR__*, HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadShellWindowSettings@CPersistExplorerFrame@@QEAAHPEAUIShellItem@@PEAUtagWINDOWPLACEMENT@@@Z
    int LoadShellWindowSettings(IShellItem *, tagWINDOWPLACEMENT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPersistExplorerFrame@@QEAA@XZ
    ~CPersistExplorerFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcWindowPlacement@CPersistExplorerFrame@@AEAAHPEAUHWND__@@PEAUIETHREADPARAM@@@Z
    int _CalcWindowPlacement(HWND__*, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CascadeWindowRect@CPersistExplorerFrame@@CAXPEAUtagRECT@@@Z
    static void _CascadeWindowRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultWindowPlacement@CPersistExplorerFrame@@AEAAXPEAUHWND__@@PEAUHMONITOR__@@_N@Z
    void _GetDefaultWindowPlacement(HWND__*, HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFrameStatePropertyBag@CPersistExplorerFrame@@AEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    long _GetFrameStatePropertyBag(IShellItem *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadShellNavBarSettings@CPersistExplorerFrame@@AEAAHXZ
    int _LoadShellNavBarSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlacementEnumWindowsProc@CPersistExplorerFrame@@CAHPEAUHWND__@@_J@Z
    static int _PlacementEnumWindowsProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveShellNavBarSettings@CPersistExplorerFrame@@AEAAHXZ
    int _SaveShellNavBarSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveShellWindowSettings@CPersistExplorerFrame@@AEAAHPEAUIShellItem@@PEAUHWND__@@H@Z
    int _SaveShellWindowSettings(IShellItem *, HWND__*, int);
};
