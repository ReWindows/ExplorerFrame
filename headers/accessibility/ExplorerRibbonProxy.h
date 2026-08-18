#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 19 member(s).
class ExplorerRibbonProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@ExplorerRibbonProxy@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRibbonUI@ExplorerRibbonProxy@@UEAAJPEAUHWND__@@PEAUIShellItem@@@Z
    virtual long CreateRibbonUI(HWND__*, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyRibbonUI@ExplorerRibbonProxy@@UEAAJH@Z
    virtual long DestroyRibbonUI(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExplorerRibbonProxy@@QEAA@XZ
    ExplorerRibbonProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonAppMode@ExplorerRibbonProxy@@UEAAJPEAI@Z
    virtual long GetRibbonAppMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonBackgroundColor@ExplorerRibbonProxy@@UEAAJPEAK@Z
    virtual long GetRibbonBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonMinimized@ExplorerRibbonProxy@@UEAAJXZ
    virtual long GetRibbonMinimized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonVisible@ExplorerRibbonProxy@@UEAAJXZ
    virtual long GetRibbonVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCommands@ExplorerRibbonProxy@@UEAAJW4COMMAND_SET@@@Z
    virtual long InvalidateCommands(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserNavigated@ExplorerRibbonProxy@@UEAAJXZ
    virtual long OnBrowserNavigated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandStateInvalidated@ExplorerRibbonProxy@@UEAAJXZ
    virtual long OnCommandStateInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellViewChanged@ExplorerRibbonProxy@@UEAAJXZ
    virtual long OnShellViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabletModeChanged@ExplorerRibbonProxy@@UEAAJXZ
    virtual long OnTabletModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@ExplorerRibbonProxy@@UEAAJXZ
    virtual long OnThemeChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRibbonVisible@ExplorerRibbonProxy@@UEAAJH@Z
    virtual long SetRibbonVisible(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQuickAccessToolbar@ExplorerRibbonProxy@@UEAAJXZ
    virtual long UpdateQuickAccessToolbar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplorerRibbonProxy@@UEAA@XZ
    virtual ~ExplorerRibbonProxy();
};
