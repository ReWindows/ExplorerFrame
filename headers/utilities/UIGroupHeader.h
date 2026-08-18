#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIGroupHeader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIGroupHeader@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIGroupHeader@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIGroupHeader@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIGroupHeader@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIGroupHeader@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIGroupHeader@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowSelectedHeader@UIGroupHeader@@QEAAJ_N@Z
    long SetShowSelectedHeader(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowSelectedHeaderProp@UIGroupHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowSelectedHeaderProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFontSize@UIGroupHeader@@AEAAXXZ
    void _UpdateFontSize();
};
