#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class CTravelLogUI {
public:
    class TRAVELLOGITEMINFO;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTravelLogUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTravelLogItem@CTravelLogUI@@UEAAJJPEBGK@Z
    virtual long AddTravelLogItem(long, unsigned short const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTravelLogUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTravelLogUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTravelLogUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTravelLog@CTravelLogUI@@UEAAJHHPEAUHWND__@@PEBUtagRECT@@PEAJ@Z
    virtual long ShowTravelLog(int, int, HWND__*, tagRECT const *, long *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTravelLogUI@@MEAA@XZ
    virtual ~CTravelLogUI();
};
