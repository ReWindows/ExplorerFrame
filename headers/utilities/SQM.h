#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
class SQM {
public:
    class EXPLORERNAVIGATESQMINFO;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForBrowserHost@SQM@@YAIPEAUIUnknown@@@Z
    unsigned int GetSQMIDForBrowserHost(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForFolderTypeKind@SQM@@YAIAEBU_GUID@@@Z
    unsigned int GetSQMIDForFolderTypeKind(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForTopView@SQM@@YAIAEBUTOPVIEWKEY@@@Z
    unsigned int GetSQMIDForTopView(TOPVIEWKEY const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindSQMIDFromArray@SQM@@YAIPEBGHIPEBUSQMSTRIDPAIR@1@@Z
    unsigned int _FindSQMIDFromArray(unsigned short const *, int, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireSqmEvent@SQM@@YAKPEAX@Z
    unsigned long _FireSqmEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentTopView@SQM@@YAJPEAUIShellItem@@PEAUTOPVIEWKEY@@@Z
    long _GetCurrentTopView(IShellItem *, TOPVIEWKEY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMIDForDetailsFavorites@SQM@@YAXPEAUIShellItem@@PEAI@Z
    void _GetSQMIDForDetailsFavorites(IShellItem *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMIDForDetailsLibraries@SQM@@YAXPEAUIShellItem@@PEAI@Z
    void _GetSQMIDForDetailsLibraries(IShellItem *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMIDForDetailsNavPane@SQM@@YAXPEAUIShellItem@@PEAI1@Z
    void _GetSQMIDForDetailsNavPane(IShellItem *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMIDForFolderTypeContainerFromItem@SQM@@YAIPEAUIShellItem@@@Z
    unsigned int _GetSQMIDForFolderTypeContainerFromItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTopNodeCLSID@SQM@@YAJPEAUIShellItem@@PEAU_GUID@@@Z
    long _GetTopNodeCLSID(IShellItem *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFilteredSet@SQM@@YAHPEAUIShellItem@@@Z
    int _IsFilteredSet(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsKnownFolder@SQM@@YAHPEAUIShellItem@@AEBU_GUID@@W4COMPARE_ITEMS_RESULT@@@Z
    int _IsKnownFolder(IShellItem *, _GUID const &, int);
};
