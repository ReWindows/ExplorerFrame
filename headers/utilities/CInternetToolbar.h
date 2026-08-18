#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 122 member(s).
class CInternetToolbar {
public:
    class CITBandSite;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBitmap@CInternetToolbar@@UEAAJPEBU_GUID@@IIPEAUtagTBADDBITMAP@@PEA_JK@Z
    virtual long AddBitmap(_GUID const *, unsigned int, unsigned int, tagTBADDBITMAP *, int64_t *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddButtons@CInternetToolbar@@UEAAJPEBU_GUID@@IPEBU_TBBUTTON@@@Z
    virtual long AddButtons(_GUID const *, unsigned int, _TBBUTTON const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInternetToolbar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStdBrowserButtons@CInternetToolbar@@UEAAJXZ
    virtual long AddStdBrowserButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CInternetToolbar@@UEAAJPEBU_GUID@@PEAUHINSTANCE__@@_KPEA_J@Z
    virtual long AddString(_GUID const *, HINSTANCE__*, uint64_t, int64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInternetToolbar@@QEAA@XZ
    CInternetToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CInternetToolbar@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CInternetToolbar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBand@CInternetToolbar@@UEAAJAEBU_GUID@@HH0PEAPEAX@Z
    virtual long CreateBand(_GUID const &, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBand@CInternetToolbar@@UEAAJAEBU_GUID@@@Z
    virtual long DestroyBand(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CInternetToolbar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapSize@CInternetToolbar@@UEAAJPEAI@Z
    virtual long GetBitmapSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButton@CInternetToolbar@@UEAAJPEBU_GUID@@IPEAU_TBBUTTON@@@Z
    virtual long GetButton(_GUID const *, unsigned int, _TBBUTTON *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CInternetToolbar@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CInternetToolbar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CInternetToolbar@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CInternetToolbar@@UEAAJPEBU_GUID@@IPEAI@Z
    virtual long GetState(_GUID const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBandCount@CInternetToolbar@@UEAAJPEAI@Z
    virtual long GetVisibleBandCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CInternetToolbar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideBackForwardButton@CInternetToolbar@@UEAAJPEBU_GUID@@I@Z
    virtual long HideBackForwardButton(_GUID const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CInternetToolbar@@UEAAJXZ
    virtual long InitNew();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CInternetToolbar@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMenuBandVisible@CInternetToolbar@@UEAAJXZ
    virtual long IsMenuBandVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CInternetToolbar@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyButton@CInternetToolbar@@UEAAJPEBU_GUID@@IPEAU_TBBUTTON@@@Z
    virtual long ModifyButton(_GUID const *, unsigned int, _TBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CInternetToolbar@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInternetToolbar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CInternetToolbar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CInternetToolbar@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInternetToolbar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBorderDW@CInternetToolbar@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CInternetToolbar@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendToolbarMsg@CInternetToolbar@@UEAAJPEBU_GUID@@I_K_JPEA_J@Z
    virtual long SendToolbarMsg(_GUID const *, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandAvailability@CInternetToolbar@@UEAAJAEBU_GUID@@H@Z
    virtual long SetBandAvailability(_GUID const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommandTarget@CInternetToolbar@@UEAAJPEAUIUnknown@@PEBU_GUID@@K@Z
    virtual long SetCommandTarget(IUnknown *, _GUID const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFolderTypeTheme@CInternetToolbar@@UEAAJPEBG@Z
    virtual long SetFolderTypeTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageList@CInternetToolbar@@UEAAJPEBU_GUID@@PEAU_IMAGELIST@@11@Z
    virtual long SetImageList(_GUID const *, _IMAGELIST *, _IMAGELIST *, _IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CInternetToolbar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CInternetToolbar@@UEAAJPEBU_GUID@@II@Z
    virtual long SetState(_GUID const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CInternetToolbar@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CInternetToolbar@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CInternetToolbar@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizableWndProc@CInternetToolbar@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t SizableWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddNewBand@CInternetToolbar@@IEAAPEAVCBandItemData@@PEAUIDeskBand@@K@Z
    CBandItemData * _AddNewBand(IDeskBand *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildSaveStruct@CInternetToolbar@@IEAAXPEAUCOOLBARSAVE@@@Z
    void _BuildSaveStruct(COOLBARSAVE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBands@CInternetToolbar@@IEAAJXZ
    long _CreateBands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyBand@CInternetToolbar@@IEAAJH@Z
    long _DestroyBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAllBandsShown@CInternetToolbar@@IEAAXXZ
    void _EnsureAllBandsShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EstimateMenuWidth@CInternetToolbar@@IEAAKPEAUHMENU__@@@Z
    unsigned long _EstimateMenuWidth(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindBandByClsid@CInternetToolbar@@IEAAHAEBU_GUID@@@Z
    int _FindBandByClsid(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetITBarStream@CInternetToolbar@@IEAAPEAUIStream@@K@Z
    IStream * _GetITBarStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPersistedBand@CInternetToolbar@@IEAAJAEBU_GUID@@0PEAPEAX@Z
    long _GetPersistedBand(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitThemeData@CInternetToolbar@@IEAAXXZ
    void _InitThemeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBandVisible@CInternetToolbar@@IEAAHI@Z
    int _IsBandVisible(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDefaultSettings@CInternetToolbar@@IEAAJXZ
    long _LoadDefaultSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadExternalBandInfoWorker@CInternetToolbar@@IEAAXXZ
    void _LoadExternalBandInfoWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadStream@CInternetToolbar@@IEAAJPEAUIStream@@@Z
    long _LoadStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadUpgradeSettings@CInternetToolbar@@IEAAJK@Z
    long _LoadUpgradeSettings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeWithStandardIE7Bands@CInternetToolbar@@IEAAXPEAUCOOLBARSAVE@@0@Z
    void _MergeWithStandardIE7Bands(COOLBARSAVE *, COOLBARSAVE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginDrag@CInternetToolbar@@IEAA_JPEBUtagNMREBAR@@@Z
    int64_t _OnBeginDrag(tagNMREBAR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CInternetToolbar@@IEAAX_K_J@Z
    void _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CInternetToolbar@@IEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegLoadExternalBandInfo@CInternetToolbar@@IEAAJAEBU_GUID@@PEAUEXTERNALBANDINFO@1@@Z
    long _RegLoadExternalBandInfo(_GUID const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadLayout@CInternetToolbar@@IEAAJXZ
    long _ReloadLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreSaveStruct@CInternetToolbar@@IEAAXPEBUCOOLBARSAVE@@@Z
    void _RestoreSaveStruct(COOLBARSAVE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBackground@CInternetToolbar@@IEAAXXZ
    void _SetBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBandAvailability@CInternetToolbar@@IEAAJHH@Z
    long _SetBandAvailability(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowBandCommon@CInternetToolbar@@IEAAXPEAUtagBANDSAVE@@PEAVCBandItemData@@H@Z
    void _ShowBandCommon(tagBANDSAVE *, CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowBands@CInternetToolbar@@IEAAHI@Z
    int _ShowBands(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContextMenu@CInternetToolbar@@IEAAXPEAUHWND__@@_JPEBUtagRECT@@@Z
    void _ShowContextMenu(HWND__*, int64_t, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowExternalBand@CInternetToolbar@@IEAAJPEAUtagBANDSAVE@@HK@Z
    long _ShowExternalBand(tagBANDSAVE *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowLinks@CInternetToolbar@@IEAAJPEAUtagBANDSAVE@@@Z
    long _ShowLinks(tagBANDSAVE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowMenu@CInternetToolbar@@IEAAJPEAUtagBANDSAVE@@@Z
    long _ShowMenu(tagBANDSAVE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowVisible@CInternetToolbar@@IEAAXKH@Z
    void _ShowVisible(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackSliding@CInternetToolbar@@IEAAXPEAUtagRECT@@@Z
    void _TrackSliding(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLoadIE3Settings@CInternetToolbar@@IEAAXXZ
    void _TryLoadIE3Settings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAutoExpandMenus@CInternetToolbar@@IEAAXXZ
    void _UpdateAutoExpandMenus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLocking@CInternetToolbar@@IEAAXXZ
    void _UpdateLocking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMenuStatusForExternalBands@CInternetToolbar@@IEAAXXZ
    void _UpdateMenuStatusForExternalBands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbarDisplay@CInternetToolbar@@IEAAJIH@Z
    long _UpdateToolbarDisplay(unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInternetToolbar@@MEAA@XZ
    virtual ~CInternetToolbar();
};
