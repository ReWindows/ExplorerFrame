#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CCommandGalleryOnExplorerCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CCommandGalleryOnExplorerCommand@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePerCommandCache@CCommandGalleryOnExplorerCommand@@UEAAJIH@Z
    virtual long UpdatePerCommandCache(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CCommandGalleryOnExplorerCommand@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCommandToGallery@CCommandGalleryOnExplorerCommand@@EEAAJIPEAUIExplorerCommand@@PEAUIShellItemArray@@PEAUIUICollection@@@Z
    virtual long _AddCommandToGallery(unsigned int, IExplorerCommand *, IShellItemArray *, IUICollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubCommandHandlerForID@CCommandGalleryOnExplorerCommand@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _GetSubCommandHandlerForID(unsigned int, _GUID const &, void * *);
};
