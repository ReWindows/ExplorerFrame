#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 101 member(s).
class CDockingBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDockingBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CDockingBar@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CDockingBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CDockingBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CDockingBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CDockingBar@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDockingBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CDockingBar@@UEAAJXZ
    virtual long InitNew();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CDockingBar@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDockingBar@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDockingBar@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CDockingBar@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDockingBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDockingBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDockingBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBorderDW@CDockingBar@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CDockingBar@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CDockingBar@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CDockingBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CDockingBar@@UEAAJH@Z
    virtual long ShowDW(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppBarQueryPos@CDockingBar@@IEAAHPEAUtagRECT@@IPEAUHMONITOR__@@PEBU2@PEAU_AppBarData@@H@Z
    int AppBarQueryPos(tagRECT *, unsigned int, HMONITOR__*, tagRECT const *, _AppBarData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppBarQuerySetPos@CDockingBar@@IEAAXPEAUtagRECT@@IPEAUHMONITOR__@@PEBU2@PEAU_AppBarData@@H@Z
    void AppBarQuerySetPos(tagRECT *, unsigned int, HMONITOR__*, tagRECT const *, _AppBarData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppBarSetPos0@CDockingBar@@IEAAXIPEBUtagRECT@@PEAU_AppBarData@@@Z
    void AppBarSetPos0(unsigned int, tagRECT const *, _AppBarData *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDockingBar@@IEAA@XZ
    CDockingBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RectXform@CDockingBar@@IEAAHPEAUtagRECT@@IPEBU2@0HIPEAUHMONITOR__@@@Z
    int RectXform(tagRECT *, unsigned int, tagRECT const *, tagRECT *, int, unsigned int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustToChildSize@CDockingBar@@IEAAXXZ
    void _AdjustToChildSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppBarCallback@CDockingBar@@IEAAXPEAUHWND__@@I_K_J@Z
    void _AppBarCallback(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppBarOnCommand@CDockingBar@@IEAAXI@Z
    void _AppBarOnCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppBarOnPosChanged@CDockingBar@@IEAAXPEAU_AppBarData@@@Z
    void _AppBarOnPosChanged(_AppBarData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppBarRegister@CDockingBar@@IEAAXH@Z
    void _AppBarRegister(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcDragPlace@CDockingBar@@IEAAIAEAUtagPOINT@@PEAPEAUHMONITOR__@@@Z
    unsigned int _CalcDragPlace(tagPOINT &, HMONITOR__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcHitTest@CDockingBar@@IEAA_J_K_J@Z
    int64_t _CalcHitTest(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeTopMost@CDockingBar@@IEAAXI@Z
    void _ChangeTopMost(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeWindowStateAndParent@CDockingBar@@IEAAXI@Z
    void _ChangeWindowStateAndParent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoHide@CDockingBar@@IEAAXI@Z
    void _DoHide(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DragEnter@CDockingBar@@IEAAXIHHPEAUtagRECT@@@Z
    void _DragEnter(unsigned int, int, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DragTrack@CDockingBar@@IEAAXIHHPEAUtagRECT@@H@Z
    void _DragTrack(unsigned int, int, int, tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBorderRect@CDockingBar@@IEAAXPEAUHMONITOR__@@PEAUtagRECT@@@Z
    void _GetBorderRect(HMONITOR__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildPos@CDockingBar@@MEAAXPEAUtagRECT@@@Z
    virtual void _GetChildPos(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CDockingBar@@IEAAPEAUHMENU__@@XZ
    HMENU__* _GetContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStyleForMode@CDockingBar@@MEAAXIPEAJ0PEAPEAUHWND__@@@Z
    virtual void _GetStyleForMode(unsigned int, long *, long *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GrowShrinkBar@CDockingBar@@MEAAXK@Z
    virtual void _GrowShrinkBar(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowPosChanging@CDockingBar@@MEAAXPEAUtagWINDOWPOS@@@Z
    virtual void _HandleWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideRegister@CDockingBar@@IEAAXH@Z
    void _HideRegister(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitPos4@CDockingBar@@IEAAXH@Z
    void _InitPos4(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CDockingBar@@IEAAXXZ
    void _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveSizeHelper@CDockingBar@@IEAAXIIPEAUHMONITOR__@@PEBUtagPOINT@@PEAUtagRECT@@HH@Z
    void _MoveSizeHelper(unsigned int, unsigned int, HMONITOR__*, tagPOINT const *, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NegotiateBorderRect@CDockingBar@@IEAAJPEAUtagRECT@@PEBU2@H@Z
    long _NegotiateBorderRect(tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NegotiateRect@CDockingBar@@IEAAXIIPEAUHMONITOR__@@PEAUtagRECT@@H@Z
    void _NegotiateRect(unsigned int, unsigned int, HMONITOR__*, tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyModeChange@CDockingBar@@MEAAXK@Z
    virtual void _NotifyModeChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@CDockingBar@@IEAAX_K_J@Z
    void _OnActivate(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCloseBar@CDockingBar@@MEAAHH@Z
    virtual int _OnCloseBar(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CDockingBar@@MEAA_JI_K_J@Z
    virtual int64_t _OnCommand(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNCHitTest@CDockingBar@@IEAA_J_K_J@Z
    int64_t _OnNCHitTest(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPostedPosRectChange@CDockingBar@@MEAAXXZ
    virtual void _OnPostedPosRectChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRaise@CDockingBar@@MEAAXI@Z
    virtual void _OnRaise(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CDockingBar@@MEAAXXZ
    virtual void _OnSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProtoRect@CDockingBar@@IEAAXPEAUtagRECT@@IIPEAUHMONITOR__@@PEBUtagPOINT@@@Z
    void _ProtoRect(tagRECT *, unsigned int, unsigned int, HMONITOR__*, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Recalc@CDockingBar@@IEAAXXZ
    void _Recalc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveToolbar@CDockingBar@@IEAAXK@Z
    void _RemoveToolbar(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetZorder@CDockingBar@@IEAAXXZ
    void _ResetZorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetModeSide@CDockingBar@@MEAAXIIPEAUHMONITOR__@@H@Z
    virtual void _SetModeSide(unsigned int, unsigned int, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVRect@CDockingBar@@IEAAXPEBUtagRECT@@@Z
    void _SetVRect(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SmoothDragPlace@CDockingBar@@IEAAXIIPEAUHMONITOR__@@PEAUtagPOINT@@PEAUtagRECT@@@Z
    void _SmoothDragPlace(unsigned int, unsigned int, HMONITOR__*, tagPOINT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackPopupMenu@CDockingBar@@IEAAJPEBUtagPOINT@@@Z
    long _TrackPopupMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackSliding@CDockingBar@@IEAAXHHPEAUtagRECT@@HH@Z
    void _TrackSliding(int, int, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CDockingBar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDockingBar@@MEAA@XZ
    virtual ~CDockingBar();
};
