#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CTabSearchTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChainSearchTarget@CTabSearchTarget@@QEAAJPEAUIServiceProvider@@@Z
    long ChainSearchTarget(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CTabSearchTarget@@UEAAJPEAUIShellSearchScope@@@Z
    virtual long Enter(IShellSearchScope *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CTabSearchTarget@@UEAAJXZ
    virtual long Exit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetACEnumString@CTabSearchTarget@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long GetACEnumString(IEnumString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CTabSearchTarget@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CTabSearchTarget@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CTabSearchTarget@@UEAAJPEAGI@Z
    virtual long GetSearchText(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitMenuPopup@CTabSearchTarget@@UEAAJPEAUHMENU__@@@Z
    virtual long InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuCommand@CTabSearchTarget@@UEAAJK@Z
    virtual long OnMenuCommand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CTabSearchTarget@@UEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    virtual long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CTabSearchTarget@@UEAAJPEBGK@Z
    virtual long Search(unsigned short const *, unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTabSearchTarget@@MEAA@XZ
    virtual ~CTabSearchTarget();
};
