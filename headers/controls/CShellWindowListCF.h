#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CShellWindowListCF {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellWindowListCF@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellWindowListCF@@QEAA@XZ
    CShellWindowListCF();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CShellWindowListCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CShellWindowListCF@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellWindowListCF@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellWindowListCF@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellWindowListCF@@AEAA@XZ
    ~CShellWindowListCF();
};
