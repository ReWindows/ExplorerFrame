#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class CBrowserBar {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserBar@@QEAA@XZ
    CBrowserBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CBrowserBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CBrowserBar@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistState@CBrowserBar@@QEAAIPEAUHWND__@@H@Z
    unsigned int _PersistState(HWND__*, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForwardSizeEvent@CBrowserBar@@IEAAHI_K_JPEA_J@Z
    int _CheckForwardSizeEvent(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildPos@CBrowserBar@@MEAAXPEAUtagRECT@@@Z
    virtual void _GetChildPos(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStyleForMode@CBrowserBar@@MEAAXIPEAJ0PEAPEAUHWND__@@@Z
    virtual void _GetStyleForMode(unsigned int, long *, long *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowPosChanging@CBrowserBar@@MEAAXPEAUtagWINDOWPOS@@@Z
    virtual void _HandleWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CBrowserBar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
