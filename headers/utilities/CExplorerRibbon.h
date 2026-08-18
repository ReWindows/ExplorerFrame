#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 81 member(s).
class CExplorerRibbon {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerRibbon@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerRibbon@@QEAA@XZ
    CExplorerRibbon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRibbonUI@CExplorerRibbon@@UEAAJPEAUHWND__@@PEAUIShellItem@@@Z
    virtual long CreateRibbonUI(HWND__*, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyRibbonUI@CExplorerRibbon@@UEAAJH@Z
    virtual long DestroyRibbonUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CExplorerRibbon@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonAppMode@CExplorerRibbon@@UEAAJPEAI@Z
    virtual long GetRibbonAppMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonBackgroundColor@CExplorerRibbon@@UEAAJPEAK@Z
    virtual long GetRibbonBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonMinimized@CExplorerRibbon@@UEAAJXZ
    virtual long GetRibbonMinimized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonVisible@CExplorerRibbon@@UEAAJXZ
    virtual long GetRibbonVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CExplorerRibbon@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CExplorerRibbon@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCommands@CExplorerRibbon@@UEAAJW4COMMAND_SET@@@Z
    virtual long InvalidateCommands(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CExplorerRibbon@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrowserNavigated@CExplorerRibbon@@UEAAJXZ
    virtual long OnBrowserNavigated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CExplorerRibbon@@UEAAJW4UI_COLLECTIONCHANGE@@IPEAUIUnknown@@I1@Z
    virtual long OnChanged(int, unsigned int, IUnknown *, unsigned int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandStateInvalidated@CExplorerRibbon@@UEAAJXZ
    virtual long OnCommandStateInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateUICommand@CExplorerRibbon@@UEAAJIW4UI_COMMANDTYPE@@PEAPEAUIUICommandHandler@@@Z
    virtual long OnCreateUICommand(unsigned int, int, IUICommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyUICommand@CExplorerRibbon@@UEAAJIW4UI_COMMANDTYPE@@PEAUIUICommandHandler@@@Z
    virtual long OnDestroyUICommand(unsigned int, int, IUICommandHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellViewChanged@CExplorerRibbon@@UEAAJXZ
    virtual long OnShellViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabletModeChanged@CExplorerRibbon@@UEAAJXZ
    virtual long OnTabletModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CExplorerRibbon@@UEAAJXZ
    virtual long OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChanged@CExplorerRibbon@@UEAAJIW4UI_VIEWTYPE@@PEAUIUnknown@@W4UI_VIEWVERB@@H@Z
    virtual long OnViewChanged(unsigned int, int, IUnknown *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerRibbon@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CExplorerRibbon@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerRibbon@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRibbonVisible@CExplorerRibbon@@UEAAJH@Z
    virtual long SetRibbonVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CExplorerRibbon@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestHookExecuteCommand@CExplorerRibbon@@UEAAJI@Z
    virtual long TestHookExecuteCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestHookExecuteGalleryItem@CExplorerRibbon@@UEAAJIIW4RIBBONTESTVERB@@@Z
    virtual long TestHookExecuteGalleryItem(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestHookGetCommandEnabled@CExplorerRibbon@@UEAAJI@Z
    virtual long TestHookGetCommandEnabled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestHookGetCommandLabel@CExplorerRibbon@@UEAAJIPEAPEAG@Z
    virtual long TestHookGetCommandLabel(unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQuickAccessToolbar@CExplorerRibbon@@UEAAJXZ
    virtual long UpdateQuickAccessToolbar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRibbonBackgroundColor@CExplorerRibbon@@AEAAJXZ
    long CacheRibbonBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCurrentSavedMinimizedState@CExplorerRibbon@@AEAA_N_N@Z
    bool ComputeCurrentSavedMinimizedState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRibbonMinimizedState@CExplorerRibbon@@AEAAJXZ
    long LoadRibbonMinimizedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeMigrateMinimizedState@CExplorerRibbon@@AEAAXXZ
    void MaybeMigrateMinimizedState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemedRibbonColor@CExplorerRibbon@@AEAAJXZ
    long SetThemedRibbonColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRibbonHostWithHeight@CExplorerRibbon@@AEAAJPEAUIUIRibbon@@@Z
    long UpdateRibbonHostWithHeight(IUIRibbon *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToView@CExplorerRibbon@@AEAAJ_N@Z
    long _ConnectToView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoQATTelemetry@CExplorerRibbon@@AEAAXPEAUIUnknown@@W4QAT_CHANGED_ITEM@@@Z
    void _DoQATTelemetry(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoRibbonInvalidations@CExplorerRibbon@@AEAAXIQEBUINVALIDATION_INFO@@_K@Z
    void _DoRibbonInvalidations(unsigned int, INVALIDATION_INFO const * const, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTaskScheduler@CExplorerRibbon@@AEAAJXZ
    long _EnsureTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillHandlerInfo@CExplorerRibbon@@AEAAJIQEBUCOMMAND_RANGE_INFO@@PEAUCOMMAND_HANDLER_INFO@@@Z
    long _FillHandlerInfo(unsigned int, COMMAND_RANGE_INFO const * const, COMMAND_HANDLER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExistingHandlerInfo@CExplorerRibbon@@AEAAJIPEAPEAUCOMMAND_HANDLER_INFO@@@Z
    long _GetExistingHandlerInfo(unsigned int, COMMAND_HANDLER_INFO * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRibbonPropertyBool@CExplorerRibbon@@AEAAJAEBU_tagpropertykey@@PEAH@Z
    long _GetRibbonPropertyBool(_tagpropertykey const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRibbonPropertyStore@CExplorerRibbon@@AEAAJPEAPEAUIPropertyStore@@@Z
    long _GetRibbonPropertyStore(IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HookQATEvents@CExplorerRibbon@@AEAAJ_N@Z
    long _HookQATEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProfferToFrame@CExplorerRibbon@@AEAAX_N@Z
    void _ProfferToFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveQATSettings@CExplorerRibbon@@AEAAJXZ
    long _SaveQATSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInitialMinimizedState@CExplorerRibbon@@AEAAXXZ
    void _SetInitialMinimizedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetModes@CExplorerRibbon@@AEAAXPEAUIShellItem@@@Z
    void _SetModes(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRibbonPropertyBool@CExplorerRibbon@@AEAAJAEBU_tagpropertykey@@H@Z
    long _SetRibbonPropertyBool(_tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRibbonVisibleProperty@CExplorerRibbon@@AEAAXXZ
    void _SetRibbonVisibleProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TestHookExecuteSubCommand@CExplorerRibbon@@AEAAJIPEAUIUICommandHandler@@PEAUIUICollection@@IW4UI_EXECUTIONVERB@@@Z
    long _TestHookExecuteSubCommand(unsigned int, IUICommandHandler *, IUICollection *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TestHookIsCommandEnabled@CExplorerRibbon@@AEAAHIPEAUIUICommandHandler@@@Z
    int _TestHookIsCommandEnabled(unsigned int, IUICommandHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHandlerCaches@CExplorerRibbon@@AEAAXQEBI_K@Z
    void _UpdateHandlerCaches(unsigned int const * const, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRibbon@CExplorerRibbon@@AEAAXQEBUINVALIDATION_INFO@@_KQEBI1@Z
    void _UpdateRibbon(INVALIDATION_INFO const * const, uint64_t, unsigned int const * const, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerRibbon@@EEAA@XZ
    virtual ~CExplorerRibbon();
};
