#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class CExplorerLauncher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerLauncher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerLauncher@@QEAA@XZ
    CExplorerLauncher();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerLauncher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerLauncher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CExplorerLauncher@@UEAAJAEBU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@UtagPOINT@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@@Z
    virtual long ShowWindow(_GUID const &, _ITEMIDLIST_ABSOLUTE const *, int, tagPOINT, int, HWND__*, IUnknown *, IBrowserThreadHandshake *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowUsingDefaultPolicyAtRect@CExplorerLauncher@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@PEBUtagRECT@@H@Z
    virtual long ShowWindowUsingDefaultPolicyAtRect(_ITEMIDLIST_ABSOLUTE const *, int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowWithTabs@CExplorerLauncher@@UEAAJPEAUIShellItemArray@@PEBUtagRECT@@HH@Z
    virtual long ShowWindowWithTabs(IShellItemArray *, tagRECT const *, int, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostFromTarget@CExplorerLauncher@@AEAA?AU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    _GUID GetHostFromTarget(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowInHost@CExplorerLauncher@@AEAAJAEBU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@UtagPOINT@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@@Z
    long ShowWindowInHost(_GUID const &, _ITEMIDLIST_ABSOLUTE const *, int, tagPOINT, int, HWND__*, IUnknown *, IBrowserThreadHandshake *);
};
