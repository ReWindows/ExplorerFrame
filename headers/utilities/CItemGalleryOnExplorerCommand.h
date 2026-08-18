#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CItemGalleryOnExplorerCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CItemGalleryOnExplorerCommand@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CItemGalleryOnExplorerCommand@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCommandToGallery@CItemGalleryOnExplorerCommand@@EEAAJIPEAUIExplorerCommand@@PEAUIShellItemArray@@PEAUIUICollection@@@Z
    virtual long _AddCommandToGallery(unsigned int, IExplorerCommand *, IShellItemArray *, IUICollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CItemGalleryOnExplorerCommand@@AEAAJPEAI@Z
    long _GetSelectedItem(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCommandSuitableForGallery@CItemGalleryOnExplorerCommand@@EEAA_NPEAUIExplorerCommand@@PEAUIShellItemArray@@@Z
    virtual bool _IsCommandSuitableForGallery(IExplorerCommand *, IShellItemArray *);
};
