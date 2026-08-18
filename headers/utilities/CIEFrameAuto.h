#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 111 member(s).
class CIEFrameAuto {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIEFrameAuto@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToWindow@CIEFrameAuto@@UEAAJPEAH0@Z
    virtual long ClientToWindow(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnectionPoints@CIEFrameAuto@@UEAAJPEAPEAUIEnumConnectionPoints@@@Z
    virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CIEFrameAuto@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecWB@CIEFrameAuto@@UEAAJW4OLECMDID@@W4OLECMDEXECOPT@@PEAUtagVARIANT@@2@Z
    virtual long ExecWB(int, int, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CIEFrameAuto@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CIEFrameAuto@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long GetProperty(unsigned short *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CIEFrameAuto@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CIEFrameAuto@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBack@CIEFrameAuto@@UEAAJXZ
    virtual long GoBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForward@CIEFrameAuto@@UEAAJXZ
    virtual long GoForward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoHome@CIEFrameAuto@@UEAAJXZ
    virtual long GoHome();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoSearch@CIEFrameAuto@@UEAAJXZ
    virtual long GoSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CIEFrameAuto@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CIEFrameAuto@@UEAAJPEAGPEAUtagVARIANT@@111@Z
    virtual long Navigate(unsigned short *, tagVARIANT *, tagVARIANT *, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate2@CIEFrameAuto@@UEAAJPEAUtagVARIANT@@0000@Z
    virtual long Navigate2(tagVARIANT *, tagVARIANT *, tagVARIANT *, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CIEFrameAuto@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long OnInvoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutProperty@CIEFrameAuto@@UEAAJPEAGUtagVARIANT@@@Z
    virtual long PutProperty(unsigned short *, tagVARIANT);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIEFrameAuto@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CIEFrameAuto@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CIEFrameAuto@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatusWB@CIEFrameAuto@@UEAAJW4OLECMDID@@PEAW4OLECMDF@@@Z
    virtual long QueryStatusWB(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Quit@CIEFrameAuto@@UEAAJXZ
    virtual long Quit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CIEFrameAuto@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh2@CIEFrameAuto@@UEAAJPEAUtagVARIANT@@@Z
    virtual long Refresh2(tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIEFrameAuto@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CIEFrameAuto@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBrowserBar@CIEFrameAuto@@UEAAJPEAUtagVARIANT@@00@Z
    virtual long ShowBrowserBar(tagVARIANT *, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CIEFrameAuto@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddressBar@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_AddressBar(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CIEFrameAuto@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Busy@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_Busy(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@CIEFrameAuto@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Container(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Document@CIEFrameAuto@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Document(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_FullName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_FullScreen(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HWND@CIEFrameAuto@@UEAAJPEA_J@Z
    virtual long get_HWND(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@CIEFrameAuto@@UEAAJPEAJ@Z
    virtual long get_Height(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Left@CIEFrameAuto@@UEAAJPEAJ@Z
    virtual long get_Left(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocationName@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_LocationName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocationURL@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_LocationURL(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuBar@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_MenuBar(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_Name(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offline@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_Offline(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CIEFrameAuto@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_Path(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReadyState@CIEFrameAuto@@UEAAJPEAW4tagREADYSTATE@@@Z
    virtual long get_ReadyState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegisterAsBrowser@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_RegisterAsBrowser(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegisterAsDropTarget@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_RegisterAsDropTarget(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resizable@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_Resizable(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Silent@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_Silent(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBar@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_StatusBar(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusText@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_StatusText(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TheaterMode@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_TheaterMode(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToolBar@CIEFrameAuto@@UEAAJPEAH@Z
    virtual long get_ToolBar(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Top@CIEFrameAuto@@UEAAJPEAJ@Z
    virtual long get_Top(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopLevelContainer@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_TopLevelContainer(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CIEFrameAuto@@UEAAJPEAPEAG@Z
    virtual long get_Type(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@CIEFrameAuto@@UEAAJPEAF@Z
    virtual long get_Visible(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@CIEFrameAuto@@UEAAJPEAJ@Z
    virtual long get_Width(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AddressBar@CIEFrameAuto@@UEAAJF@Z
    virtual long put_AddressBar(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FullScreen@CIEFrameAuto@@UEAAJF@Z
    virtual long put_FullScreen(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CIEFrameAuto@@UEAAJJ@Z
    virtual long put_Height(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Left@CIEFrameAuto@@UEAAJJ@Z
    virtual long put_Left(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MenuBar@CIEFrameAuto@@UEAAJF@Z
    virtual long put_MenuBar(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offline@CIEFrameAuto@@UEAAJF@Z
    virtual long put_Offline(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RegisterAsBrowser@CIEFrameAuto@@UEAAJF@Z
    virtual long put_RegisterAsBrowser(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RegisterAsDropTarget@CIEFrameAuto@@UEAAJF@Z
    virtual long put_RegisterAsDropTarget(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Resizable@CIEFrameAuto@@UEAAJF@Z
    virtual long put_Resizable(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Silent@CIEFrameAuto@@UEAAJF@Z
    virtual long put_Silent(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StatusBar@CIEFrameAuto@@UEAAJF@Z
    virtual long put_StatusBar(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StatusText@CIEFrameAuto@@UEAAJPEAG@Z
    virtual long put_StatusText(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TheaterMode@CIEFrameAuto@@UEAAJF@Z
    virtual long put_TheaterMode(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ToolBar@CIEFrameAuto@@UEAAJH@Z
    virtual long put_ToolBar(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Top@CIEFrameAuto@@UEAAJJ@Z
    virtual long put_Top(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Visible@CIEFrameAuto@@UEAAJF@Z
    virtual long put_Visible(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CIEFrameAuto@@UEAAJJ@Z
    virtual long put_Width(long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIEFrameAuto@@IEAA@PEAUIUnknown@@@Z
    CIEFrameAuto(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseObject@CIEFrameAuto@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@I@Z
    long _BrowseObject(_ITEMIDLIST_ABSOLUTE const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPropertyList@CIEFrameAuto@@IEAAXXZ
    void _ClearPropertyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindCConnectionPointNoRef@CIEFrameAuto@@MEAAPEAVCConnectionPoint@@HAEBU_GUID@@@Z
    virtual CConnectionPoint * _FindCConnectionPointNoRef(int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHWND@CIEFrameAuto@@IEAAPEAUHWND__@@XZ
    HWND__* _GetHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWindowMoveable@CIEFrameAuto@@IEAAHXZ
    int _IsWindowMoveable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateHelper@CIEFrameAuto@@IEAAJPEAUIUri@@PEAUtagVARIANT@@11@Z
    long _NavigateHelper(IUri *, tagVARIANT *, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PidlFromIUriEtc@CIEFrameAuto@@IEAAJIPEAUIUri@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _PidlFromIUriEtc(unsigned int, IUri *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_Location@CIEFrameAuto@@IEAAJPEAPEAGI@Z
    long _get_Location(unsigned short * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CIEFrameAuto@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIEFrameAuto@@MEAA@XZ
    virtual ~CIEFrameAuto();
};
