# `global` :: `CShellBrowser`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `ExplorerFrame.dll`. Total members: **413**.

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

// Reconstructed from ExplorerFrame.dll by Windissect. 413 member(s).
class CShellBrowser {
public:
    class CDefViewSink;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellBrowser@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToolbar@CShellBrowser@@UEAAJPEAUIUnknown@@PEBGK@Z
    virtual long AddToolbar(IUnknown *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayout@CShellBrowser@@UEAAJPEAUIUnknown@@PEAPEAU2@@Z
    virtual long AdjustLayout(IUnknown *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseActiveStateChanged@CShellBrowser@@UEAAJPEAUIBrowserActivationEvent@@PEAK@Z
    virtual long AdviseActiveStateChanged(IBrowserActivationEvent *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AfterWindowCreated@CShellBrowser@@QEAAXPEBUIETHREADPARAM@@@Z
    void AfterWindowCreated(IETHREADPARAM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseItem@CShellBrowser@@UEAAJPEAUIShellItem@@I@Z
    virtual long BrowseItem(IShellItem *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseObject@CShellBrowser@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseObject(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseBrowserLayout@CShellBrowser@@UEAAJW4BROWSERLAYOUTTYPE@@@Z
    virtual long ChooseBrowserLayout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CShellBrowser@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrowserWindow@CShellBrowser@@QEAAJPEAUIETHREADPARAM@@@Z
    long CreateBrowserWindow(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow@CShellBrowser@@UEAAJPEAUIShellItem@@PEAUIShellView@@1PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellItem *, IShellView *, IShellView *, tagRECT *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayParseError@CShellBrowser@@UEAAJJPEBG@Z
    virtual long DisplayParseError(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CShellBrowser@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CShellBrowser@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CShellBrowser@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CShellBrowser@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CShellBrowser@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModeless@CShellBrowser@@UEAAJH@Z
    virtual long EnableModeless(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModelessSB@CShellBrowser@@UEAAJH@Z
    virtual long EnableModelessSB(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CShellBrowser@@UEAAJKPEAPEAUIEnumUnknown@@@Z
    virtual long EnumObjects(unsigned long, IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CShellBrowser@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindToolbar@CShellBrowser@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long FindToolbar(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByIndex@CShellBrowser@@UEAAJKPEAU_GUID@@PEAPEAUIUnknown@@@Z
    virtual long FindWindowByIndex(unsigned long, _GUID *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByIndex@CShellBrowser@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long FindWindowByIndex(unsigned long, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorder@CShellBrowser@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBorder(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderDW@CShellBrowser@@UEAAJPEAUIUnknown@@PEAUtagRECT@@@Z
    virtual long GetBorderDW(IUnknown *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserIndex@CShellBrowser@@UEAAKXZ
    virtual unsigned long GetBrowserIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CShellBrowser@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnPropertyList@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetColumnPropertyList(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlWindow@CShellBrowser@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetControlWindow(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItem@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDummyWindowData@CShellBrowser@@UEAAJPEBG0PEAUIStream@@PEAU_WINDOWDATA@@@Z
    virtual long GetDummyWindowData(unsigned short const *, unsigned short const *, IStream *, _WINDOWDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumerationTimeout@CShellBrowser@@UEAAJPEAK@Z
    virtual long GetEnumerationTimeout(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CShellBrowser@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CShellBrowser@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderViewOptions@CShellBrowser@@UEAAJPEAW4FOLDERVIEWOPTIONS@@@Z
    virtual long GetFolderViewOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CShellBrowser@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSubsetCount@CShellBrowser@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryObject@CShellBrowser@@UEAAJPEAPEAUIOleObject@@PEAPEAUIStream@@PEAPEAUIBindCtx@@@Z
    virtual long GetHistoryObject(IOleObject * *, IStream * *, IBindCtx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CShellBrowser@@UEAAJPEAI@Z
    virtual long GetIconSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyBarsMenu@CShellBrowser@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetLegacyBarsMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigateState@CShellBrowser@@UEAAJPEAW4tagBNSTATE@@@Z
    virtual long GetNavigateState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPalette@CShellBrowser@@UEAAJPEAPEAUHPALETTE__@@@Z
    virtual long GetPalette(HPALETTE__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CShellBrowser@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingItem@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPendingItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CShellBrowser@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCookie@CShellBrowser@@UEAAJPEAK@Z
    virtual long GetPositionCookie(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@CShellBrowser@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyBag(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchBoxTimerDelay@CShellBrowser@@UEAAJPEAI@Z
    virtual long GetSearchBoxTimerDelay(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CShellBrowser@@UEAAJPEAUSORTCOLUMN@@IPEAI@Z
    virtual long GetSortColumns(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CShellBrowser@@QEBAXPEAPEAG@Z
    void GetTitle(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CShellBrowser@@UEAAJPEAUIShellView@@PEAGK@Z
    virtual long GetTitle(IShellView *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelLog@CShellBrowser@@UEAAJPEAPEAUITravelLog@@@Z
    virtual long GetTravelLog(ITravelLog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFlags@CShellBrowser@@UEAAJPEAW4BROWSER_VIEW_FLAGS@@@Z
    virtual long GetViewFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFrame@CShellBrowser@@UEAAJPEAPEAUIViewFrame@@@Z
    virtual long GetViewFrame(IViewFrame * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CShellBrowser@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewStateStream@CShellBrowser@@UEAAJKPEAPEAUIStream@@@Z
    virtual long GetViewStateStream(unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CShellBrowser@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@CShellBrowser@@UEAAJPEAUIStream@@PEAU_WINDOWDATA@@@Z
    virtual long GetWindowData(IStream *, _WINDOWDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLaunchRequest@CShellBrowser@@UEAAJPEBULAUNCH_REQUEST_ARGS@@@Z
    virtual long HandleLaunchRequest(LAUNCH_REQUEST_ARGS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CShellBrowser@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMenusSB@CShellBrowser@@UEAAJPEAUHMENU__@@PEAUtagOleMenuGroupWidths@@@Z
    virtual long InsertMenusSB(HMENU__*, tagOleMenuGroupWidths *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShellBrowser@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLegacyBarsMenuCommand@CShellBrowser@@UEAAJI@Z
    virtual long InvokeLegacyBarsMenuCommand(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@CShellBrowser@@UEAAJXZ
    virtual long IsActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlWindowShown@CShellBrowser@@UEAAJIPEAH@Z
    virtual long IsControlWindowShown(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CShellBrowser@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistory@CShellBrowser@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long LoadHistory(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistoryPosition@CShellBrowser@@UEAAJPEAGK@Z
    virtual long LoadHistoryPosition(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockContainer@CShellBrowser@@UEAAJH@Z
    virtual long LockContainer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CShellBrowser@@QEAAX_N0@Z
    void OnClose(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CShellBrowser@@UEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CShellBrowser@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataChange@CShellBrowser@@UEAAXPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual void OnDataChange(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CShellBrowser@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationResult@CShellBrowser@@UEAAJIJPEAUIShellItem@@PEAUIUnknown@@KK11AEBU_GUID@@@Z
    virtual long OnNavigationResult(unsigned int, long, IShellItem *, IUnknown *, unsigned long, unsigned long, IUnknown *, IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadyStateChange@CShellBrowser@@UEAAJPEAUIShellView@@K@Z
    virtual long OnReadyStateChange(IShellView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRename@CShellBrowser@@UEAAXPEAUIMoniker@@@Z
    virtual void OnRename(IMoniker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSave@CShellBrowser@@UEAAXXZ
    virtual void OnSave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChange@CShellBrowser@@UEAAXKJ@Z
    virtual void OnViewChange(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewWindowActive@CShellBrowser@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewWindowActive(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CShellBrowser@@UEAAJPEAUIBindCtx@@PEAGPEAKPEAPEAUIMoniker@@@Z
    virtual long ParseDisplayName(IBindCtx *, unsigned short *, unsigned long *, IMoniker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process@CShellBrowser@@UEAAJXZ
    virtual long Process();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActiveShellView@CShellBrowser@@UEAAJPEAPEAUIShellView@@@Z
    virtual long QueryActiveShellView(IShellView * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CShellBrowser@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CShellBrowser@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshViewFrame@CShellBrowser@@UEAAJXZ
    virtual long RefreshViewFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindow@CShellBrowser@@UEAAJHH@Z
    virtual long RegisterWindow(int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellBrowser@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMenusSB@CShellBrowser@@UEAAJPEAUHMENU__@@@Z
    virtual long RemoveMenusSB(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToolbar@CShellBrowser@@UEAAJPEAUIUnknown@@K@Z
    virtual long RemoveToolbar(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBorderSpace@CShellBrowser@@UEAAJPEBUtagRECT@@@Z
    virtual long RequestBorderSpace(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBorderSpaceDW@CShellBrowser@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long RequestBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistory@CShellBrowser@@UEAAJPEAUIStream@@@Z
    virtual long SaveHistory(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistoryEx@CShellBrowser@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long SaveHistoryEx(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendControlMsg@CShellBrowser@@UEAAJII_K_JPEA_J@Z
    virtual long SendControlMsg(unsigned int, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveObject@CShellBrowser@@UEAAJPEAUIOleInPlaceActiveObject@@PEBG@Z
    virtual long SetActiveObject(IOleInPlaceActiveObject *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsDefFolderSettings@CShellBrowser@@UEAAJXZ
    virtual long SetAsDefFolderSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderSpace@CShellBrowser@@UEAAJPEBUtagRECT@@@Z
    virtual long SetBorderSpace(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderSpaceDW@CShellBrowser@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long SetBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CShellBrowser@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CShellBrowser@@UEAAJKK@Z
    virtual long SetFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CShellBrowser@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFolderViewOptions@CShellBrowser@@UEAAJW4FOLDERVIEWOPTIONS@@0@Z
    virtual long SetFolderViewOptions(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuSB@CShellBrowser@@UEAAJPEAUHMENU__@@PEAXPEAUHWND__@@@Z
    virtual long SetMenuSB(HMENU__*, void *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigateState@CShellBrowser@@UEAAJW4tagBNSTATE@@@Z
    virtual long SetNavigateState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionCookie@CShellBrowser@@UEAAJK@Z
    virtual long SetPositionCookie(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatusTextSB@CShellBrowser@@UEAAJPEBG@Z
    virtual long SetStatusTextSB(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbarItems@CShellBrowser@@UEAAJPEAU_TBBUTTON@@II@Z
    virtual long SetToolbarItems(_TBBUTTON *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowControlWindow@CShellBrowser@@UEAAJIH@Z
    virtual long ShowControlWindow(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CShellBrowser@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorSB@CShellBrowser@@UEAAJPEAUtagMSG@@G@Z
    virtual long TranslateAcceleratorSB(tagMSG *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CShellBrowser@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseActiveStateChanged@CShellBrowser@@UEAAJK@Z
    virtual long UnadviseActiveStateChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackForwardState@CShellBrowser@@UEAAJXZ
    virtual long UpdateBackForwardState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowList@CShellBrowser@@UEAAJXZ
    virtual long UpdateWindowList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProcBS@CShellBrowser@@QEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WndProcBS(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReadyState@CShellBrowser@@UEAAJPEAK@Z
    virtual long get_ReadyState(unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellBrowser@@IEAA@I@Z
    CShellBrowser(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellBrowser@@MEAA@XZ
    virtual ~CShellBrowser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextMenuPresenter@CShellBrowser@@AEAAJXZ
    long EnsureContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardMessageToExplorerFrame@CShellBrowser@@AEAAX_K@Z
    void ForwardMessageToExplorerFrame(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileDialog@CShellBrowser@@AEAAHXZ
    int IsFileDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabletModeChanged@CShellBrowser@@AEAAX_K_J@Z
    void OnTabletModeChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartInSeparateProcessIfAppropriate@CShellBrowser@@AEAAXPEAUIShellItem@@PEAUIUnknown@@@Z
    void RestartInSeparateProcessIfAppropriate(IShellItem *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNavigation@CShellBrowser@@AEAAJPEAUNAVIGATIONSTATE@@@Z
    long _ActivateNavigation(NAVIGATIONSTATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddBrowserBarMenuItems@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _AddBrowserBarMenuItems(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocToolbarItem@CShellBrowser@@AEAAHXZ
    int _AllocToolbarItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppStarted@CShellBrowser@@AEAAJXZ
    long _AppStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandClassInfoFromCmdID@CShellBrowser@@AEAAPEAUBANDCLASSINFO@@I@Z
    BANDCLASSINFO * _BandClassInfoFromCmdID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseObjectInternal@CShellBrowser@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    long _BrowseObjectInternal(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanNavigate@CShellBrowser@@AEAAHXZ
    int _CanNavigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelPendingNavigation@CShellBrowser@@AEAAJH@Z
    long _CancelPendingNavigation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelPendingNavigationNow@CShellBrowser@@AEAAXXZ
    void _CancelPendingNavigationNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeMenuContent@CShellBrowser@@AEAA_NW4MENUCONTENT_OPTION@1@@Z
    bool _ChangeMenuContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupFrameIfNecessary@CShellBrowser@@AEAAXXZ
    void _CleanupFrameIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearNavigationState@CShellBrowser@@AEAAXPEAUNAVIGATIONSTATE@@@Z
    void _ClearNavigationState(NAVIGATIONSTATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseAllParents@CShellBrowser@@AEAAXXZ
    void _CloseAllParents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseAndReleaseToolbars@CShellBrowser@@AEAAJH@Z
    long _CloseAndReleaseToolbars(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColorsDirty@CShellBrowser@@AEAAXW4BrowserPaletteType@1@@Z
    void _ColorsDirty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommonHandleFileSysChange@CShellBrowser@@AEAAXJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _CommonHandleFileSysChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBrowserPropSheetExt@CShellBrowser@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CreateBrowserPropSheetExt(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRibbon@CShellBrowser@@AEAAXPEAUIShellItem@@@Z
    void _CreateRibbon(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStatusBar@CShellBrowser@@AEAAXXZ
    void _CreateStatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CycleFocus@CShellBrowser@@AEAAJPEAUtagMSG@@@Z
    long _CycleFocus(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CycleFocusHelper@CShellBrowser@@AEAAJPEAUtagMSG@@I@Z
    long _CycleFocusHelper(tagMSG *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefViewEventsSink@CShellBrowser@@AEAAXH@Z
    void _DefViewEventsSink(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyRibbon@CShellBrowser@@AEAAXW4DESTROYRIBBON_OPTION@1@@Z
    void _DestroyRibbon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoOptions@CShellBrowser@@AEAAXKPEBUtagVARIANT@@@Z
    void _DoOptions(unsigned long, tagVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableMenuItemsByAttribs@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _EnableMenuItemsByAttribs(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAndNavigateBand@CShellBrowser@@AEAAJPEAUIBandSite@@AEBU_GUID@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _EnsureAndNavigateBand(IBandSite *, _GUID const &, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureShellWindows@CShellBrowser@@AEAAJXZ
    long _EnsureShellWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTrackEvents@CShellBrowser@@AEAAJXZ
    long _EnsureTrackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecAllBands@CShellBrowser@@AEAAXPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    void _ExecAllBands(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecChildren@CShellBrowser@@AEAAJPEAUIUnknown@@KPEAUtagVARIANT@@@Z
    long _ExecChildren(IUnknown *, unsigned long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExplorerTreeHasFocus@CShellBrowser@@AEAAHXZ
    int _ExplorerTreeHasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillIEThreadParam@CShellBrowser@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIETHREADPARAM@@@Z
    void _FillIEThreadParam(_ITEMIDLIST_ABSOLUTE const *, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillIEThreadParamFromCabsh@CShellBrowser@@AEAAHPEAUCABSH@@PEAUIETHREADPARAM@@@Z
    int _FillIEThreadParamFromCabsh(CABSH *, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillIEThreadParamWorker@CShellBrowser@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIETHREADPARAM@@@Z
    int _FillIEThreadParamWorker(_ITEMIDLIST_ABSOLUTE const *, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillNavigationState@CShellBrowser@@AEAAJPEAUIShellItem@@PEAUIUnknown@@KK11AEBU_GUID@@PEAUNAVIGATIONSTATE@@@Z
    long _FillNavigationState(IShellItem *, IUnknown *, unsigned long, unsigned long, IUnknown *, IUnknown *, _GUID const &, NAVIGATIONSTATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindActiveTarget@CShellBrowser@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _FindActiveTarget(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindTBar@CShellBrowser@@AEAAIPEAUIUnknown@@@Z
    unsigned int _FindTBar(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireNavigateCompleteEvent@CShellBrowser@@AEAAXPEAUIUnknown@@PEAUIWebBrowser2@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _FireNavigateCompleteEvent(IUnknown *, IWebBrowser2*, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixToolbarFocus@CShellBrowser@@AEAAJXZ
    long _FixToolbarFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForwardViewMsg@CShellBrowser@@AEAA_JI_K_J@Z
    int64_t _ForwardViewMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBSForBar@CShellBrowser@@AEAAJPEBGPEAPEAUIBandSite@@@Z
    long _GetBSForBar(unsigned short const *, IBandSite * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandSite@CShellBrowser@@AEAAJHPEAPEAUIBandSite@@PEBU_GUID@@H@Z
    long _GetBandSite(int, IBandSite * *, _GUID const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBorderDWHelper@CShellBrowser@@AEAAJPEAUIUnknown@@PEAUtagRECT@@H@Z
    long _GetBorderDWHelper(IUnknown *, tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBrowserBar@CShellBrowser@@AEAAJHHPEAPEAUIBandSite@@PEBU_GUID@@@Z
    long _GetBrowserBar(int, int, IBandSite * *, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBrowserBarMenu@CShellBrowser@@AEAAPEAUHMENU__@@XZ
    HMENU__* _GetBrowserBarMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBrowserByIndex@CShellBrowser@@AEAAJKPEAPEAUIUnknown@@@Z
    long _GetBrowserByIndex(unsigned long, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultSettings@CShellBrowser@@AEAAXPEAUIETHREADPARAM@@@Z
    void _GetDefaultSettings(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplorerPaneStateAndStatusBarVisibility@CShellBrowser@@AEAAJPEAUIUnknown@@PEAW4PANE_TRACKING_STATE@@PEAW4SQMBROWSERBARFLAGS@@@Z
    long _GetExplorerPaneStateAndStatusBarVisibility(IUnknown *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetITBar@CShellBrowser@@AEAAPEAUIDockingWindow@@XZ
    IDockingWindow * _GetITBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconIndex@CShellBrowser@@AEAAHXZ
    int _GetIconIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuBand@CShellBrowser@@AEAAPEAUIMenuBand@@H@Z
    IMenuBand * _GetMenuBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuBarVisibility@CShellBrowser@@AEAAJPEAW4SQMBROWSERBARFLAGS@@@Z
    long _GetMenuBarVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVID@CShellBrowser@@AEAAHPEAU_GUID@@@Z
    int _GetVID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewBorderRect@CShellBrowser@@AEAAJPEAUtagRECT@@@Z
    long _GetViewBorderRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewStateItem@CShellBrowser@@AEAAJPEAPEAUIShellItem@@@Z
    long _GetViewStateItem(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewStream@CShellBrowser@@AEAAPEAUIStream@@PEAUIShellItem@@KPEBG@Z
    IStream * _GetViewStream(IShellItem *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleFailedNavigation@CShellBrowser@@AEAAJJPEBD@Z
    long _HandleFailedNavigation(long, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleFileSysChange@CShellBrowser@@AEAAXJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _HandleFileSysChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasToolbarFocus@CShellBrowser@@AEAAHXZ
    int _HasToolbarFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideToolbar@CShellBrowser@@AEAAXPEAUIUnknown@@@Z
    void _HideToolbar(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InfoCLSIDToIdm@CShellBrowser@@AEAAIPEBU_GUID@@@Z
    unsigned int _InfoCLSIDToIdm(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InfoIdmToCLSID@CShellBrowser@@AEAAPEBU_GUID@@I@Z
    _GUID const * _InfoIdmToCLSID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CShellBrowser@@AEAAJPEAUHWND__@@@Z
    long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeBrowserState@CShellBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIETHREADPARAM@@@Z
    long _InitializeBrowserState(_ITEMIDLIST_ABSOLUTE const *, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeTravelLog@CShellBrowser@@AEAAJPEAUITravelLog@@K@Z
    long _InitializeTravelLog(ITravelLog *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertTravelLogItems@CShellBrowser@@AEAAXPEAUHMENU__@@H@Z
    void _InsertTravelLogItems(HMENU__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvalidateRibbonCommandSet@CShellBrowser@@AEAAXW4COMMAND_SET@@@Z
    void _InvalidateRibbonCommandSet(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCurrentDocobjCLSID@CShellBrowser@@AEAAHAEBU_GUID@@@Z
    int _IsCurrentDocobjCLSID(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExplorerBandVisible@CShellBrowser@@AEAAHXZ
    int _IsExplorerBandVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExplorerFrameFocused@CShellBrowser@@AEAAHXZ
    int _IsExplorerFrameFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHWNDInPreviewPaneTree@CShellBrowser@@AEAAHPEAUHWND__@@@Z
    int _IsHWNDInPreviewPaneTree(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPreviewPaneFocused@CShellBrowser@@AEAAHXZ
    int _IsPreviewPaneFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRibbonMinimized@CShellBrowser@@AEAA_NXZ
    bool _IsRibbonMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRibbonVisible@CShellBrowser@@AEAA_NXZ
    bool _IsRibbonVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameToolbar@CShellBrowser@@AEAAHPEBGPEAUIUnknown@@@Z
    int _IsSameToolbar(unsigned short const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSaveStateAllowed@CShellBrowser@@AEBA_NXZ
    bool _IsSaveStateAllowed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchOptionsUsingView@CShellBrowser@@AEAAXPEBGKK@Z
    void _LaunchOptionsUsingView(unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadBrowserHelperObjects@CShellBrowser@@AEAAHXZ
    int _LoadBrowserHelperObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadHistory@CShellBrowser@@AEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    long _LoadHistory(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MayGetNextToolbarFocus@CShellBrowser@@AEAAJPEAUtagMSG@@IHPEAPEAUSToolbarItem@@PEAPEAUHWND__@@@Z
    long _MayGetNextToolbarFocus(tagMSG *, unsigned int, int, SToolbarItem * *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MayTranslateAccelerator@CShellBrowser@@AEAAJPEAUtagMSG@@H@Z
    long _MayTranslateAccelerator(tagMSG *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MayTranslateAcceleratorNoMenuband@CShellBrowser@@AEAAJPEAUtagMSG@@@Z
    long _MayTranslateAcceleratorNoMenuband(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MayUnblockAsyncOperation@CShellBrowser@@AEAAXXZ
    void _MayUnblockAsyncOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MenuTemplate@CShellBrowser@@AEAAPEAUHMENU__@@HH@Z
    HMENU__* _MenuTemplate(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateRibbon@CShellBrowser@@AEAAXPEAUIShellItem@@@Z
    void _NavigateRibbon(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToPidl@CShellBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@KK@Z
    long _NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToPidlAsync@CShellBrowser@@AEAAXPEAU_ITEMIDLIST_ABSOLUTE@@KH@Z
    void _NavigateToPidlAsync(_ITEMIDLIST_ABSOLUTE *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateWithinView@CShellBrowser@@AEAAJKPEAUIStream@@PEAUIBindCtx@@@Z
    long _NavigateWithinView(unsigned long, IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyCommandStateChange@CShellBrowser@@AEAAXXZ
    void _NotifyCommandStateChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBrowserFrameActivate@CShellBrowser@@AEAAX_K_J@Z
    void _OnBrowserFrameActivate(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CShellBrowser@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnConfirmedClose@CShellBrowser@@AEAAX_N@Z
    void _OnConfirmedClose(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnConnectionCreated@CShellBrowser@@AEAAJPEAUIShellItem@@PEAUIUnknown@@KK11AEBU_GUID@@@Z
    long _OnConnectionCreated(IShellItem *, IUnknown *, unsigned long, unsigned long, IUnknown *, IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CShellBrowser@@AEAAH_K_J@Z
    int _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CShellBrowser@@AEAAJPEAUtagCREATESTRUCTW@@@Z
    long _OnCreate(tagCREATESTRUCTW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@CShellBrowser@@AEAAJXZ
    long _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditMenuPopup@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _OnEditMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnExplorerBarMenuPopup@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _OnExplorerBarMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CShellBrowser@@AEAAX_K_J@Z
    void _OnFSNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocusChange@CShellBrowser@@AEAAJI@Z
    long _OnFocusChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFrameStateChanged@CShellBrowser@@AEAAX_K_J@Z
    void _OnFrameStateChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFrameWindowActivateBS@CShellBrowser@@AEAAJH@Z
    long _OnFrameWindowActivateBS(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGoMenuPopup@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _OnGoMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGoto@CShellBrowser@@AEAA_JXZ
    int64_t _OnGoto();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitMenuPopup@CShellBrowser@@AEAA_JPEAUHMENU__@@HH@Z
    int64_t _OnInitMenuPopup(HMENU__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuSelect@CShellBrowser@@AEAA_J_K_JI@Z
    int64_t _OnMenuSelect(uint64_t, int64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CShellBrowser@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRibbonVisibilityChange@CShellBrowser@@AEAAXW4ONRIBBONVISIBILITY_CHANGE@1@@Z
    void _OnRibbonVisibilityChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetCursor@CShellBrowser@@AEAAH_J@Z
    int _OnSetCursor(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetFocus@CShellBrowser@@AEAAJXZ
    long _OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnShellToolsMenuPopup@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _OnShellToolsMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSysMenuClick@CShellBrowser@@AEAAHH_K_J@Z
    int _OnSysMenuClick(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CShellBrowser@@AEAAH_K@Z
    int _OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUIActivate@CShellBrowser@@AEAAXHHH@Z
    void _OnUIActivate(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewCommand@CShellBrowser@@AEAA_J_K_J@Z
    int64_t _OnViewCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewMenuPopup@CShellBrowser@@AEAAXPEAUHMENU__@@@Z
    void _OnViewMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewNotify@CShellBrowser@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnViewNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWmSettingChange@CShellBrowser@@AEAAX_K_J@Z
    void _OnWmSettingChange(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenNewFrame@CShellBrowser@@AEAAJPEAU_ITEMIDLIST_ABSOLUTE@@I@Z
    long _OpenNewFrame(_ITEMIDLIST_ABSOLUTE *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaletteChanged@CShellBrowser@@AEAAX_K_J@Z
    void _PaletteChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PidlFromUrl@CShellBrowser@@CAPEAU_ITEMIDLIST_ABSOLUTE@@PEBGH@Z
    static _ITEMIDLIST_ABSOLUTE * _PidlFromUrl(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionViewWindow@CShellBrowser@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    long _PositionViewWindow(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareInternetToolbar@CShellBrowser@@AEAAJPEAUIETHREADPARAM@@@Z
    long _PrepareInternetToolbar(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateMessage@CShellBrowser@@AEAAXI_K_JH@Z
    void _PropagateMessage(unsigned int, uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyBagSaveState@CShellBrowser@@AEAAXH@Z
    void _PropertyBagSaveState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryNewPalette@CShellBrowser@@AEAAHXZ
    int _QueryNewPalette();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadSettingsFromPropertyBag@CShellBrowser@@AEAAHPEAUIPropertyBag@@PEAUIETHREADPARAM@@@Z
    int _ReadSettingsFromPropertyBag(IPropertyBag *, IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeBrowserPalette@CShellBrowser@@AEAAXH@Z
    void _RealizeBrowserPalette(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshITBar@CShellBrowser@@AEAAXXZ
    void _RefreshITBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterAsDropTarget@CShellBrowser@@AEAAXXZ
    void _RegisterAsDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseNavigationState@CShellBrowser@@AEAAJXZ
    long _ReleaseNavigationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseToolbarItem@CShellBrowser@@AEAAXHH@Z
    void _ReleaseToolbarItem(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetFolderType@CShellBrowser@@AEAAJXZ
    long _ResetFolderType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeNextBorderHelper@CShellBrowser@@AEAAJIH@Z
    long _ResizeNextBorderHelper(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeView@CShellBrowser@@AEAAJXZ
    long _ResizeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SQMExplorerFrameState@CShellBrowser@@AEAAXPEAUIUnknown@@@Z
    void _SQMExplorerFrameState(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SafeFlushClipboard@CShellBrowser@@AEAAXXZ
    void _SafeFlushClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveCurrentViewState@CShellBrowser@@AEAAXXZ
    void _SaveCurrentViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveHistory@CShellBrowser@@AEAAJPEAUIStream@@@Z
    long _SaveHistory(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveITbarLayout@CShellBrowser@@AEAAJXZ
    long _SaveITbarLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveState@CShellBrowser@@AEAAXH@Z
    void _SaveState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveTopView@CShellBrowser@@AEAAXXZ
    void _SaveTopView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendChildren@CShellBrowser@@AEAAJPEAUHWND__@@HI_K_J@Z
    long _SendChildren(HWND__*, int, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAcceleratorMenu@CShellBrowser@@AEAAJPEAUHACCEL__@@@Z
    long _SetAcceleratorMenu(HACCEL__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBrowserBarState@CShellBrowser@@AEAAXIPEBU_GUID@@HPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _SetBrowserBarState(unsigned int, _GUID const *, int, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExternalBandMenuHelp@CShellBrowser@@AEAAXPEAUHMENU__@@I@Z
    void _SetExternalBandMenuHelp(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocus@CShellBrowser@@AEAAJPEAUSToolbarItem@@PEAUHWND__@@PEAUtagMSG@@@Z
    long _SetFocus(SToolbarItem *, HWND__*, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetITBarFolderType@CShellBrowser@@AEAAXPEBG@Z
    void _SetITBarFolderType(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIcon@CShellBrowser@@AEAAXXZ
    void _SetIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenu@CShellBrowser@@AEAA_NPEAUHMENU__@@@Z
    bool _SetMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuHelp@CShellBrowser@@AEAAXPEAUHMENU__@@IPEBG@Z
    void _SetMenuHelp(HMENU__*, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetReadyState@CShellBrowser@@AEAAXK@Z
    void _SetReadyState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRibbonVisible@CShellBrowser@@AEAAX_N@Z
    void _SetRibbonVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTitle@CShellBrowser@@AEAAXXZ
    void _SetTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWindowIcon@CShellBrowser@@AEAAXPEAUHWND__@@PEAUHICON__@@H@Z
    void _SetWindowIcon(HWND__*, HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAllowNavigateParent@CShellBrowser@@AEAAHXZ
    int _ShouldAllowNavigateParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShowRibbon@CShellBrowser@@AEAA_NPEAUIShellItem@@@Z
    bool _ShouldShowRibbon(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldTranslateAccelerator@CShellBrowser@@AEAAHPEBUtagMSG@@@Z
    int _ShouldTranslateAccelerator(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowControl@CShellBrowser@@AEAAKIH@Z
    unsigned long _ShowControl(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideBrowserBar@CShellBrowser@@AEAAPEBU_GUID@@HPEBU2@HPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    _GUID const * _ShowHideBrowserBar(int, _GUID const *, int, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideChildWindows@CShellBrowser@@AEAAJH@Z
    long _ShowHideChildWindows(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideProgress@CShellBrowser@@AEAAXXZ
    void _ShowHideProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowToolbar@CShellBrowser@@AEAAJPEAUIUnknown@@H@Z
    long _ShowToolbar(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchNavigationState@CShellBrowser@@AEAAJPEAUNAVIGATIONSTATE@@@Z
    long _SwitchNavigationState(NAVIGATIONSTATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncStatusBarVisibilityState@CShellBrowser@@AEAAXXZ
    void _SyncStatusBarVisibilityState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TBWindowHasFocus@CShellBrowser@@AEAAHI@Z
    int _TBWindowHasFocus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThunkTTNotify@CShellBrowser@@AEAA_JPEAUtagNMTTDISPINFOA@@@Z
    int64_t _ThunkTTNotify(tagNMTTDISPINFOA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranslateMenuMessage@CShellBrowser@@AEAAHPEAUHWND__@@IPEA_KPEA_J2@Z
    int _TranslateMenuMessage(HWND__*, unsigned int, uint64_t *, int64_t *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UIActivateView@CShellBrowser@@AEAAJIW4VIEWREASONTOACTIVATE@@@Z
    long _UIActivateView(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterAsDropTarget@CShellBrowser@@AEAAXXZ
    void _UnregisterAsDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBackForwardStateNow@CShellBrowser@@AEAAXXZ
    void _UpdateBackForwardStateNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBrowserPaletteInPlace@CShellBrowser@@AEAAJPEBUtagLOGPALETTE@@@Z
    long _UpdateBrowserPaletteInPlace(tagLOGPALETTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFolderSettings@CShellBrowser@@AEAAJPEAUIShellItem@@@Z
    long _UpdateFolderSettings(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFrame@CShellBrowser@@AEAAJPEAUIShellItem@@HPEAUIShellView@@PEAUHWND__@@PEAUIUnknown@@PEAPEAU4@@Z
    long _UpdateFrame(IShellItem *, int, IShellView *, HWND__*, IUnknown *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProgress@CShellBrowser@@AEAAXKK@Z
    void _UpdateProgress(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTravelLog@CShellBrowser@@AEAAJW4TRAVEL_LOG_OPTIONS_FLAGS@@@Z
    long _UpdateTravelLog(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewRectSize@CShellBrowser@@AEAAJXZ
    long _UpdateViewRectSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_setDescendentNavigate@CShellBrowser@@AEAAJXZ
    long _setDescendentNavigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_updateNavigationUI@CShellBrowser@@AEAAJXZ
    long _updateNavigationUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SendWERForCancelledNavigation@CShellBrowser@@CAKPEAX@Z
    static unsigned long s_SendWERForCancelledNavigation(void *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `_HandleFileSysChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetControlWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateTravelLog` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTravelLog` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateProgress` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetPaneState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_updateNavigationUI` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetNavigateState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetReadyState` | `void` | `Method` | `Pdb` | No (PDB) |
| `SaveHistoryEx` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SaveHistory` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetIconIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetWindowIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SyncStatusBarVisibilityState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SwitchNavigationState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateViewRectSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReleaseNavigationState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DefViewEventsSink` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnableModelessSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MayUnblockAsyncOperation` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnViewChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClearNavigationState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnGoto` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_NavigateToPidlAsync` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CanNavigate` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CancelPendingNavigationNow` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnsureTrackEvents` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateViewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SaveCurrentViewState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SaveTopView` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetViewStateItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetPropertyBag` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateFolderSettings` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReadSettingsFromPropertyBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_FillIEThreadParamFromCabsh` | `int` | `Method` | `Pdb` | No (PDB) |
| `_FillIEThreadParam` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FillIEThreadParamWorker` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CreateStatusBar` | `void` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CShellBrowser` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `_QueryNewPalette` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetAcceleratorMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CloseAndReleaseToolbars` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CleanupFrameIfNecessary` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReleaseToolbarItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetPidl` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_BrowseObjectInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleFailedNavigation` | `long` | `Method` | `Pdb` | No (PDB) |
| `Process` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnFrameStateChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DestroyRibbon` | `void` | `Method` | `Pdb` | No (PDB) |
| `WndProcBS` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MayTranslateAccelerator` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TranslateMenuMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetMenuBand` | `struct IMenuBand *` | `Method` | `Pdb` | No (PDB) |
| `_MayTranslateAcceleratorNoMenuband` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HasToolbarFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsExplorerFrameFocused` | `int` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ShouldTranslateAccelerator` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetWindowData` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetBrowserByIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindWindowByIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `GetBrowserIndex` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnSetCursor` | `int` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_SaveITbarLayout` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SQMExplorerFrameState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetExplorerPaneStateAndStatusBarVisibility` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetMenuBarVisibility` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResetFolderType` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetITBarFolderType` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnFSNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CommonHandleFileSysChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetITBar` | `struct IDockingWindow *` | `Method` | `Pdb` | No (PDB) |
| `_SaveState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsSaveStateAllowed` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_SetTitle` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTitle` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `OnNavigationResult` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnConnectionCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FillNavigationState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateRibbon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldShowRibbon` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_SetRibbonVisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsRibbonVisible` | `bool` | `Method` | `Pdb` | No (PDB) |
| `RestartInSeparateProcessIfAppropriate` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateRibbon` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetMenuSB` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetMenu` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SetBorderSpaceDW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetBorderDWHelper` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindTBar` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `_ShowHideChildWindows` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackForwardState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResizeNextBorderHelper` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResizeView` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBorderDW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnViewWindowActive` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveMenusSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestBorderSpace` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestBorderSpaceDW` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetStatusTextSB` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateBackForwardStateNow` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InvalidateRibbonCommandSet` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetViewFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UIActivateView` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetFocus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `OnTabletModeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsFileDialog` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_LoadBrowserHelperObjects` | `int` | `Method` | `Pdb` | No (PDB) |
| `RegisterWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowList` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureShellWindows` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NotifyCommandStateChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetViewBorderRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryStatus` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryActiveShellView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_PropertyBagSaveState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PositionViewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertMenusSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `Exec` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateBrowserWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDataChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnRename` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSave` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsActive` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNavigateState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetVID` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnWmSettingChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RefreshITBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_InfoIdmToCLSID` | `struct _GUID const *` | `Method` | `Pdb` | No (PDB) |
| `_BandClassInfoFromCmdID` | `struct BANDCLASSINFO *` | `Method` | `Pdb` | No (PDB) |
| `SetFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetBrowserBarState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PaletteChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SendChildren` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnadviseActiveStateChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MenuTemplate` | `struct HMENU__*` | `Method` | `Pdb` | No (PDB) |
| `_SafeFlushClipboard` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsExplorerBandVisible` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnFocusChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnClose` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnConfirmedClose` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RegisterAsDropTarget` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHistoryObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_CancelPendingNavigation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ColorsDirty` | `void` | `Method` | `Pdb` | No (PDB) |
| `ChooseBrowserLayout` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFolderViewOptions` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnFrameWindowActivateBS` | `long` | `Method` | `Pdb` | No (PDB) |
| `_IsRibbonMinimized` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_PropagateMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `SaveHistory` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFolderFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetClassID` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetGroupByProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetGroupSubsetCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSortColumns` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTitle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HasFocusIO` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `LockContainer` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnReadyStateChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetToolbarItems` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UIActivateIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `AdjustLayout` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExecChildren` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragOver` | `long` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AllocToolbarItem` | `int` | `Method` | `Pdb` | No (PDB) |
| `AdviseActiveStateChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetEnumerationTimeout` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSearchBoxTimerDelay` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SendControlMsg` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnUIActivate` | `void` | `Method` | `Pdb` | No (PDB) |
| `BrowseItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetDefaultSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `DragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `CShellBrowser` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `AfterWindowCreated` | `void` | `Method` | `Pdb` | No (PDB) |
| `BrowseObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureContextMenuPresenter` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContextMenuDismiss` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ActivateNavigation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireNavigateCompleteEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InitializeBrowserState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadHistory` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateToPidl` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnBrowserFrameActivate` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnCreate` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSetFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_PrepareInternetToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ShowControl` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_setDescendentNavigate` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForwardMessageToExplorerFrame` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UnregisterAsDropTarget` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnumObjects` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetColumnPropertyList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| `DisplayParseError` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoExpandedContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `Drop` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnableModeless` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindWindowByIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBorder` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDummyWindowData` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetLegacyBarsMenu` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPalette` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPendingItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPositionCookie` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewFrame` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewStateStream` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `HandleLaunchRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `Invoke` | `void` | `Method` | `Pdb` | No (PDB) |
| `InvokeLegacyBarsMenuCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsControlWindowShown` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsEvaluatingEdpPolicy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `LoadHistory` | `long` | `Method` | `Pdb` | No (PDB) |
| `LoadHistoryPosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnClose` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnFocusChangeIS` | `long` | `Method` | `Pdb` | No (PDB) |
| `ParseDisplayName` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `RefreshViewFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetActiveObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetAsDefFolderSettings` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetBorderSpace` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDropSourceEnterpriseId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetFolderViewOptions` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPositionCookie` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShowControlWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddBrowserBarMenuItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AppStarted` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ChangeMenuContent` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_CloseAllParents` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateBrowserPropSheetExt` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CycleFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CycleFocusHelper` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DoOptions` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnableMenuItemsByAttribs` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnsureAndNavigateBand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExecAllBands` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ExplorerTreeHasFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `_FindActiveTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FixToolbarFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ForwardViewMsg` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_GetBSForBar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetBandSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetBrowserBar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetBrowserBarMenu` | `struct HMENU__*` | `Method` | `Pdb` | No (PDB) |
| `_GetViewStream` | `struct IStream *` | `Method` | `Pdb` | No (PDB) |
| `_HideToolbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InfoCLSIDToIdm` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `_InitializeTravelLog` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InsertTravelLogItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsCurrentDocobjCLSID` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsHWNDInPreviewPaneTree` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsPreviewPaneFocused` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsSameToolbar` | `int` | `Method` | `Pdb` | No (PDB) |
| `_LaunchOptionsUsingView` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MayGetNextToolbarFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateWithinView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnContextMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnDestroy` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnEditMenuPopup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnExplorerBarMenuPopup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnGoMenuPopup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnInitMenuPopup` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnMenuSelect` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnRibbonVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnShellToolsMenuPopup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSysMenuClick` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnTimer` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnViewCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnViewMenuPopup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnViewNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OpenNewFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `_PidlFromUrl` | `struct _ITEMIDLIST_ABSOLUTE *` | `Method` | `Pdb` | No (PDB) |
| `_RealizeBrowserPalette` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetExternalBandMenuHelp` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetMenuHelp` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAllowNavigateParent` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ShowHideBrowserBar` | `struct _GUID const *` | `Method` | `Pdb` | No (PDB) |
| `_ShowHideProgress` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShowToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TBWindowHasFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ThunkTTNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_UpdateBrowserPaletteInPlace` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_ReadyState` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_SendWERForCancelledNavigation` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
