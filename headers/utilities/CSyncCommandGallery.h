#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class CSyncCommandGallery {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSyncCommandGallery@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CSyncCommandGallery@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CSyncCommandGallery@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSyncCommandGallery@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CSyncCommandGallery@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSyncCommandGallery@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSyncCommandGallery@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CSyncCommandGallery@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSyncCommandGallery@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSyncCommandGallery@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSyncCommandGallery@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncCommandGallery@@EEAA@XZ
    virtual ~CSyncCommandGallery();
};
