#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CShellBrowserWindowClassFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellBrowserWindowClassFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellBrowserWindowClassFactory@@QEAA@XZ
    CShellBrowserWindowClassFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CShellBrowserWindowClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CShellBrowserWindowClassFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellBrowserWindowClassFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellBrowserWindowClassFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchExplorerWindowThreadProc@CShellBrowserWindowClassFactory@@CAKPEAX@Z
    static unsigned long s_LaunchExplorerWindowThreadProc(void *);
};
