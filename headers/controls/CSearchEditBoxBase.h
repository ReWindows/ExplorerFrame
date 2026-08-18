#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 61 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CSearchEditBoxBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchEditBoxBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchEditBoxBase@@QEAA@XZ
    CSearchEditBoxBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaretMoved@CSearchEditBoxBase@@UEAAXXZ
    virtual void CaretMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUI_UiaRaiseAutomationEvent@CSearchEditBoxBase@@QEAAJPEAVElement@DirectUI@@PEAVValue@3@1@Z
    long DUI_UiaRaiseAutomationEvent(::DirectUI::Element *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePromptWithCaret@CSearchEditBoxBase@@QEAAJ_N@Z
    long EnablePromptWithCaret(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardMessage@CSearchEditBoxBase@@QEAAJI_K_JPEA_J@Z
    long ForwardMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchEditBoxBase@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@CSearchEditBoxBase@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CSearchEditBoxBase@@QEAAJPEAPEAG@Z
    long GetSearchText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextDocument@CSearchEditBoxBase@@QEAAJPEAPEAUITextDocument@@@Z
    long GetTextDocument(ITextDocument * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelection@CSearchEditBoxBase@@QEAA_NXZ
    bool HasSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchEditBoxBase@@QEAAJHIPEAVElement@DirectUI@@PEAK@Z
    long Initialize(int, unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CSearchEditBoxBase@@QEAAXXZ
    void Invalidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CSearchEditBoxBase@@QEAA_NXZ
    bool IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProgrammaticChange@CSearchEditBoxBase@@QEAA_NXZ
    bool IsProgrammaticChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillSelection@CSearchEditBoxBase@@QEAAXXZ
    void KillSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CSearchEditBoxBase@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CSearchEditBoxBase@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeCompositionChanged@CSearchEditBoxBase@@UEAAJPEAUIQueryWithLinguisticAlternatives@@H@Z
    virtual long OnImeCompositionChanged(IQueryWithLinguisticAlternatives *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CSearchEditBoxBase@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptWithCaretEnabled@CSearchEditBoxBase@@QEAA_NXZ
    bool PromptWithCaretEnabled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchEditBoxBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RECNotify@CSearchEditBoxBase@@UEAAJKPEAX@Z
    virtual long RECNotify(unsigned long, void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchEditBoxBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@CSearchEditBoxBase@@QEAAXXZ
    void SelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyText@CSearchEditBoxBase@@QEAAJPEBG@Z
    long SetEmptyText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgrammaticChange@CSearchEditBoxBase@@QEAAJ_N@Z
    long SetProgrammaticChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPromptText@CSearchEditBoxBase@@QEAAXXZ
    void ShowPromptText();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTextIfSelected@CSearchEditBoxBase@@IEAAJXZ
    long _ClearTextIfSelected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyToClipboard@CSearchEditBoxBase@@IEAAJXZ
    long _CopyToClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTextServices@CSearchEditBoxBase@@IEAAJPEAUIUnknown@@PEAVITextHost@@PEAPEAU2@@Z
    long _CreateTextServices(IUnknown *, ITextHost *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteSelection@CSearchEditBoxBase@@IEAAJXZ
    long _DeleteSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClipboardWindow@CSearchEditBoxBase@@MEAAPEAUHWND__@@XZ
    virtual HWND__* _GetClipboardWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRECText@CSearchEditBoxBase@@IEAAJPEAPEAG@Z
    long _GetRECText(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchBoxWindow@CSearchEditBoxBase@@MEAAPEAUHWND__@@XZ
    virtual HWND__* _GetSearchBoxWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CSearchEditBoxBase@@IEAAJPEAH0@Z
    long _GetSelection(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleBackspace@CSearchEditBoxBase@@IEAAXXZ
    void _HandleBackspace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleKeyDown@CSearchEditBoxBase@@MEAAHI_K_J@Z
    virtual int _HandleKeyDown(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HidePromptText@CSearchEditBoxBase@@IEAAXXZ
    void _HidePromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLinguisticAlternativeGenerator@CSearchEditBoxBase@@IEAAJXZ
    long _InitializeLinguisticAlternativeGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHighContrast@CSearchEditBoxBase@@IEAAHXZ
    int _IsHighContrast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyTextServices@CSearchEditBoxBase@@IEAAXXZ
    void _NotifyTextServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostImeFinalizeEvent@CSearchEditBoxBase@@MEAAXXZ
    virtual void _PostImeFinalizeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCharRange@CSearchEditBoxBase@@IEAAJPEAGJJ@Z
    long _RemoveCharRange(unsigned short *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSubString@CSearchEditBoxBase@@IEAAJPEBGHHHPEAPEAGPEAH@Z
    long _ReplaceSubString(unsigned short const *, int, int, int, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSubStringAndUpdate@CSearchEditBoxBase@@MEAAJPEBGHHHPEAH@Z
    virtual long _ReplaceSubStringAndUpdate(unsigned short const *, int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCursorPosition@CSearchEditBoxBase@@IEAAXH@Z
    void _SetCursorPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmpty@CSearchEditBoxBase@@IEAAX_N@Z
    void _SetEmpty(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmptyText@CSearchEditBoxBase@@MEAAXXZ
    virtual void _SetEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CSearchEditBoxBase@@MEAAXPEBG@Z
    virtual void _SetText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFont@CSearchEditBoxBase@@MEAAXXZ
    virtual void _UpdateFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateParagraphFormat@CSearchEditBoxBase@@IEAAXXZ
    void _UpdateParagraphFormat();
};
