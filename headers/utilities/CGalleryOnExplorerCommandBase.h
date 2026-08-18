#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CGalleryOnExplorerCommandBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CGalleryOnExplorerCommandBase@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGalleryOnExplorerCommandBase@@IEAA@PEAUIExplorerCommand@@II@Z
    CGalleryOnExplorerCommandBase(IExplorerCommand *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSubCommandHandler@CGalleryOnExplorerCommandBase@@IEAAJPEAUIUICommandHandler@@PEAH@Z
    long _AddSubCommandHandler(IUICommandHandler *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubCommandHandler@CGalleryOnExplorerCommandBase@@IEAAJHAEBU_GUID@@PEAPEAX@Z
    long _GetSubCommandHandler(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubCommandHandlerCount@CGalleryOnExplorerCommandBase@@IEAAHXZ
    int _GetSubCommandHandlerCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCommandSuitableForGallery@CGalleryOnExplorerCommandBase@@MEAA_NPEAUIExplorerCommand@@PEAUIShellItemArray@@@Z
    virtual bool _IsCommandSuitableForGallery(IExplorerCommand *, IShellItemArray *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGalleryOnExplorerCommandBase@@MEAA@XZ
    virtual ~CGalleryOnExplorerCommandBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildGallery@CGalleryOnExplorerCommandBase@@AEAAJPEAUIUICollection@@@Z
    long _BuildGallery(IUICollection *);
};
