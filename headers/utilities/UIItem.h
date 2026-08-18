#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 41 member(s).
// Base evidence: UIBase (likely; classinfo-template-instantiation).
class UIItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CompressedProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CompressedProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@UIItem@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?EncryptedProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * EncryptedProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@UIItem@@UEAAHXZ
    virtual int GetBaselineOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIItem@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@UIItem@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long GetCollection(IItemCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredBaselineOffset@UIItem@@UEAAHXZ
    virtual int GetDesiredBaselineOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredFooterOverhang@UIItem@@UEAAHXZ
    virtual int GetDesiredFooterOverhang();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIItem@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventActionCB@UIItem@@QEAAJPEAUIUnknown@@HPEAUItemEventParams@@PEAW4tagEVENTACTION@@@Z
    long GetEventActionCB(IUnknown *, int, ItemEventParams *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusIndicator@UIItem@@UEAAPEAVElement@DirectUI@@H@Z
    virtual ::DirectUI::Element * GetFocusIndicator(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexForSubItem@UIItem@@UEAAHPEAVElement@DirectUI@@@Z
    virtual int GetIndexForSubItem(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@UIItem@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModel@UIItem@@QEAA_NXZ
    bool GetModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyChangingListener@UIItem@@UEAAXPEBUPropertyInfo@DirectUI@@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyListener@UIItem@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ModelProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ModelProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIItem@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIItem@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemEventCB@UIItem@@QEAAJPEAUIUnknown@@PEAUItemEventParams@@@Z
    long OnItemEventCB(IUnknown *, ItemEventParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIItem@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UIItem@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIItem@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaselineOffset@UIItem@@UEAAXH@Z
    virtual void SetBaselineOffset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredFooterOverhang@UIItem@@UEAAXH@Z
    virtual void SetDesiredFooterOverhang(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@UIItem@@UEAAJPEAUIItem@@@Z
    virtual long SetItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModel@UIItem@@QEAAJ_N@Z
    long SetModel(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowFocusRect@UIItem@@QEAAJ_N@Z
    long SetShowFocusRect(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowFocusRectProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowFocusRectProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TabletModeProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TabletModeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UICollectionCreationPropMapProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UICollectionCreationPropMapProp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItem@@QEAA@XZ
    UIItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UnderlineModeProp@UIItem@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UnderlineModeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UIItem@@QEAAXW4ITEM_CHANGED_TYPE@@@Z
    void Update(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIItem@@UEAA@XZ
    virtual ~UIItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UIItem@@MEAAJW4UPDATEUIITEMTYPE@@@Z
    virtual long _Update(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccessibleProps@UIItem@@MEAAXXZ
    virtual void _UpdateAccessibleProps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVisualsForWindowsClassic@UIItem@@IEAAXXZ
    void _UpdateVisualsForWindowsClassic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateSelectedProperty@UIItem@@MEAAXXZ
    virtual void v_UpdateSelectedProperty();
};
