#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class CDropDown {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDropDown@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildWindow@CDropDown@@AEAAPEAUHWND__@@XZ
    HWND__* _GetChildWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDropDownSizeSide@CDropDown@@AEAAKUtagPOINT@@@Z
    unsigned long _GetDropDownSizeSide(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideDropDown@CDropDown@@AEAAXH@Z
    void _HideDropDown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HookMouse@CDropDown@@AEAAHH@Z
    int _HookMouse(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HostSubclassProc@CDropDown@@AEAA_JPEAUHWND__@@I_K_J11@Z
    int64_t _HostSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseProc@CDropDown@@AEAA_JH_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z
    int64_t _MouseProc(int, uint64_t, tagMOUSEHOOKSTRUCTEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CDropDown@@AEAA_JPEAUHWND__@@PEAUtagCREATESTRUCTW@@@Z
    int64_t _OnCreate(HWND__*, tagCREATESTRUCTW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLButtonDown@CDropDown@@AEAA_J_J@Z
    int64_t _OnLButtonDown(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseMove@CDropDown@@AEAA_J_J@Z
    int64_t _OnMouseMove(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPaint@CDropDown@@AEAA_JXZ
    int64_t _OnPaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CDropDown@@AEAA_JIHH@Z
    int64_t _OnSize(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDropDown@CDropDown@@AEAAXXZ
    void _ShowDropDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClassParent@CDropDown@@AEAAXH@Z
    void _SubClassParent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CDropDown@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HostSubclassProc@CDropDown@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_HostSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseProc@CDropDown@@CA_JH_K_J@Z
    static int64_t s_MouseProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CDropDown@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
