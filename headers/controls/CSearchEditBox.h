#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 60 member(s).
// Base evidence: CSearchEditBoxBase (likely; classinfo-template-instantiation).
class CSearchEditBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendOrReplaceFilter@CSearchEditBox@@QEAAJAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIFilterCondition@@@Z
    long AppendOrReplaceFilter(_tagpropertykey const &, tagPROPVARIANT const *, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaretMoved@CSearchEditBox@@UEAAXXZ
    virtual void CaretMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableParsing@CSearchEditBox@@QEAAJ_N@Z
    long EnableParsing(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSuggestions@CSearchEditBox@@QEAAJ_N@Z
    long EnableSuggestions(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchEditBox@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrippedSearchText@CSearchEditBox@@QEAAJPEAPEAG@Z
    long GetStrippedSearchText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyAtIndex@CSearchEditBox@@QEAA_NHAEBU_tagpropertykey@@@Z
    bool IsPropertyAtIndex(int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppendKeyEx@CSearchEditBox@@QEAAJAEBU_tagpropertykey@@H@Z
    long OnAppendKeyEx(_tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CSearchEditBox@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CSearchEditBox@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSearchEditBox@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReplaceFilter@CSearchEditBox@@QEAAJHAEBU_tagpropertykey@@PEAUIFilterCondition@@@Z
    long OnReplaceFilter(int, _tagpropertykey const &, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRestoreQuery@CSearchEditBox@@QEAAJXZ
    long OnRestoreQuery();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CSearchEditBox@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsingEnabled@CSearchEditBox@@QEAA_NXZ
    bool ParsingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RECNotify@CSearchEditBox@@UEAAJKPEAX@Z
    virtual long RECNotify(unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CSearchEditBox@@QEAAJPEAUIShellItem@@@Z
    long SetLocation(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSearchEditBox@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchEditBox@@UEAA@XZ
    virtual ~CSearchEditBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendKeyToSearchText@CSearchEditBox@@AEAAJAEBU_tagpropertykey@@PEAPEAG@Z
    long _AppendKeyToSearchText(_tagpropertykey const &, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoHideSuggestions@CSearchEditBox@@AEAAJXZ
    long _AutoHideSuggestions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupFakeWindow@CSearchEditBox@@AEAAXXZ
    void _CleanupFakeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDanglingProperties@CSearchEditBox@@AEAAJXZ
    long _ClearDanglingProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFakeWindow@CSearchEditBox@@AEAAHXZ
    int _CreateFakeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTerms@CSearchEditBox@@AEAAJPEBGPEAUITokenCollection@@PEAUICondition@@PEAV?$CDPA@VCSCParsedTerm@@V?$CTContainer_PolicyUnOwned@VCSCParsedTerm@@@@@@@Z
    long _CreateTerms(unsigned short const *, ITokenCollection *, ICondition *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenu@CSearchEditBox@@AEAAJUtagPOINT@@@Z
    long _DoContextMenu(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoKeyboardContextMenu@CSearchEditBox@@AEAAJXZ
    long _DoKeyboardContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Draw@CSearchEditBox@@AEAAXPEAUHDC__@@PEAUtagRECT@@@Z
    void _Draw(HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePopup@CSearchEditBox@@AEAAJXZ
    long _EnsurePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractCoveredString@CSearchEditBox@@AEAAJPEBGPEAUITokenCollection@@KKPEAPEAG@Z
    long _ExtractCoveredString(unsigned short const *, ITokenCollection *, unsigned long, unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatText@CSearchEditBox@@AEAAJXZ
    long _FormatText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClipboardWindow@CSearchEditBox@@EEAAPEAUHWND__@@XZ
    virtual HWND__* _GetClipboardWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultKeyPhrase@CSearchEditBox@@AEAAJAEBU_tagpropertykey@@PEAPEAG@Z
    long _GetDefaultKeyPhrase(_tagpropertykey const &, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchBoxWindow@CSearchEditBox@@EEAAPEAUHWND__@@XZ
    virtual HWND__* _GetSearchBoxWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchRibbonState@CSearchEditBox@@AEAA?AW4UI_CONTEXTAVAILABILITY@@XZ
    int _GetSearchRibbonState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTextColor@CSearchEditBox@@AEAAKW4SEARCHEDITBOXTEXTCOLOR@1@@Z
    unsigned long _GetTextColor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleKeyDown@CSearchEditBox@@EEAAHI_K_J@Z
    virtual int _HandleKeyDown(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitParser@CSearchEditBox@@AEAAJXZ
    long _InitParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchTokensToConditions@CSearchEditBox@@AEAAJPEBGPEAUITokenCollection@@PEAV?$CDPA@VCSCParsedTerm@@V?$CTContainer_PolicyUnOwned@VCSCParsedTerm@@@@@@PEAUICondition@@@Z
    long _MatchTokensToConditions(unsigned short const *, ITokenCollection *, WindissectOpaque *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Parse@CSearchEditBox@@AEAAJPEBG@Z
    long _Parse(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyKeysFromKey@CSearchEditBox@@AEAAJAEBU_tagpropertykey@@W4PROPERTY_EXPANSION_FLAGS@@PEAUIPropertyKeyStore@@PEAU2@PEAH@Z
    long _PropertyKeysFromKey(_tagpropertykey const &, int, IPropertyKeyStore *, _tagpropertykey *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyKeysFromTerm@CSearchEditBox@@AEAAJPEAVCSCParsedTerm@@W4PROPERTY_EXPANSION_FLAGS@@HPEAUIPropertyKeyStore@@PEAU_tagpropertykey@@PEAH@Z
    long _PropertyKeysFromTerm(CSCParsedTerm *, int, int, IPropertyKeyStore *, _tagpropertykey *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyValueFocus@CSearchEditBox@@AEAAHPEAUIPropertyKeyStore@@PEAH1PEAU_tagpropertykey@@@Z
    int _PropertyValueFocus(IPropertyKeyStore *, int *, int *, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryStringFromFilterCondition@CSearchEditBox@@AEAAJPEAUIFilterCondition@@PEAPEAG@Z
    long _QueryStringFromFilterCondition(IFilterCondition *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSubStringAndUpdate@CSearchEditBox@@EEAAJPEBGHHHPEAH@Z
    virtual long _ReplaceSubStringAndUpdate(unsigned short const *, int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceTerm@CSearchEditBox@@AEAAJHPEBGPEAH1@Z
    long _ReplaceTerm(int, unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveQueryText@CSearchEditBox@@AEAAJXZ
    long _SaveQueryText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmptyText@CSearchEditBox@@EEAAXXZ
    virtual void _SetEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CSearchEditBox@@EEAAXPEBG@Z
    virtual void _SetText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTokenData@CSearchEditBox@@AEAAJW4SCPTTYPE@@PEAUIRichChunk@@PEBGPEAUITokenCollection@@PEAUICondition@@PEAV?$CDPA@VCSCParsedTerm@@V?$CTContainer_PolicyUnOwned@VCSCParsedTerm@@@@@@@Z
    long _SetTokenData(int, IRichChunk *, unsigned short const *, ITokenCollection *, ICondition *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TextToTerms@CSearchEditBox@@AEAAJPEBGPEAV?$CDPA@VCSCParsedTerm@@V?$CTContainer_PolicyUnOwned@VCSCParsedTerm@@@@@@@Z
    long _TextToTerms(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranslateInconvenientDateTime@CSearchEditBox@@AEAAJPEBGPEAUtagPROPVARIANT@@@Z
    long _TranslateInconvenientDateTime(unsigned short const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFont@CSearchEditBox@@EEAAXXZ
    virtual void _UpdateFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTextAndReparse@CSearchEditBox@@AEAAJPEBG@Z
    long _UpdateTextAndReparse(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WaitForNavigateOrShowPopup@CSearchEditBox@@AEAAXXZ
    void _WaitForNavigateOrShowPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WordWheelHasMeaningfullyChanged@CSearchEditBox@@AEAAHXZ
    int _WordWheelHasMeaningfullyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DrawThemeTextCB@CSearchEditBox@@CAHPEAUHDC__@@PEAGHPEAUtagRECT@@I_J@Z
    static int s_DrawThemeTextCB(HDC__*, unsigned short *, int, tagRECT *, unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WrapperWndProc@CSearchEditBox@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WrapperWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
