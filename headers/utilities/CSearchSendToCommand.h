#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class CSearchSendToCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSendToCommand@@QEAA@PEAUIShellItem@@@Z
    CSearchSendToCommand(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSearchSendToCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchSendToCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchSendToCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromKnownFolder@CSearchSendToCommand@@QEAAJAEBU_GUID@@W4EMPTY_SEARCH_INVOCATION@@@Z
    long InitFromKnownFolder(_GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSendToCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSendToCommand@@MEAA@XZ
    virtual ~CSearchSendToCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewScope@CSearchSendToCommand@@AEAAJPEAPEAUIScope@@@Z
    long _NewScope(IScope * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSearchIDListScope@CSearchSendToCommand@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4AUTOLISTFLAGS@@PEBGPEAUIScope@@PEAPEAU2@@Z
    long _ReplaceSearchIDListScope(_ITEMIDLIST_ABSOLUTE const *, int, unsigned short const *, IScope *, _ITEMIDLIST_ABSOLUTE * *);
};
