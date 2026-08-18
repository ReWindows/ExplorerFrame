#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UICount {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UICount@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyChangingListener@UICount@@UEAAXPEBUPropertyInfo@DirectUI@@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyListener@UICount@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UICount@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UICount@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UICount@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ZeroTextProp@UICount@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ZeroTextProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UICount@@UEAA@XZ
    virtual ~UICount();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEventActionCB@UICount@@AEAAJPEAUIUnknown@@HPEAUCollectionEventParams@@PEAW4tagEVENTACTION@@@Z
    long _GetEventActionCB(IUnknown *, int, CollectionEventParams *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemCollection@UICount@@AEAAJPEAUIItemCollection@@@Z
    long _SetItemCollection(IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UICount@@AEAAJXZ
    long _Update();
};
