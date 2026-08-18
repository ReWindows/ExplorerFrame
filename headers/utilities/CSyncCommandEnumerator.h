#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
class CSyncCommandEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSyncCommandEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSyncCommandEnumerator@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSyncCommandEnumerator@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSyncCommandEnumerator@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSyncCommandEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSyncCommandEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSyncCommandEnumerator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSyncCommandEnumerator@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasExtendedSubCommands@CSyncCommandEnumerator@@CA_NPEAUHKEY__@@PEBGPEAPEAU2@2@Z
    static bool _HasExtendedSubCommands(HKEY__*, unsigned short const *, HKEY__* *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNextSyncProviderKey@CSyncCommandEnumerator@@AEAAJXZ
    long _SetNextSyncProviderKey();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncCommandEnumerator@@AEAA@XZ
    ~CSyncCommandEnumerator();
};
