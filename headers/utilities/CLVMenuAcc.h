#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class CLVMenuAcc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CLVMenuAcc@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CLVMenuAcc@@SAJPEBGPEAUIAccessible@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(unsigned short const *, IAccessible *, HWND__*, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHotItem@CLVMenuAcc@@MEAAHXZ
    virtual int v_GetHotItem();
};
