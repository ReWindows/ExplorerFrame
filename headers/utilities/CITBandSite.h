#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
namespace CInternetToolbar {
class CITBandSite {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CITBandSite@CInternetToolbar@@UEAA@XZ
    virtual ~CITBandSite();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CITBandSite@CInternetToolbar@@MEAAJPEAUHWND__@@@Z
    virtual long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CITBandSite@CInternetToolbar@@MEAAJ_K_J@Z
    virtual long _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBorderStyles@CITBandSite@CInternetToolbar@@MEAAXHH@Z
    virtual void _SetBorderStyles(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMinDimensions@CITBandSite@CInternetToolbar@@IEAAHXZ
    int _SetMinDimensions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetTabstop@CITBandSite@CInternetToolbar@@MEAAXPEAUtagREBARBANDINFOW@@@Z
    virtual void v_SetTabstop(tagREBARBANDINFOW *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBand@CITBandSite@CInternetToolbar@@EEAAJPEAUIUnknown@@@Z
    virtual long AddBand(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CITBandSite@CInternetToolbar@@AEAA@XZ
    CITBandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CITBandSite@CInternetToolbar@@EEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CITBandSite@CInternetToolbar@@EEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RebarSubclassWndProc@CITBandSite@CInternetToolbar@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_RebarSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
} // namespace CInternetToolbar
