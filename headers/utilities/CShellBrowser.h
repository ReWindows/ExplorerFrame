#pragma once
#include "../windissect_forwards.h"

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
