#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
// Base evidence: UIProperty (likely; classinfo-template-instantiation).
class UIProgressProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@UIProgressProperty@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIProgressProperty@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideWhenZero@UIProgressProperty@@QEAA_NXZ
    bool GetHideWhenZero();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@UIProgressProperty@@UEAAHXZ
    virtual int HasVisibleContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HideWhenZeroProp@UIProgressProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * HideWhenZeroProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIProgressProperty@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHideWhenZero@UIProgressProperty@@QEAAJ_N@Z
    long SetHideWhenZero(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UsePropertyControl@UIProgressProperty@@MEAAHPEAUIPropertyDescription@@@Z
    virtual int _UsePropertyControl(IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateFromItem@UIProgressProperty@@MEAAJPEAUIItem@@@Z
    virtual long v_UpdateFromItem(IItem *);
};
