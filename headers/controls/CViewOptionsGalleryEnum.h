#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CViewOptionsGalleryEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewOptionsGalleryEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CViewOptionsGalleryEnum@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CViewOptionsGalleryEnum@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewOptionsGalleryEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewOptionsGalleryEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CViewOptionsGalleryEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CViewOptionsGalleryEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewOptionsGalleryEnum@@UEAA@XZ
    virtual ~CViewOptionsGalleryEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSubCommandsFromHMENU@CViewOptionsGalleryEnum@@AEAAJPEAUIObjectCollection@@@Z
    long _CreateSubCommandsFromHMENU(IObjectCollection *);
};
