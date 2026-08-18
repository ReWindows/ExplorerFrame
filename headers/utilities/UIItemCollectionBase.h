#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 12 member(s).
class UIItemCollectionBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@UIItemCollectionBase@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long GetCollection(IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIItemCollectionBase@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemCollectionBase@@QEAA@XZ
    UIItemCollectionBase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIItemCollectionBase@@UEAA@XZ
    virtual ~UIItemCollectionBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUICollection@UIItemCollectionBase@@IEAAJPEAUIItemCollection@@PEAPEAVUICollection@@@Z
    long _CreateUICollection(IItemCollection *, UICollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGroupedHeaderType@UIItemCollectionBase@@IEAAJAEBU_tagpropertykey@@PEAGI@Z
    long _GetGroupedHeaderType(_tagpropertykey const &, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionHost@UIItemCollectionBase@@MEAAPEAVElement@DirectUI@@XZ
    virtual ::DirectUI::Element * _GetUICollectionHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionResId@UIItemCollectionBase@@IEAAJPEAUIItemCollection@@PEAPEAG@Z
    long _GetUICollectionResId(IItemCollection *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUICollectionResIdFromCreationMap@UIItemCollectionBase@@IEAAJPEBGPEAUIItemCollection@@PEAPEAG@Z
    long _GetUICollectionResIdFromCreationMap(unsigned short const *, IItemCollection *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChildChanged@UIItemCollectionBase@@MEAAXPEAVUICollection@@W4COLLECTION_CHANGE_STATE@@W4ITEM_CHANGED_TYPE@@@Z
    virtual void _OnChildChanged(UICollection *, int, int);
};
