#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 95 member(s).
class CBrowserBandSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBitmap@CBrowserBandSite@@UEAAJPEBU_GUID@@IIPEAUtagTBADDBITMAP@@PEA_JK@Z
    virtual long AddBitmap(_GUID const *, unsigned int, unsigned int, tagTBADDBITMAP *, int64_t *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddButtons@CBrowserBandSite@@UEAAJPEBU_GUID@@IPEBU_TBBUTTON@@@Z
    virtual long AddButtons(_GUID const *, unsigned int, _TBBUTTON const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserBandSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStdBrowserButtons@CBrowserBandSite@@UEAAJXZ
    virtual long AddStdBrowserButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CBrowserBandSite@@UEAAJPEBU_GUID@@PEAUHINSTANCE__@@_KPEA_J@Z
    virtual long AddString(_GUID const *, HINSTANCE__*, uint64_t, int64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserBandSite@@QEAA@XZ
    CBrowserBandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CBrowserBandSite@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapSize@CBrowserBandSite@@UEAAJPEAI@Z
    virtual long GetBitmapSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButton@CBrowserBandSite@@UEAAJPEBU_GUID@@IPEAU_TBBUTTON@@@Z
    virtual long GetButton(_GUID const *, unsigned int, _TBBUTTON *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CBrowserBandSite@@UEAAJPEBU_GUID@@IPEAI@Z
    virtual long GetState(_GUID const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBrowserBandSite@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideBackForwardButton@CBrowserBandSite@@UEAAJPEBU_GUID@@I@Z
    virtual long HideBackForwardButton(_GUID const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CBrowserBandSite@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyButton@CBrowserBandSite@@UEAAJPEBU_GUID@@IPEAU_TBBUTTON@@@Z
    virtual long ModifyButton(_GUID const *, unsigned int, _TBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CBrowserBandSite@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserBandSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserBandSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendToolbarMsg@CBrowserBandSite@@UEAAJPEBU_GUID@@I_K_JPEA_J@Z
    virtual long SendToolbarMsg(_GUID const *, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandSiteInfo@CBrowserBandSite@@UEAAJPEBUtagBANDSITEINFO@@@Z
    virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommandTarget@CBrowserBandSite@@UEAAJPEAUIUnknown@@PEBU_GUID@@K@Z
    virtual long SetCommandTarget(IUnknown *, _GUID const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageList@CBrowserBandSite@@UEAAJPEBU_GUID@@PEAU_IMAGELIST@@11@Z
    virtual long SetImageList(_GUID const *, _IMAGELIST *, _IMAGELIST *, _IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModeDBC@CBrowserBandSite@@UEAAJK@Z
    virtual long SetModeDBC(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CBrowserBandSite@@UEAAJPEBU_GUID@@II@Z
    virtual long SetState(_GUID const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBrowserBandSite@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowserBandSite@@UEAA@XZ
    virtual ~CBrowserBandSite();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandInfoFromBandItem@CBrowserBandSite@@MEAAXPEAUtagREBARBANDINFOW@@PEAVCBandItemData@@H@Z
    virtual void _BandInfoFromBandItem(tagREBARBANDINFOW *, CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcHeights@CBrowserBandSite@@MEAAXXZ
    virtual void _CalcHeights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CBrowserBandSite@@MEAAXXZ
    virtual void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContextMenuHittest@CBrowserBandSite@@MEAAH_JPEAUtagPOINT@@@Z
    virtual int _ContextMenuHittest(int64_t, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOptionsTB@CBrowserBandSite@@IEAAXXZ
    void _CreateOptionsTB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTB@CBrowserBandSite@@IEAAXXZ
    void _CreateTB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTBRebar@CBrowserBandSite@@IEAAXXZ
    void _CreateTBRebar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateToolbarButtonBitmaps@CBrowserBandSite@@MEAAPEAUHBITMAP__@@HH@Z
    virtual HBITMAP__* _CreateToolbarButtonBitmaps(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CycleFocusBS@CBrowserBandSite@@MEAAJPEAUtagMSG@@@Z
    virtual long _CycleFocusBS(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawEtchline@CBrowserBandSite@@IEAAXPEAUHDC__@@PEBUtagRECT@@HH@Z
    void _DrawEtchline(HDC__*, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleFont@CBrowserBandSite@@IEAAPEAUHFONT__@@H@Z
    HFONT__* _GetTitleFont(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowStyle@CBrowserBandSite@@MEAAKPEAK@Z
    virtual unsigned long _GetWindowStyle(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLayout@CBrowserBandSite@@IEAAXXZ
    void _InitLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CBrowserBandSite@@MEAAJPEAUHWND__@@@Z
    virtual long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertToolbarBand@CBrowserBandSite@@IEAAXXZ
    void _InsertToolbarBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadContextMenu@CBrowserBandSite@@MEAAPEAUHMENU__@@XZ
    virtual HMENU__* _LoadContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginDrag@CBrowserBandSite@@MEAA_JPEBUtagNMREBAR@@@Z
    virtual int64_t _OnBeginDrag(tagNMREBAR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDNotify@CBrowserBandSite@@IEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    int64_t _OnCDNotify(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCloseBand@CBrowserBandSite@@MEAAXK@Z
    virtual void _OnCloseBand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CBrowserBandSite@@IEAA_JPEAUtagNMTBHOTITEM@@@Z
    int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CBrowserBandSite@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotifyBBS@CBrowserBandSite@@IEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotifyBBS(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionToolbars@CBrowserBandSite@@MEAAXPEAUtagPOINT@@@Z
    virtual void _PositionToolbars(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareOptionsTB@CBrowserBandSite@@MEAAXHH@Z
    virtual void _PrepareOptionsTB(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshOptionsTBBitmaps@CBrowserBandSite@@MEAAXXZ
    virtual void _RefreshOptionsTBBitmaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAllButtons@CBrowserBandSite@@IEAAXXZ
    void _RemoveAllButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowBand@CBrowserBandSite@@MEAAXPEAVCBandItemData@@H@Z
    virtual void _ShowBand(CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeOptionsTB@CBrowserBandSite@@MEAAXXZ
    virtual void _SizeOptionsTB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrySetFocusTB@CBrowserBandSite@@IEAAJH@Z
    long _TrySetFocusTB(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllBands@CBrowserBandSite@@MEAAXHH@Z
    virtual void _UpdateAllBands(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLayout@CBrowserBandSite@@IEAAXXZ
    void _UpdateLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbarBand@CBrowserBandSite@@IEAAXXZ
    void _UpdateToolbarBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbarFont@CBrowserBandSite@@IEAAXXZ
    void _UpdateToolbarFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapDropTargetForBand@CBrowserBandSite@@MEAAPEAUIDropTarget@@PEAU2@@Z
    virtual IDropTarget * _WrapDropTargetForBand(IDropTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CBrowserBandSite@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
};
