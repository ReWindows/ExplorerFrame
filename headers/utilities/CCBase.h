#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
namespace DirectUI {
class CCBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@CCBase@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomDraw@CCBase@DirectUI@@UEAA_NPEAUtagNMCUSTOMDRAWINFO@@PEA_J@Z
    virtual bool OnCustomDraw(tagNMCUSTOMDRAWINFO *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CCBase@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostDialogFocus@CCBase@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@CCBase@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedDialogFocus@CCBase@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCreate@CCBase@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
};
} // namespace DirectUI
