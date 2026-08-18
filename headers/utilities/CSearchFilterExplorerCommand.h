#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CSearchFilterExplorerCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchFilterExplorerCommand@@QEAA@AEBU_tagpropertykey@@$$QEAVCPropVariant@@PEAUIFilterCondition@@@Z
    CSearchFilterExplorerCommand(_tagpropertykey const &, CPropVariant &&, IFilterCondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchFilterExplorerCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSearchFilterExplorerCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchFilterExplorerCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchFilterExplorerCommand@@UEAA@XZ
    virtual ~CSearchFilterExplorerCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CSearchFilterExplorerCommand@@AEAAJXZ
    long _Initialize();
};
