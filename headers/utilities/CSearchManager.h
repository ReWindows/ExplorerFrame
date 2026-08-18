#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CSearchManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocus@CSearchManager@@QEAAJH@Z
    long OnFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CSearchManager@@QEAAJPEAUtagMSG@@PEBG@Z
    long OnKeyDown(tagMSG *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenu@CSearchManager@@QEAAJPEBG@Z
    long OnMenu(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CSearchManager@@QEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchState@CSearchManager@@QEAAJW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    long SetSearchState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchTarget@CSearchManager@@QEAAJPEAUIShellSearchTarget@@@Z
    long SetSearchTarget(IShellSearchTarget *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenu@CSearchManager@@AEAAJXZ
    long _SetMenu();
};
