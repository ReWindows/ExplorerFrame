#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 16 member(s).
class CPublicTravelLogCreateHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublicTravelLogCreateHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPublicTravelLogCreateHelper@@QEAA@PEAUIShellBrowserService@@PEBG1@Z
    CPublicTravelLogCreateHelper(IShellBrowserService *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByIndex@CPublicTravelLogCreateHelper@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long FindWindowByIndex(unsigned long, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPublicTravelLogCreateHelper@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCookie@CPublicTravelLogCreateHelper@@UEAAJPEAK@Z
    virtual long GetPositionCookie(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@CPublicTravelLogCreateHelper@@UEAAJPEAUIStream@@PEAU_WINDOWDATA@@@Z
    virtual long GetWindowData(IStream *, _WINDOWDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistory@CPublicTravelLogCreateHelper@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long LoadHistory(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistoryPosition@CPublicTravelLogCreateHelper@@UEAAJPEAGK@Z
    virtual long LoadHistoryPosition(unsigned short *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublicTravelLogCreateHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublicTravelLogCreateHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistory@CPublicTravelLogCreateHelper@@UEAAJPEAUIStream@@@Z
    virtual long SaveHistory(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionCookie@CPublicTravelLogCreateHelper@@UEAAJK@Z
    virtual long SetPositionCookie(unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublicTravelLogCreateHelper@@IEAA@XZ
    ~CPublicTravelLogCreateHelper();
};
