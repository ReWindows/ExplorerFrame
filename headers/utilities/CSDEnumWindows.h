#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CSDEnumWindows {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSDEnumWindows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSDEnumWindows@@QEAA@PEAVCSDWindows@@W4ShellWindowsEnumOptions@@@Z
    CSDEnumWindows(CSDWindows *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSDEnumWindows@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSDEnumWindows@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSDEnumWindows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSDEnumWindows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSDEnumWindows@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSDEnumWindows@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSDEnumWindows@@AEAA@XZ
    ~CSDEnumWindows();
};
