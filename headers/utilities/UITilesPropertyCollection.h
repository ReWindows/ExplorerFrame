#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UITilesPropertyCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UITilesPropertyCollection@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnderSyncRootProp@UITilesPropertyCollection@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IsUnderSyncRootProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@UITilesPropertyCollection@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UITilesPropertyCollection@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UITilesPropertyCollection@@QEAA@XZ
    UITilesPropertyCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UITilesPropertyCollection@@UEAA@XZ
    virtual ~UITilesPropertyCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UITilesPropertyCollection@@MEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUIProperty@UITilesPropertyCollection@@IEAAJPEAUIPropertyDescription@@PEAPEAVElement@DirectUI@@@Z
    long _CreateUIProperty(IPropertyDescription *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveChildListeners@UITilesPropertyCollection@@IEAAXXZ
    void _RemoveChildListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UITilesPropertyCollection@@IEAAJPEAUIItem@@@Z
    long _Update(IItem *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilenameElement@UITilesPropertyCollection@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetFilenameElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePropertyLayoutPositions@UITilesPropertyCollection@@AEAAXXZ
    void _UpdatePropertyLayoutPositions();
};
