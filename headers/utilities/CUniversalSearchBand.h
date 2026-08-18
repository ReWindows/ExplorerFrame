#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 80 member(s).
class CUniversalSearchBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUniversalSearchBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUniversalSearchBand@@QEAA@XZ
    CUniversalSearchBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanYieldFocus@CUniversalSearchBand@@UEAAJXZ
    virtual long CanYieldFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CUniversalSearchBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CUniversalSearchBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CUniversalSearchBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CUniversalSearchBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCondition@CUniversalSearchBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCondition(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchControl@CUniversalSearchBand@@UEAAJPEAPEAUIShellSearchControl@@@Z
    virtual long GetSearchControl(IShellSearchControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CUniversalSearchBand@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CUniversalSearchBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CUniversalSearchBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CUniversalSearchBand@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CUniversalSearchBand@@QEAAJPEAUHWND__@@I_K_JPEA_J@Z
    long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUniversalSearchBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CUniversalSearchBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CUniversalSearchBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CUniversalSearchBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUniversalSearchBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CUniversalSearchBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@CUniversalSearchBand@@UEAAJK@Z
    virtual long SetNavigationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTarget@CUniversalSearchBand@@UEAAJPEAUIShellNavigationTarget@@@Z
    virtual long SetNavigationTarget(IShellNavigationTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CUniversalSearchBand@@UEAAJW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    virtual long SetProgress(int, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CUniversalSearchBand@@UEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CUniversalSearchBand@@UEAAJPEAUIShellSearchTarget@@@Z
    virtual long SetSearchTarget(IShellSearchTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchText@CUniversalSearchBand@@UEAAJPEBGW4tagSBSST_FLAGS@@@Z
    virtual long SetSearchText(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CUniversalSearchBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CUniversalSearchBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CUniversalSearchBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CUniversalSearchBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLegacySearchControl@CUniversalSearchBand@@UEAAXXZ
    virtual void UseLegacySearchControl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?sUniversalSearchWndProc@CUniversalSearchBand@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t sUniversalSearchWndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSearchControl@CUniversalSearchBand@@AEAAJXZ
    long InitializeSearchControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBandSize@CUniversalSearchBand@@AEAAXXZ
    void RefreshBandSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySearchBoxSettings@CUniversalSearchBand@@AEAAJXZ
    long _ApplySearchBoxSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupUniversalSearchBand@CUniversalSearchBand@@AEAAXXZ
    void _CleanupUniversalSearchBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchBoxText@CUniversalSearchBand@@AEAAJPEAPEAG@Z
    long _GetSearchBoxText(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CUniversalSearchBand@@AEAAJXZ
    long _Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUniversalSearchBand@@EEAA@XZ
    virtual ~CUniversalSearchBand();
};
