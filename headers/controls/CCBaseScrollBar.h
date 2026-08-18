#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
namespace DirectUI {
class CCBaseScrollBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CCBaseScrollBar@DirectUI@@UEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CCBaseScrollBar@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLine@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetLine();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximum@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMaximum();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimum@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMinimum();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPage@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProportional@CCBaseScrollBar@DirectUI@@UEAA_NXZ
    virtual bool GetProportional();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@CCBaseScrollBar@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLine@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetLine(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximum@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMaximum(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinimum@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMinimum(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPage@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPosition(int);
};
} // namespace DirectUI
