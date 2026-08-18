#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CShellViewFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellViewFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCreateConnection@CShellViewFactory@@UEAAJPEAUHWND__@@PEAUIShellItem@@PEAUIUnknown@@PEAUIConnectionCreatedCallback@@@Z
    virtual long BeginCreateConnection(HWND__*, IShellItem *, IUnknown *, IConnectionCreatedCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingConnection@CShellViewFactory@@UEAAJXZ
    virtual long CancelPendingConnection();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellViewFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellViewFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CShellViewFactory@@SAJAEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateConnectionFromPreviousView@CShellViewFactory@@AEAAJPEAUIShellItem@@PEAUIUnknown@@PEAPEAU3@@Z
    long _CreateConnectionFromPreviousView(IShellItem *, IUnknown *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewConnection@CShellViewFactory@@AEAAJPEAUHWND__@@PEAUIShellItem@@PEAUIUnknown@@PEAPEAU4@@Z
    long _CreateNewConnection(HWND__*, IShellItem *, IUnknown *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandledDelegateNavigation@CShellViewFactory@@AEAAHPEAUIShellView@@PEAUIShellItem@@@Z
    int _HandledDelegateNavigation(IShellView *, IShellItem *);
};
