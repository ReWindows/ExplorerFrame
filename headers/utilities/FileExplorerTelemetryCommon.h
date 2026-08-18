#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class FileExplorerTelemetryCommon {
public:
    class ActionDetails;
    class ActionSourceTelemetry;
    class DriveTypeCache;
    class FileExplorerLogging;
    class FileIdentityProperties;
    class GraphRecommendationProperties;
    class PathShapeProperties;
    class PiiSafeShellitemTelemetryProperties;
    class SyncProviderProperties;
    class details;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserSessionId@FileExplorerTelemetryCommon@@YAJPEAUIUnknown@@PEAU_GUID@@@Z
    long GetBrowserSessionId(IUnknown *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAndCursorDetails@FileExplorerTelemetryCommon@@YA?AUtagRECT@@XZ
    tagRECT GetWindowAndCursorDetails();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemInSearch@FileExplorerTelemetryCommon@@YA_NPEAUIShellItem@@@Z
    bool IsItemInSearch(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchNamespaceClsid@FileExplorerTelemetryCommon@@YA_NAEBU_GUID@@@Z
    bool IsSearchNamespaceClsid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSyncRootFromCached@FileExplorerTelemetryCommon@@YA_NPEAUIShellItem@@@Z
    bool IsSyncRootFromCached(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapDriveTypeToRootLoc@FileExplorerTelemetryCommon@@YA?AW4ShellitemParsingNameRootLoc@@PEBGI@Z
    int MapDriveTypeToRootLoc(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTopLevelNamespaceClsid@FileExplorerTelemetryCommon@@YA?AU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    _GUID TryGetTopLevelNamespaceClsid(_ITEMIDLIST_ABSOLUTE const *);
};
