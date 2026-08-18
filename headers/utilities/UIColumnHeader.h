#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 34 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class UIColumnHeader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnIndexProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnIndexProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@UIColumnHeader@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoColumnContextMenu@UIColumnHeader@@QEAAXPEBUtagPOINT@@@Z
    void DoColumnContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoColumnFilterMenu@UIColumnHeader@@QEAAXPEBUtagPOINT@@@Z
    void DoColumnFilterMenu(tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?EnableActivationProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * EnableActivationProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIColumnHeader@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnIndex@UIColumnHeader@@QEAAHXZ
    int GetColumnIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIColumnHeader@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableActivation@UIColumnHeader@@QEAA_NXZ
    bool GetEnableActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxWidth@UIColumnHeader@@QEAAHXZ
    int GetMaxWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinWidth@UIColumnHeader@@QEAAHXZ
    int GetMinWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameValue@UIColumnHeader@@QEAAPEAVValue@DirectUI@@XZ
    ::DirectUI::Value * GetNameValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonClippedHeaderWidth@UIColumnHeader@@QEAAIPEAUHDC__@@@Z
    unsigned int GetNonClippedHeaderWidth(HDC__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortDirection@UIColumnHeader@@QEAAHXZ
    int GetSortDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortedBy@UIColumnHeader@@QEAA_NXZ
    bool GetSortedBy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCheckbox@UIColumnHeader@@QEAAXXZ
    void HideCheckbox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MaxWidthProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MaxWidthProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MinWidthProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MinWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIColumnHeader@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIColumnHeader@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIColumnHeader@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIColumnHeader@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIColumnHeader@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableActivation@UIColumnHeader@@QEAAJ_N@Z
    long SetEnableActivation(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFiltered@UIColumnHeader@@QEAAXH@Z
    void SetFiltered(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinWidth@UIColumnHeader@@QEAAJH@Z
    long SetMinWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSortedBy@UIColumnHeader@@QEAAJ_N@Z
    long SetSortedBy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCheckbox@UIColumnHeader@@QEAAXXZ
    void ShowCheckbox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SortDirectionProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SortDirectionProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SortedByProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SortedByProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TabletModeProp@UIColumnHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TabletModeProp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDropDown@UIColumnHeader@@IEAAXH@Z
    void _ShowDropDown(int);
};
