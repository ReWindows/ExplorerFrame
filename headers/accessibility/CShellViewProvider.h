#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CShellViewProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellViewProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellView@CShellViewProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetShellView(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewWindow@CShellViewProvider@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetViewWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellViewProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellViewProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CShellViewProvider@@SAJPEAUHWND__@@PEAUIShellView@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(HWND__*, IShellView *, _GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellViewProvider@@AEAA@XZ
    ~CShellViewProvider();
};
