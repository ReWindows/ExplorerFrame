#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 24 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CapabilitiesProp@UIBase@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CapabilitiesProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?DropHighlightProp@UIBase@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * DropHighlightProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireLayoutChangeEvent@UIBase@@SAXPEAVElement@DirectUI@@W4LAYOUTCHANGEREASON@@@Z
    static void FireLayoutChangeEvent(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@UIBase@@UEAAHXZ
    virtual int GetBaselineOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@UIBase@@QEAA?AW4UICapabilities@@XZ
    int GetCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIBase@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredBaselineOffset@UIBase@@UEAAHXZ
    virtual int GetDesiredBaselineOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredFooterOverhang@UIBase@@UEAAHXZ
    virtual int GetDesiredFooterOverhang();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoTipCallback@UIBase@@QEAA_NXZ
    bool GetInfoTipCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedUI@UIBase@@UEAAPEAUIVirtualizedUI@@XZ
    virtual IVirtualizedUI * GetVirtualizedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?InfoTipCallbackProp@UIBase@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * InfoTipCallbackProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepAliveAddRef@UIBase@@UEAAXXZ
    virtual void KeepAliveAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepAliveRelease@UIBase@@UEAAXXZ
    virtual void KeepAliveRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIBase@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostLayoutChangeEvent@UIBase@@SAXPEAVElement@DirectUI@@W4LAYOUTCHANGEREASON@@@Z
    static void PostLayoutChangeEvent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIBase@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaselineOffset@UIBase@@UEAAXH@Z
    virtual void SetBaselineOffset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredFooterOverhang@UIBase@@UEAAXH@Z
    virtual void SetDesiredFooterOverhang(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropHighlight@UIBase@@QEAAJ_N@Z
    long SetDropHighlight(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepAlive@UIBase@@UEAAHXZ
    virtual int ShouldKeepAlive();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIBase@@QEAA@XZ
    UIBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VisibleMinSizeProp@UIBase@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VisibleMinSizeProp();
};
