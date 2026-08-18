#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
namespace DirectUI {
class TouchHWNDElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMSAAEnabled@TouchHWNDElement@DirectUI@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@TouchHWNDElement@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@TouchHWNDElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchHWNDElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchHWNDElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchHWNDElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUIStateChanged@TouchHWNDElement@DirectUI@@MEAAXGG@Z
    virtual void _OnUIStateChanged(unsigned short, unsigned short);
};
} // namespace DirectUI
