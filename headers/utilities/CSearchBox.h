#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 83 member(s).
class CSearchBox {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchBox@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendOrReplaceFilter@CSearchBox@@UEAAJAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIFilterCondition@@@Z
    virtual long AppendOrReplaceFilter(_tagpropertykey const &, tagPROPVARIANT const *, IFilterCondition *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchBox@@QEAA@XZ
    CSearchBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CSearchBox@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesEditBoxHaveFocus@CSearchBox@@UEAAJPEAH@Z
    virtual long DoesEditBoxHaveFocus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@CSearchBox@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetDesiredSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSearchBox@@UEAAJPEAW4SSCSTATEFLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchControl@CSearchBox@@UEAAJPEAPEAUIShellSearchControl@@@Z
    virtual long GetSearchControl(IShellSearchControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CSearchBox@@UEAAJPEAGI@Z
    virtual long GetText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSearchBox@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CSearchBox@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSuggestions@CSearchBox@@UEAAJXZ
    virtual long HasSuggestions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSuggestions@CSearchBox@@UEAAJXZ
    virtual long HideSuggestions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchBox@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long Initialize(HWND__*, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CSearchBox@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillSelection@CSearchBox@@UEAAJXZ
    virtual long KillSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CSearchBox@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@CSearchBox@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CSearchBox@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CSearchBox@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerAttach@CSearchBox@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CSearchBox@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CSearchBox@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchBox@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchBox@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderPadding@CSearchBox@@UEAAJAEBU_MARGINS@@@Z
    virtual long SetBorderPadding(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCueAndTooltipText@CSearchBox@@UEAAJPEBG0@Z
    virtual long SetCueAndTooltipText(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CSearchBox@@UEAAJW4SSCSTATEFLAGS@@@Z
    virtual long SetFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CSearchBox@@UEAAJPEAUIShellItem@@@Z
    virtual long SetLocation(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMRULocation@CSearchBox@@UEAAJAEBU_GUID@@@Z
    virtual long SetMRULocation(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupFlags@CSearchBox@@UEAAJW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long SetPopupFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CSearchBox@@UEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    virtual long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CSearchBox@@UEAAJPEAUIShellSearchTarget@@@Z
    virtual long SetSearchTarget(IShellSearchTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchText@CSearchBox@@UEAAJPEBGW4tagSBSST_FLAGS@@@Z
    virtual long SetSearchText(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSearchBox@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CSearchBox@@UEAAJPEBGW4SSCTEXTFLAGS@@@Z
    virtual long SetText(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSearchBox@@UEAAJH@Z
    virtual long Show(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CSearchBox@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CSearchBox@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePendingText@CSearchBox@@UEAAJPEAG@Z
    virtual long UpdatePendingText(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidth@CSearchBox@@UEAAJHW4SSC_WIDTH_FLAGS@@@Z
    virtual long UpdateWidth(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchBox@@UEAA@XZ
    virtual ~CSearchBox();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CSearchBox@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WrapperWndProc@CSearchBox@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WrapperWndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDarkModeForWindow@CSearchBox@@AEAAXPEAUHWND__@@@Z
    void AllowDarkModeForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CSearchBox@@AEAAXPEAPEAUIShellItemArray@@@Z
    void GetSelection(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChildButtonPadding@CSearchBox@@AEAAXXZ
    void UpdateChildButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpForDestroy@CSearchBox@@AEAAXXZ
    void _CleanUpForDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWrapperHwnd@CSearchBox@@AEAAJXZ
    long _CreateWrapperHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawParentBackground@CSearchBox@@AEAAXPEAVCPrintClientStruct@@@Z
    void _DrawParentBackground(CPrintClientStruct *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTabletTip@CSearchBox@@AEAAXPEAUHWND__@@@Z
    void _InitTabletTip(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Invalidate@CSearchBox@@AEAAXXZ
    void _Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditChange@CSearchBox@@AEAAXXZ
    void _OnEditChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnParentActivate@CSearchBox@@AEAAXH@Z
    void _OnParentActivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionChildWindows@CSearchBox@@AEAAXXZ
    void _PositionChildWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTheme@CSearchBox@@AEAAXXZ
    void _RefreshTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetClearButton@CSearchBox@@AEAAXH@Z
    void _SetClearButton(int);
};
