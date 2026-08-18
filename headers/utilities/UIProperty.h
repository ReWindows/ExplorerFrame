#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 114 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIProperty {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIProperty@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ColumnSpanCountProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ColumnSpanCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CompressedProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CompressedProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@UIProperty@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?DynamicAccessibilityProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * DynamicAccessibilityProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?EnableHitHighlightingProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * EnableHitHighlightingProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?EncryptedProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * EncryptedProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIProperty@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumn@UIProperty@@QEAAHXZ
    int GetColumn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnSpanCount@UIProperty@@QEAAHXZ
    int GetColumnSpanCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@UIProperty@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIProperty@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineHeight@UIProperty@@QEAAHPEAVSurface@DirectUI@@@Z
    int GetLineHeight(::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxNumTextLines@UIProperty@@QEAAHXZ
    int GetMaxNumTextLines();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxPixelWidth@UIProperty@@QEAAHXZ
    int GetMaxPixelWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonClippedContentSize@UIProperty@@QEAA?AUtagSIZE@@PEAUHDC__@@HH@Z
    tagSIZE GetNonClippedContentSize(HDC__*, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCanonicalName@UIProperty@@QEAAPEBGPEAPEAVValue@DirectUI@@@Z
    unsigned short const * GetPropertyCanonicalName(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRow@UIProperty@@QEAAHXZ
    int GetRow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowSpanCount@UIProperty@@QEAAHXZ
    int GetRowSpanCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyChangingListener@UIProperty@@UEAAXPEBUPropertyInfo@DirectUI@@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyListener@UIProperty@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@UIProperty@@UEAAHXZ
    virtual int HasVisibleContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IconDisplayLimitProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IconDisplayLimitProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IconSizeProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IconSizeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateDateProperties@UIProperty@@QEAAJXZ
    long InvalidateDateProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyControlEnabled@UIProperty@@QEAAHXZ
    int IsPropertyControlEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTLReading@UIProperty@@UEAA_NXZ
    virtual bool IsRTLReading();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnderSyncRootProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * IsUnderSyncRootProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MaxNumTextLinesProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MaxNumTextLinesProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MaxPixelWidthProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MaxPixelWidthProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIProperty@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIProperty@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIProperty@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIProperty@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxCharFormatChange@UIProperty@@UEAAJPEBU_charformatw@@@Z
    virtual long OnTxCharFormatChange(_charformatw const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxParaFormatChange@UIProperty@@UEAAJPEBU_paraformat@@@Z
    virtual long OnTxParaFormatChange(_paraformat const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@UIProperty@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PropertyCanonicalNameProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PropertyCanonicalNameProp();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIProperty@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIProperty@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIProperty@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RowProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RowProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RowSpanCountProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RowSpanCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyCanonicalName@UIProperty@@QEAAJPEBG@Z
    long SetPropertyCanonicalName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseGroupZoom@UIProperty@@QEAAJ_N@Z
    long SetUseGroupZoom(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxActivate@UIProperty@@UEAAJPEAJ@Z
    virtual long TxActivate(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxClientToScreen@UIProperty@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxCreateCaret@UIProperty@@UEAAHPEAUHBITMAP__@@HH@Z
    virtual int TxCreateCaret(HBITMAP__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDeactivate@UIProperty@@UEAAJJ@Z
    virtual long TxDeactivate(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxEnableScrollBar@UIProperty@@UEAAHHH@Z
    virtual int TxEnableScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetAcceleratorPos@UIProperty@@UEAAJPEAJ@Z
    virtual long TxGetAcceleratorPos(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetBackStyle@UIProperty@@UEAAJPEAW4TXTBACKSTYLE@@@Z
    virtual long TxGetBackStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetCharFormat@UIProperty@@UEAAJPEAPEBU_charformatw@@@Z
    virtual long TxGetCharFormat(_charformatw const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetClientRect@UIProperty@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetDC@UIProperty@@UEAAPEAUHDC__@@XZ
    virtual HDC__* TxGetDC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetExtent@UIProperty@@UEAAJPEAUtagSIZE@@@Z
    virtual long TxGetExtent(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetMaxLength@UIProperty@@UEAAJPEAK@Z
    virtual long TxGetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetParaFormat@UIProperty@@UEAAJPEAPEBU_paraformat@@@Z
    virtual long TxGetParaFormat(_paraformat const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@UIProperty@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPropertyBits@UIProperty@@UEAAJKPEAK@Z
    virtual long TxGetPropertyBits(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetScrollBars@UIProperty@@UEAAJPEAK@Z
    virtual long TxGetScrollBars(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSelectionBarWidth@UIProperty@@UEAAJPEAJ@Z
    virtual long TxGetSelectionBarWidth(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSysColor@UIProperty@@UEAAKH@Z
    virtual unsigned long TxGetSysColor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewInset@UIProperty@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetViewInset(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmGetContext@UIProperty@@UEAAPEAUHIMC__@@XZ
    virtual HIMC__* TxImmGetContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmReleaseContext@UIProperty@@UEAAXPEAUHIMC__@@@Z
    virtual void TxImmReleaseContext(HIMC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxInvalidateRect@UIProperty@@UEAAXPEBUtagRECT@@H@Z
    virtual void TxInvalidateRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxKillTimer@UIProperty@@UEAAXI@Z
    virtual void TxKillTimer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@UIProperty@@UEAAJKPEAX@Z
    virtual long TxNotify(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxReleaseDC@UIProperty@@UEAAHPEAUHDC__@@@Z
    virtual int TxReleaseDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScreenToClient@UIProperty@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxScreenToClient(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScrollWindowEx@UIProperty@@UEAAXHHPEBUtagRECT@@0PEAUHRGN__@@PEAU2@I@Z
    virtual void TxScrollWindowEx(int, int, tagRECT const *, tagRECT const *, HRGN__*, tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCapture@UIProperty@@UEAAXH@Z
    virtual void TxSetCapture(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCaretPos@UIProperty@@UEAAHHH@Z
    virtual int TxSetCaretPos(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor@UIProperty@@UEAAXPEAUHICON__@@H@Z
    virtual void TxSetCursor(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetFocus@UIProperty@@UEAAXXZ
    virtual void TxSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollPos@UIProperty@@UEAAHHHH@Z
    virtual int TxSetScrollPos(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollRange@UIProperty@@UEAAHHJHH@Z
    virtual int TxSetScrollRange(int, long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetTimer@UIProperty@@UEAAHII@Z
    virtual int TxSetTimer(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowCaret@UIProperty@@UEAAHH@Z
    virtual int TxShowCaret(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowScrollBar@UIProperty@@UEAAHHH@Z
    virtual int TxShowScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxViewChange@UIProperty@@UEAAXH@Z
    virtual void TxViewChange(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIProperty@@QEAA@XZ
    UIProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UseGroupZoomProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UseGroupZoomProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UseRootScopeProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UseRootScopeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ValueChangeCountProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ValueChangeCountProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?WidthPatternProp@UIProperty@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * WidthPatternProp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@UIProperty@@MEAAXXZ
    virtual void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustHighlightPadding@UIProperty@@IEAAXPEAUITextRange@@PEAUtagRECT@@W4HighlightPaddingFlags@@@Z
    void _AdjustHighlightPadding(ITextRange *, tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForHitsAndSetUpRichEdit@UIProperty@@IEAAJXZ
    long _CheckForHitsAndSetUpRichEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectHitRectFromHitRange@UIProperty@@IEAAXUtagHITRANGE@@PEBUtagRECT@@AEAV?$CCoSimpleArray@UtagRECT@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UtagRECT@@@@@@@Z
    void _CollectHitRectFromHitRange(tagHITRANGE, tagRECT const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectHitRectFromTextRange@UIProperty@@IEAAXPEAUITextRange@@PEBUtagRECT@@W4HighlightPaddingFlags@@AEAV?$CCoSimpleArray@UtagRECT@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UtagRECT@@@@@@W4HITCHARTYPE@@@Z
    void _CollectHitRectFromTextRange(ITextRange *, tagRECT const *, int, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHitElementsFromRects@UIProperty@@IEAAXAEAV?$CCoSimpleArray@UtagRECT@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UtagRECT@@@@@@@Z
    void _CreateHitElementsFromRects(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePropertyConfiguration@UIProperty@@IEAAJXZ
    long _EnsurePropertyConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRichEditClass@UIProperty@@IEAAJXZ
    long _EnsureRichEditClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRichEditContentSize@UIProperty@@IEAA?AUtagSIZE@@HH@Z
    tagSIZE _GetRichEditContentSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSharedDrawControl@UIProperty@@IEAAXPEAPEAUIDrawPropertyControl@@@Z
    void _GetSharedDrawControl(IDrawPropertyControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTextLineHeight@UIProperty@@IEAAHHPEAUHDC__@@@Z
    int _GetTextLineHeight(int, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasValueChanged@UIProperty@@IEAAHAEBUtagPROPVARIANT@@@Z
    int _HasValueChanged(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsClickInWhiteSpace@UIProperty@@MEAAHUtagPOINT@@PEAUHDC__@@@Z
    virtual int _IsClickInWhiteSpace(tagPOINT, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareTextForRichEdit@UIProperty@@IEAAJPEBGPEBUtagRECT@@@Z
    long _PrepareTextForRichEdit(unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupHitHighlighting@UIProperty@@IEAAJPEAVUIItemsView@@@Z
    long _SetupHitHighlighting(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContentValue@UIProperty@@IEAAJAEBUtagPROPVARIANT@@@Z
    long _UpdateContentValue(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHitHighlightingContent@UIProperty@@IEAAXXZ
    void _UpdateHitHighlightingContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHitHighlightingFont@UIProperty@@IEAAXXZ
    void _UpdateHitHighlightingFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePARAFORMAT@UIProperty@@IEAAXXZ
    void _UpdatePARAFORMAT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTextService@UIProperty@@IEAAHPEBG@Z
    int _UpdateTextService(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UsePropertyControl@UIProperty@@MEAAHPEAUIPropertyDescription@@@Z
    virtual int _UsePropertyControl(IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateFromItem@UIProperty@@MEAAJPEAUIItem@@@Z
    virtual long v_UpdateFromItem(IItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIProperty@@MEAA@XZ
    virtual ~UIProperty();
};
