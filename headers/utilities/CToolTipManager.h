#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 45 member(s).
class CToolTipManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CToolTipManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputEvent@CToolTipManager@@UEAAJPEAUInputEvent@DirectUI@@@Z
    virtual long HandleInputEvent(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CToolTipManager@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CToolTipManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CToolTipManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@CToolTipManager@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserMovedFocusWithKeyboard@CToolTipManager@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long UserMovedFocusWithKeyboard(::DirectUI::Element *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CToolTipManager@@AEAA@PEAVUIItemsView@@@Z
    CToolTipManager(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustTooltipPaintingLocation@CToolTipManager@@AEAAHPEAUHWND__@@@Z
    int _AdjustTooltipPaintingLocation(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearHooks@CToolTipManager@@AEAAXXZ
    void _ClearHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearToolTipState@CToolTipManager@@AEAAXXZ
    void _ClearToolTipState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateToolTipControl@CToolTipManager@@AEAAJXZ
    long _CreateToolTipControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeferMouseTooltipForElement@CToolTipManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _DeferMouseTooltipForElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyCurrentFont@CToolTipManager@@AEAAXXZ
    void _DestroyCurrentFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableHooks@CToolTipManager@@AEAAXXZ
    void _DisableHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableHooks@CToolTipManager@@AEAAXXZ
    void _EnableHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEventActionCB@CToolTipManager@@AEAAJPEAUIUnknown@@HPEAUItemEventParams@@PEAW4tagEVENTACTION@@@Z
    long _GetEventActionCB(IUnknown *, int, ItemEventParams *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsContentClipped@CToolTipManager@@AEAAHPEAVElement@DirectUI@@@Z
    int _IsContentClipped(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsContentTruncated@CToolTipManager@@AEAAHPEAVElement@DirectUI@@@Z
    int _IsContentTruncated(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInfoTipReady@CToolTipManager@@AEAAXXZ
    void _OnInfoTipReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemEventCB@CToolTipManager@@AEAAJPEAUIUnknown@@PEAUItemEventParams@@@Z
    long _OnItemEventCB(IUnknown *, ItemEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyToolTipSubclassProc@CToolTipManager@@AEAA_JPEAUHWND__@@I_K_J1@Z
    int64_t _PropertyToolTipSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetToolTipManager@CToolTipManager@@AEAAXXZ
    void _ResetToolTipManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveToolTipElement@CToolTipManager@@AEAAXPEAVElement@DirectUI@@W4TOOLTIPINPUT@@@Z
    void _SetActiveToolTipElement(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAsyncInfoTipItem@CToolTipManager@@AEAAJPEAUIItem@@@Z
    long _SetAsyncInfoTipItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentFont@CToolTipManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetCurrentFont(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPrefixText@CToolTipManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetPrefixText(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolTipControlText@CToolTipManager@@AEAAXPEBG@Z
    void _SetToolTipControlText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolTipMode@CToolTipManager@@AEAAXPEAVElement@DirectUI@@W4TOOLTIPINPUT@@@Z
    void _SetToolTipMode(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupInfoTipText@CToolTipManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupInfoTipText(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupToolTipText@CToolTipManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupToolTipText(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowKeyboardToolTip@CToolTipManager@@AEAAXXZ
    void _ShowKeyboardToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TargetElementFromMouseEvent@CToolTipManager@@AEAAPEAVElement@DirectUI@@PEAUMouseEvent@3@@Z
    ::DirectUI::Element * _TargetElementFromMouseEvent(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_KeyboardHookProc@CToolTipManager@@CA_JH_K_J@Z
    static int64_t s_KeyboardHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseHookProc@CToolTipManager@@CA_JH_K_J@Z
    static int64_t s_MouseHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PropertyToolTipSubclassProc@CToolTipManager@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_PropertyToolTipSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CToolTipManager@@EEAA@XZ
    virtual ~CToolTipManager();
};
