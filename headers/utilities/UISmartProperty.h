#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 19 member(s).
// Base evidence: UIProperty (likely; classinfo-template-instantiation).
class UISmartProperty {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UISmartProperty@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinVisibleWidth@UISmartProperty@@QEAAHXZ
    int GetMinVisibleWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowLabel@UISmartProperty@@QEAA_NXZ
    bool GetShowLabel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleWidth@UISmartProperty@@QEAAHXZ
    int GetVisibleWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@UISmartProperty@@UEAAHXZ
    virtual int HasVisibleContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IncreaseFontSizeProp@UISmartProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IncreaseFontSizeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MinVisibleWidthProp@UISmartProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MinVisibleWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UISmartProperty@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UISmartProperty@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UISmartProperty@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PropertyIndexProp@UISmartProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PropertyIndexProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UISmartProperty@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowLabelProp@UISmartProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowLabelProp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@UISmartProperty@@MEAAXXZ
    virtual void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsClickInWhiteSpace@UISmartProperty@@MEAAHUtagPOINT@@PEAUHDC__@@@Z
    virtual int _IsClickInWhiteSpace(tagPOINT, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFontSize@UISmartProperty@@IEAAXXZ
    void _UpdateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateFromItem@UISmartProperty@@MEAAJPEAUIItem@@@Z
    virtual long v_UpdateFromItem(IItem *);
};
