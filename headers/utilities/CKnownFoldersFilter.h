#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
class CKnownFoldersFilter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownFolderTarget@CKnownFoldersFilter@@QEAA?AU_GUID@@AEBU2@@Z
    _GUID GetKnownFolderTarget(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKnownFolderSetByPolicy@CKnownFoldersFilter@@QEAA_NPEAUIKnownFolder@@@Z
    bool IsKnownFolderSetByPolicy(IKnownFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectKnownFolder@CKnownFoldersFilter@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long RedirectKnownFolder(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowInstanceFolder@CKnownFoldersFilter@@QEAAJAEBU_GUID@@PEA_N@Z
    long ShouldShowInstanceFolder(_GUID const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowItem@CKnownFoldersFilter@@QEAAJPEAUIShellItem@@PEA_N@Z
    long ShouldShowItem(IShellItem *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowKnownFolder@CKnownFoldersFilter@@QEAAJPEAUIKnownFolder@@PEA_N@Z
    long ShouldShowKnownFolder(IKnownFolder *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKnownFoldersFilter@@QEAA@XZ
    ~CKnownFoldersFilter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureManager@CKnownFoldersFilter@@AEAAJXZ
    long EnsureManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUsersFiles@CKnownFoldersFilter@@AEAAJXZ
    long EnsureUsersFiles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootedItemCLSID@CKnownFoldersFilter@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0KPEAU_GUID@@@Z
    long GetRootedItemCLSID(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThisPCRegItemCLSID@CKnownFoldersFilter@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAU_GUID@@@Z
    long GetThisPCRegItemCLSID(_ITEMIDLIST_ABSOLUTE const *, _GUID *);
};
