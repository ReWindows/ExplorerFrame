#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 38 member(s).
class CActionIdCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActionIdCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActionIdCommand@@QEAA@XZ
    CActionIdCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPreview@CActionIdCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long CancelPreview(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CActionIdCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CActionIdCommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetDescription(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CActionIdCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconAsBitmap@CActionIdCommand@@UEAAJPEAUIShellItemArray@@UtagSIZE@@PEAPEAUHBITMAP__@@@Z
    virtual long GetIconAsBitmap(IShellItemArray *, tagSIZE, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyAndName@CActionIdCommand@@UEAAJPEAPEAUHKEY__@@PEAPEAG@Z
    virtual long GetKeyAndName(HKEY__* *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CActionIdCommand@@UEAAJPEAW4CMDPOS@@PEAU_GUID@@@Z
    virtual long GetPosition(int *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CActionIdCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CActionIdCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipTitle@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTipTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CActionIdCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFromContextMenu@CActionIdCommand@@UEAAJPEBU_CMINVOKECOMMANDINFOEX@@PEAUIShellItemArray@@@Z
    virtual long InvokeFromContextMenu(_CMINVOKECOMMANDINFOEX const *, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Preview@CActionIdCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Preview(IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActionIdCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActionIdCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalExtensionClasses@CActionIdCommand@@UEAAJPEBU_GUID@@K@Z
    virtual long SetInternalExtensionClasses(_GUID const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyAndName@CActionIdCommand@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long SetKeyAndName(HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CActionIdCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CActionIdCommand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActionIdCommand@@UEAA@XZ
    virtual ~CActionIdCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CActionIdCommand@@AEAAJPEAUHKEY__@@PEBG@Z
    long _Initialize(HKEY__*, unsigned short const *);
};
