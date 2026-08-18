#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CPublicTravelLog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublicTravelLog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEntry@CPublicTravelLog@@UEAAJPEBG0PEAUITravelLogEntry@@HPEAPEAU2@@Z
    virtual long CreateEntry(unsigned short const *, unsigned short const *, ITravelLogEntry *, int, ITravelLogEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumEntries@CPublicTravelLog@@UEAAJKPEAPEAUIEnumTravelLogEntry@@@Z
    virtual long EnumEntries(unsigned long, IEnumTravelLogEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntries@CPublicTravelLog@@UEAAJKPEBGPEAPEAUIEnumTravelLogEntry@@@Z
    virtual long FindEntries(unsigned long, unsigned short const *, IEnumTravelLogEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPublicTravelLog@@UEAAJKPEAK@Z
    virtual long GetCount(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeEntry@CPublicTravelLog@@UEAAJHPEAPEAUITravelLogEntry@@@Z
    virtual long GetRelativeEntry(int, ITravelLogEntry * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublicTravelLog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublicTravelLog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEntry@CPublicTravelLog@@UEAAJPEAUITravelLogEntry@@@Z
    virtual long RemoveEntry(ITravelLogEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TravelTo@CPublicTravelLog@@UEAAJPEAUITravelLogEntry@@@Z
    virtual long TravelTo(ITravelLogEntry *);
};
