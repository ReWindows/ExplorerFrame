#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 23 member(s).
class FileExplorerTelemetry {
public:
    class AddressComboBoxNavigate;
    class AddressEditBoxNavigate;
    class AddressGreenBar;
    class BreadcrumbBarNavigate;
    class ContextMenuActionDetails;
    class NavigateToPidl;
    class NavigateWithinView;
    class RenavigateTask;
    class RibbonCommandInvoke;
    class ShellBrowserCreate;
    class TravelBandBackNavigate;
    class TravelBandForwardNavigate;
    class TravelBandMenuNavigate;
    class UIItemsView_BackgroundEnumeration;
    class UpBandNavigate;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithIDList_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void ActionSourceWithIDList_(int, IUnknown *, _ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemAndDetails_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@AEAVActionDetails@FileExplorerTelemetryCommon@@H@Z
    void ActionSourceWithShellItemAndDetails_(int, IUnknown *, IShellItem *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemArrayAndDetails_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItemArray@@AEAVActionDetails@FileExplorerTelemetryCommon@@H@Z
    void ActionSourceWithShellItemArrayAndDetails_(int, IUnknown *, IShellItemArray *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItem_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@@Z
    void ActionSourceWithShellItem_(int, IUnknown *, IShellItem *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommandHandlerInvoke_@FileExplorerTelemetry@@QEBAXW4EXPLORER_COMMAND_SQM_ID@@W4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@KHPEAUIShellItem@@PEAUIUnknown@@K@Z
    void CommandHandlerInvoke_(int, int, unsigned long, int, IShellItem *, IUnknown *, unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@FileExplorerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateEndWithNavState_@FileExplorerTelemetry@@QEBAXAEBU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@W4NavigationEvent@FileExplorerTelemetryBase@@JPEBDK@Z
    void NavigateEndWithNavState_(_GUID const &, _ITEMIDLIST_ABSOLUTE const *, int, long, char const *, unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateEnd_@FileExplorerTelemetry@@QEBAXAEBU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@W4NavigationEvent@FileExplorerTelemetryBase@@JPEBD@Z
    void NavigateEnd_(_GUID const &, _ITEMIDLIST_ABSOLUTE const *, int, long, char const *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileExplorerTelemetry@@MEAAXXZ
    virtual void Initialize();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeGroupingFromShellItem@FileExplorerTelemetry@@CAJPEAUIShellItem@@PEAW4HomeGrouping@FileExplorerTelemetryCommon@@@Z
    static long GetHomeGroupingFromShellItem(IShellItem *, int *);
};
