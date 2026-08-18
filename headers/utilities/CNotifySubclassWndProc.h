#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CNotifySubclassWndProc {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CNotifySubclassWndProc@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyCustomData@CNotifySubclassWndProc@@MEAAX_J@Z
    virtual void _DestroyCustomData(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushNotifyMessages@CNotifySubclassWndProc@@IEAAXPEAUHWND__@@@Z
    void _FlushNotifyMessages(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterWindow@CNotifySubclassWndProc@@IEAAXPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@I@Z
    void _UnregisterWindow(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotifySubclassWndProc@@MEAA@XZ
    virtual ~CNotifySubclassWndProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareRegisterData@CNotifySubclassWndProc@@CAHPEBUNOTIFYREGISTERDATA@1@0_J@Z
    static int s_CompareRegisterData(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassWndProc@CNotifySubclassWndProc@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
