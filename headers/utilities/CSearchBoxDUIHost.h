#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::TouchHWNDElement (likely; classinfo-template-instantiation).
class CSearchBoxDUIHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSearchBoxDUIHost@@SAJPEAUHWND__@@_NIPEAVElement@DirectUI@@PEAKPEAPEAV34@@Z
    static long Create(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStyleParser@CSearchBoxDUIHost@@UEAAJPEAPEAVDUIXmlParser@DirectUI@@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchBoxDUIHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CSearchBoxDUIHost@@UEAAXPEAUThemeChangedEvent@DirectUI@@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CSearchBoxDUIHost@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CSearchBoxDUIHost@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassProc@CSearchBoxDUIHost@@SA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFromResource@CSearchBoxDUIHost@@AEAAJXZ
    long _CreateFromResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CSearchBoxDUIHost@@AEAAXXZ
    void _OnSize();
};
