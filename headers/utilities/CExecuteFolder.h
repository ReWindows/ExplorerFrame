#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 32 member(s).
class CExecuteFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExecuteFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteFolder@@QEAA@XZ
    CExecuteFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteFolder@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapability@CExecuteFolder@@UEAAJPEAW4EXECUTE_COMMAND_HANDLER_CAPABILITIES@@@Z
    virtual long GetCapability(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CExecuteFolder@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExecuteFolder@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExecuteFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExecuteFolder@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdList@CExecuteFolder@@MEAAJPEAUIShellItem@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@PEA_N@Z
    virtual long GetIdList(IShellItem *, _ITEMIDLIST_ABSOLUTE * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFolder@CExecuteFolder@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@_N@Z
    long ShowFolder(_ITEMIDLIST_ABSOLUTE const *, bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuerySource@CExecuteFolder@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long GetQuerySource(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteExecuteTelemetry@CExecuteFolder@@AEAAXXZ
    void WriteExecuteTelemetry();
};
