#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 19 member(s).
class CSearchCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchCommandBase@@QEAA@XZ
    CSearchCommandBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CSearchCommandBase@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CSearchCommandBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSearchCommandBase@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSearchCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchCommandBase@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CSearchCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchCommandBase@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchCommandBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchCommandBase@@MEAA@XZ
    virtual ~CSearchCommandBase();
};
