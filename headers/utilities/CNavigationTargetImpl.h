#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class CNavigationTargetImpl {
public:
    class CBrowserEventSink;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavItemTitle@CNavigationTargetImpl@@UEAAJJPEAGK@Z
    virtual long GetNavItemTitle(long, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetItem@CNavigationTargetImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetTargetItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFilters@CNavigationTargetImpl@@UEAAJPEAPEAUIViewFilters@@@Z
    virtual long GetViewFilters(IViewFilters * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewItems@CNavigationTargetImpl@@UEAAJPEAPEAUIItemStore@@@Z
    virtual long GetViewItems(IItemStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBack@CNavigationTargetImpl@@UEAAJXZ
    virtual long GoBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForward@CNavigationTargetImpl@@UEAAJXZ
    virtual long GoForward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPidl@CNavigationTargetImpl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToUrl@CNavigationTargetImpl@@UEAAJPEBGJ@Z
    virtual long NavigateToUrl(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateTravelLog@CNavigationTargetImpl@@UEAAJJ@Z
    virtual long NavigateTravelLog(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTravelLog@CNavigationTargetImpl@@UEAAJPEAUIShellTravelLogUI@@@Z
    virtual long PopulateTravelLog(IShellTravelLogUI *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CNavigationTargetImpl@@UEAAJJ@Z
    virtual long Refresh(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFrame@CNavigationTargetImpl@@UEAAJXZ
    virtual long RestoreFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CNavigationTargetImpl@@UEAAJXZ
    virtual long Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNavigationTargetImpl@@IEAA@XZ
    CNavigationTargetImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChainNavigationTarget@CNavigationTargetImpl@@IEAAJPEAUIServiceProvider@@PEAUIShellNavigationBand@@H@Z
    long ChainNavigationTarget(IServiceProvider *, IShellNavigationBand *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNavigationTargetImpl@@MEAA@XZ
    virtual ~CNavigationTargetImpl();
};
