#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CFrequentPlacesListWithUIProperties {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrequentPlacesListWithUIProperties@@QEAA@XZ
    CFrequentPlacesListWithUIProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorePinnedStatusForPlaces@CFrequentPlacesListWithUIProperties@@QEAAJPEAUtagSAFEARRAY@@@Z
    long StorePinnedStatusForPlaces(tagSAFEARRAY *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrequentPlacesListWithUIProperties@@QEAA@XZ
    ~CFrequentPlacesListWithUIProperties();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AddItemToDestItemCollection@CFrequentPlacesListWithUIProperties@@MEAAJPEAUIShellItem2@@_N@Z
    virtual long v_AddItemToDestItemCollection(IShellItem2*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Clear@CFrequentPlacesListWithUIProperties@@MEAAXXZ
    virtual void v_Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CFrequentPlacesListWithUIProperties@@MEAAJXZ
    virtual long v_Initialize();
};
