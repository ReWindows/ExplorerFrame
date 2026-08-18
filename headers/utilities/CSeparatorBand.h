#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 41 member(s).
class CSeparatorBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSeparatorBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CSeparatorBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CSeparatorBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CSeparatorBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CSeparatorBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSeparatorBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSeparatorBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CSeparatorBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CSeparatorBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CSeparatorBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CSeparatorBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSeparatorBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CSeparatorBand@@UEAAJH@Z
    virtual long ShowDW(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinEvent@CSeparatorBand@@IEAAXPEAUHWND__@@I_K_JPEA_J@Z
    void _OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SeparatorWndProc@CSeparatorBand@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_SeparatorWndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSeparatorBand@@AEAA@XZ
    CSeparatorBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSeparatorBand@@AEAAJXZ
    long _Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSeparatorBand@@EEAA@XZ
    virtual ~CSeparatorBand();
};
