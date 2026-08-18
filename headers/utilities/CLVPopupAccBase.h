#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CLVPopupAccBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CLVPopupAccBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CLVPopupAccBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CLVPopupAccBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLVPopupAccBase@@IEAA@PEAUIAccessible@@PEAUHWND__@@@Z
    CLVPopupAccBase(IAccessible *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLVPopupAccBase@@MEAA@XZ
    virtual ~CLVPopupAccBase();
};
