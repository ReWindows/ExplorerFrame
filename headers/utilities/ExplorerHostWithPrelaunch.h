#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 17 member(s).
class ExplorerHostWithPrelaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisuseTask@ExplorerHostWithPrelaunch@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@_N@Z
    WindissectOpaque DisuseTask(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExplorerHostWithPrelaunch@@QEAA@_N@Z
    ExplorerHostWithPrelaunch(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegistryOptionsChanged@ExplorerHostWithPrelaunch@@QEAAXW4PrelaunchFolderOptions@@AEAV?$tip_test@V?$merged_data@U_tip_PrelaunchFolderOptionsTest@@U1@@details@tip2@@@tip2@@@Z
    void OnRegistryOptionsChanged(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@ExplorerHostWithPrelaunch@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@UtagPOINT@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@@Z
    virtual long ShowWindow(_ITEMIDLIST_ABSOLUTE const *, int, tagPOINT, int, HWND__*, IUnknown *, IBrowserThreadHandshake *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowAtRect@ExplorerHostWithPrelaunch@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@PEBUtagRECT@@H@Z
    virtual long ShowWindowAtRect(_ITEMIDLIST_ABSOLUTE const *, int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowWithTabs@ExplorerHostWithPrelaunch@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellItemArray@@PEBUtagRECT@@HH@Z
    virtual long ShowWindowWithTabs(_ITEMIDLIST_ABSOLUTE const *, IShellItemArray *, tagRECT const *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplorerHostWithPrelaunch@@UEAA@XZ
    virtual ~ExplorerHostWithPrelaunch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFolderOptionRegistryWatcher@ExplorerHostWithPrelaunch@@AEAAXXZ
    void InitializeFolderOptionRegistryWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrelaunchAllowedChanged@ExplorerHostWithPrelaunch@@AEAAX_NAEAV?$tip_test@V?$merged_data@U_tip_PrelaunchFolderOptionsTest@@U1@@details@tip2@@@tip2@@@Z
    void OnPrelaunchAllowedChanged(bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowImpl@ExplorerHostWithPrelaunch@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@W4LAUNCHEXPLORERFLAGS@@UtagPOINT@@HPEBUtagRECT@@PEAUIShellItemArray@@HPEAUHWND__@@PEAUIUnknown@@PEAUIBrowserThreadHandshake@@@Z
    void ShowWindowImpl(_ITEMIDLIST_ABSOLUTE const *, int, tagPOINT, int, tagRECT const *, IShellItemArray *, int, HWND__*, IUnknown *, IBrowserThreadHandshake *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDestroyPrelaunchedWindow@ExplorerHostWithPrelaunch@@AEAA_NAEAV?$tip_test@V?$merged_data@U_tip_PrelaunchDisuseTest@@U1@@details@tip2@@@tip2@@_N@Z
    bool TryDestroyPrelaunchedWindow(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDestroyWindowOnFolderOptionToggle@ExplorerHostWithPrelaunch@@AEAAXW4PrelaunchState@@@Z
    void TryDestroyWindowOnFolderOptionToggle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryHandleLaunchWithPrecreatedWindow@ExplorerHostWithPrelaunch@@AEAA?AUAttemptLaunchWithPrelaunchResult@@PEAUIETHREADPARAM@@@Z
    AttemptLaunchWithPrelaunchResult TryHandleLaunchWithPrecreatedWindow(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitSignalMonitor@ExplorerHostWithPrelaunch@@AEAA_NXZ
    bool TryInitSignalMonitor();
};
