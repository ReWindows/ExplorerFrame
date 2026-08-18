#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
namespace FileExplorerTelemetryCommon {
class PiiSafeShellitemTelemetryProperties {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@QEAA@$$QEAV01@@Z
    PiiSafeShellitemTelemetryProperties(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDeferredFields@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@QEAAXXZ
    void ResolveDeferredFields();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@QEAA@XZ
    ~PiiSafeShellitemTelemetryProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFileIdentity@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@AEBA?AUFileIdentityProperties@2@PEAUIShellItem@@@Z
    WindissectOpaque BuildFileIdentity(IShellItem *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildGraphRecommendation@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@CA?AUGraphRecommendationProperties@2@PEAUIShellItem@@@Z
    static WindissectOpaque BuildGraphRecommendation(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildSyncProvider@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@CA?AUSyncProviderProperties@2@PEAUIShellItem@@@Z
    static WindissectOpaque BuildSyncProvider(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLocalDiskLocationNonBlocking@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@AEAA?AW4ShellitemParsingNameRootLoc@@PEBGAEAEPEAUDriveTypeCache@2@@Z
    int FindLocalDiskLocationNonBlocking(unsigned short const *, unsigned char &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateDeferredFields@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@AEAA_NPEAUIShellItem@@@Z
    bool PopulateDeferredFields(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateGraphFileFields@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@CAXPEAUIShellItem@@AEAUGraphRecommendationProperties@2@@Z
    static void PopulateGraphFileFields(IShellItem *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePathShape@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@AEAAXPEAUIShellItem@@PEAUDriveTypeCache@2@@Z
    void PopulatePathShape(IShellItem *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefineRootLocBlocking@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@AEAAXXZ
    void RefineRootLocBlocking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRegistryRootLocationNonBlocking@PiiSafeShellitemTelemetryProperties@FileExplorerTelemetryCommon@@CA?AW4ShellitemParsingNameRootLoc@@PEAUIShellItem@@@Z
    static int TryGetRegistryRootLocationNonBlocking(IShellItem *);
};
} // namespace FileExplorerTelemetryCommon
