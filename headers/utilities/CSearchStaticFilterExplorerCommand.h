#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CSearchStaticFilterExplorerCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CSearchStaticFilterExplorerCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSearchStaticFilterExplorerCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSearchStaticFilterExplorerCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
};
