#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
class CCommonExplorerHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommonExplorerHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonExplorerHost@@QEAA@XZ
    CCommonExplorerHost();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommonExplorerHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommonExplorerHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CCommonExplorerHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@UtagPOINT@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@@Z
    virtual long ShowWindow(_ITEMIDLIST_ABSOLUTE const *, int, tagPOINT, int, HWND__*, IUnknown *, IBrowserThreadHandshake *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowAtRect@CCommonExplorerHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@PEBUtagRECT@@H@Z
    virtual long ShowWindowAtRect(_ITEMIDLIST_ABSOLUTE const *, int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowWithTabs@CCommonExplorerHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellItemArray@@PEBUtagRECT@@HH@Z
    virtual long ShowWindowWithTabs(_ITEMIDLIST_ABSOLUTE const *, IShellItemArray *, tagRECT const *, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeThreadParam@CCommonExplorerHost@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@PEAPEAUIETHREADPARAM@@@Z
    long InitializeThreadParam(_ITEMIDLIST_ABSOLUTE const *, int, int, HWND__*, IUnknown *, IBrowserThreadHandshake *, IETHREADPARAM * *);
};
