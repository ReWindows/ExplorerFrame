#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 32 member(s).
class CRibbonCommandHandlerOnExplorerCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRibbonCommandHandlerOnExplorerCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRibbonCommandHandlerOnExplorerCommand@@QEAA@PEAUIExplorerCommand@@I@Z
    CRibbonCommandHandlerOnExplorerCommand(IExplorerCommand *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CRibbonCommandHandlerOnExplorerCommand@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskComplete@CRibbonCommandHandlerOnExplorerCommand@@UEAAJIK@Z
    virtual long OnTaskComplete(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskStart@CRibbonCommandHandlerOnExplorerCommand@@UEAAJXZ
    virtual long OnTaskStart();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRibbonCommandHandlerOnExplorerCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CRibbonCommandHandlerOnExplorerCommand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRibbonCommandHandlerOnExplorerCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePerCommandCache@CRibbonCommandHandlerOnExplorerCommand@@UEAAJIH@Z
    virtual long UpdatePerCommandCache(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CRibbonCommandHandlerOnExplorerCommand@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDefaultBitmap@CRibbonCommandHandlerOnExplorerCommand@@IEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z
    long _CreateDefaultBitmap(IExplorerCommand *, IShellItemArray *, tagSIZE const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CRibbonCommandHandlerOnExplorerCommand@@IEAAJPEAPEAUIShellItemArray@@@Z
    long _GetSelection(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStateNormalized@CRibbonCommandHandlerOnExplorerCommand@@IEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@HPEAK@Z
    long _GetStateNormalized(IExplorerCommand *, IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIImageFromExplorerCommandWithPKEY@CRibbonCommandHandlerOnExplorerCommand@@IEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@AEBU_tagpropertykey@@PEAPEAUIUIImage@@@Z
    long _GetUIImageFromExplorerCommandWithPKEY(IExplorerCommand *, IShellItemArray *, _tagpropertykey const &, IUIImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIImageFromExplorerCommandWithSize@CRibbonCommandHandlerOnExplorerCommand@@IEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@UtagSIZE@@W4GetUIImageIconSource@@PEAPEAUIUIImage@@@Z
    long _GetUIImageFromExplorerCommandWithSize(IExplorerCommand *, IShellItemArray *, tagSIZE, int, IUIImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindow@CRibbonCommandHandlerOnExplorerCommand@@IEAAPEAUHWND__@@XZ
    HWND__* _GetWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRibbonCommandHandlerOnExplorerCommand@@MEAA@XZ
    virtual ~CRibbonCommandHandlerOnExplorerCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartGetStateTask@CRibbonCommandHandlerOnExplorerCommand@@AEAAJPEAUIShellItemArray@@@Z
    long _StartGetStateTask(IShellItemArray *);
};
