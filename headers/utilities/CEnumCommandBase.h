#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 16 member(s).
class CEnumCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumCommandBase@@QEAA@XZ
    CEnumCommandBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumCommandBase@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumCommandBase@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumCommandBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumCommandBase@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumCommandBase@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSubCommand@CEnumCommandBase@@IEAAJPEAUIExplorerCommand@@@Z
    long _AddSubCommand(IExplorerCommand *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumCommandBase@@MEAA@XZ
    virtual ~CEnumCommandBase();
};
