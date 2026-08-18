# `global` :: `CAnimationManager`

**Category:** [Animation & PVL](./README.md)

Reconstructed from `ExplorerFrame.dll`. Total members: **42**.

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

// Reconstructed from ExplorerFrame.dll by Windissect. 42 member(s).
class CAnimationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVisualChangeEvent@CAnimationManager@@UEAAJPEAUVisualChangeEvent@@@Z
    virtual long HandleVisualChangeEvent(VisualChangeEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimating@CAnimationManager@@UEAAHXZ
    virtual int IsAnimating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CAnimationManager@@UEAAJPEAUHDC__@@PEAUtagRECT@@@Z
    virtual long Paint(HDC__*, tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CAnimationManager@@UEAAXK@Z
    virtual void SetBackgroundColor(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocateHBITMAP@CAnimationManager@@AEAAJHHPEAH@Z
    long _AllocateHBITMAP(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimationTimeProc@CAnimationManager@@AEAAXPEAUGMA_ACTIONINFO@@@Z
    void _AnimationTimeProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheCurrentViewMode@CAnimationManager@@AEAAXXZ
    void _CacheCurrentViewMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBackBuffer@CAnimationManager@@AEAAJHHPEAPEAUHBITMAP__@@@Z
    long _CreateBackBuffer(int, int, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndAnimation@CAnimationManager@@AEAAXW4ENDANIMATIONFLAGS@@@Z
    void _EndAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureElementPositionChangeInfo@CAnimationManager@@AEAAXXZ
    void _EnsureElementPositionChangeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishAnimationSetup@CAnimationManager@@AEAAXXZ
    void _FinishAnimationSetup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishElementPositionChange@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishElementPositionChange(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishGroupCollapse@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishGroupCollapse(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishGroupExpand@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishGroupExpand(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollDown@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishScrollDown(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollGeneral@CAnimationManager@@AEAAXPEAUAnimatingRect@@PEAUtagPOINT@@PEAUtagRECT@@2@Z
    void _FinishScrollGeneral(AnimatingRect *, tagPOINT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollUp@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishScrollUp(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAnimationSpeed@CAnimationManager@@AEAANW4ANIMATIONTYPE@@W4SPEEDBOUND@@@Z
    double _GetAnimationSpeed(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAnimationTime@CAnimationManager@@AEAAHW4ANIMATIONTYPE@@@Z
    int _GetAnimationTime(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemsViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetItemsViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNonViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetNonViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAnimationManager@@AEAAJPEAVUIItemsView@@@Z
    long _Initialize(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSlowKeyPressed@CAnimationManager@@AEAAHXZ
    int _IsSlowKeyPressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintCurrentViewHBITMAP@CAnimationManager@@AEAAJPEAH@Z
    long _PaintCurrentViewHBITMAP(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetAnimations@CAnimationManager@@AEAAXXZ
    void _ResetAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPositionChangeRect@CAnimationManager@@AEAAXPEAUAnimatingRect@@@Z
    void _ResetPositionChangeRect(AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupElementPositionChange@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupElementPositionChange(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupGroupCollapse@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupGroupCollapse(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupGroupExpand@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupGroupExpand(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupNonViewAnimatingRect@CAnimationManager@@AEAAJXZ
    long _SetupNonViewAnimatingRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollDown@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupScrollDown(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollGeneral@CAnimationManager@@AEAAXPEAVLineScroller@@W4SETUPSCROLLGENERALORIENTATION@1@W4ANIMATIONTYPE@@PEAVElement@DirectUI@@PEAUtagRECT@@PEAUtagPOINT@@@Z
    void _SetupScrollGeneral(LineScroller *, int, int, ::DirectUI::Element *, tagRECT *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollUp@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupScrollUp(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimer@CAnimationManager@@AEAAJXZ
    long _StartTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimer@CAnimationManager@@AEAAXW4ENDANIMATIONFLAGS@@@Z
    void _StopTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllAnimatingRects@CAnimationManager@@AEAAXXZ
    void _UpdateAllAnimatingRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AnimationTimeProc@CAnimationManager@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_AnimationTimeProc(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationManager@@AEAA@XZ
    ~CAnimationManager();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `HandleVisualChangeEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateAllAnimatingRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishAnimationSetup` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsAnimating` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `Paint` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_EndAnimation` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `~CAnimationManager` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `_StopTimer` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_GetItemsViewRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AnimationTimeProc` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetBackgroundColor` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_SetupScrollGeneral` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AllocateHBITMAP` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetupScrollDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_StartTimer` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetupNonViewAnimatingRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResetAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CacheCurrentViewMode` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateBackBuffer` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureElementPositionChangeInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishElementPositionChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishGroupCollapse` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishGroupExpand` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishScrollDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishScrollGeneral` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishScrollUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetAnimationSpeed` | `double` | `Method` | `Pdb` | No (PDB) |
| `_GetAnimationTime` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetNonViewRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetViewRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsSlowKeyPressed` | `int` | `Method` | `Pdb` | No (PDB) |
| `_PaintCurrentViewHBITMAP` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResetPositionChangeRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetupElementPositionChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetupGroupCollapse` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetupGroupExpand` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetupScrollUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `s_AnimationTimeProc` | `void` | `Method` | `Pdb` | No (PDB) |
