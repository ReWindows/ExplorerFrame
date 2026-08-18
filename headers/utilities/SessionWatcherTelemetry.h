#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 28 member(s).
class SessionWatcherTelemetry {
public:
    class _tip_FileExplorerSerpFileActionPosition;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FESearch_Complete@SessionWatcherTelemetry@@SAX_N0IIIIIW4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@3@_KNN@Z
    static void FESearch_Complete(bool, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, uint64_t, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileAction_@SessionWatcherTelemetry@@QEBAXPEAUFileActionMetadata@@_NPEAUIUnknown@@_KW4IndexTypeFlags@FileExplorerSessionWatcher@@U_GUID@@55W4LocationType@5@W4ShellitemParsingNameRootLoc@@@Z
    void FileAction_(FileActionMetadata *, bool, IUnknown *, uint64_t, int, _GUID, _GUID, _GUID, int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchLatencySummary_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N333330W4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@4@W4ShellitemParsingNameRootLoc@@@Z
    void FileExplorer_SearchLatencySummary_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, bool, uint64_t, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchSessionSummaryWithExpandedScope_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N33333330W4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@4@W4ShellitemParsingNameRootLoc@@II300003PEBG@Z
    void FileExplorer_SearchSessionSummaryWithExpandedScope_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, bool, bool, bool, uint64_t, int, int, int, unsigned int, unsigned int, bool, uint64_t, uint64_t, uint64_t, uint64_t, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchSessionSummaryWithGrepStats_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N33333330W4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@4@W4ShellitemParsingNameRootLoc@@II00003PEBG@Z
    void FileExplorer_SearchSessionSummaryWithGrepStats_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, bool, bool, bool, uint64_t, int, int, int, unsigned int, unsigned int, uint64_t, uint64_t, uint64_t, uint64_t, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchSessionSummaryWithStats_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N33333330W4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@4@W4ShellitemParsingNameRootLoc@@00003PEBG@Z
    void FileExplorer_SearchSessionSummaryWithStats_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, bool, bool, bool, uint64_t, int, int, int, uint64_t, uint64_t, uint64_t, uint64_t, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchSessionSummary_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N33333330W4LocationType@FileExplorerSessionWatcher@@W4IndexTypeFlags@4@W4ShellitemParsingNameRootLoc@@@Z
    void FileExplorer_SearchSessionSummary_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, bool, bool, bool, uint64_t, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExplorer_SearchTimeToResultsSummary_@SessionWatcherTelemetry@@QEAAX_KW4TestCompletionKind@@0PEBD0_N3333W4IndexTypeFlags@FileExplorerSessionWatcher@@W4ShellitemParsingNameRootLoc@@PEBG0W4CrawlerKind@4@000003@Z
    void FileExplorer_SearchTimeToResultsSummary_(uint64_t, int, uint64_t, char const *, uint64_t, bool, bool, bool, bool, bool, int, int, unsigned short const *, uint64_t, int, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataTypeTelemetryName@SessionWatcherTelemetry@@SAPEBGW4MetadataType@@@Z
    static unsigned short const * GetMetadataTypeTelemetryName(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathPropertiesFromPidl@SessionWatcherTelemetry@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@PEA_K@Z
    static long GetPathPropertiesFromPidl(_ITEMIDLIST_ABSOLUTE const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@SessionWatcherTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPropertyNameToHitFlag@SessionWatcherTelemetry@@SA?AW4QueryPropertyHitFlags@FileExplorerSessionWatcher@@PEBG@Z
    static int MapPropertyNameToHitFlag(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScopeSearched_@SessionWatcherTelemetry@@QEBAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void ScopeSearched_(_ITEMIDLIST_ABSOLUTE const *) const;
};
