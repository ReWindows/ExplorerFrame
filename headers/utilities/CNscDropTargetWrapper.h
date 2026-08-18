#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 20 member(s).
class CNscDropTargetWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNscDropTargetWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNscDropTargetWrapper@@QEAA@PEAVCNscTree@@PEAUIShellItem@@PEAUINameSpaceTreeControlDropHandler@@HH@Z
    CNscDropTargetWrapper(CNscTree *, IShellItem *, INameSpaceTreeControlDropHandler *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CNscDropTargetWrapper@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CNscDropTargetWrapper@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CNscDropTargetWrapper@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CNscDropTargetWrapper@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CNscDropTargetWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNscDropTargetWrapper@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CNscDropTargetWrapper@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNscDropTargetWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNscDropTargetWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CNscDropTargetWrapper@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CNscDropTargetWrapper@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscDropTargetWrapper@@AEAA@XZ
    ~CNscDropTargetWrapper();
};
