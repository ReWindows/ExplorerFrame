#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 44 member(s).
class CTheaterBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTheaterBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CTheaterBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CTheaterBand@@SAJPEAPEAUIDeskBand@@@Z
    static long CreateInstance(IDeskBand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CTheaterBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CTheaterBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTheaterBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CTheaterBand@@QEAAJPEAUHWND__@@I_K_JPEA_J@Z
    long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTheaterBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTheaterBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CTheaterBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CTheaterBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CTheaterBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CTheaterBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTheaterBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CTheaterBand@@UEAAJH@Z
    virtual long ShowDW(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CTheaterBand@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTheaterButtons@CTheaterBand@@AEAAXXZ
    void _CreateTheaterButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CTheaterBand@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTheaterBandImageList@CTheaterBand@@AEAAXXZ
    void _SetTheaterBandImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TheaterBandWndProc@CTheaterBand@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_TheaterBandWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTheaterBand@@EEAA@XZ
    virtual ~CTheaterBand();
};
