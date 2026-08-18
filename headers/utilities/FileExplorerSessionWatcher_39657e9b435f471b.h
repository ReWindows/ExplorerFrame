#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 35 member(s).
namespace FileExplorerSessionWatcher::details {
class FileExplorerSessionWatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@FileExplorerSessionWatcher@details@1@QEAAJXZ
    long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileExplorerSessionWatcher@details@0@QEAA@U_GUID@@@Z
    FileExplorerSessionWatcher(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@FileExplorerSessionWatcher@details@1@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEvent@FileExplorerSessionWatcher@details@1@UEAAJW4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    virtual long PostEvent(int, SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordEvent@FileExplorerSessionWatcher@details@1@UEAAJW4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    virtual long RecordEvent(int, SESSION_EVENT_METADATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSessionEventMetadata@FileExplorerSessionWatcher@details@1@QEAAXAEAUSESSION_EVENT_METADATA@@@Z
    void SetSessionEventMetadata(SESSION_EVENT_METADATA &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@FileExplorerSessionWatcher@details@1@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileExplorerSessionWatcher@details@0@UEAA@XZ
    virtual ~FileExplorerSessionWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonOngoingAiDadTests@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void AbandonOngoingAiDadTests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSearchRelevanceScores@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void CalculateSearchRelevanceScores();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureSortColumnState@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void CaptureSortColumnState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseInternal@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void CloseInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInitialSearchResultsShownTest@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void CompleteInitialSearchResultsShownTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteSearchSuccessTest@FileExplorerSessionWatcher@details@1@AEAAXW4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    void CompleteSearchSuccessTest(int, SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTimeToResultsTest@FileExplorerSessionWatcher@details@1@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_FileExplorerSearchTimeToResultsTest@@U1@@details@tip2@@@tip2@@@Z
    void CompleteTimeToResultsTest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendSearchSuccessTestTimeout@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void ExtendSearchSuccessTestTimeout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationType@FileExplorerSessionWatcher@details@1@AEAA?AW4LocationType@1@PEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEBVPathProperties@@@Z
    int GetLocationType(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, PathProperties const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryStringFromSessionEventType@FileExplorerSessionWatcher@details@1@AEAAPEBGW4SESSION_EVENT_TYPE@1@@Z
    unsigned short const * GetTelemetryStringFromSessionEventType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNavigation@FileExplorerSessionWatcher@details@1@AEAAXPEAUSESSION_EVENT_METADATA@@@Z
    void HandleNavigation(SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearch@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void HandleSearch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPicturesKFSubFolder@FileExplorerSessionWatcher@details@1@AEAA_NPEBG@Z
    bool IsPicturesKFSubFolder(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchSuccessFileCommand@FileExplorerSessionWatcher@details@1@AEAA_NPEAUSESSION_EVENT_METADATA@@@Z
    bool IsSearchSuccessFileCommand(SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@FileExplorerSessionWatcher@details@1@AEAAXW4SESSION_EVENT_TYPE@1@PEAUSESSION_EVENT_METADATA@@@Z
    void ProcessEvent(int, SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSearchStateFields@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void ResetSearchStateFields();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchTimerCallback@FileExplorerSessionWatcher@details@1@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void SearchTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDirectSearch@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void StartDirectSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewSearchPerfTests@FileExplorerSessionWatcher@details@1@AEAAXPEAUSESSION_EVENT_METADATA@@@Z
    void StartNewSearchPerfTests(SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewSearchSuccessTest@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void StartNewSearchSuccessTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMarkActionedItemFromExpandedScope@FileExplorerSessionWatcher@details@1@AEAAXPEAUSESSION_EVENT_METADATA@@@Z
    void TryMarkActionedItemFromExpandedScope(SESSION_EVENT_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFeedbackHubDiagnosticsToRegistry@FileExplorerSessionWatcher@details@1@AEAAXXZ
    void WriteFeedbackHubDiagnosticsToRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFeedbackHubExternalCensusDiagnosticsToRegistry@FileExplorerSessionWatcher@details@1@AEAAXAEBUExternalResultsStatusCensusMetadata@@@Z
    void WriteFeedbackHubExternalCensusDiagnosticsToRegistry(ExternalResultsStatusCensusMetadata const &);
};
} // namespace FileExplorerSessionWatcher::details
