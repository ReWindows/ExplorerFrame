# `global` :: `LineScroller`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `ExplorerFrame.dll`. Total members: **119**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ATL; 
class AgileRegistrationList; 
class CAggregatedUnknown; 
class CBrowserHost; 
class CCollectionCache; 
class CFirstPageResults; 
class CInternetToolbar; 
class CItemsView; 
class CItemsViewPrefetcher; 
class CMarshaledInterface; 
class CNavBar; 
class CNavigationTargetImpl; 
class CNscTree; 
class COwnerDrawPopupMenu; 
class CSelectionState; 
class CShellBrowser; 
class CTravelLogUI; 
class ControlPanelNavigationTelemetry; 
class DirectLaunch; 
class FileExplorerPerf; 
class FileExplorerSessionWatcher; 
class FileExplorerTabsTelemetry; 
class FileExplorerTelemetry; 
class FileExplorerTelemetryCommon; 
class SQM; 
class SessionWatcherTelemetry; 
class SetDarkModeForWindows; 
class UIItemsViewSelectionProxy; 
class UIViewHeader; 
namespace fc { class details; } 
class fc_tson; 
class tip2; 
class tson; 
class winrt; 
class ATL; class AUDIT_CALLBACK_INFO; class AccessibilityHelpers; class ActivityData; class AddressEditAccessible; class AgileGitPtr; class AgileRegistrationList; class AnimatingRect; class AttemptLaunchWithPrelaunchResult; class BANDCLASSINFO; class BINDCTX_PARAM; class BaselineLayout; class CABSH; class CAboutWindowsCommand; class CAccessibleExWrapperBase; class CAccessibleWrapperBase; class CActionIdCommand; class CActionIdExecute; class CAddressBand; class CAddressEditAccessible; class CAddressEditBox; class CAddressList; class CAggregatedUnknown; class CAnimationManager; class CAnyGroupsSelected; class CAnyItemEntriesInGroup; class CAppCursorManager; class CAppMenuHandler; class CAssociationList; class CAutoDestItemsList; class CAutoFont; class CAutoSRWExclusiveLock; class CAutoSRWSharedLock; class CAutoWaitCursor; class CBandDataObject; class CBandItemData; class CBandSite; class CBandSiteMenu; class CBaseBar; class CBaseRPCTimeout; class CBreadcrumbBar; class CBrowserBandSite; class CBrowserBar; class CBrowserHost; class CBrowserMenuCallback; class CBrowserThreadHandshake; class CBufferedPaintManager; class CBuildUnmatchedItemAnimatingRects; class CCancelWithBool; class CChildrenList; class CCoSimpleArray; class CCollectionCache; class CCollectionEventSinkWrapper; class CComCatCacheTask; class CComPropVariant; class CCommandGalleryOnExplorerCommand; class CCommonExplorerHost; class CConnectionPoint; class CConnectionPointEnum; class CContextMenuOnContextMenuArray; class CContextMenuOnContextMenuArrayNoDuplicateVerbs; class CCountExplicitGroupEntries; class CCountItemEntriesInGroup; class CDPA; class CDSA; class CDUIResourceManager; class CDefaultHashPolicy; class CDefaultKeyCompare; class CDefaultRehashPolicy; class CDefaultResizePolicy; class CDelegateAccessibleImpl; class CDelegateDropTarget; class CDeleteAddressBarHistoryCommand; class CDeskBar; class CDeskBarApp; class CDesktopBrowserTarget; class CDisabledCommandHandler; class CDockingBar; class CDockingBarPropertyBag; class CDropDown; class CDropDummy; class CDropTargetWrap; class CDummyUnknown; class CElementIdentifier; class CElementSpy; class CElementSpyBase; class CElementWithIUnknown; class CElementWithSite; class CEnumCommandBase; class CEnumerableObjectCollection; class CExecuteCommandBase; class CExecuteFolder; class CExecuteItem; class CExplorerCommandBase; class CExplorerFrame; class CExplorerHostCreator; class CExplorerLauncher; class CExplorerRibbon; class CFSNotifyHelper; class CFileSysBindData; class CFilterCondition; class CFilterGroupsByItem; class CFilterItemsByGroup; class CFirstPageResults; class CFirstPageTask; class CFloatingWindow; class CFocusManager; class CFolderNetworkDrive; class CFrameTask; class CFrameTaskManager; class CFrameWorkItem; class CFrequentPlacesListWithUIProperties; class CGalleryOnExplorerCommandBase; class CGalleryPropertySet; class CGenericTabsetHandler; class CGetLastSelectedIndex; class CGhostingManager; class CGlobalFolderSettings; class CGlobalObject; class CIEFrameAuto; class CIEFrameAutoProp; class CIItemCompare; class CIItemHashPolicy; class CISFMenuCallback; class CImmersiveColor; class CImpIConnectionPointContainer; class CImpIDispatch; class CImpIExpDispSupport; class CImpWndProc; class CInplaceRename; class CInputObjectContainer; class CInternetToolbar; class CItemActionsManager; class CItemAncestorIterator; class CItemDevirtualizer; class CItemDevirtualizerInitialState; class CItemEventSinkWrapper; class CItemFinder; class CItemGalleryOnExplorerCommand; class CItemsView; class CItemsViewEventQueue; class CItemsViewPrefetcher; class CItemsViewSpy; class CKnownFoldersFilter; class CLVMenuAcc; class CLVPopupAccBase; class CLegacyBarsGalleryItem; class CLineScrollerSpy; class CListViewPopup; class CLocateExplicitGroupStateForMemberItem; class CMRUList; class CM_COLUMNINFO; class CMarshaledInterface; class CMultipleValues; class CNavBar; class CNavBarDUI; class CNavigationSite; class CNavigationTargetImpl; class CNoOpCommandHandler; class CNotifySubclassWndProc; class CNscAccessible; class CNscChangeNotifyQueueItem; class CNscChangeNotifyTask; class CNscDelayRegisterNotifyQueueItem; class CNscDelayRegisterNotifyTask; class CNscDropTargetWrapper; class CNscEditLabelInfo; class CNscEnumQueueItem; class CNscEnumTask; class CNscIconQueueItem; class CNscIconTask; class CNscInfoTipQueueItem; class CNscInfoTipTask; class CNscLock; class CNscOverlayQueueItem; class CNscOverlayTask; class CNscPlusQueueItem; class CNscPlusTask; class CNscSortTask; class CNscTree; class CNscValidateQueueItem; class CNscValidateTask; class COMMAND_HANDLER_INFO; class COMMAND_RANGE_INFO; class COOLBARSAVE; class CObjectWithSite; class COpenWithTypeOverride; class COrderList; class COwnerDrawPopupMenu; class CPendingNavigation; class CPerfTrackProvider; class CPersistExplorerFrame; class CPrefetchTask; class CPrefetcherEventSink; class CPrintClientStruct; class CProfferService; class CPropVariant; class CPropertyStoreHelper; class CPropertyValue; class CPublicTravelLog; class CPublicTravelLogCreateHelper; class CQueueItem; class CRGTypeSizes; class CRealizedIntervalHelper; class CRecentItemPropertySet; class CRegion; class CRibbonCommandHandlerOnExplorerCommand; class CRibbonTelemetry; class CRunnableTask; class CRunnableTaskWithActivatableKeyboard; class CSCParsedTerm; class CSDEnumWindows; class CSDWindows; class CSRWLock; class CSafeElementListenerCB; class CSearchBox; class CSearchBoxDUIHost; class CSearchBoxProvider; class CSearchBoxProxy; class CSearchBoxTextProvider; class CSearchBoxTextProxy; class CSearchBoxTextRangeProvider; class CSearchBoxValueProvider; class CSearchBoxValueProxy; class CSearchClearMruCommand; class CSearchCloseTabCommand; class CSearchCommandBase; class CSearchControl; class CSearchDepthCommand; class CSearchEditBox; class CSearchEditBoxBase; class CSearchEditBoxHost; class CSearchEditTextHost; class CSearchFilterExplorerCommand; class CSearchMRUEnumCommand; class CSearchMRUGallery; class CSearchMSExecute; class CSearchManager; class CSearchMorePropertiesCommand; class CSearchMorePropertiesEnum; class CSearchMruCommand; class CSearchOptionCommand; class CSearchSaveSearchCommand; class CSearchSendToCommand; class CSearchSendToComputerCommand; class CSearchSendToEnumCommand; class CSearchSendToGalleryCommand; class CSearchSendToHistoryVaultCommand; class CSearchSendToInternetCommand; class CSearchStaticFilterEnum; class CSearchStaticFilterExplorerCommand; class CSearchTabHandler; class CSearchTryHarderCommand; class CSelectionManager; class CSelectionManagerSpy; class CSelectionState; class CSelectionStateArrayBuilder; class CSelectionStateComparator; class CSelectionStateList; class CSelectionStateSpy; class CSeparatorBand; class CShallowContainerIterator; class CShellBrowser; class CShellBrowserWindowClassFactory; class CShellViewFactory; class CShellViewProvider; class CShellViews; class CShellWindowListCF; class CSimpleArrayStandardCompareHelper; class CSimpleHashTable; class CSimplePointerArrayNewMem; class CSinkWrapperBase; class CSiteWithNamespacePropertyBag; class CStandardEnum; class CSuggestMRUWorker; class CSuggestPopup; class CSuggestPopupInfo; class CSyncCommandEnumerator; class CSyncCommandGallery; class CSyncMappingsCommandStateHandler; class CTBMenuAcc; class CTCoAllocPolicy; class CTContainer_PolicyUnOwned; class CTGlobalAllocPolicy; class CTLocalAllocPolicy; class CTabSearchTarget; class CTaskLock; class CTestabilityUICollection; class CTheater; class CTheaterBand; class CToolBand; class CToolTipManager; class CTrackEvents; class CTravelBand; class CTravelLogUI; class CTryHarderItem; class CTryHarderItemHistoryVault; class CTypeAhead; class CUIItemWalkCB; class CUIItemWalkCBWorker; class CUString; class CUniversalSearchBand; class CUpBand; class CValuePtr; class CViewOptionsGalleryCommand; class CViewOptionsGalleryEnum; class CViewSet; class CVirtualUIGroupItem; class CVirtualUIGroupItemList; class CVirtualUIGroupItemSpy; class CVirtualizedSelectionObjectArray; class CWRLObjectWithGITSite; class CWRLObjectWithSite; class CWaitCursorManager; class CWaitTask; class CZeroInitNew; class CachedExplorerExtensionState; class CheckAndReNavigateToParentTask; class CheckWhitespaceEvent; class CloseHandle; class CloudFileProvider; class CloudFilesTelemetry; class CoTaskMemFree; class CollectionEventParams; class ColumnWidthRequestEvent; class ContextMenuRenderingData; class ControlPanelNavigationTelemetry; class DEFFOLDERSETTINGS; class DESKBANDINFO; class DeleteObject; class DeskBarsPerMonitor; class Destroy; class DevicePrelaunchProfile; class DirectLaunch; class DirectLaunchActivationSite; class DisplayMonitor; class DummyEventTrack; class EASYCLASSFACTORY; class EdpHelpers; class EnhancedSearchResultSeenMetadata; class Entry; class ExplorerDirectLaunchHandler; class ExplorerFrameTelemetry; class ExplorerHostWithPrelaunch; class ExplorerHostWithPrelaunchFactory; class ExplorerRibbonProxy; class ExternalResultsStatusCensusMetadata; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FEBrowserTab; class FRAMETOOLBARITEM; class FadeElement; class FeatureEnabledLayoutLayout; class FileActionMetadata; class FileExplorerContextMenu; class FileExplorerCustomProvider; class FileExplorerCustomTitlebar; class FileExplorerErrorFallback; class FileExplorerLogging; class FileExplorerPerf; class FileExplorerPolicyTelemetryData; class FileExplorerPrelaunchTelemetry; class FileExplorerSessionWatcher; class FileExplorerTabData; class FileExplorerTabsRestoreTelemetry; class FileExplorerTabsTelemetry; class FileExplorerTelemetry; class FileExplorerTelemetryCommon; class FileExplorerTelemetryDesktop; class FirstVisibleElementOnlyLayout; class FloatingHeaderLayout; class FolderOptionsTelemetry; class ForceSyncShellExecuteService; class GMA_ACTIONINFO; class GlobalInterfaceTable; class GrepCrawlerMetadata; class GrepScanCompleteMetadata; class GridHitTestParameters; class GroupedViewLayoutWalker; class HACCEL__; class HBITMAP__; class HBRUSH__; class HDC__; class HFONT__; class HICON__; class HIMC__; class HINSTANCE__; class HKEY__; class HKL__; class HMENU__; class HMONITOR__; class HPALETTE__; class HRGN__; class HSTRING__; class HTIPTEST__; class HWND__; class HashBucket; class HorizontalBorderLayout; class IAccessible; class IAccessibleEx; class IAddressEditBox; class IAddressList; class IAdviseSink; class IAgileReference; class IAssociationElement; class IAutoComplete; class IAutomaticDestinationList; class IAutomaticDestinationListPropertyStore; class IBandSite; class IBindCtx; class IBreadcrumbBar; class IBrowserActivationEvent; class IBrowserHost; class IBrowserProgressAggregator; class IBrowserThreadHandshake; class ICIVERBTOIDMAP; class ICancelMethodCalls; class IChildId; class IClassFactory; class ICollectionCache; class ICollectionEventSink; class ICondition; class ICondition2; class IConditionFactory2; class IConnectionCreatedCallback; class IConnectionPoint; class IConnectionPointContainer; class IContextMenu; class IContextMenu2; class IContextMenu3; class IContextMenuCB; class IDataObject; class IDeskBand; class IDeskBar; class IDispatch; class IDockingWindow; class IDockingWindowSite; class IDragRegionOffsetChangeListener; class IDrawPropertyControl; class IDropTarget; class IDuiBehavior; class IETHREADPARAM; class IElementSpy; class IEnterpriseDropTarget; class IEnumConnectionPoints; class IEnumConnections; class IEnumExplorerCommand; class IEnumFORMATETC; class IEnumGUID; class IEnumGeneric; class IEnumObjects; class IEnumSTATDATA; class IEnumString; class IEnumTravelLogEntry; class IEnumUnknown; class IEnumVARIANT; class IErrorLog; class IEventQueue; class IExplorerCommand; class IExplorerCommandHost; class IExplorerFrame; class IExplorerFrameCallback; class IExplorerFrameSizeUtils; class IExplorerRibbon; class IFileExplorerTabEventsHandler; class IFileExplorerTabsExtensionHelpers; class IFileOperation; class IFilterCondition; class IFilterControl; class IFirstPageResults; class IFocusAdviseSink; class IFocusManager; class IFolderFilter; class IFolderView2; class IFrameLayoutDefinition; class IFrameTaskManager; class IFrameWorkItem; class IIconListControl; class IImageList2; class IImmersiveContextMenuOwnerDrawHelper; class IInputObject; class IInspectable; class IItem; class IItemCollection; class IItemStore; class IItemsViewSpyClient; class IKnownFolder; class ILibraryDescription; class ILinguisticAlternativeGenerator; class IListControlHost; class IListView; class IListViewPopup; class IListViewPopupCallback; class ILocationDescription; class IMenuBand; class IMoniker; class IMruDataList; class INDEX_AND_VERSION; class INPUTOBJ_CHILDDATA; class INVALIDATION_INFO; class INameSpaceTreeControlDropHandler; class INameSpaceTreeControlEvents; class INameSpaceTreeControlFolderCapabilities; class INscTreeTasksCallback; class IObjectArray; class IObjectCollection; class IObjectWithAssociationElement; class IObjectWithSelection; class IOleCommandTarget; class IOleInPlaceActiveObject; class IOleInPlaceFrame; class IOleInPlaceUIWindow; class IOleObject; class IOleWindow; class IOpenWithTypeOverride; class IPendingNavigation; class IPersistHistory; class IPropertyBag; class IPropertyDescription; class IPropertyDescriptionList; class IPropertyKeyStore; class IPropertyStore; class IPropertyValue; class IQueryAssociations; class IQueryParser2; class IQuerySource; class IQueryWithLinguisticAlternatives; class IQueueItem2; class IRawElementProviderFragment; class IRawElementProviderFragmentRoot; class IRawElementProviderSimple; class IRichChunk; class IScope; class IScopeItem; class ISearchContext; class ISecurityZoneChecker; class ISelectionManager; class ISelectionManagerSpy; class IServiceProvider; class IShellBandProxy; class IShellBrowser; class IShellBrowserService; class IShellFolder; class IShellFolder2; class IShellFolder2const; class IShellFolder3; class IShellItem; class IShellItem2; class IShellItemArray; class IShellItemFilter; class IShellNavigationBand; class IShellNavigationTarget; class IShellSearchBand; class IShellSearchControl; class IShellSearchScope; class IShellSearchTarget; class IShellTaskScheduler; class IShellTravelLogUI; class IShellUrl; class IShellView; class IStorage; class IStorageProviderAppInfo; class IStorageProviderInfo; class IStream; class ISuggestMRUCallback; class ISuggestPopupCallback; class ISuggestPopupInfo; class ISyncRootManager; class ISystemSignalProvider; class ITelemetryCorrelationVector; class ITextDocument; class ITextHost; class ITextRange; class ITextRangeProvider; class ITokenCollection; class ITopViewAwareItem; class ITrackEvents; class ITrackShellMenu; class ITravelEntry; class ITravelLog; class ITravelLogEntry; class ITravelLogEx; class ITravelLogStg; class ITryHarderItem; class ITypeInfo; class IUIAutomationProxyFactory; class IUICollection; class IUICommandHandler; class IUIFramework; class IUIImage; class IUIRibbon; class IUISimplePropertySet; class IURLSearchHook; class IUnknown; class IUpdatableItemSet; class IUri; class IUserActivityRequestManagerInterop; class IVGridProvider; class IVGridProxy; class IVInvokeProvider; class IVInvokeProxy; class IVerbStateTaskCallBack; class IViewFilters; class IViewFrame; class IViewFrameHost; class IViewObject; class IViewSettings; class IVirtualUIGroupItem; class IVirtualizedUI; class IWICBitmapSource; class IWICImagingFactory; class IWeakReference; class IWebBrowser2; class IWinEventHandler; class IXamlIslandViewAdapter; class ImmersiveContextMenuHelper; class Interval; class ItemEventParams; class ItemGridLayout; class ItemGridLayoutWalker; class ItemIndex; class ItemLayout; class ItemNavigateEvent; class ItemRowLayout; class Iterator; class LAUNCH_REQUEST_ARGS; class LAYOUTPARAM; class LIBRARYEVENTS; class LVPopupMenuAccBase; class LeaveCriticalSection; class LineHScrollBar; class LineScrollbarBase; class LineScroller; class LineVScrollBar; class LineViewer; class LinkedViewer; class LocalFree; class NAVIGATIONSTATE; class NMCBEDRAGBEGINA; class NMCBEDRAGBEGINW; class NMCBEENDEDITA; class NSCITEMINFO; class NSC_BKGDENUMDONEDATA; class NamespaceRestrictionHelper; class NavigationMetadata; class NscCloudStateIconExtractor; class NscCloudStateIconManager; class NscCloudStateIconQueueItem; class NscCloudStateIconTask; class ORDERITEM; class ORDERITEM2const; class PERSISTEDFRAME; class POINTV; class PaintSurrogate; class PathPiiProperties; class PathProperties; class PatternMap; class PiiSafeFolderList; class PiiSafeKnownFolder; class PiiSafeRegistryFolder; class PiiSafeShellitemParsingName; class PiiSafeShellitemParsingNameHelpers; class PiiSafeShellitemParsingNameProperties; class PrefetchRowPriorityCompare; class QueuedEvent; class RECTV; class RegCloseKey; class ReleaseSRWLockExclusive; class Resizer; class RowInfo; class RowPrefetchInfo; class SESSION_EVENT_METADATA; class SHDestroyIETHREADPARAM; class SINKENTRY; class SIZEV; class SORTCOLUMN; class SQM; class SToolbarItem; class ScaffoldingWindowDropTarget; class SearchMetadata; class SectionInfo; class SelectionState; class SessionWatcherTelemetry; class SetDarkModeForWindows; class ShStrW; class ShellItemCompare; class ShellItemData; class ShouldPrelaunchFileExplorerResult; class SmartCookie; class State; class SyncProviderTelemetryHelpers; class SystemSignalMonitor; class SystemSignalProvider; class THUMBBUTTON; class TLV; class TOPVIEWKEY; class TRACKEDOPERATION; class TabletModeHelpers; class TaggedElement; class TaskbarList; class TaskbarLogging; class TelemetryCorrelationVectorServiceProvider; class TipReportingInfo; class TraceLoggingCorrelationVector; class TraceLoggingCorrelationVectorV1_t; class TraceLoggingCorrelationVectorV2_t; class TrayHelpers; class UIBase; class UICheckbox; class UICollection; class UIColumnHeader; class UIColumnHeaderCheckbox; class UIColumnHeaderExpandCollapseProvider; class UIColumnHeaderExpandCollapseProxy; class UIColumnHeaderProvider; class UIColumnHeaderProxy; class UICount; class UID; class UIDetailsPropertyCollection; class UIExpandoButton; class UIGroupHeader; class UIGroupHeaderExpandCollapseProvider; class UIGroupHeaderExpandCollapseProxy; class UIGroupHeaderProvider; class UIGroupHeaderProxy; class UIGroupItem; class UIGroupItemExpandCollapseProvider; class UIGroupItemExpandCollapseProxy; class UIImage; class UIItem; class UIItemCollectionBase; class UIItemGridItemProvider; class UIItemGridItemProxy; class UIItemProvider; class UIItemProxy; class UIItemScrollItemProvider; class UIItemScrollItemProxy; class UIItemSelectionItemProvider; class UIItemSelectionItemProxy; class UIItemToggleProvider; class UIItemToggleProxy; class UIItemValueProvider; class UIItemValueProxy; class UIItemsView; class UIItemsViewItemContainerProvider; class UIItemsViewItemContainerProxy; class UIItemsViewMultipleViewProvider; class UIItemsViewMultipleViewProxy; class UIItemsViewProvider; class UIItemsViewProxy; class UIItemsViewScrollProvider; class UIItemsViewScrollProxy; class UIItemsViewSelectionProvider; class UIItemsViewSelectionProxy; class UIItemsViewTableProvider; class UIItemsViewTableProxy; class UIMarqueeSelector; class UIProgressProperty; class UIProperty; class UIPropertyGridItemProvider; class UIPropertyGridItemProxy; class UIPropertyProvider; class UIPropertyProxy; class UIPropertyTableItemProvider; class UIPropertyTableItemProxy; class UIPropertyValueProvider; class UIPropertyValueProxy; class UIRenameTextElement; class UIRootItem; class UISmartProperty; class UISmartPropertyCollection; class UISubsetFooter; class UITilesPropertyCollection; class UITryHarder; class UITryHarderButton; class UIViewHeader; class UiaPoint; class UiaRect; class VIRTUALPOINT; class VIRTUALRECT; class VerticalHitTest; class ViewAreaAwareLayout; class VirtualElementProvider; class VirtualElementProxy; class VirtualizedItemProxy; class VisualChangeEvent; class WORKITEMENTRY; class WindowData; class WindowsCopilotCommonTelemetry; class WrappingLayoutBase; class _AppBarData; class _CMINVOKECOMMANDINFO; class _CMINVOKECOMMANDINFOEX; class _CONTEXT; class _DPA; class _DPASTREAMINFO; class _DSA; class _EVENT_DESCRIPTOR; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _HIDDENITEMID; class _IDA; class _IDREGITEM; class _IMAGELIST; class _ITEMIDLIST_ABSOLUTE; class _ITEMIDLIST_RELATIVE; class _ITEMID_CHILD; class _LARGE_INTEGER; class _MARGINS; class _POINTL; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _RTL_VERSION_RESOURCE; class _SECURITY_ATTRIBUTES; class _SHSQM_STREAM_ENTRY; class _SYSTEMTIME; class _TBBUTTON; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _TREEITEM; class _TlgReflectorTag_Param0IsProviderType; class _UI_EVENTPARAMS; class _ULARGE_INTEGER; class _WIN32_FIND_DATAW; class _WINDOWDATA; class _WNF_STATE_NAME; class __FC_Config_Info; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _charformatw; class _charrange; class _paraformat; class _tagOLECMD; class _tagOLECMDTEXT; class _tagpropertykey; class _tip_AddToRestartListTabsTipTest; class _tip_AttemptLaunchFromPrelaunchTest; class _tip_ContextMenuCreationTest; class _tip_ContextMenuE2ELoadTest; class _tip_ContextMenuInitTest; class _tip_ContextMenuSelectionTest; class _tip_CreateTabsInExplorerFrameTipTest; class _tip_DestroyRibbonTest; class _tip_ExplorerFrameLeakDetectionTest; class _tip_FileExplorerAddTab; class _tip_FileExplorerFirstTabLaunch; class _tip_FileExplorerInitialSearchResultsShownTest; class _tip_FileExplorerNavigationTest; class _tip_FileExplorerRecallSnapshotTest; class _tip_FileExplorerRemoveNonActiveTab; class _tip_FileExplorerRemoveTab; class _tip_FileExplorerResetDefaultLocation; class _tip_FileExplorerSearchSuccessTest; class _tip_FileExplorerSearchTimeToResultsTest; class _tip_FileExplorerSelectTab; class _tip_FileExplorerUptimeTest; class _tip_FileExplorerWindowCreationTest; class _tip_MergeOnScaffoldingWindowTest; class _tip_NetworkExplorerInHKCUTest; class _tip_PrelaunchCreationTest; class _tip_PrelaunchDisuseTest; class _tip_PrelaunchFolderOptionsTest; class _tip_PrelaunchSleepAwareTimerTest; class _tip_ReorderOnScaffoldingWindowTest; class _tip_SearchManagerTextNotifyTest; class _tip_ShowWindowWithTabsTipTest; class _tip_SlowNavigationProgressTest; class _tip_TabTearOutTest; class _tip_TabsMergeTest; class _tip_WindowsCopilotScenarioTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class detail; class fc_tson; class lambda_00ce8e387b60a7fa00bc8e9a9601542f; class lambda_024f82efb7bc3000e576f7705d6f5cd9; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_0d865b96fce7c02641690f4c93be6806; class lambda_0e39b4e02d07fc3330b16054b36d48cc; class lambda_0f74a0f345f7eca60d6d8c04998bdda6; class lambda_1202056a50374f382f18b548cd8c62b7; class lambda_16e90beb890bb5a0f3e760349136ba81; class lambda_20eaf2ae38bac8d8141dfa3f560706d1; class lambda_255728157cf8e92998065ff06efe801f; class lambda_2d96d65d47e7ec198bc5b4de1272ee1a; class lambda_2def4ccacff58dc0da180ad4b5e56bd5; class lambda_339d3f1d0c5bc0230d28e078b9658e04; class lambda_3b9fea0dbaad833e0b9901a1c8d399b0; class lambda_3fdb14453883e86a37ebade6a7a0ebb0; class lambda_40773fbd244f40f0b5ad127646143511; class lambda_4d1595eac8d304e01698e743133a1ad9; class lambda_5340a5206b86b7efb2f73d6bfcb3f8b3; class lambda_568c6389a1490ada7d9fdc5d11e881fa; class lambda_5d23ff91044053a6ae8aa28289a53a5f; class lambda_5e85c96a841e7f30653e6c6cf6ac12a8; class lambda_66f57f934f28d61049862f64df852ff0; class lambda_6b2f0bb6bfa842853de3d2327e2d5be9; class lambda_6df25296dd1b6c0df63547afd4de28ea; class lambda_6ea08084ff2016457810ffbf7ab6567d; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_7f96eb1dcf99da5daec8c2467d2d5499; class lambda_840ec761dd49d8a17efe12aadd7e9d30; class lambda_936698dc83d6cdb1f7304d46027e9e4c; class lambda_93d2c3b72be9e6d2e3c33f67c7354e40; class lambda_94c343128cf4cf6b48a0b8c3d2e800af; class lambda_99b006a8ae3a80a4957eaf048e888d67; class lambda_9fdd738818a5db99761906f6e1b6d3d8; class lambda_a0954c30a2483de78b0e4cd1ea84ebb1; class lambda_adb90a0da4a71cb3d7add58ad056c51a; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_b89503deffd3d9deeb3691810e6ee82b; class lambda_bd25f92f57fa1fc91e904174f91d3684; class lambda_c004ed9f893a0f4829dcfe90749e2b29; class lambda_c221bd1dc91b3df6e549e973afe21711; class lambda_c8f27fa31b9ac74b9eb0fa345e06dda1; class lambda_cabce5c62f950e0af634f5d6b72bfafb; class lambda_d65e858be2b88916ed7798f9f43c779a; class lambda_d6fa5077a80ded0d708b72f4341d59d5; class lambda_e70f1c675cda3afdb8ceefd5b0d8017b; class lambda_efe82d0a3b14cf2386548b3010d1789a; class lambda_f56aff78e21dc292aa900c3ba9a00304; class lambda_f7b635380627b618499f66d304958878; class lambda_f92c6db5383b26d8880a1a6461b0d18b; class lambda_fe718337787c493ce2d833414db25eba; class prelaunch_props; class promise_type; class shared_type; class slow_navigation_props; class tagBANDSAVE; class tagBANDSITEINFO; class tagCONNECTDATA; class tagCREATESTRUCTW; class tagDISPPARAMS; class tagDRAWITEMSTRUCT; class tagEXCEPINFO; class tagFORMATETC; class tagFolderSetDataBase; class tagGESTUREINFO; class tagGESTURENOTIFYSTRUCT; class tagGMSG; class tagHITRANGE; class tagLCITEM; class tagLOGFONTW; class tagLOGPALETTE; class tagLVITEMW; class tagLVPINITSTRUCT; class tagMEASUREITEMSTRUCT; class tagMENUITEMINFOW; class tagMOUSEHOOKSTRUCT; class tagMOUSEHOOKSTRUCTEX; class tagMSG; class tagNMCUSTOMDRAWINFO; class tagNMHDR; class tagNMLISTVIEW; class tagNMLVGETINFOTIPW; class tagNMMOUSE; class tagNMRBAUTOSIZE; class tagNMREBAR; class tagNMTBGETINFOTIPW; class tagNMTBHOTITEM; class tagNMTOOLBARW; class tagNMTREEVIEWW; class tagNMTTDISPINFOA; class tagNMTTDISPINFOW; class tagNMTVASYNCDRAW; class tagNMTVGETINFOTIPW; class tagOIFI; class tagOISTREAMITEM; class tagOleMenuGroupWidths; class tagPOINT; class tagPROPVARIANT; class tagREBARBANDINFOW; class tagRECT; class tagSAFEARRAY; class tagSIZE; class tagSMDATA; class tagSMINFO; class tagSTGMEDIUM; class tagSTYLESTRUCT; class tagTBADDBITMAP; class tagTVDISPINFOEXW; class tagTVDISPINFOW; class tagTVITEMEXW; class tagVARIANT; class tagWINDOWPLACEMENT; class tagWINDOWPOS; class thunk; class tip2; class tson; class type; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace BandSizing { class BandSizingHelper; } 
namespace DeskbandTelemetry { class AddNewToolbarContext; class RemoveToolbarContext; class ToggleDeskbandContext; class ToggleSpecialFolderDeskbandContext; } 
namespace DirectUI { class AutoDefer; class AutoLock; class BaseScrollBar; class BorderLayout; class Button; class CCBase; class CCBaseScrollBar; class CenteringLayout; class ClassInfo; class ClassInfoBase; class CritSecLock; class DCSurface; class DUIXmlParser; class DoubleAllocationPolicy; class DynamicArray; class DynamicArrayBase; class Edit; class Element; class ElementProvider; class ElementProviderManager; class Event; class FillLayout; class FlowLayout; class GridLayout; class HWNDElement; class HWNDElementProvider; class HWNDElementProxy; class HWNDHost; class IClassInfo; class IDialogElement; class InputEvent; class InvokeHelper; class KeyboardEvent; class KeyboardNavigateEvent; class Layout; class MARGINFLAGS; class ModernProgressBar; class MouseDragEvent; class MouseEvent; class NavReference; class NineGridLayout; class OverflowLayout; class PropNotify; class PropertyInfo; class ProviderProxy; class RowLayout; class ShellBorderLayout; class StandardCreator; class Surface; class TableLayout; class ThemeChangedEvent; class Thumb; class TouchHWNDElement; class UiaArray; class Value; class VerticalFlowLayout; class Viewer; } 
namespace GraphFilesTip { class _tip_GraphHomeNavigateTip; } 
namespace HeartbeatMonitor { class StallEventInfo; class WindowEventDrivenHeartbeatMonitor; class WindowMessageHeartbeatMonitor; class WindowSessionRollupMonitor; class _tip_EventDrivenHeartbeatMonitorTipTest; class _tip_HeartbeatMonitorTipTest; class _tip_SessionRollupTipTest; class details; } 
namespace KindFilter { class BuiltKindRow; } 
namespace Microsoft { namespace WRL { class AgileRef; class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; } } } 
namespace NonBlockingCache { class Cache; } 
namespace SystemSignalTip { class _tip_FetchDiskType; class _tip_PrelaunchEligibility; } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace Windows { class Foundation; } 
namespace Windows { namespace ApplicationModel { namespace DataTransfer { class IDataPackageView; } } } 
namespace Windows { namespace Data { namespace Json { class IJsonObjectStatics; } } } 
namespace Windows { namespace Internal { class ComTaskPool; class ResourceString; class SyncRootHelpers; } } 
namespace Windows { namespace Internal { namespace SearchPlatformAPI { class MatchTagHelpers; } } } 
namespace Windows { namespace Internal { namespace Shell { namespace FileExplorer { class IDefaultLocationStatics; } } } } 
namespace Windows { namespace Internal { namespace ShellHelpers { class PropertySetHelper; } } } 
namespace details { class ObjectArrayAdapterImpl; } 
namespace fc { class change_profile; class config_property_base; class config_props; class config_value; class details; class validate_result; } 
namespace std { class _Array_iterator; class _Deleter_base; class _Fake_no_copy_callable_adapter; class _Func_base; class _Func_class; class _Hash_find_last_result; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_iterator; class _List_val; class _Ref_count_base; class _Simple_types; class _State_manager; class _String_iterator; class _String_val; class _System_error; class _Tree_const_iterator; class _Tree_find_result; class _Tree_id; class _Tree_node; class _Tree_simple_types; class _Tree_val; class _Uhash_compare; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class atomic; class bad_alloc; class bad_array_new_length; class bad_optional_access; class bad_weak_ptr; class basic_string; class basic_string_view; class char_traits; class default_delete; class equal_to; class error_code; class error_condition; class exception; class exception_ptr; class function; class future; class future_error; class hash; class invalid_argument; class less; class logic_error; class mutex; class nothrow_t; class nullptr_t; class optional; class pair; class promise; class ratio; class runtime_error; class set; class shared_ptr; class system_error; class tuple; class unique_lock; class unique_ptr; class vector; } 
namespace std { namespace chrono { class duration; class steady_clock; class time_point; } } 
namespace std { namespace experimental { class coroutine_handle; class coroutine_traits; } } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class DiagnosticsInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class ThreadErrorContext; class WNF_CHANGE_STAMP_STRUCT; class basic_zstring_view; class com_ptr_t; class err_exception_policy; class err_returncode_policy; class function_deleter; class process_heap_deleter; class registry_watcher_t; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class DummyUnknown; class FeatureLogging; class FeatureStateManager; class FreeProcessHeap; class IFailureCallback; class IFunctor; class IFunctorHost; class ResultStatus; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class UnregisterWilFeatureConfigurationChange; class delete_registry_watcher_state; class handle_invalid_resource_policy; class registry_watcher_state; class resource_policy; class tag_return_other; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from ExplorerFrame.dll by Windissect. 119 member(s).
// Base evidence: UIBase (likely; classinfo-template-instantiation).
class LineScroller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementIsCutOff@LineScroller@@QEAAHPEAVElement@DirectUI@@@Z
    int ElementIsCutOff(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMakeVisibleBatch@LineScroller@@QEAAXXZ
    void EndMakeVisibleBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LineScroller@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentYPosFromExtrapolatedScrollUnit@LineScroller@@QEAAHH@Z
    int GetContentYPosFromExtrapolatedScrollUnit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentYPosFromScrollUnit@LineScroller@@QEAAHH@Z
    int GetContentYPosFromScrollUnit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIItem@LineScroller@@QEAAJW4INDEX_OF_MODE@@PEAUIItem@@PEAIPEAVSectionInfo@@@Z
    long GetInfoForIItem(int, IItem *, unsigned int *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinning@LineScroller@@QEAA?AW4AUTOPINNING@@XZ
    int GetPinning();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXAnchor@LineScroller@@QEAAHXZ
    int GetRealXAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXBarVisibility@LineScroller@@QEAA?AW4SCROLLBARVISIBILITY@@XZ
    int GetRealXBarVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXScrollable@LineScroller@@QEAA_NXZ
    bool GetRealXScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXTarget@LineScroller@@QEAAHXZ
    int GetRealXTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYAnchor@LineScroller@@QEAAHXZ
    int GetRealYAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYBarVisibility@LineScroller@@QEAA?AW4SCROLLBARVISIBILITY@@XZ
    int GetRealYBarVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYScrollable@LineScroller@@QEAA_NXZ
    bool GetRealYScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYTarget@LineScroller@@QEAAHXZ
    int GetRealYTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowFromYPosition@LineScroller@@QEAAJHPEAVRowInfo@@H@Z
    long GetRowFromYPosition(int, RowInfo *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForElement@LineScroller@@QEAAXPEAVElement@DirectUI@@PEAVRowInfo@@@Z
    void GetRowInfoForElement(::DirectUI::Element *, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForNextRow@LineScroller@@QEAAHAEBVRowInfo@@W4SCROLLDIR@@PEAV2@@Z
    int GetRowInfoForNextRow(RowInfo const &, int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForPosition@LineScroller@@QEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long GetRowInfoForPosition(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForPositionOrNearest@LineScroller@@QEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long GetRowInfoForPositionOrNearest(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForRow@LineScroller@@QEAAXHPEAVRowInfo@@@Z
    void GetRowInfoForRow(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForScrollTick@LineScroller@@QEAAXHPEAVRowInfo@@H@Z
    void GetRowInfoForScrollTick(int, RowInfo *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollDeltaTimer@LineScroller@@QEAAMXZ
    float GetScrollDeltaTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollUnitFromViewerYPos@LineScroller@@QEAAJHPEAHW4GETSCROLLUNITFROMVIEWERYPOSFLAGS@@@Z
    long GetScrollUnitFromViewerYPos(int, int *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollableContentWidth@LineScroller@@QEAAHXZ
    int GetScrollableContentWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewableAreaOfDescendent@LineScroller@@QEAA?AUtagSIZE@@PEAVElement@DirectUI@@HH@Z
    tagSIZE GetViewableAreaOfDescendent(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewerSize@LineScroller@@QEAA?AUSIZEV@@XZ
    SIZEV GetViewerSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDirection@LineScroller@@QEAA?AW4VIRTUALDIRECTION@@XZ
    int GetVirtualDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXScrollable@LineScroller@@QEAAHXZ
    int GetXScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXScrollbar@LineScroller@@QEAAPEAVLineScrollbarBase@@XZ
    LineScrollbarBase * GetXScrollbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXTarget@LineScroller@@QEAAHXZ
    int GetXTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYAnchor@LineScroller@@QEAAHXZ
    int GetYAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYScrollable@LineScroller@@QEAAHXZ
    int GetYScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYScrollbar@LineScroller@@QEAAPEAVLineScrollbarBase@@XZ
    LineScrollbarBase * GetYScrollbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYTarget@LineScroller@@QEAAHXZ
    int GetYTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LineScroller@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@LineScroller@@UEAAJPEAPEAVElement@DirectUI@@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRowCutOff@LineScroller@@QEAAHAEBVRowInfo@@W4VIEWPOSITION@@@Z
    int IsRowCutOff(RowInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepRowAnchored@LineScroller@@QEAAXVRowInfo@@@Z
    void KeepRowAnchored(RowInfo);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LineScroller@@QEAA@XZ
    LineScroller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void MakeVisible(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleHorizontal@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void MakeVisibleHorizontal(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapLeafSectionToRow@LineScroller@@QEAAXAEBVSectionInfo@@PEAVRowInfo@@@Z
    void MapLeafSectionToRow(SectionInfo const &, RowInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@LineScroller@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@LineScroller@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@LineScroller@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@LineScroller@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@LineScroller@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LineScroller@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@LineScroller@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PinningProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PinningProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXAnchorProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXAnchorProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXBarVisibilityProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXBarVisibilityProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXScrollableProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXScrollableProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXTargetProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXTargetProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYAnchorProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYAnchorProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYBarVisibilityProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYBarVisibilityProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYScrollableProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYScrollableProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYTargetProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYTargetProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@LineScroller@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollDelta@LineScroller@@QEAAXAEBUtagSIZE@@@Z
    void ScrollDelta(tagSIZE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLeafSectionToPosition@LineScroller@@QEAAXAEBVSectionInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollLeafSectionToPosition(SectionInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPageDown@LineScroller@@QEAAXI@Z
    void ScrollPageDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPageUp@LineScroller@@QEAAXI@Z
    void ScrollPageUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPreciseDelta@LineScroller@@QEAAXAEBUtagSIZE@@PEAU2@@Z
    void ScrollPreciseDelta(tagSIZE const &, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRowToPosition@LineScroller@@QEAAXAEBVRowInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollRowToPosition(RowInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTickToPosition@LineScroller@@QEAAXHW4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollTickToPosition(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToLeftEdge@LineScroller@@QEAAXXZ
    void ScrollToLeftEdge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToPosition@LineScroller@@QEAAXW4VIEWPOSITION@@W4SCROLLSYNC@@@Z
    void ScrollToPosition(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealXAnchor@LineScroller@@QEAAJH@Z
    long SetRealXAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealXTarget@LineScroller@@QEAAJH@Z
    long SetRealXTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealYAnchor@LineScroller@@QEAAJH@Z
    long SetRealYAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealYTarget@LineScroller@@QEAAJH@Z
    long SetRealYTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizedContent@LineScroller@@QEAAJPEAUIVirtualizedUI@@@Z
    long SetVirtualizedContent(IVirtualizedUI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYAnchor@LineScroller@@QEAAJH@Z
    long SetYAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYTarget@LineScroller@@QEAAJH@Z
    long SetYTarget(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMakeVisibleBatch@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void StartMakeVisibleBatch(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualDirectionProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualDirectionProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LineScroller@@UEAA@XZ
    virtual ~LineScroller();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckScroll@LineScroller@@AEAAHPEAVLineScrollbarBase@@HW4SCROLLBARVISIBILITY@@@Z
    int _CheckScroll(LineScrollbarBase *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeferPaintAfterUpdate@LineScroller@@AEAAXXZ
    void _DeferPaintAfterUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRealizePass@LineScroller@@AEAAXXZ
    void _EnsureRealizePass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireAnimationChangeEvent@LineScroller@@AEAAX_N@Z
    void _FireAnimationChangeEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetForwardRow@LineScroller@@AEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long _GetForwardRow(int, RowInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealAnchorForScrolling@LineScroller@@AEAAHHHW4SCROLLDIR@@@Z
    int _GetIdealAnchorForScrolling(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOverlapLimitForScrolling@LineScroller@@AEAAHHHAEBUSIZEV@@W4SCROLLDIR@@@Z
    int _GetOverlapLimitForScrolling(int, int, SIZEV const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollTickFromAnchor@LineScroller@@AEAAHH@Z
    int _GetScrollTickFromAnchor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollTipValue@LineScroller@@AEAAXPEAVUIItem@@PEAPEAG@Z
    void _GetScrollTipValue(UIItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewEdge@LineScroller@@AEAA?AW4VIEWPOSITION@@AEBVRowInfo@@W42@@Z
    int _GetViewEdge(RowInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerContainer@LineScroller@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetViewerContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerForElement@LineScroller@@AEAAPEAVElement@DirectUI@@PEAV23@@Z
    ::DirectUI::Element * _GetViewerForElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerWidth@LineScroller@@AEAAHXZ
    int _GetViewerWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasScrollableHeader@LineScroller@@AEAAHXZ
    int _HasScrollableHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOnlyRow@LineScroller@@AEAAHAEBVRowInfo@@@Z
    int _IsOnlyRow(RowInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRowPageBottom@LineScroller@@AEAAHW4SCROLLDIR@@HH@Z
    int _IsRowPageBottom(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayoutContent@LineScroller@@AEAAXW4OFFSCREENCONTENT@@@Z
    void _LayoutContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeVisibleWorker@LineScroller@@AEAAXPEAVElement@DirectUI@@0@Z
    void _MakeVisibleWorker(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayMakeVisible@LineScroller@@AEAAXXZ
    void _OnDelayMakeVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyPageUpDown@LineScroller@@AEAAXW4SCROLLDIR@@@Z
    void _OnKeyPageUpDown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnScrollTickCountChanged@LineScroller@@AEAAXXZ
    void _OnScrollTickCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeContent@LineScroller@@AEAAXW4OFFSCREENCONTENT@@@Z
    void _RealizeContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeDirectionWorker@LineScroller@@AEAAJPEAUIVirtualizedUI@@HW4REALIZEDIRECTION@@HPEAHPEAVCRealizedIntervalHelper@@@Z
    long _RealizeDirectionWorker(IVirtualizedUI *, int, int, int, int *, CRealizedIntervalHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeScrollTickWorker@LineScroller@@AEAAJPEAUIVirtualizedUI@@H@Z
    long _RealizeScrollTickWorker(IVirtualizedUI *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordMakeVisible@LineScroller@@AEAAXPEAVElement@DirectUI@@@Z
    void _RecordMakeVisible(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollLineUpDown@LineScroller@@AEAAXHW4SCROLLDIR@@@Z
    void _ScrollLineUpDown(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollRowToEdge@LineScroller@@AEAAXAEBVRowInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void _ScrollRowToEdge(RowInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollRowToPositionWorker@LineScroller@@AEAAXAEBVRowInfo@@HW4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void _ScrollRowToPositionWorker(RowInfo const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowScrollTips@LineScroller@@AEAAXH@Z
    void _ShowScrollTips(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncHeaderToScrollbar@LineScroller@@AEAAXXZ
    void _SyncHeaderToScrollbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncScrollbarToHeader@LineScroller@@AEAAXXZ
    void _SyncScrollbarToHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnchorFromScrollbar@LineScroller@@AEAAXXZ
    void _UpdateAnchorFromScrollbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollTips@LineScroller@@AEAAXXZ
    void _UpdateScrollTips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollbarAfterLayout@LineScroller@@AEAAXXZ
    void _UpdateScrollbarAfterLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollbarMetrics@LineScroller@@AEAAXXZ
    void _UpdateScrollbarMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Viewer_MakeVisibleWorker@LineScroller@@AEAAXPEAVElement@DirectUI@@AEBUtagRECT@@@Z
    void _Viewer_MakeVisibleWorker(::DirectUI::Element *, tagRECT const &);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `_RealizeDirectionWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RealizeContent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRowFromYPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRowInfoForRow` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollUnitFromViewerYPos` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetScrollRow<int>` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RealizeScrollTickWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LayoutContent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetScrollableContentWidth` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealXAnchor` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateScrollbarMetrics` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetPinning` | `enum AUTOPINNING` | `Accessor` | `Pdb` | No (PDB) |
| `_GetViewerWidth` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetRealYBarVisibility` | `enum SCROLLBARVISIBILITY` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealYScrollable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateScrollbarAfterLayout` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetXTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewableAreaOfDescendent` | `struct tagSIZE` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealXScrollable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_HasScrollableHeader` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetYScrollable` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnListenedPropertyChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnPropertyChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnsureRealizePass` | `void` | `Method` | `Pdb` | No (PDB) |
| `EndMakeVisibleBatch` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RecordMakeVisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayMakeVisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnScrollTickCountChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MakeVisibleWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DeferPaintAfterUpdate` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnInput` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateAnchorFromScrollbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetYScrollbar` | `class LineScrollbarBase *` | `Accessor` | `Pdb` | No (PDB) |
| `OnKeyFocusMoved` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetYAnchor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetYTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetVirtualizedContent` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `Insert` | `long` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~LineScroller` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `_GetViewerContainer` | `class DirectUI::Element *` | `Method` | `Pdb` | No (PDB) |
| `OnListenerDetach` | `void` | `Method` | `Pdb` | No (PDB) |
| `Register` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetRowInfoForPositionOrNearest` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ScrollLeafSectionToPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `MapLeafSectionToRow` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRowInfoForPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetViewEdge` | `enum VIEWPOSITION` | `Method` | `Pdb` | No (PDB) |
| `_Viewer_MakeVisibleWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRowInfoForElement` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_GetScrollRow<class DirectUI::Element *>` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScrollRowToPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ScrollLineUpDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetOverlapLimitForScrolling` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetIdealAnchorForScrolling` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetViewerSize` | `struct SIZEV` | `Accessor` | `Pdb` | No (PDB) |
| `_ScrollRowToPositionWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ScrollRowToEdge` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScrollTickToPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRowInfoForScrollTick` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ScrollPageUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetVirtualDirection` | `enum VIRTUALDIRECTION` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassInfoW` | `struct DirectUI::IClassInfo *` | `Accessor` | `Pdb` | No (PDB) |
| `ScrollPreciseDelta` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetContentYPosFromScrollUnit` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetYAnchor` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetXScrollbar` | `class LineScrollbarBase *` | `Accessor` | `Pdb` | No (PDB) |
| `GetYTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealXTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetRealYAnchor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRealXTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRealXAnchor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRealYTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealYAnchor` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_CheckScroll` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetScrollTickFromAnchor` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetRealYTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetRealXBarVisibility` | `enum SCROLLBARVISIBILITY` | `Accessor` | `Pdb` | No (PDB) |
| `LineScroller` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `RealYAnchorProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `RealYTargetProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `GetXScrollable` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `RealXScrollableProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `RealYScrollableProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `RealXAnchorProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `RealXTargetProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `_GetViewerForElement` | `class DirectUI::Element *` | `Method` | `Pdb` | No (PDB) |
| `RealXBarVisibilityProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `PinningProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `VirtualDirectionProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `RealYBarVisibilityProp` | `struct DirectUI::PropertyInfo const *` | `Accessor` | `Pdb` | No (PDB) |
| `StartMakeVisibleBatch` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRowInfoForNextRow` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `Paint` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShowScrollTips` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FireAnimationChangeEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetInfoForIItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsRowCutOff` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ScrollDelta` | `void` | `Method` | `Pdb` | No (PDB) |
| `ElementIsCutOff` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetContentYPosFromExtrapolatedScrollUnit` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollDeltaTimer` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `KeepRowAnchored` | `void` | `Method` | `Pdb` | No (PDB) |
| `MakeVisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `MakeVisibleHorizontal` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScrollPageDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScrollToLeftEdge` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScrollToPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetForwardRow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetScrollTipValue` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsOnlyRow` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsRowPageBottom` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnKeyPageUpDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SyncHeaderToScrollbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SyncScrollbarToHeader` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateScrollTips` | `void` | `Method` | `Pdb` | No (PDB) |
