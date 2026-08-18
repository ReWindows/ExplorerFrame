#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CDesktopBrowserTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDesktopBrowserTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CDesktopBrowserTarget@@SAJPEAUIUnknown@@PEAPEAUIShellNavigationTarget@@@Z
    static long CreateInstance(IUnknown *, IShellNavigationTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPidl@CDesktopBrowserTarget@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToUrl@CDesktopBrowserTarget@@UEAAJPEBGJ@Z
    virtual long NavigateToUrl(unsigned short const *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDesktopBrowserTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDesktopBrowserTarget@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopBrowserTarget@@MEAA@XZ
    virtual ~CDesktopBrowserTarget();
};
