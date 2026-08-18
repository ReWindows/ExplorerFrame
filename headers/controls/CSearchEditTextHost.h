#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 76 member(s).
class CSearchEditTextHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchEditTextHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchEditTextHost@@QEAA@PEAVCSearchEditBoxBase@@@Z
    CSearchEditTextHost(CSearchEditBoxBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CSearchEditTextHost@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteObject@CSearchEditTextHost@@UEAAJPEAUIOleObject@@@Z
    virtual long DeleteObject(IOleObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@CSearchEditTextHost@@UEAAJPEAU_charrange@@KPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(_charrange *, unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@CSearchEditTextHost@@UEAAJGPEAUIOleObject@@PEAU_charrange@@PEAPEAUHMENU__@@@Z
    virtual long GetContextMenu(unsigned short, IOleObject *, _charrange *, HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragDropEffect@CSearchEditTextHost@@UEAAJHKPEAK@Z
    virtual long GetDragDropEffect(int, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInPlaceContext@CSearchEditTextHost@@UEAAJPEAPEAUIOleInPlaceFrame@@PEAPEAUIOleInPlaceUIWindow@@PEAUtagOIFI@@@Z
    virtual long GetInPlaceContext(IOleInPlaceFrame * *, IOleInPlaceUIWindow * *, tagOIFI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewStorage@CSearchEditTextHost@@UEAAJPEAPEAUIStorage@@@Z
    virtual long GetNewStorage(IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CSearchEditTextHost@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@CSearchEditTextHost@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CSearchEditTextHost@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CSearchEditTextHost@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerAttach@CSearchEditTextHost@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CSearchEditTextHost@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxCharFormatChange@CSearchEditTextHost@@UEAAJPEBU_charformatw@@@Z
    virtual long OnTxCharFormatChange(_charformatw const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxParaFormatChange@CSearchEditTextHost@@UEAAJPEBU_paraformat@@@Z
    virtual long OnTxParaFormatChange(_paraformat const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAcceptData@CSearchEditTextHost@@UEAAJPEAUIDataObject@@PEAGKHPEAX@Z
    virtual long QueryAcceptData(IDataObject *, unsigned short *, unsigned long, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertObject@CSearchEditTextHost@@UEAAJPEAU_GUID@@PEAUIStorage@@J@Z
    virtual long QueryInsertObject(_GUID *, IStorage *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchEditTextHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchEditTextHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContainerUI@CSearchEditTextHost@@UEAAJH@Z
    virtual long ShowContainerUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxActivate@CSearchEditTextHost@@UEAAJPEAJ@Z
    virtual long TxActivate(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxClientToScreen@CSearchEditTextHost@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxCreateCaret@CSearchEditTextHost@@UEAAHPEAUHBITMAP__@@HH@Z
    virtual int TxCreateCaret(HBITMAP__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDeactivate@CSearchEditTextHost@@UEAAJJ@Z
    virtual long TxDeactivate(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDestroyCaret@CSearchEditTextHost@@UEAAJXZ
    virtual long TxDestroyCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxEnableScrollBar@CSearchEditTextHost@@UEAAHHH@Z
    virtual int TxEnableScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxFreeTextServicesNotification@CSearchEditTextHost@@UEAAXXZ
    virtual void TxFreeTextServicesNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetAcceleratorPos@CSearchEditTextHost@@UEAAJPEAJ@Z
    virtual long TxGetAcceleratorPos(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetBackStyle@CSearchEditTextHost@@UEAAJPEAW4TXTBACKSTYLE@@@Z
    virtual long TxGetBackStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetCharFormat@CSearchEditTextHost@@UEAAJPEAPEBU_charformatw@@@Z
    virtual long TxGetCharFormat(_charformatw const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetClientRect@CSearchEditTextHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetDC@CSearchEditTextHost@@UEAAPEAUHDC__@@XZ
    virtual HDC__* TxGetDC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetEastAsianFlags@CSearchEditTextHost@@UEAAJPEAJ@Z
    virtual long TxGetEastAsianFlags(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetEditStyle@CSearchEditTextHost@@UEAAJKPEAK@Z
    virtual long TxGetEditStyle(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetExtent@CSearchEditTextHost@@UEAAJPEAUtagSIZE@@@Z
    virtual long TxGetExtent(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetHorzExtent@CSearchEditTextHost@@UEAAJPEAJ@Z
    virtual long TxGetHorzExtent(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetMaxLength@CSearchEditTextHost@@UEAAJPEAK@Z
    virtual long TxGetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPalette@CSearchEditTextHost@@UEAAPEAUHPALETTE__@@XZ
    virtual HPALETTE__* TxGetPalette();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetParaFormat@CSearchEditTextHost@@UEAAJPEAPEBU_paraformat@@@Z
    virtual long TxGetParaFormat(_paraformat const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@CSearchEditTextHost@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPropertyBits@CSearchEditTextHost@@UEAAJKPEAK@Z
    virtual long TxGetPropertyBits(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetScrollBars@CSearchEditTextHost@@UEAAJPEAK@Z
    virtual long TxGetScrollBars(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSelectionBarWidth@CSearchEditTextHost@@UEAAJPEAJ@Z
    virtual long TxGetSelectionBarWidth(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSysColor@CSearchEditTextHost@@UEAAKH@Z
    virtual unsigned long TxGetSysColor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewInset@CSearchEditTextHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetViewInset(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindow@CSearchEditTextHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long TxGetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindowStyles@CSearchEditTextHost@@UEAAJPEAK0@Z
    virtual long TxGetWindowStyles(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmGetContext@CSearchEditTextHost@@UEAAPEAUHIMC__@@XZ
    virtual HIMC__* TxImmGetContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmReleaseContext@CSearchEditTextHost@@UEAAXPEAUHIMC__@@@Z
    virtual void TxImmReleaseContext(HIMC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxInvalidateRect@CSearchEditTextHost@@UEAAXPEBUtagRECT@@H@Z
    virtual void TxInvalidateRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxIsDoubleClickPending@CSearchEditTextHost@@UEAAHXZ
    virtual int TxIsDoubleClickPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxKillTimer@CSearchEditTextHost@@UEAAXI@Z
    virtual void TxKillTimer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@CSearchEditTextHost@@UEAAJKPEAX@Z
    virtual long TxNotify(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxReleaseDC@CSearchEditTextHost@@UEAAHPEAUHDC__@@@Z
    virtual int TxReleaseDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScreenToClient@CSearchEditTextHost@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxScreenToClient(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScrollWindowEx@CSearchEditTextHost@@UEAAXHHPEBUtagRECT@@0PEAUHRGN__@@PEAU2@I@Z
    virtual void TxScrollWindowEx(int, int, tagRECT const *, tagRECT const *, HRGN__*, tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCapture@CSearchEditTextHost@@UEAAXH@Z
    virtual void TxSetCapture(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCaretPos@CSearchEditTextHost@@UEAAHHH@Z
    virtual int TxSetCaretPos(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor@CSearchEditTextHost@@UEAAXPEAUHICON__@@H@Z
    virtual void TxSetCursor(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor2@CSearchEditTextHost@@UEAAPEAUHICON__@@PEAU2@H@Z
    virtual HICON__* TxSetCursor2(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetFocus@CSearchEditTextHost@@UEAAXXZ
    virtual void TxSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetForegroundWindow@CSearchEditTextHost@@UEAAJXZ
    virtual long TxSetForegroundWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollPos@CSearchEditTextHost@@UEAAHHHH@Z
    virtual int TxSetScrollPos(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollRange@CSearchEditTextHost@@UEAAHHJHH@Z
    virtual int TxSetScrollRange(int, long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetTimer@CSearchEditTextHost@@UEAAHII@Z
    virtual int TxSetTimer(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowCaret@CSearchEditTextHost@@UEAAHH@Z
    virtual int TxShowCaret(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowDropCaret@CSearchEditTextHost@@UEAAJHPEAUHDC__@@PEBUtagRECT@@@Z
    virtual long TxShowDropCaret(int, HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowScrollBar@CSearchEditTextHost@@UEAAHHH@Z
    virtual int TxShowScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxViewChange@CSearchEditTextHost@@UEAAXH@Z
    virtual void TxViewChange(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheHWNDHost@CSearchEditTextHost@@AEAAHXZ
    int _CacheHWNDHost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchEditTextHost@@AEAA@XZ
    ~CSearchEditTextHost();
};
