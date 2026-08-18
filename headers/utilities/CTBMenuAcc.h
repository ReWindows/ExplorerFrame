#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CTBMenuAcc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CTBMenuAcc@@SAJPEBGPEAUIAccessible@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(unsigned short const *, IAccessible *, HWND__*, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHotItem@CTBMenuAcc@@MEAAHXZ
    virtual int v_GetHotItem();
};
