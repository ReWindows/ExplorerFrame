#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 62 member(s).
class CTravelBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTravelBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTravelBand@@QEAA@XZ
    CTravelBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CTravelBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CTravelBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CTravelBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CTravelBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTravelBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CTravelBand@@QEAAJPEAUHWND__@@I_K_JPEA_J@Z
    long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTravelBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTravelBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CTravelBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CTravelBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CTravelBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CTravelBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTravelBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CTravelBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CTravelBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CTravelBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TravelWndProc@CTravelBand@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_TravelWndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickCurrentButton@CTravelBand@@AEAAJXZ
    long ClickCurrentButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetPadding@CTravelBand@@AEAAXKK@Z
    void ScaleAndSetPadding(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabToNextButton@CTravelBand@@AEAAJH@Z
    long TabToNextButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildDropDownImagesThemedMode@CTravelBand@@AEAAXXZ
    void _BuildDropDownImagesThemedMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupTravelBand@CTravelBand@@AEAAXXZ
    void _CleanupTravelBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTravelButtons@CTravelBand@@AEAAXXZ
    void _CreateTravelButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawTravelBackground@CTravelBand@@AEAAXPEAUHDC__@@@Z
    void _DrawTravelBackground(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CTravelBand@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ListImageAddPart@CTravelBand@@AEAAHPEAPEAU_IMAGELIST@@HHPEAUHDC__@@JJ@Z
    int _ListImageAddPart(_IMAGELIST * *, int, int, HDC__*, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CTravelBand@@AEAAX_K_J@Z
    void _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CTravelBand@@AEAA_J_K_J@Z
    int64_t _OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnToolTipNeeded@CTravelBand@@AEAAXPEAUtagNMTTDISPINFOW@@@Z
    void _OnToolTipNeeded(tagNMTTDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccessibilityButtonText@CTravelBand@@AEAAXPEAUHWND__@@II@Z
    void _SetAccessibilityButtonText(HWND__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonImagesClassicMode@CTravelBand@@AEAAXXZ
    void _SetButtonImagesClassicMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonImagesThemedMode@CTravelBand@@AEAAXXZ
    void _SetButtonImagesThemedMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonStates@CTravelBand@@AEAAXXZ
    void _SetButtonStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetControlState@CTravelBand@@AEAAXH@Z
    void _SetControlState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowBackForwardMenu@CTravelBand@@AEAAXXZ
    void _ShowBackForwardMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThemeTravelBand@CTravelBand@@AEAAXXZ
    void _ThemeTravelBand();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTravelBand@@EEAA@XZ
    virtual ~CTravelBand();
};
