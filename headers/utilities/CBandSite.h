#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 121 member(s).
class CBandSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBand@CBandSite@@UEAAJPEAUIUnknown@@@Z
    virtual long AddBand(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBandSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBandSite@@QEAA@PEAUIUnknown@@@Z
    CBandSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CBandSite@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CBandSite@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CBandSite@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CBandSite@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CBandSite@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumBands@CBandSite@@UEAAJIPEAK@Z
    virtual long EnumBands(unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CBandSite@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandObject@CBandSite@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetBandObject(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandSiteInfo@CBandSite@@UEAAJPEAUtagBANDSITEINFO@@@Z
    virtual long GetBandSiteInfo(tagBANDSITEINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CBandSite@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CBandSite@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetSize(unsigned long, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CBandSite@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CBandSite@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBandSite@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CBandSite@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CBandSite@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CBandSite@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromStreamBS@CBandSite@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long LoadFromStreamBS(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CBandSite@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CBandSite@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBand@CBandSite@@UEAAJKPEAPEAUIDeskBand@@PEAKPEAGH@Z
    virtual long QueryBand(unsigned long, IDeskBand * *, unsigned long *, unsigned short *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBandSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CBandSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CBandSite@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBandSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBand@CBandSite@@UEAAJK@Z
    virtual long RemoveBand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CBandSite@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStreamBS@CBandSite@@UEAAJPEAUIUnknown@@PEAUIStream@@@Z
    virtual long SaveToStreamBS(IUnknown *, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandSiteInfo@CBandSite@@UEAAJPEBUtagBANDSITEINFO@@@Z
    virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandState@CBandSite@@UEAAJKKK@Z
    virtual long SetBandState(unsigned long, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeskBarSite@CBandSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetDeskBarSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModeDBC@CBandSite@@UEAAJK@Z
    virtual long SetModeDBC(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBandSite@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateDBC@CBandSite@@UEAAJK@Z
    virtual long UIActivateDBC(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CBandSite@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNextTabstopBand@CBandSite@@IEAAJPEAUIUnknown@@HPEAUtagMSG@@@Z
    long _ActivateNextTabstopBand(IUnknown *, int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddBandByID@CBandSite@@IEAAJPEAUIUnknown@@K@Z
    long _AddBandByID(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddBandItem@CBandSite@@MEAAHPEAVCBandItemData@@@Z
    virtual int _AddBandItem(CBandItemData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandIDFromPunk@CBandSite@@IEAAKPEAUIUnknown@@@Z
    unsigned long _BandIDFromPunk(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandIDToIndex@CBandSite@@IEAAHK@Z
    int _BandIDToIndex(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandInfoFromBandItem@CBandSite@@MEAAXPEAUtagREBARBANDINFOW@@PEAVCBandItemData@@H@Z
    virtual void _BandInfoFromBandItem(tagREBARBANDINFOW *, CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandItemEnumCallback@CBandSite@@IEAAXHP6AHPEAVCBandItemData@@PEAX@Z1@Z
    void _BandItemEnumCallback(int, int ( *)(CBandItemData *, void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheActiveBand@CBandSite@@IEAAXPEAUIUnknown@@@Z
    void _CacheActiveBand(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckNotifyOnAddRemove@CBandSite@@IEAAXKH@Z
    void _CheckNotifyOnAddRemove(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CBandSite@@MEAAXXZ
    virtual void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContextMenuHittest@CBandSite@@MEAAH_JPEAUtagPOINT@@@Z
    virtual int _ContextMenuHittest(int64_t, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CycleFocusBS@CBandSite@@MEAAJPEAUtagMSG@@@Z
    virtual long _CycleFocusBS(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DataObjForBand@CBandSite@@IEAAPEAUIDataObject@@K@Z
    IDataObject * _DataObjForBand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteAllBandItems@CBandSite@@IEAAXXZ
    void _DeleteAllBandItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteBandItem@CBandSite@@MEAAXH@Z
    virtual void _DeleteBandItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoDragDrop@CBandSite@@IEAAXXZ
    void _DoDragDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdminSettings@CBandSite@@IEAAKK@Z
    unsigned long _GetAdminSettings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandInfo@CBandSite@@IEAAXPEAVCBandItemData@@PEAUDESKBANDINFO@@@Z
    void _GetBandInfo(CBandItemData *, DESKBANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandItem@CBandSite@@IEAAPEAVCBandItemData@@H@Z
    CBandItemData * _GetBandItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandItemCount@CBandSite@@IEAAHXZ
    int _GetBandItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandItemDataStructByID@CBandSite@@IEAAPEAVCBandItemData@@K@Z
    CBandItemData * _GetBandItemDataStructByID(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextTabstopBand@CBandSite@@IEAAPEAUIUnknown@@PEAU2@H@Z
    IUnknown * _GetNextTabstopBand(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPeopleBandIndex@CBandSite@@IEAAHXZ
    int _GetPeopleBandIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowStyle@CBandSite@@MEAAKPEAK@Z
    virtual unsigned long _GetWindowStyle(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IndexToBandID@CBandSite@@IEAAKH@Z
    unsigned long _IndexToBandID(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CBandSite@@MEAAJPEAUHWND__@@@Z
    virtual long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEnableTitle@CBandSite@@IEAAHPEBVCBandItemData@@@Z
    int _IsEnableTitle(CBandItemData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHeightReasonable@CBandSite@@IEAAHI@Z
    int _IsHeightReasonable(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRestricted@CBandSite@@IEAAJKKK@Z
    long _IsRestricted(unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadBandInfo@CBandSite@@IEAAJPEAUIStream@@HKH@Z
    long _LoadBandInfo(IStream *, int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadContextMenu@CBandSite@@MEAAPEAUHMENU__@@XZ
    virtual HMENU__* _LoadContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBSCommand@CBandSite@@IEAAJHKPEAVCBandItemData@@@Z
    long _OnBSCommand(int, unsigned long, CBandItemData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginDrag@CBandSite@@MEAA_JPEBUtagNMREBAR@@@Z
    virtual int64_t _OnBeginDrag(tagNMREBAR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCloseBand@CBandSite@@MEAAXK@Z
    virtual void _OnCloseBand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CBandSite@@MEAAJ_K_J@Z
    virtual long _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CBandSite@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRBAutoSize@CBandSite@@IEAAXPEAUtagNMRBAUTOSIZE@@@Z
    void _OnRBAutoSize(tagNMRBAUTOSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreDragDrop@CBandSite@@IEAAXXZ
    void _PreDragDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseBandItemData@CBandSite@@IEAAXPEAVCBandItemData@@H@Z
    void _ReleaseBandItemData(CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveBandInfo@CBandSite@@IEAAJPEAUIStream@@H@Z
    long _SaveBandInfo(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendToToolband@CBandSite@@IEAAHPEAUHWND__@@I_K_JPEA_J@Z
    int _SendToToolband(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBandStateHelper@CBandSite@@IEAAJKKK@Z
    long _SetBandStateHelper(unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowBand@CBandSite@@MEAAXPEAVCBandItemData@@H@Z
    virtual void _ShowBand(CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToDesktopIfNecessary@CBandSite@@IEAAXXZ
    void _SwitchToDesktopIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllBands@CBandSite@@MEAAXHH@Z
    virtual void _UpdateAllBands(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBand@CBandSite@@IEAAXK@Z
    void _UpdateBand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBandInfo@CBandSite@@IEAAHPEAVCBandItemData@@H@Z
    int _UpdateBandInfo(CBandItemData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapDropTargetForBand@CBandSite@@MEAAPEAUIDropTarget@@PEAU2@@Z
    virtual IDropTarget * _WrapDropTargetForBand(IDropTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CBandSite@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetTabstop@CBandSite@@MEAAXPEAUtagREBARBANDINFOW@@@Z
    virtual void v_SetTabstop(tagREBARBANDINFOW *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandSite@@MEAA@XZ
    virtual ~CBandSite();
};
