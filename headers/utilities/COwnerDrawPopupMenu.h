#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class COwnerDrawPopupMenu {
public:
    class POPUPMENUITEMINFO;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendItem@COwnerDrawPopupMenu@@QEAAJPEBG_KIKHH@Z
    long AppendItem(unsigned short const *, uint64_t, unsigned int, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@COwnerDrawPopupMenu@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@COwnerDrawPopupMenu@@QEAAHIHHPEAUHWND__@@PEBUtagRECT@@@Z
    int Show(unsigned int, int, int, HWND__*, tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COwnerDrawPopupMenu@@UEAA@XZ
    virtual ~COwnerDrawPopupMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyImageList@COwnerDrawPopupMenu@@AEAAXXZ
    void _DestroyImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawCheckbox@COwnerDrawPopupMenu@@AEAAXPEAUHDC__@@PEAUtagRECT@@@Z
    void _DrawCheckbox(HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawMenuItem@COwnerDrawPopupMenu@@AEAAXPEAUtagDRAWITEMSTRUCT@@PEBG1KHHH@Z
    void _DrawMenuItem(tagDRAWITEMSTRUCT *, unsigned short const *, unsigned short const *, unsigned long, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillItem@COwnerDrawPopupMenu@@AEAAJPEAUPOPUPMENUITEMINFO@1@PEBG_KIKHH@Z
    long _FillItem(WindissectOpaque *, unsigned short const *, uint64_t, unsigned int, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageAreaHeight@COwnerDrawPopupMenu@@AEAAHXZ
    int _GetImageAreaHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageAreaWidth@COwnerDrawPopupMenu@@AEAAHXZ
    int _GetImageAreaWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFont@COwnerDrawPopupMenu@@AEAAPEAUHFONT__@@K@Z
    HFONT__* _GetItemFont(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitThemes@COwnerDrawPopupMenu@@AEAAXXZ
    void _InitThemes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MeasureMenuItem@COwnerDrawPopupMenu@@AEAA_JPEAUtagMEASUREITEMSTRUCT@@PEBG1KHH@Z
    int64_t _MeasureMenuItem(tagMEASUREITEMSTRUCT *, unsigned short const *, unsigned short const *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MeasureMenuItemText@COwnerDrawPopupMenu@@AEAAHPEBGKPEAUtagSIZE@@@Z
    int _MeasureMenuItemText(unsigned short const *, unsigned long, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MenuProc@COwnerDrawPopupMenu@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _MenuProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MenuProc@COwnerDrawPopupMenu@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MenuProc(HWND__*, unsigned int, uint64_t, int64_t);
};
