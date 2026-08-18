#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 55 member(s).
class CUpBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUpBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUpBand@@QEAA@XZ
    CUpBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CUpBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CUpBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CUpBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CUpBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CUpBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUpBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUpBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CUpBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CUpBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CUpBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CUpBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CUpBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CUpBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CUpBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CUpBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CUpBand@@IEAAJ_K_J@Z
    long _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CUpBand@@IEAA_J_K_J@Z
    int64_t _OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CUpBand@@IEAAXHH@Z
    void _OnSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinEvent@CUpBand@@IEAAJPEAUHWND__@@I_K_JPEA_J@Z
    long _OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpWndProc@CUpBand@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_UpWndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateButtonImageList@CUpBand@@AEAAXHPEAPEAU_IMAGELIST@@@Z
    void CreateButtonImageList(int, _IMAGELIST * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CUpBand@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CUpBand@@AEAAX_N@Z
    void OnThemeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetPadding@CUpBand@@AEAAXXZ
    void ScaleAndSetPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupUpBand@CUpBand@@AEAAXXZ
    void _CleanupUpBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUpButtons@CUpBand@@AEAAXXZ
    void _CreateUpButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSize@CUpBand@@AEAAXPEAUtagSIZE@@@Z
    void _GetSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CUpBand@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonStates@CUpBand@@AEAAXXZ
    void _SetButtonStates();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUpBand@@EEAA@XZ
    virtual ~CUpBand();
};
