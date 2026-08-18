#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UICheckbox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AlwaysHideCheckboxProp@UICheckbox@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * AlwaysHideCheckboxProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UICheckbox@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HoveredOverProp@UICheckbox@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * HoveredOverProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UICheckbox@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UICheckbox@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@UICheckbox@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UICheckbox@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UICheckbox@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SelectionModeProp@UICheckbox@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SelectionModeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoveredOver@UICheckbox@@QEAAJ_N@Z
    long SetHoveredOver(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowCheckboxesProp@UICheckbox@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowCheckboxesProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TabletModeProp@UICheckbox@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TabletModeProp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UICheckbox@@QEAA@XZ
    UICheckbox();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UICheckbox@@UEAA@XZ
    virtual ~UICheckbox();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateShowState@UICheckbox@@IEAAXXZ
    void _UpdateShowState();
};
