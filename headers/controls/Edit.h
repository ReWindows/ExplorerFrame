#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
namespace DirectUI {
class Edit {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@Edit@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStringAsDisplayed@Edit@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentProtected@Edit@DirectUI@@UEAA_NXZ
    virtual bool IsContentProtected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@Edit@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@Edit@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@Edit@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@Edit@DirectUI@@MEAAPEAUHWND__@@PEAU3@_N@Z
    virtual HWND__* CreateHWND(HWND__*, bool);
};
} // namespace DirectUI
