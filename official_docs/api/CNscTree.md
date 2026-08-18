# `global` :: `CNscTree`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `ExplorerFrame.dll`. Total members: **329**.

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

// Reconstructed from ExplorerFrame.dll by Windissect. 329 member(s).
class CNscTree {
public:
    class CNSCContextMenu;
    class CSelectionContextMenu;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNscTree@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSpecialCaseStringsToAccessibleName@CNscTree@@QEAAJPEAU_TREEITEM@@PEAUIShellItem@@PEAPEAG@Z
    long AddSpecialCaseStringsToAccessibleName(_TREEITEM *, IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CNscTree@@UEAAXPEAUIImmersiveContextMenuOwnerDrawHelper@@@Z
    virtual void Advise(IImmersiveContextMenuOwnerDrawHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendRoot@CNscTree@@UEAAJPEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    virtual long AppendRoot(IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseObject@CNscTree@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseObject(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNscTree@@QEAA@XZ
    CNscTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAll@CNscTree@@UEAAJXZ
    virtual long CollapseAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CNscTree@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFolder@CNscTree@@UEAAJXZ
    virtual long CreateNewFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CNscTree@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CNscTree@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModelessSB@CNscTree@@UEAAJH@Z
    virtual long EnableModelessSB(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureItemVisible@CNscTree@@UEAAJPEAUIShellItem@@@Z
    virtual long EnsureItemVisible(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleName@CNscTree@@QEAAJPEAUtagVARIANT@@PEAPEAG@Z
    long GetAccessibleName(tagVARIANT *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CNscTree@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlStyle@CNscTree@@UEAAJKPEAK@Z
    virtual long GetControlStyle(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlStyle2@CNscTree@@UEAAJW4NSTCSTYLE2@@PEAW42@@Z
    virtual long GetControlStyle2(int, int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlWindow@CNscTree@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetControlWindow(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetItem@CNscTree@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetCurrentTargetItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropPosition@CNscTree@@QEAAXPEAH@Z
    void GetDropPosition(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFont@CNscTree@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@PEAH@Z
    virtual long GetItemCustomState(IShellItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemHeight@CNscTree@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CNscTree@@UEAAJPEAUIShellItem@@PEAUtagRECT@@@Z
    virtual long GetItemRect(IShellItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CNscTree@@UEAAJPEAUIShellItem@@KPEAK@Z
    virtual long GetItemState(IShellItem *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextItem@CNscTree@@UEAAJPEAUIShellItem@@W4NSTCGNI@@PEAPEAU2@@Z
    virtual long GetNextItem(IShellItem *, int, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CNscTree@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootItems@CNscTree@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRootItems(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItems@CNscTree@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetSelectedItems(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopMargin@CNscTree@@UEAAJPEAI@Z
    virtual long GetTopMargin(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewStateStream@CNscTree@@UEAAJKPEAPEAUIStream@@@Z
    virtual long GetViewStateStream(unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CNscTree@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsDDT@CNscTree@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetWindowsDDT(HWND__* *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CNscTree@@UEAAJPEAUtagPOINT@@PEAPEAUIShellItem@@@Z
    virtual long HitTest(tagPOINT *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CNscTree@@UEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItems@CNscTree@@UEAAJPEAH@Z
    virtual long IncludeItems(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNscTree@@UEAAJPEAUHWND__@@PEAUtagRECT@@K@Z
    virtual long Initialize(HWND__*, tagRECT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMenusSB@CNscTree@@UEAAJPEAUHMENU__@@PEAUtagOleMenuGroupWidths@@@Z
    virtual long InsertMenusSB(HMENU__*, tagOleMenuGroupWidths *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRoot@CNscTree@@UEAAJHPEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    virtual long InsertRoot(int, IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CNscTree@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationFinished@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigationFinished(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationStarted@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigationStarted(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWinEvent@CNscTree@@UEAAJPEAUIShellItem@@K@Z
    virtual long NotifyWinEvent(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CNscTree@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CNscTree@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAccDefaultAction@CNscTree@@QEAAJPEAUtagVARIANT@@PEAPEAG@Z
    long OnGetAccDefaultAction(tagVARIANT *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAccRole@CNscTree@@QEAAJPEAUtagVARIANT@@0@Z
    long OnGetAccRole(tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateChangeNotify@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00PEAU_TREEITEM@@PEAUNSCITEMINFO@@W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    virtual long OnQIUpdateChangeNotify(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM *, NSCITEMINFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateCloudStateIcon@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@W4NscVisibleCloudStates@@I@Z
    virtual long OnQIUpdateCloudStateIcon(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateEnumDone@CNscTree@@UEAAJPEAUNSC_BKGDENUMDONEDATA@@@Z
    virtual long OnQIUpdateEnumDone(NSC_BKGDENUMDONEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateIcon@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HHKI@Z
    virtual long OnQIUpdateIcon(_TREEITEM *, NSCITEMINFO *, int, int, unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateInfoTip@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBGI@Z
    virtual long OnQIUpdateInfoTip(_TREEITEM *, NSCITEMINFO *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateOverlay@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdateOverlay(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdatePlus@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdatePlus(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateRegisterNotify@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@@Z
    virtual long OnQIUpdateRegisterNotify(_TREEITEM *, NSCITEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateValidation@CNscTree@@UEAAJPEAU_TREEITEM@@PEAUNSCITEMINFO@@HI@Z
    virtual long OnQIUpdateValidation(_TREEITEM *, NSCITEMINFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewWindowActive@CNscTree@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewWindowActive(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActiveShellView@CNscTree@@UEAAJPEAPEAUIShellView@@@Z
    virtual long QueryActiveShellView(IShellView * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNscTree@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CNscTree@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNscTree@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllRoots@CNscTree@@UEAAJXZ
    virtual long RemoveAllRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMenusSB@CNscTree@@UEAAJPEAUHMENU__@@@Z
    virtual long RemoveMenusSB(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRoot@CNscTree@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveRoot(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndEditItem@CNscTree@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long SelectAndEditItem(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendControlMsg@CNscTree@@UEAAJII_K_JPEA_J@Z
    virtual long SendControlMsg(unsigned int, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CNscTree@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlStyle@CNscTree@@UEAAJKK@Z
    virtual long SetControlStyle(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlStyle2@CNscTree@@UEAAJW4NSTCSTYLE2@@0@Z
    virtual long SetControlStyle2(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@H@Z
    virtual long SetDirectItemCustomState(IShellItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@CNscTree@@UEAAJPEAUIUnknown@@@Z
    virtual long SetFilter(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CNscTree@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CNscTree@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndentValue@CNscTree@@UEAAXH@Z
    virtual void SetIndentValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertionThresholdValue@CNscTree@@UEAAXH@Z
    virtual void SetInsertionThresholdValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntegralValue@CNscTree@@UEAAXH@Z
    virtual void SetIntegralValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCustomState@CNscTree@@UEAAJPEAUIShellItem@@H@Z
    virtual long SetItemCustomState(IShellItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemHeight@CNscTree@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemState@CNscTree@@UEAAJPEAUIShellItem@@KK@Z
    virtual long SetItemState(IShellItem *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuSB@CNscTree@@UEAAJPEAUHMENU__@@PEAXPEAUHWND__@@@Z
    virtual long SetMenuSB(HMENU__*, void *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPaddings@CNscTree@@UEAAXHH@Z
    virtual void SetPaddings(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateFlags@CNscTree@@UEAAJW4NSTCFLAGSPRIVATE@@@Z
    virtual long SetPrivateFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateImageList@CNscTree@@UEAAJPEAU_IMAGELIST@@@Z
    virtual long SetStateImageList(_IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatusTextSB@CNscTree@@UEAAJPEBG@Z
    virtual long SetStatusTextSB(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CNscTree@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CNscTree@@UEAAJPEBG@Z
    virtual long SetTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbarItems@CNscTree@@UEAAJPEAU_TBBUTTON@@II@Z
    virtual long SetToolbarItems(_TBBUTTON *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopMargin@CNscTree@@UEAAJI@Z
    virtual long SetTopMargin(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CNscTree@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowIsHidden@CNscTree@@UEAAXH@Z
    virtual void SetWindowIsHidden(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorSB@CNscTree@@UEAAJPEAUtagMSG@@G@Z
    virtual long TranslateAcceleratorSB(tagMSG *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeAdvise@CNscTree@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long TreeAdvise(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeUnadvise@CNscTree@@UEAAJK@Z
    virtual long TreeUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnAdvise@CNscTree@@UEAAXXZ
    virtual void UnAdvise();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExpandIDList@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_ExpandIDList(CNscTree *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SelectIDList@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_SelectIDList(CNscTree *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SelectIDListNoExpand@CNscTree@@SAJPEAV1@PEAUIShellItem@@@Z
    static long s_SelectIDListNoExpand(CNscTree *, IShellItem *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChange@CNscTree@@MEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00_J@Z
    virtual long _OnChange(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscTree@@MEAA@XZ
    virtual ~CNscTree();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTopMargin@CNscTree@@AEAAJXZ
    long ApplyTopMargin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterContextMenu@CNscTree@@AEAAXXZ
    void CleanupAfterContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoClassicMenu@CNscTree@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@AEBUtagPOINT@@PEAU_TREEITEM@@@Z
    void DoClassicMenu(IContextMenu *, HMENU__*, tagPOINT const &, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCuratedContextMenu@CNscTree@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@W4LOCATION_CONTEXT_FLAGS@@AEBUtagPOINT@@PEAU_TREEITEM@@PEAUIShellItem@@@Z
    void DoCuratedContextMenu(IContextMenu *, HMENU__*, int, tagPOINT const &, _TREEITEM *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDefaultActionWithItem@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long DoDefaultActionWithItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDivider@CNscTree@@AEAAXPEAUHDC__@@PEAU_TREEITEM@@@Z
    void DrawDivider(HDC__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextMenuPresenter@CNscTree@@AEAAJXZ
    long EnsureContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuTelemetryEvent@CNscTree@@AEAAXPEAUHMENU__@@IPEAUIContextMenu@@W4ContextMenuType@FileExplorerTelemetryCommon@@@Z
    void FireContextMenuTelemetryEvent(HMENU__*, unsigned int, IContextMenu *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuParentWindow@CNscTree@@AEAAPEAUHWND__@@XZ
    HWND__* GetContextMenuParentWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTextAlloc@CNscTree@@AEAAJPEAUHWND__@@PEAU_TREEITEM@@PEAPEAG@Z
    long GetItemTextAlloc(HWND__*, _TREEITEM *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationContext@CNscTree@@AEAA?AW4LOCATION_CONTEXT_FLAGS@@PEAU_TREEITEM@@@Z
    int GetLocationContext(_TREEITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumn@CNscTree@@AEAAJPEAUIShellFolder@@PEAK@Z
    long GetSortColumn(IShellFolder *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeItemDisplayName@CNscTree@@AEAAXPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@KPEAPEAG@Z
    void GetTreeItemDisplayName(IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *, unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileDialog@CNscTree@@AEAAHXZ
    int IsFileDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrast@CNscTree@@AEAA_NXZ
    bool IsHighContrast();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTreeItemIndexInDPA@CNscTree@@AEAA_NPEAV?$CDPA@UORDERITEM@@V?$CTContainer_PolicyUnOwned@UORDERITEM@@@@@@PEAUIShellFolder@@PEAU_TREEITEM@@HPEAH@Z
    bool IsTreeItemIndexInDPA(WindissectOpaque *, IShellFolder *, _TREEITEM *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveItemUpOrDown@CNscTree@@AEAAJ_N@Z
    long MoveItemUpOrDown(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CNscTree@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecurseSetItemIntegralAndPadding@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void RecurseSetItemIntegralAndPadding(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshThemeColors@CNscTree@@AEAAXXZ
    void RefreshThemeColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetIndent@CNscTree@@AEAAXXZ
    void ScaleAndSetIndent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleAndSetRowHeight@CNscTree@@AEAAXXZ
    void ScaleAndSetRowHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleDivider@CNscTree@@AEAAXXZ
    void ScaleDivider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomTooltipStyle@CNscTree@@AEAAXXZ
    void SetCustomTooltipStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageList@CNscTree@@AEAAXXZ
    void SetImageList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemIntegralAndPadding@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void SetItemIntegralAndPadding(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowMiniMenu@CNscTree@@AEAA_NPEAU_TREEITEM@@@Z
    bool ShouldShowMiniMenu(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncOrderItemWithTreeOrder@CNscTree@@AEAAXPEAU_TREEITEM@@PEAV?$CDPA@UORDERITEM@@V?$CTContainer_PolicyUnOwned@UORDERITEM@@@@@@@Z
    void SyncOrderItemWithTreeOrder(_TREEITEM *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEditIntegralAndPadding@CNscTree@@AEAAXAEAUtagTVITEMEXW@@PEAU_TREEITEM@@1@Z
    void TryEditIntegralAndPadding(tagTVITEMEXW &, _TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveDivider@CNscTree@@AEAAXPEAU_TREEITEM@@0@Z
    void TryMoveDivider(_TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDividers@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@@Z
    void UpdateDividers(_TREEITEM *, NSCITEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCustomNodeItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _AddCustomNodeItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToTree@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMIDLIST_RELATIVE@@HKPEAUIShellItemFilter@@H0HHHH@Z
    _TREEITEM * _AddItemToTree(_TREEITEM *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_RELATIVE & volatile *, int, unsigned long, IShellItemFilter *, int, _TREEITEM *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToExpandingIconsDSA@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _AddToExpandingIconsDSA(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToLegacySFC@CNscTree@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@@Z
    void _AddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyCmd@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUIContextMenu@@IPEBG@Z
    void _ApplyCmd(_TREEITEM *, IContextMenu *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignPidl@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEFBU_ITEMID_CHILD@@H@Z
    void _AssignPidl(_TREEITEM *, NSCITEMINFO *, _ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollapseItems@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _CollapseItems(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareIDs@CNscTree@@AEAAJPEAUIShellFolder@@KPEFBU_ITEMID_CHILD@@1@Z
    long _CompareIDs(IShellFolder *, unsigned long, _ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertChildId@CNscTree@@AEAAJW4FOLDER_ENUM_MODE@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU4@PEAPEAU5@@Z
    long _ConvertChildId(int, _ITEMIDLIST_ABSOLUTE const *, IShellFolder *, _ITEMID_CHILD & volatile *, IShellFolder * *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAccName@CNscTree@@AEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreateAccName(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateContextMenu@CNscTree@@AEAAPEAUHMENU__@@PEAUIContextMenu@@PEAU_TREEITEM@@W4Mode@FileExplorerContextMenu@@W4LOCATION_CONTEXT_FLAGS@@@Z
    HMENU__* _CreateContextMenu(IContextMenu *, _TREEITEM *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewFolder@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long _CreateNewFolder(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTreeview@CNscTree@@AEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreateTreeview(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteHotItem@CNscTree@@AEAAXXZ
    void _DeleteHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItemWithBeforeDeleteEvent@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _DeleteItemWithBeforeDeleteEvent(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawIcon@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUHDC__@@HPEBUtagRECT@@K@Z
    void _DrawIcon(_TREEITEM *, HDC__*, int, tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawItem@CNscTree@@AEAAXPEAU_TREEITEM@@PEBGPEAUHDC__@@PEBUtagRECT@@KHKK@Z
    void _DrawItem(_TREEITEM *, unsigned short const *, HDC__*, tagRECT const *, unsigned long, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DtRegister@CNscTree@@AEAAXXZ
    void _DtRegister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureScheduler@CNscTree@@AEAAJXZ
    long _EnsureScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureVisible@CNscTree@@AEAAXPEAU_TREEITEM@@W4ENSURE_VISIBLE_FLAGS@@@Z
    void _EnsureVisible(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterNewFolderEditMode@CNscTree@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _EnterNewFolderEditMode(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumBackgroundDone@CNscTree@@AEAAXPEAUNSC_BKGDENUMDONEDATA@@@Z
    void _EnumBackgroundDone(NSC_BKGDENUMDONEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Expand@CNscTree@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _Expand(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandNode@CNscTree@@AEAAJPEAU_TREEITEM@@IH@Z
    long _ExpandNode(_TREEITEM *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandToItem@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    _TREEITEM * _ExpandToItem(_ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandingIconsDSAUpdate@CNscTree@@AEAAXXZ
    void _ExpandingIconsDSAUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChild@CNscTree@@AEAAPEAU_TREEITEM@@PEAUIShellFolder@@PEAU2@PEFBU_ITEMID_CHILD@@@Z
    _TREEITEM * _FindChild(IShellFolder *, _TREEITEM *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChildTreeItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    _TREEITEM * _FindChildTreeItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindFromRoot@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@1H@Z
    _TREEITEM * _FindFromRoot(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CNscTree@@AEAAJPEAUIShellItem@@HPEAPEAU_TREEITEM@@_N@Z
    long _FindItem(IShellItem *, int, _TREEITEM * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRootForItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    _TREEITEM * _FindRootForItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireClickEvent@CNscTree@@AEAAJPEAU_TREEITEM@@KK@Z
    long _FireClickEvent(_TREEITEM *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlagsFromStyles@CNscTree@@AEAAXKPEAK0@Z
    void _FlagsFromStyles(unsigned long, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributesFromSelection@CNscTree@@AEAAKK@Z
    unsigned long _GetAttributesFromSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildren@CNscTree@@AEAAHPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@@Z
    int _GetChildren(IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuFromSelection@CNscTree@@AEAAJPEAU_TREEITEM@@HPEAPEAUIContextMenu@@PEAPEAUIShellItem@@@Z
    long _GetContextMenuFromSelection(_TREEITEM *, int, IContextMenu * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumFlags@CNscTree@@AEAAKPEAU_TREEITEM@@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@@Z
    unsigned long _GetEnumFlags(_TREEITEM *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstRootPidl@CNscTree@@AEAAPEAU_ITEMIDLIST_ABSOLUTE@@XZ
    _ITEMIDLIST_ABSOLUTE * _GetFirstRootPidl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullIDList@CNscTree@@AEAAPEAU_ITEMIDLIST_ABSOLUTE@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    _ITEMIDLIST_ABSOLUTE * _GetFullIDList(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLock@CNscTree@@AEAAJPEAPEAVCNscLock@@@Z
    long _GetLock(CNscLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOrderStream@CNscTree@@AEAAPEAUIStream@@PEBU_ITEMIDLIST_ABSOLUTE@@K@Z
    IStream * _GetOrderStream(_ITEMIDLIST_ABSOLUTE const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPreviousTopLevelTreeItem@CNscTree@@AEAAPEAU_TREEITEM@@PEAU2@@Z
    _TREEITEM * _GetPreviousTopLevelTreeItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CNscTree@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _GetSelectedItem(_ITEMIDLIST_ABSOLUTE * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemFolder@CNscTree@@AEAAJPEAU_TREEITEM@@AEBU_GUID@@PEAPEAX@Z
    long _GetTreeItemFolder(_TREEITEM *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemIDList@CNscTree@@AEAAPEFBU_ITEMIDLIST_RELATIVE@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    _ITEMIDLIST_RELATIVE & volatile * _GetTreeItemIDList(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemInfo@CNscTree@@AEAAPEAUNSCITEMINFO@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    NSCITEMINFO * _GetTreeItemInfo(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeItemParentFolder@CNscTree@@AEAAJPEAU_TREEITEM@@AEBU_GUID@@PEAPEAXPEAPEFBU_ITEMID_CHILD@@@Z
    long _GetTreeItemParentFolder(_TREEITEM *, _GUID const &, void * *, _ITEMID_CHILD & volatile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTreeOrderItem@CNscTree@@AEAAPEAUORDERITEM@@PEAUHWND__@@PEAU_TREEITEM@@@Z
    ORDERITEM * _GetTreeOrderItem(HWND__*, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWinIniChange@CNscTree@@AEAAJXZ
    long _HandleWinIniChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideFloater@CNscTree@@AEAAXH@Z
    void _HideFloater(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFloater@CNscTree@@AEAAXXZ
    void _InitFloater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertChild@CNscTree@@AEAAJPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@HHHPEAPEAU2@@Z
    long _InsertChild(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *, int, int, int, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertRoot@CNscTree@@AEAAJPEAU_TREEITEM@@PEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    long _InsertRoot(_TREEITEM *, IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvalidateImageIndex@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _InvalidateImageIndex(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuCommand@CNscTree@@AEAAJPEBG@Z
    long _InvokeContextMenuCommand(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExpandable@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsExpandable(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFlatNode@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsFlatNode(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemNameInTree@CNscTree@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsItemNameInTree(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLastChild@CNscTree@@AEBA_NPEAU_TREEITEM@@@Z
    bool _IsLastChild(_TREEITEM *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOrdered@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsOrdered(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTreeItemVisible@CNscTree@@AEAAHPEAU_TREEITEM@@@Z
    int _IsTreeItemVisible(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LabelEditIsNewValueValid@CNscTree@@AEAAHPEAUtagTVDISPINFOW@@@Z
    int _LabelEditIsNewValueValid(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSF@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAHH@Z
    long _LoadSF(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeAddToLegacySFC@CNscTree@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@@Z
    void _MaybeAddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModeSupportsOrder@CNscTree@@AEAA_NPEAU_TREEITEM@@@Z
    bool _ModeSupportsOrder(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseInTree@CNscTree@@AEAAHXZ
    int _MouseInTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveNode@CNscTree@@AEAAHHHPEFBU_ITEMID_CHILD@@@Z
    int _MoveNode(int, int, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginDrag@CNscTree@@AEAAXPEAUtagNMTREEVIEWW@@@Z
    void _OnBeginDrag(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginLabelEdit@CNscTree@@AEAA_JPEAUtagTVDISPINFOW@@@Z
    int64_t _OnBeginLabelEdit(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDNotify@CNscTree@@AEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    int64_t _OnCDNotify(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChangeNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@J11W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    void _OnChangeNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CNscTree@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CNscTree@@AEAA_JFFW4Mode@FileExplorerContextMenu@@PEAUtagPOINT@@@Z
    int64_t _OnContextMenu(short, short, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDeleteItem@CNscTree@@AEAAJPEAUtagNMTREEVIEWW@@@Z
    long _OnDeleteItem(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndLabelEdit@CNscTree@@AEAA_JPEAUtagTVDISPINFOW@@@Z
    int64_t _OnEndLabelEdit(tagTVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetDisplayInfo@CNscTree@@AEAAXPEAUtagTVDISPINFOEXW@@@Z
    void _OnGetDisplayInfo(tagTVDISPINFOEXW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CNscTree@@AEAAXPEAUtagNMTVGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMTVGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemExpanding@CNscTree@@AEAAHPEAU_TREEITEM@@IHH@Z
    int _OnItemExpanding(_TREEITEM *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemExpandingMsg@CNscTree@@AEAAHPEAUtagNMTREEVIEWW@@@Z
    int _OnItemExpandingMsg(tagNMTREEVIEWW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardInput@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnKeyboardInput(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CNscTree@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyCreate@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@10@Z
    long _OnSHNotifyCreate(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyDelete@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1PEAPEAU2@@Z
    long _OnSHNotifyDelete(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyRename@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@11W4CHANGENOTIFY_CALLBACK_FLAGS@@@Z
    long _OnSHNotifyRename(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyUpdateDir@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    long _OnSHNotifyUpdateDir(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSHNotifyUpdateItem@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    void _OnSHNotifyUpdateItem(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelChange@CNscTree@@AEAAHXZ
    int _OnSelChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetCursor@CNscTree@@AEAA_JPEAUtagNMMOUSE@@@Z
    int64_t _OnSetCursor(tagNMMOUSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetSelection@CNscTree@@AEAAXXZ
    void _OnSetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSubclassKeyboardInput@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnSubclassKeyboardInput(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowCleanup@CNscTree@@AEAAJXZ
    long _OnWindowCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistChildOrder@CNscTree@@AEAAXPEAU_TREEITEM@@_N@Z
    void _PersistChildOrder(_TREEITEM *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QuerySelection@CNscTree@@AEAAJPEAPEAUIContextMenu@@PEAPEAU_TREEITEM@@@Z
    long _QuerySelection(IContextMenu * *, _TREEITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReExtractIcon@CNscTree@@AEAAXPEAUtagNMTVASYNCDRAW@@@Z
    void _ReExtractIcon(tagNMTVASYNCDRAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecursiveRegisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RecursiveRegisterNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecursiveUnregisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RecursiveUnregisterNotify(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawLastHotItem@CNscTree@@AEAAXXZ
    void _RedrawLastHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Refresh@CNscTree@@AEAAJXZ
    long _Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshHotItem@CNscTree@@AEAAXXZ
    void _RefreshHotItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _RegisterNotify(_TREEITEM *, NSCITEMINFO *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveEmptyTextItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _RemoveEmptyTextItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromExpandingIconsDSA@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _RemoveFromExpandingIconsDSA(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectItem@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HHH@Z
    _TREEITEM * _SelectItem(_ITEMIDLIST_ABSOLUTE const *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectPidl@CNscTree@@AEAAPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    _TREEITEM * _SelectPidl(_ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExStyle@CNscTree@@AEAAKK@Z
    unsigned long _SetExStyle(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPaddingToFirstTreeItem@CNscTree@@AEAAXPEAU_TREEITEM@@H@Z
    void _SetPaddingToFirstTreeItem(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectedItem@CNscTree@@AEAAJPEAUIShellItem@@@Z
    long _SetSelectedItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectedItemNoExpand@CNscTree@@AEAAJPEAUIShellItem@@@Z
    long _SetSelectedItemNoExpand(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStyle@CNscTree@@AEAAKK@Z
    unsigned long _SetStyle(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShellItemForTreeItem@CNscTree@@AEAAJHPEAU_TREEITEM@@PEAPEAUIShellItem@@@Z
    long _ShellItemForTreeItem(int, _TREEITEM *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldApplyPadding@CNscTree@@AEAAHPEAU_TREEITEM@@0@Z
    int _ShouldApplyPadding(_TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInsertChild@CNscTree@@AEAAHPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldInsertChild(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInsertChildCheckPin@CNscTree@@AEAAHPEAU_TREEITEM@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldInsertChildCheckPin(_TREEITEM *, IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShow@CNscTree@@AEAAHPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    int _ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowFloater@CNscTree@@AEAAXUtagRECT@@PEAU_TREEITEM@@W4tagFLOATERTYPE@@@Z
    void _ShowFloater(tagRECT, _TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Sort@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUIShellFolder@@HK@Z
    void _Sort(_TREEITEM *, IShellFolder *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SortByName@CNscTree@@AEAAJPEAU_TREEITEM@@@Z
    long _SortByName(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartBackgroundEnum@CNscTree@@AEAAJPEAU_TREEITEM@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAHHH@Z
    long _StartBackgroundEnum(_TREEITEM *, _ITEMIDLIST_ABSOLUTE const *, int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClass@CNscTree@@AEAAXXZ
    void _SubClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClassTreeWndProc@CNscTree@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubClassTreeWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SupportsCustomNode@CNscTree@@AEAAHXZ
    int _SupportsCustomNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TVStateFromFlags@CNscTree@@AEAAKK@Z
    unsigned long _TVStateFromFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeCompare@CNscTree@@CAH_J00@Z
    static int _TreeCompare(int64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeGhostCutItem@CNscTree@@AEAAXPEAU_TREEITEM@@@Z
    void _TreeGhostCutItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeInvalidateItemInfo@CNscTree@@AEAAXPEAU_TREEITEM@@I@Z
    void _TreeInvalidateItemInfo(_TREEITEM *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeOrder@CNscTree@@CAH_J00@Z
    static int _TreeOrder(int64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeRemoveCutState@CNscTree@@AEAAJXZ
    long _TreeRemoveCutState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TreeSetItemState@CNscTree@@AEAAXPEAU_TREEITEM@@II@Z
    void _TreeSetItemState(_TREEITEM *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnSubClass@CNscTree@@AEAAXPEAUHWND__@@@Z
    void _UnSubClass(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterNotify@CNscTree@@AEAAXPEAU_TREEITEM@@PEAUNSCITEMINFO@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _UnregisterNotify(_TREEITEM *, NSCITEMINFO *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDir@CNscTree@@AEAAJPEAU_TREEITEM@@H@Z
    long _UpdateDir(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemDisplayInfo@CNscTree@@AEAAHKPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAU_TREEITEM@@PEAH3@Z
    int _UpdateItemDisplayInfo(unsigned long, IShellFolder *, _ITEMID_CHILD & volatile *, _TREEITEM *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WasRenamed@CNscTree@@AEAAHPEAUIShellFolder@@PEAU_ITEMID_CHILD@@@Z
    int _WasRenamed(IShellFolder *, _ITEMID_CHILD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SFCDestroyCB@CNscTree@@CAHPEAUSFCITEM@1@PEAX@Z
    static int s_SFCDestroyCB(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubClassTreeWndProc@CNscTree@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubClassTreeWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CNscTree@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `_OnDeleteItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UnregisterNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateChangeNotify` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnChangeNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `_LoadSF` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateDir` | `long` | `Method` | `Pdb` | No (PDB) |
| `_StartBackgroundEnum` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureScheduler` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetChildren` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetEnumFlags` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_GetLock` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddToExpandingIconsDSA` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_UnSubClass` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnItemExpandingMsg` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnItemExpanding` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsExpandable` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetSelectedItems` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `TryMoveDivider` | `void` | `Method` | `Pdb` | No (PDB) |
| `HitTestDDT` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSetSelection` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ConvertChildId` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetItemState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateDividers` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetTreeItemInfo` | `struct NSCITEMINFO *` | `Method` | `Pdb` | No (PDB) |
| `_OnSHNotifyCreate` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ModeSupportsOrder` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_OnCDNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_ShellItemForTreeItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetTreeItemParentFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetNextItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDirectItemCustomState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_FindItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindChildTreeItem` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_FindFromRoot` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_GetTreeItemFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetFullIDList` | `struct _ITEMIDLIST_ABSOLUTE *` | `Method` | `Pdb` | No (PDB) |
| `_RegisterNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdatePlus` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `OnQIUpdateCloudStateIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SupportsCustomNode` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetSelectedItemNoExpand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindChild` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_FindRootForItem` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `EnsureItemVisible` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureVisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsTreeItemVisible` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InsertChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateEnumDone` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnumBackgroundDone` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetImageList` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetFilter` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnWindowCleanup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSHNotifyDelete` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSHNotifyRename` | `long` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CNscTree` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `CNscTree` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `s_SubClassTreeWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_SubClassTreeWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_GetTreeOrderItem` | `struct ORDERITEM *` | `Method` | `Pdb` | No (PDB) |
| `_OnBeginDrag` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldInsertChildCheckPin` | `int` | `Method` | `Pdb` | No (PDB) |
| `_TreeOrder` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetTreeItemDisplayName` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_ShouldInsertChild` | `int` | `Method` | `Pdb` | No (PDB) |
| `RefreshThemeColors` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetCustomTooltipStyle` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsHighContrast` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_OnNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnSHNotifyUpdateItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AssignPidl` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InvalidateImageIndex` | `void` | `Method` | `Pdb` | No (PDB) |
| `_TreeInvalidateItemInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReExtractIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateItemDisplayInfo` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetTreeItemIDList` | `struct _ITEMIDLIST_RELATIVE & volatile *` | `Method` | `Pdb` | No (PDB) |
| `_TreeCompare` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CompareIDs` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsTreeItemIndexInDPA` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_CreateAccName` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `_AddItemToTree` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_ShouldShow` | `int` | `Method` | `Pdb` | No (PDB) |
| `TryEditIntegralAndPadding` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetItemIntegralAndPadding` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_ShouldApplyPadding` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsFlatNode` | `int` | `Method` | `Pdb` | No (PDB) |
| `_PersistChildOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `SyncOrderItemWithTreeOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `GetSortColumn` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnSHNotifyUpdateDir` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSetCursor` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_RemoveFromExpandingIconsDSA` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleWinIniChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetItemState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetAccessibleName` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `AddSpecialCaseStringsToAccessibleName` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireClickEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateOverlay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetOrderStream` | `struct IStream *` | `Method` | `Pdb` | No (PDB) |
| `DrawDivider` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetControlStyle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_AddCustomNodeItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MaybeAddToLegacySFC` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetSelectedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SelectItem` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_SelectPidl` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `s_ExpandIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Expand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExpandToItem` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_SubClass` | `void` | `Method` | `Pdb` | No (PDB) |
| `TreeAdvise` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FlagsFromStyles` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ExpandNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGetAccRole` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnGetInfoTip` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HideFloater` | `void` | `Method` | `Pdb` | No (PDB) |
| `_TVStateFromFlags` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `ScaleDivider` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DtRegister` | `void` | `Method` | `Pdb` | No (PDB) |
| `HitTest` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetTopMargin` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ApplyTopMargin` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSelChange` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetWindowsDDT` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetStateImageList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_CreateTreeview` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `AppendRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InsertRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFont` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetExStyle` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `ScaleAndSetIndent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetDropPosition` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemHeight` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `BrowseObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnableModelessSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetControlWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InsertMenusSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnViewWindowActive` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveMenusSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `SendControlMsg` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetMenuSB` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetStatusTextSB` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetToolbarItems` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetWatermark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `TranslateAcceleratorSB` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetContextMenuFromSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_IsLastChild` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_SetStyle` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `GetItemRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetItemHeight` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetControlStyle2` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnSubclassKeyboardInput` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_RemoveEmptyTextItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetIntegralValue` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_ExpandingIconsDSAUpdate` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetPrivateFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Advise` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetInsertionThresholdValue` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_IsOrdered` | `int` | `Method` | `Pdb` | No (PDB) |
| `_DrawItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateValidation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetSelectedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_IsItemNameInTree` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetIndentValue` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_Sort` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetPaddings` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_OnCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_DeleteItemWithBeforeDeleteEvent` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnContextMenu` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnGetDisplayInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Refresh` | `long` | `Method` | `Pdb` | No (PDB) |
| `TreeUnadvise` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_SelectIDListNoExpand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TreeRemoveCutState` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_SelectIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryActiveShellView` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetViewStateStream` | `long` | `Accessor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: protected: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: protected: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
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
| `CleanupAfterContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `CollapseAll` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateNewFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoClassicMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoCuratedContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoDefaultActionWithItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoExpandedContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `Drop` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureContextMenuPresenter` | `long` | `Method` | `Pdb` | No (PDB) |
| `FireContextMenuTelemetryEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetContextMenuParentWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetControlStyle2` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetControlStyle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentTargetItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemCustomState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemTextAlloc` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetLocationContext` | `enum LOCATION_CONTEXT_FLAGS` | `Accessor` | `Pdb` | No (PDB) |
| `GetObjectDDT` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRootItems` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTopMargin` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IncludeItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `Invoke` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsFileDialog` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `MoveItemUpOrDown` | `long` | `Method` | `Pdb` | No (PDB) |
| `NavigationFinished` | `long` | `Method` | `Pdb` | No (PDB) |
| `NavigationStarted` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifyWinEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContextMenuDismiss` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnDPIChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnDropDDT` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGetAccDefaultAction` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateInfoTip` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnQIUpdateRegisterNotify` | `long` | `Method` | `Pdb` | No (PDB) |
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
| `RecurseSetItemIntegralAndPadding` | `void` | `Method` | `Pdb` | No (PDB) |
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
| `RemoveAllRoots` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `ScaleAndSetRowHeight` | `void` | `Method` | `Pdb` | No (PDB) |
| `SelectAndEditItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetFocus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetFont` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetItemCustomState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowIsHidden` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldShowMiniMenu` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UnAdvise` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AddToLegacySFC` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ApplyCmd` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CollapseItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateContextMenu` | `struct HMENU__*` | `Method` | `Pdb` | No (PDB) |
| `_CreateNewFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DeleteHotItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DrawIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnterNewFolderEditMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetAttributesFromSelection` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_GetFirstRootPidl` | `struct _ITEMIDLIST_ABSOLUTE *` | `Method` | `Pdb` | No (PDB) |
| `_GetPreviousTopLevelTreeItem` | `struct _TREEITEM *` | `Method` | `Pdb` | No (PDB) |
| `_InitFloater` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InvokeContextMenuCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LabelEditIsNewValueValid` | `int` | `Method` | `Pdb` | No (PDB) |
| `_MouseInTree` | `int` | `Method` | `Pdb` | No (PDB) |
| `_MoveNode` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnBeginLabelEdit` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnEndLabelEdit` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnKeyboardInput` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_QuerySelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RecursiveRegisterNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RecursiveUnregisterNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RedrawLastHotItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RefreshHotItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetPaddingToFirstTreeItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShowFloater` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SortByName` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TreeGhostCutItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_TreeSetItemState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_WasRenamed` | `int` | `Method` | `Pdb` | No (PDB) |
| `s_SFCDestroyCB` | `int` | `Method` | `Pdb` | No (PDB) |
