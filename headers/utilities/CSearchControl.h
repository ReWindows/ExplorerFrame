#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 68 member(s).
class CSearchControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CSearchControl@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesEditBoxHaveFocus@CSearchControl@@UEAAJPEAH@Z
    virtual long DoesEditBoxHaveFocus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@CSearchControl@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetDesiredSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSearchControl@@UEAAJPEAW4SSCSTATEFLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchControl@CSearchControl@@UEAAJPEAPEAUIShellSearchControl@@@Z
    virtual long GetSearchControl(IShellSearchControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CSearchControl@@UEAAJPEAGI@Z
    virtual long GetText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSearchControl@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CSearchControl@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSuggestions@CSearchControl@@UEAAJXZ
    virtual long HasSuggestions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSuggestions@CSearchControl@@UEAAJXZ
    virtual long HideSuggestions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchControl@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long Initialize(HWND__*, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CSearchControl@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillSelection@CSearchControl@@UEAAJXZ
    virtual long KillSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CSearchControl@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCueAndTooltipText@CSearchControl@@UEAAJPEBG0@Z
    virtual long SetCueAndTooltipText(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CSearchControl@@UEAAJW4SSCSTATEFLAGS@@@Z
    virtual long SetFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CSearchControl@@UEAAJPEAUIShellItem@@@Z
    virtual long SetLocation(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMRULocation@CSearchControl@@UEAAJAEBU_GUID@@@Z
    virtual long SetMRULocation(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupFlags@CSearchControl@@UEAAJW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long SetPopupFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CSearchControl@@UEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CSearchControl@@UEAAJPEAUIShellSearchTarget@@@Z
    virtual long SetSearchTarget(IShellSearchTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchText@CSearchControl@@UEAAJPEBGW4tagSBSST_FLAGS@@@Z
    virtual long SetSearchText(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSearchControl@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CSearchControl@@UEAAJPEBGW4SSCTEXTFLAGS@@@Z
    virtual long SetText(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CSearchControl@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CSearchControl@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidth@CSearchControl@@UEAAJHW4SSC_WIDTH_FLAGS@@@Z
    virtual long UpdateWidth(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchControl@@UEAA@XZ
    virtual ~CSearchControl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CSearchControl@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcEditControlRect@CSearchControl@@AEAAXPEAUtagRECT@@@Z
    void _CalcEditControlRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyFont@CSearchControl@@AEAAXXZ
    void _DestroyFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchText@CSearchControl@@AEAAJPEAGI@Z
    long _GetSearchText(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseOverSplitButton@CSearchControl@@AEAAHXZ
    int _MouseOverSplitButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBackgroundStateChanged@CSearchControl@@AEAAXXZ
    void _OnBackgroundStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CSearchControl@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCustomDraw@CSearchControl@@AEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    int64_t _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditChange@CSearchControl@@AEAAXXZ
    void _OnEditChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyDown@CSearchControl@@AEAAJPEAUtagMSG@@@Z
    long _OnKeyDown(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CSearchControl@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnParentActivate@CSearchControl@@AEAAXH@Z
    void _OnParentActivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionChildWindows@CSearchControl@@AEAAXXZ
    void _PositionChildWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTheme@CSearchControl@@AEAAXH@Z
    void _RefreshTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetClearButton@CSearchControl@@AEAAXH@Z
    void _SetClearButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarImageLists@CSearchControl@@AEAAXXZ
    void _SetToolbarImageLists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassWndProc@CSearchControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateEditControlFont@CSearchControl@@AEAAXXZ
    void _UpdateEditControlFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFont@CSearchControl@@AEAAXXZ
    void _UpdateFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassWndProc@CSearchControl@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
