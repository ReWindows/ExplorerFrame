#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CViewOptionsGalleryCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CViewOptionsGalleryCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CViewOptionsGalleryCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CViewOptionsGalleryCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CViewOptionsGalleryCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewOptionsGalleryCommand@@UEAA@XZ
    virtual ~CViewOptionsGalleryCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitialized@CViewOptionsGalleryCommand@@AEAAJXZ
    long _EnsureInitialized();
};
