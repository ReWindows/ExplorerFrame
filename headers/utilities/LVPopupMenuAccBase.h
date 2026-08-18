#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class LVPopupMenuAccBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@LVPopupMenuAccBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@LVPopupMenuAccBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@LVPopupMenuAccBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@LVPopupMenuAccBase@@SAJPEBGPEAUIAccessible@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(unsigned short const *, IAccessible *, HWND__*, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LVPopupMenuAccBase@@UEAA@XZ
    virtual ~LVPopupMenuAccBase();
};
