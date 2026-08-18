#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 17 member(s).
class CSuggestMRUWorker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSuggestMRUWorker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CSuggestMRUWorker@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CSuggestMRUWorker@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatchable@CSuggestMRUWorker@@UEAAJPEAH@Z
    virtual long GetDispatchable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSuggestMRUWorker@@UEAAJKIKPEBGPEAUIObjectCollection@@PEAUIShellItem@@PEAUISuggestMRUCallback@@@Z
    virtual long Init(unsigned long, unsigned int, unsigned long, unsigned short const *, IObjectCollection *, IShellItem *, ISuggestMRUCallback *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSuggestMRUWorker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSuggestMRUWorker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDispatchable@CSuggestMRUWorker@@UEAAJH@Z
    virtual long SetDispatchable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareMRU@CSuggestMRUWorker@@SAHPEAUIPropertyValue@@0_J@Z
    static int s_CompareMRU(IPropertyValue *, IPropertyValue *, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMRUResults@CSuggestMRUWorker@@AEAAJXZ
    long _GetMRUResults();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuggestMRUWorker@@EEAA@XZ
    virtual ~CSuggestMRUWorker();
};
