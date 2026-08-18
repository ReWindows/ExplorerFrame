#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 43 member(s).
class CInplaceRename {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInplaceRename@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRename@CInplaceRename@@UEAAJXZ
    virtual long BeginRename();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInplaceRename@@QEAA@PEAUISelectionManager@@@Z
    CInplaceRename(ISelectionManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRename@CInplaceRename@@UEAAJXZ
    virtual long EndRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@CInplaceRename@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long FocusChanged(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputEvent@CInplaceRename@@UEAAJPEAUInputEvent@DirectUI@@@Z
    virtual long HandleInputEvent(::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUserBegunTyping@CInplaceRename@@UEAAHXZ
    virtual int HasUserBegunTyping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInplaceRename@@QEAAJPEAVUIItemsView@@@Z
    long Initialize(UIItemsView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenaming@CInplaceRename@@UEAAHXZ
    virtual int IsRenaming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CInplaceRename@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CInplaceRename@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CInplaceRename@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInplaceRename@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInplaceRename@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSingleClickMode@CInplaceRename@@UEAAJH@Z
    virtual long SetSingleClickMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupRenameFromState@CInplaceRename@@AEAAXXZ
    void _CleanupRenameFromState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawCompositionLine@CInplaceRename@@AEAAXPEAUHWND__@@PEAUHDC__@@PEAUHFONT__@@PEBGPEBEIII@Z
    void _DrawCompositionLine(HWND__*, HDC__*, HFONT__*, unsigned short const *, unsigned char const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditSubclassProc@CInplaceRename@@AEAA_JPEAUHWND__@@I_K_J11@Z
    int64_t _EditSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndComposition@CInplaceRename@@AEAAXXZ
    void _EndComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndEdit@CInplaceRename@@AEAAXW4ENDEDIT@@@Z
    void _EndEdit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindNameProperty@CInplaceRename@@AEAAPEAVUIProperty@@PEAVElement@DirectUI@@@Z
    UIProperty * _FindNameProperty(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HookMouse@CInplaceRename@@AEAAHH@Z
    int _HookMouse(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IMEReplaceSelection@CInplaceRename@@AEAAXPEAUHWND__@@PEAG@Z
    void _IMEReplaceSelection(HWND__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertComposition@CInplaceRename@@AEAAXPEAUHWND__@@_K_J@Z
    void _InsertComposition(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDBCSorIMEEnabled@CInplaceRename@@AEAAHXZ
    int _IsDBCSorIMEEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRenamable@CInplaceRename@@AEAAHPEAVElement@DirectUI@@@Z
    int _IsRenamable(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseProc@CInplaceRename@@AEAA_JH_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z
    int64_t _MouseProc(int, uint64_t, tagMOUSEHOOKSTRUCTEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintComposition@CInplaceRename@@AEAAXPEAUHWND__@@@Z
    void _PaintComposition(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlaceAndShowControl@CInplaceRename@@AEAAJPEAVUIProperty@@@Z
    long _PlaceAndShowControl(UIProperty *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentFont@CInplaceRename@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetCurrentFont(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInitialSelection@CInplaceRename@@AEAAXXZ
    void _SetInitialSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeIME@CInplaceRename@@AEAAXPEAUHWND__@@@Z
    void _SizeIME(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimerCallback@CInplaceRename@@AEAAXXZ
    void _TimerCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditSubclassProc@CInplaceRename@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseProc@CInplaceRename@@CA_JH_K_J@Z
    static int64_t s_MouseProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TimerCallback@CInplaceRename@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_TimerCallback(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInplaceRename@@AEAA@XZ
    ~CInplaceRename();
};
