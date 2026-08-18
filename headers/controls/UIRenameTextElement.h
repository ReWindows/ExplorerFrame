#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Edit (likely; classinfo-template-instantiation).
class UIRenameTextElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustEditControlPosition@UIRenameTextElement@@QEAAXHHHPEAUHFONT__@@@Z
    void AdjustEditControlPosition(int, int, int, HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIRenameTextElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UIRenameTextElement@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@UIRenameTextElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIRenameTextElement@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIRenameTextElement@@QEAA@XZ
    UIRenameTextElement();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIRenameTextElement@@UEAA@XZ
    virtual ~UIRenameTextElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@UIRenameTextElement@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@UIRenameTextElement@@MEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColors@UIRenameTextElement@@AEAAXPEAUHWND__@@PEAUHDC__@@@Z
    void SetColors(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditParentSubclass@UIRenameTextElement@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditParentSubclass(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
