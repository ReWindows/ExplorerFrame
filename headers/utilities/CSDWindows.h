#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 47 member(s).
class CSDWindows {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSDWindows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSDWindows@@QEAA@XZ
    CSDWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnectionPoints@CSDWindows@@UEAAJPEAPEAUIEnumConnectionPoints@@@Z
    virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionPoint@CSDWindows@@UEAAJAEBU_GUID@@PEAPEAUIConnectionPoint@@@Z
    virtual long FindConnectionPoint(_GUID const &, IConnectionPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowForChild@CSDWindows@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long FindWindowForChild(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowSW@CSDWindows@@UEAAJPEAUtagVARIANT@@0HPEAJHPEAPEAUIDispatch@@@Z
    virtual long FindWindowSW(tagVARIANT *, tagVARIANT *, int, long *, int, IDispatch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CSDWindows@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CSDWindows@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CSDWindows@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSDWindows@@QEAAHXZ
    int Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSDWindows@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CSDWindows@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long Item(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CSDWindows@@UEAAJJF@Z
    virtual long OnActivated(long, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CSDWindows@@UEAAJJPEAUIUnknown@@@Z
    virtual long OnCreated(long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigate@CSDWindows@@UEAAJJPEAUtagVARIANT@@@Z
    virtual long OnNavigate(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAttachDetach@CSDWindows@@UEAAJF@Z
    virtual long ProcessAttachDetach(short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSDWindows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSDWindows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CSDWindows@@UEAAJPEAUIDispatch@@JHPEAJ@Z
    virtual long Register(IDispatch *, long, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPending@CSDWindows@@UEAAJJPEAUtagVARIANT@@0HPEAJ@Z
    virtual long RegisterPending(long, tagVARIANT *, tagVARIANT *, int, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSDWindows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revoke@CSDWindows@@UEAAJJ@Z
    virtual long Revoke(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewEnum@CSDWindows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long _NewEnum(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@CSDWindows@@UEAAJPEAJ@Z
    virtual long get_Count(long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CSDEnumWindowsProc@CSDWindows@@AEAAHPEAUHWND__@@PEAUTMW@1@@Z
    int CSDEnumWindowsProc(HWND__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoInvokeCookie@CSDWindows@@AEAAXJJH@Z
    void _DoInvokeCookie(long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAndRemovePendingItem@CSDWindows@@AEAAPEAVWindowData@@PEAUHWND__@@J@Z
    WindowData * _FindAndRemovePendingItem(HWND__*, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CSDWindows@@AEAAPEAVWindowData@@J@Z
    WindowData * _FindItem(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowDataAndPidl@CSDWindows@@AEAAHPEAU_DPA@@HPEAPEAVWindowData@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    int _GetWindowDataAndPidl(_DPA *, int, WindowData * *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Item@CSDWindows@@AEAAJPEAUtagVARIANT@@PEAPEAUIDispatch@@W4ShellWindowsEnumOptions@@PEAH@Z
    long _Item(tagVARIANT *, IDispatch * *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewCookie@CSDWindows@@AEAAHXZ
    int _NewCookie();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CSDEnumWindowsProc@CSDWindows@@CAHPEAUHWND__@@_J@Z
    static int s_CSDEnumWindowsProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadNotifyWndProc@CSDWindows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ThreadNotifyWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSDWindows@@EEAA@XZ
    virtual ~CSDWindows();
};
