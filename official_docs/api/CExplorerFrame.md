# `global` :: `CExplorerFrame`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `ExplorerFrame.dll`. Total members: **223**.

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

// Reconstructed from ExplorerFrame.dll by Windissect. 223 member(s).
class CExplorerFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessagePumpCallback@CExplorerFrame@@UEAAJPEAUIExplorerFrameCallback@@@Z
    virtual long AddMessagePumpCallback(IExplorerFrameCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessagePumpOneTimeIdleCallback@CExplorerFrame@@UEAAJPEAUIExplorerFrameCallback@@@Z
    virtual long AddMessagePumpOneTimeIdleCallback(IExplorerFrameCallback *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerFrame@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTab@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4NewTabEntryPoint@@PEAU_GUID@@@Z
    virtual long AddTab(_ITEMIDLIST_ABSOLUTE const *, int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTabAtIndex@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4NewTabEntryPoint@@HPEAU_GUID@@@Z
    virtual long AddTabAtIndex(_ITEMIDLIST_ABSOLUTE const *, int, int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToolbar@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBGK@Z
    virtual long AddToolbar(IUnknown *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CExplorerFrame@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CExplorerFrame@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CExplorerFrame@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CExplorerFrame@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainCallbackQueue@CExplorerFrame@@QEAAXPEAV?$CDPA@UIExplorerFrameCallback@@V?$CTContainer_PolicyUnOwned@UIExplorerFrameCallback@@@@@@@Z
    void DrainCallbackQueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CExplorerFrame@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CExplorerFrame@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExplorerTimerCallback@CExplorerFrame@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void ExplorerTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindToolbar@CExplorerFrame@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long FindToolbar(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameMessagePump@CExplorerFrame@@QEAAXXZ
    void FrameMessagePump();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEAUtagRECT@@@Z
    virtual long GetBorderDW(IUnknown *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowser@CExplorerFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetBrowser(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMode@CExplorerFrame@@UEAAJPEAW4SHELL_BROWSER_FRAME_MODE@@@Z
    virtual long GetFrameMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameOptions@CExplorerFrame@@UEAAJPEAK@Z
    virtual long GetFrameOptions(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameRect@CExplorerFrame@@UEAAJPEAUtagRECT@@@Z
    virtual long GetFrameRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CExplorerFrame@@UEAAJPEAJ000@Z
    virtual long GetPosition(long *, long *, long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabDataById@CExplorerFrame@@UEAAJPEAUFileExplorerTabData@@@Z
    virtual long GetTabDataById(FileExplorerTabData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CExplorerFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCloseOnTabs@CExplorerFrame@@QEAAHUtagMSG@@@Z
    int HandleCloseOnTabs(tagMSG);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CExplorerFrame@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExplorerFrame@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CExplorerFrame@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorOn@CExplorerFrame@@UEAAJPEAH@Z
    virtual long IsMonitorOn(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CExplorerFrame@@UEAAJXZ
    virtual long IsVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowInPrelaunchState@CExplorerFrame@@UEAAHXZ
    virtual int IsWindowInPrelaunchState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@CExplorerFrame@@UEAAJXZ
    virtual long MakeVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSelectedTabToPosition@CExplorerFrame@@QEAAJI@Z
    long MoveSelectedTabToPosition(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveTabToNewWindow@CExplorerFrame@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long MoveTabToNewWindow(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserClosed@CExplorerFrame@@UEAAJXZ
    virtual long OnBrowserClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserCreated@CExplorerFrame@@UEAAJXZ
    virtual long OnBrowserCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserStateChanged@CExplorerFrame@@UEAAJK@Z
    virtual long OnBrowserStateChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragRegionOffsetChanged@CExplorerFrame@@UEAAJJ@Z
    virtual long OnDragRegionOffsetChanged(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedViewStartedToShow@CExplorerFrame@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@U_GUID@@PEAD@Z
    virtual void OnNavigatedViewStartedToShow(_ITEMIDLIST_ABSOLUTE const *, _GUID, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrelaunchedViewStartedToShow@CExplorerFrame@@UEAAXXZ
    virtual void OnPrelaunchedViewStartedToShow();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CExplorerFrame@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CExplorerFrame@@UEAAJPEBU_GUID@@KPEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD *, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewLoadedOnNextViewShown@CExplorerFrame@@UEAAXHU_GUID@@@Z
    virtual void RaiseViewLoadedOnNextViewShown(int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNavigationEventHandler@CExplorerFrame@@UEAAJPEAUIShellNavigationBand@@PEAK@Z
    virtual long RegisterNavigationEventHandler(IShellNavigationBand *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSearchEventHandler@CExplorerFrame@@UEAAJPEAUIShellSearchBand@@PEAK@Z
    virtual long RegisterSearchEventHandler(IShellSearchBand *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTabEventsHandler@CExplorerFrame@@UEAAJPEAUIFileExplorerTabEventsHandler@@PEAK@Z
    virtual long RegisterTabEventsHandler(IFileExplorerTabEventsHandler *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerFrame@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTab@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long RemoveTab(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToolbar@CExplorerFrame@@UEAAJPEAUIUnknown@@K@Z
    virtual long RemoveToolbar(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTabDragCompletedInternal@CExplorerFrame@@UEAAJXZ
    virtual long ReportTabDragCompletedInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTabDragStartedInternal@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long ReportTabDragStartedInternal(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBorderSpaceDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long RequestBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartInSeparateProcess@CExplorerFrame@@UEAAJPEAUIShellItem@@H@Z
    virtual long RestartInSeparateProcess(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveFrameState@CExplorerFrame@@UEAAJXZ
    virtual long SaveFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTab@CExplorerFrame@@UEAAJU_GUID@@@Z
    virtual long SelectTab(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderSpaceDW@CExplorerFrame@@UEAAJPEAUIUnknown@@PEBUtagRECT@@@Z
    virtual long SetBorderSpaceDW(IUnknown *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CExplorerFrame@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameMode@CExplorerFrame@@UEAAJW4SHELL_BROWSER_FRAME_MODE@@@Z
    virtual long SetFrameMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameOptions@CExplorerFrame@@UEAAJK@Z
    virtual long SetFrameOptions(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameTitle@CExplorerFrame@@QEAAXPEBGU_GUID@@@Z
    void SetFrameTitle(unsigned short const *, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CExplorerFrame@@UEAAJJJJJI@Z
    virtual long SetPosition(long, long, long, long, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRibbonHeight@CExplorerFrame@@UEAAJI@Z
    virtual long SetRibbonHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabProgress@CExplorerFrame@@QEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJAEBU_GUID@@@Z
    void SetTabProgress(int, long, long, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CExplorerFrame@@UEAAJH@Z
    virtual long SetVisible(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPrecreatedWindow@CExplorerFrame@@UEAAJPEBULAUNCH_REQUEST_ARGS@@@Z
    virtual long ShowPrecreatedWindow(LAUNCH_REQUEST_ARGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CExplorerFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CExplorerFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterNavigationEventHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterNavigationEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSearchEventHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterSearchEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTabEventsHandler@CExplorerFrame@@UEAAJK@Z
    virtual long UnregisterTabEventsHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlDragCompleted@CExplorerFrame@@UEAAXXZ
    virtual void XamlDragCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlDragStarted@CExplorerFrame@@UEAAXXZ
    virtual void XamlDragStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveClientRect@CExplorerFrame@@UEAAJPEAUtagRECT@@@Z
    virtual long get_EffectiveClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReservedBorder@CExplorerFrame@@UEAAJPEAUtagSIZE@@@Z
    virtual long get_ReservedBorder(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@CExplorerFrame@@UEAAJPEAJ@Z
    virtual long get_TitleBarHeight(long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerFrame@@IEAA@PEAUIETHREADPARAM@@@Z
    CExplorerFrame(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultFocus@CExplorerFrame@@MEAAXXZ
    virtual void _SetDefaultFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerFrame@@MEAA@XZ
    virtual ~CExplorerFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRestartList_Tabs@CExplorerFrame@@AEAAJXZ
    long AddToRestartList_Tabs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeInitialWindowLocation@CExplorerFrame@@AEAAXPEAU_ITEMIDLIST_ABSOLUTE@@PEAH111@Z
    void ComputeInitialWindowLocation(_ITEMIDLIST_ABSOLUTE *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMinimumFrameSize@CExplorerFrame@@AEBAXPEAH0@Z
    void ComputeMinimumFrameSize(int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTargetWindowPlacement@CExplorerFrame@@AEAAXPEAUIETHREADPARAM@@PEAH111@Z
    void ComputeTargetWindowPlacement(IETHREADPARAM *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUserActivity@CExplorerFrame@@CA?AUUserActivity@UserActivities@ApplicationModel@Windows@winrt@@PEAUIShellItem2@@@Z
    static WindissectOpaque CreateUserActivity(IShellItem2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDispatcherQueueController@CExplorerFrame@@AEAAJXZ
    long EnsureDispatcherQueueController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowsXamlManager@CExplorerFrame@@AEAAXXZ
    void EnsureWindowsXamlManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendFrameIntoClient@CExplorerFrame@@AEAA_NXZ
    bool ExtendFrameIntoClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallBackToExplorerRibbon@CExplorerFrame@@AEAAXXZ
    void FallBackToExplorerRibbon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationProgressChangedEvent@CExplorerFrame@@AEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    void FireNavigationProgressChangedEvent(int, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationStateChangedEvent@CExplorerFrame@@AEAAXK@Z
    void FireNavigationStateChangedEvent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNavigationTargetChangedEvent@CExplorerFrame@@AEAAXPEAUIShellNavigationTarget@@@Z
    void FireNavigationTargetChangedEvent(IShellNavigationTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTabChangedEvent@CExplorerFrame@@AEAAXW4EXPLORER_TAB_ACTION@@AEBUFileExplorerTabData@@AEBUFEBrowserTab@@@Z
    void FireTabChangedEvent(int, FileExplorerTabData const &, FEBrowserTab const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserTabFromId@CExplorerFrame@@AEBAJU_GUID@@AEAUFEBrowserTab@@@Z
    long GetBrowserTabFromId(_GUID, FEBrowserTab &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTabShellItem@CExplorerFrame@@AEAAJPEAPEAUIShellItem@@@Z
    long GetSelectedTabShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCommandBarEnabledAndAvailable@CExplorerFrame@@AEAA_NXZ
    bool IsCommandBarEnabledAndAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySearchControlOfResize@CExplorerFrame@@AEAAX_N@Z
    void NotifySearchControlOfResize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CExplorerFrame@@AEAAXPEAUHWND__@@_J@Z
    void OnDPIChanged(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PossiblyRestartInSecondaryProcessOnMove@CExplorerFrame@@AEAAX_N@Z
    void PossiblyRestartInSecondaryProcessOnMove(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImmersiveColorSettings@CExplorerFrame@@AEAAJXZ
    long RefreshImmersiveColorSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPidlToDefaultLocation@CExplorerFrame@@AEAAJXZ
    long ResetPidlToDefaultLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBoundedWindowPosOpt@CExplorerFrame@@AEAAXPEAUHWND__@@HHHHHII@Z
    void SetBoundedWindowPosOpt(HWND__*, int, int, int, int, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowTabs@CExplorerFrame@@AEAA_N_N@Z
    bool ShouldShowTabs(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToUserActivityRequest@CExplorerFrame@@AEAAJXZ
    long SubscribeToUserActivityRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionFrameLaunchStateIfValid@CExplorerFrame@@AEAA_NW4FrameLaunchState@@@Z
    bool TransitionFrameLaunchStateIfValid(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFileExplorerTabsExtensionHelpers@CExplorerFrame@@AEAAJIPEAPEAUIFileExplorerTabsExtensionHelpers@@@Z
    long TryGetFileExplorerTabsExtensionHelpers(unsigned int, IFileExplorerTabsExtensionHelpers * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeToUserActivityRequest@CExplorerFrame@@AEAAJXZ
    long UnsubscribeToUserActivityRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColor@CExplorerFrame@@AEAAXPEAUHWND__@@@Z
    void UpdateBackgroundColor(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationState@CExplorerFrame@@AEAAXK@Z
    void UpdateNavigationState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationTarget@CExplorerFrame@@AEAAXPEAUIShellNavigationTarget@@@Z
    void UpdateNavigationTarget(IShellNavigationTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchState@CExplorerFrame@@AEAAXW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    void UpdateSearchState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchTarget@CExplorerFrame@@AEAAXPEAUIShellSearchTarget@@@Z
    void UpdateSearchTarget(IShellSearchTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitlebar@CExplorerFrame@@AEAAX_N@Z
    void UpdateTitlebar(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CExplorerFrame@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNavBar@CExplorerFrame@@AEAAJXZ
    long _CreateNavBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyFRAMETOOLBARITEM@CExplorerFrame@@CAHPEAUFRAMETOOLBARITEM@@PEAX@Z
    static int _DestroyFRAMETOOLBARITEM(FRAMETOOLBARITEM *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEndOfGroup@CExplorerFrame@@AEAAHK@Z
    int _FindEndOfGroup(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindToolbar@CExplorerFrame@@AEAAHPEAUIUnknown@@@Z
    int _FindToolbar(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindToolbar@CExplorerFrame@@AEAAHPEBG@Z
    int _FindToolbar(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDropTarget@CExplorerFrame@@AEAAJPEAPEAUIDropTarget@@@Z
    long _GetDropTarget(IDropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWarmScheduler@CExplorerFrame@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetWarmScheduler(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertToolbar@CExplorerFrame@@AEAAJPEAUFRAMETOOLBARITEM@@@Z
    long _InsertToolbar(FRAMETOOLBARITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFrameState@CExplorerFrame@@AEAAXPEAUIETHREADPARAM@@@Z
    void _LoadFrameState(IETHREADPARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyFrameStateChanged@CExplorerFrame@@AEAAXXZ
    void _NotifyFrameStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppCommand@CExplorerFrame@@AEAAH_K_J@Z
    int _OnAppCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@CExplorerFrame@@AEAAXXZ
    void _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CExplorerFrame@@AEAAX_K_J@Z
    void _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CExplorerFrame@@AEAAHPEAUHWND__@@@Z
    int _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@CExplorerFrame@@AEAAXXZ
    void _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CExplorerFrame@@AEAAX_K_J@Z
    void _OnFSNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFrameShutdown@CExplorerFrame@@AEAAXXZ
    void _OnFrameShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CExplorerFrame@@AEAAXXZ
    void _OnSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterFrameClass@CExplorerFrame@@AEAAXXZ
    void _RegisterFrameClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveFrameState@CExplorerFrame@@AEAAXW4PEFSAVEFLAGS@@H@Z
    void _SaveFrameState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMessageToNavBar@CExplorerFrame@@AEAAXI_K_J@Z
    void _SendMessageToNavBar(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMessageToToolbars@CExplorerFrame@@AEAAXI_K_J@Z
    void _SendMessageToToolbars(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFrameMode@CExplorerFrame@@AEAAJW4SHELL_BROWSER_FRAME_MODE@@H@Z
    long _SetFrameMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSaveFrameState@CExplorerFrame@@AEAAHXZ
    int _ShouldSaveFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncInputObjects@CExplorerFrame@@AEAAX_N@Z
    void _SyncInputObjects(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFrameState@CExplorerFrame@@AEAAXXZ
    void _UpdateFrameState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNavigationProgress@CExplorerFrame@@AEAAXW4SHELL_NAVIGATION_BAND_PROGRESS_STATE@@JJ@Z
    void _UpdateNavigationProgress(int, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNavigationState@CExplorerFrame@@AEAAXK@Z
    void _UpdateNavigationState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSearchState@CExplorerFrame@@AEAAXW4SHELL_SEARCH_BAND_SEARCH_STATE@@@Z
    void _UpdateSearchState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTargets@CExplorerFrame@@AEAAXPEAUIBrowserHost@@@Z
    void _UpdateTargets(IBrowserHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTheater@CExplorerFrame@@AEAAJH@Z
    long _UpdateTheater(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolbars@CExplorerFrame@@AEAAXXZ
    void _UpdateToolbars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CExplorerFrame@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `GetBrowser` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateSearchState` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateNavigationState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateNavigationState` | `void` | `Method` | `Pdb` | No (PDB) |
| `RegisterTabEventsHandler` | `long` | `Method` | `Pdb` | No (PDB) |
| `FireNavigationStateChangedEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireNavigationProgressChangedEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireTabChangedEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTabDataById` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTabProgress` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetBrowserTabFromId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateNavigationProgress` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InsertToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DestroyFRAMETOOLBARITEM` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetBorderDW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnDragRegionOffsetChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SendMessageToToolbars` | `void` | `Method` | `Pdb` | No (PDB) |
| `ExtendFrameIntoClient` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_OnSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetBorderSpaceDW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFrameRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_FindToolbar` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsCommandBarEnabledAndAvailable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateTitlebar` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `DrainCallbackQueue` | `void` | `Method` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `SetFrameTitle` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `PossiblyRestartInSecondaryProcessOnMove` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnBrowserStateChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestBorderSpaceDW` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBrowserClosed` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsMonitorOn` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SaveFrameState` | `void` | `Method` | `Pdb` | No (PDB) |
| `ComputeInitialWindowLocation` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShouldShowTabs` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ComputeMinimumFrameSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SendMessageToNavBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Cleanup` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddMessagePumpOneTimeIdleCallback` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnFSNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `DragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragOver` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetDropTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterTabEventsHandler` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBrowserCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTargets` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateToolbars` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTheater` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `_NotifyFrameStateChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasFocusIO` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RefreshImmersiveColorSettings` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetVisible` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetWarmScheduler` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetDefaultFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnsureDispatcherQueueController` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFrameMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_FindEndOfGroup` | `int` | `Method` | `Pdb` | No (PDB) |
| `_UpdateSearchState` | `void` | `Method` | `Pdb` | No (PDB) |
| `get_ReservedBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureWindowsXamlManager` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetFrameMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `FrameMessagePump` | `void` | `Method` | `Pdb` | No (PDB) |
| `MakeVisible` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifySearchControlOfResize` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorGlobal` | `long` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadFrameState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnCreate` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnFrameShutdown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RegisterFrameClass` | `void` | `Method` | `Pdb` | No (PDB) |
| `get_EffectiveClientRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `SubscribeToUserActivityRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateNavigationTarget` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateSearchTarget` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireNavigationTargetChangedEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SyncInputObjects` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateNavBar` | `long` | `Method` | `Pdb` | No (PDB) |
| `CExplorerFrame` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~CExplorerFrame` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: protected: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `AddMessagePumpCallback` | `long` | `Method` | `Pdb` | No (PDB) |
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
| `AddTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddTabAtIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddToRestartList_Tabs` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeTargetWindowPlacement` | `void` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| `CreateUserActivity` | `struct winrt::Windows::ApplicationModel::UserActivities::UserActivity` | `Method` | `Pdb` | No (PDB) |
| `Drop` | `long` | `Method` | `Pdb` | No (PDB) |
| `Exec` | `long` | `Method` | `Pdb` | No (PDB) |
| `ExplorerTimerCallback` | `void` | `Method` | `Pdb` | No (PDB) |
| `FallBackToExplorerRibbon` | `void` | `Method` | `Pdb` | No (PDB) |
| `FindToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFrameOptions` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectedTabShellItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `HandleCloseOnTabs` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsEvaluatingEdpPolicy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsVisible` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsVisible` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowInPrelaunchState` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `MoveSelectedTabToPosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `MoveTabToNewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDPIChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnNavigatedViewStartedToShow` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnPrelaunchedViewStartedToShow` | `void` | `Method` | `Pdb` | No (PDB) |
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
| `QueryStatus` | `long` | `Method` | `Pdb` | No (PDB) |
| `RaiseViewLoadedOnNextViewShown` | `void` | `Method` | `Pdb` | No (PDB) |
| `RegisterNavigationEventHandler` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterSearchEventHandler` | `long` | `Method` | `Pdb` | No (PDB) |
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
| `RemoveTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveToolbar` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReportTabDragCompletedInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReportTabDragStartedInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `ResetPidlToDefaultLocation` | `long` | `Method` | `Pdb` | No (PDB) |
| `RestartInSeparateProcess` | `long` | `Method` | `Pdb` | No (PDB) |
| `SaveFrameState` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetBoundedWindowPosOpt` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetDropSourceEnterpriseId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetFrameMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetFrameOptions` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRibbonHeight` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShowPrecreatedWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `TransitionFrameLaunchStateIfValid` | `bool` | `Method` | `Pdb` | No (PDB) |
| `TryGetFileExplorerTabsExtensionHelpers` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterNavigationEventHandler` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterSearchEventHandler` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnsubscribeToUserActivityRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `XamlDragCompleted` | `void` | `Method` | `Pdb` | No (PDB) |
| `XamlDragStarted` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FindToolbar` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnAppCommand` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnClose` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnCommand` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldSaveFrameState` | `int` | `Method` | `Pdb` | No (PDB) |
| `_UpdateFrameState` | `void` | `Method` | `Pdb` | No (PDB) |
| `get_TitleBarHeight` | `long` | `Method` | `Pdb` | No (PDB) |
