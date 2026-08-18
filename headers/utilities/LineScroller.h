#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 119 member(s).
// Base evidence: UIBase (likely; classinfo-template-instantiation).
class LineScroller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementIsCutOff@LineScroller@@QEAAHPEAVElement@DirectUI@@@Z
    int ElementIsCutOff(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMakeVisibleBatch@LineScroller@@QEAAXXZ
    void EndMakeVisibleBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LineScroller@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentYPosFromExtrapolatedScrollUnit@LineScroller@@QEAAHH@Z
    int GetContentYPosFromExtrapolatedScrollUnit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentYPosFromScrollUnit@LineScroller@@QEAAHH@Z
    int GetContentYPosFromScrollUnit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForIItem@LineScroller@@QEAAJW4INDEX_OF_MODE@@PEAUIItem@@PEAIPEAVSectionInfo@@@Z
    long GetInfoForIItem(int, IItem *, unsigned int *, SectionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinning@LineScroller@@QEAA?AW4AUTOPINNING@@XZ
    int GetPinning();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXAnchor@LineScroller@@QEAAHXZ
    int GetRealXAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXBarVisibility@LineScroller@@QEAA?AW4SCROLLBARVISIBILITY@@XZ
    int GetRealXBarVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXScrollable@LineScroller@@QEAA_NXZ
    bool GetRealXScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealXTarget@LineScroller@@QEAAHXZ
    int GetRealXTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYAnchor@LineScroller@@QEAAHXZ
    int GetRealYAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYBarVisibility@LineScroller@@QEAA?AW4SCROLLBARVISIBILITY@@XZ
    int GetRealYBarVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYScrollable@LineScroller@@QEAA_NXZ
    bool GetRealYScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealYTarget@LineScroller@@QEAAHXZ
    int GetRealYTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowFromYPosition@LineScroller@@QEAAJHPEAVRowInfo@@H@Z
    long GetRowFromYPosition(int, RowInfo *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForElement@LineScroller@@QEAAXPEAVElement@DirectUI@@PEAVRowInfo@@@Z
    void GetRowInfoForElement(::DirectUI::Element *, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForNextRow@LineScroller@@QEAAHAEBVRowInfo@@W4SCROLLDIR@@PEAV2@@Z
    int GetRowInfoForNextRow(RowInfo const &, int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForPosition@LineScroller@@QEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long GetRowInfoForPosition(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForPositionOrNearest@LineScroller@@QEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long GetRowInfoForPositionOrNearest(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForRow@LineScroller@@QEAAXHPEAVRowInfo@@@Z
    void GetRowInfoForRow(int, RowInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowInfoForScrollTick@LineScroller@@QEAAXHPEAVRowInfo@@H@Z
    void GetRowInfoForScrollTick(int, RowInfo *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollDeltaTimer@LineScroller@@QEAAMXZ
    float GetScrollDeltaTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollUnitFromViewerYPos@LineScroller@@QEAAJHPEAHW4GETSCROLLUNITFROMVIEWERYPOSFLAGS@@@Z
    long GetScrollUnitFromViewerYPos(int, int *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollableContentWidth@LineScroller@@QEAAHXZ
    int GetScrollableContentWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewableAreaOfDescendent@LineScroller@@QEAA?AUtagSIZE@@PEAVElement@DirectUI@@HH@Z
    tagSIZE GetViewableAreaOfDescendent(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewerSize@LineScroller@@QEAA?AUSIZEV@@XZ
    SIZEV GetViewerSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDirection@LineScroller@@QEAA?AW4VIRTUALDIRECTION@@XZ
    int GetVirtualDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXScrollable@LineScroller@@QEAAHXZ
    int GetXScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXScrollbar@LineScroller@@QEAAPEAVLineScrollbarBase@@XZ
    LineScrollbarBase * GetXScrollbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXTarget@LineScroller@@QEAAHXZ
    int GetXTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYAnchor@LineScroller@@QEAAHXZ
    int GetYAnchor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYScrollable@LineScroller@@QEAAHXZ
    int GetYScrollable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYScrollbar@LineScroller@@QEAAPEAVLineScrollbarBase@@XZ
    LineScrollbarBase * GetYScrollbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYTarget@LineScroller@@QEAAHXZ
    int GetYTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LineScroller@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@LineScroller@@UEAAJPEAPEAVElement@DirectUI@@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRowCutOff@LineScroller@@QEAAHAEBVRowInfo@@W4VIEWPOSITION@@@Z
    int IsRowCutOff(RowInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepRowAnchored@LineScroller@@QEAAXVRowInfo@@@Z
    void KeepRowAnchored(RowInfo);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LineScroller@@QEAA@XZ
    LineScroller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void MakeVisible(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleHorizontal@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void MakeVisibleHorizontal(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapLeafSectionToRow@LineScroller@@QEAAXAEBVSectionInfo@@PEAVRowInfo@@@Z
    void MapLeafSectionToRow(SectionInfo const &, RowInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@LineScroller@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@LineScroller@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@LineScroller@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@LineScroller@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@LineScroller@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LineScroller@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@LineScroller@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PinningProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PinningProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXAnchorProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXAnchorProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXBarVisibilityProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXBarVisibilityProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXScrollableProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXScrollableProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealXTargetProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealXTargetProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYAnchorProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYAnchorProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYBarVisibilityProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYBarVisibilityProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYScrollableProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYScrollableProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RealYTargetProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * RealYTargetProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@LineScroller@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollDelta@LineScroller@@QEAAXAEBUtagSIZE@@@Z
    void ScrollDelta(tagSIZE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLeafSectionToPosition@LineScroller@@QEAAXAEBVSectionInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollLeafSectionToPosition(SectionInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPageDown@LineScroller@@QEAAXI@Z
    void ScrollPageDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPageUp@LineScroller@@QEAAXI@Z
    void ScrollPageUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollPreciseDelta@LineScroller@@QEAAXAEBUtagSIZE@@PEAU2@@Z
    void ScrollPreciseDelta(tagSIZE const &, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRowToPosition@LineScroller@@QEAAXAEBVRowInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollRowToPosition(RowInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTickToPosition@LineScroller@@QEAAXHW4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void ScrollTickToPosition(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToLeftEdge@LineScroller@@QEAAXXZ
    void ScrollToLeftEdge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToPosition@LineScroller@@QEAAXW4VIEWPOSITION@@W4SCROLLSYNC@@@Z
    void ScrollToPosition(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealXAnchor@LineScroller@@QEAAJH@Z
    long SetRealXAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealXTarget@LineScroller@@QEAAJH@Z
    long SetRealXTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealYAnchor@LineScroller@@QEAAJH@Z
    long SetRealYAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealYTarget@LineScroller@@QEAAJH@Z
    long SetRealYTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizedContent@LineScroller@@QEAAJPEAUIVirtualizedUI@@@Z
    long SetVirtualizedContent(IVirtualizedUI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYAnchor@LineScroller@@QEAAJH@Z
    long SetYAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYTarget@LineScroller@@QEAAJH@Z
    long SetYTarget(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMakeVisibleBatch@LineScroller@@QEAAXPEAVElement@DirectUI@@@Z
    void StartMakeVisibleBatch(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VirtualDirectionProp@LineScroller@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VirtualDirectionProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LineScroller@@UEAA@XZ
    virtual ~LineScroller();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckScroll@LineScroller@@AEAAHPEAVLineScrollbarBase@@HW4SCROLLBARVISIBILITY@@@Z
    int _CheckScroll(LineScrollbarBase *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeferPaintAfterUpdate@LineScroller@@AEAAXXZ
    void _DeferPaintAfterUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRealizePass@LineScroller@@AEAAXXZ
    void _EnsureRealizePass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireAnimationChangeEvent@LineScroller@@AEAAX_N@Z
    void _FireAnimationChangeEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetForwardRow@LineScroller@@AEAAJW4VIEWPOSITION@@PEAVRowInfo@@@Z
    long _GetForwardRow(int, RowInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealAnchorForScrolling@LineScroller@@AEAAHHHW4SCROLLDIR@@@Z
    int _GetIdealAnchorForScrolling(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOverlapLimitForScrolling@LineScroller@@AEAAHHHAEBUSIZEV@@W4SCROLLDIR@@@Z
    int _GetOverlapLimitForScrolling(int, int, SIZEV const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollTickFromAnchor@LineScroller@@AEAAHH@Z
    int _GetScrollTickFromAnchor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScrollTipValue@LineScroller@@AEAAXPEAVUIItem@@PEAPEAG@Z
    void _GetScrollTipValue(UIItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewEdge@LineScroller@@AEAA?AW4VIEWPOSITION@@AEBVRowInfo@@W42@@Z
    int _GetViewEdge(RowInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerContainer@LineScroller@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetViewerContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerForElement@LineScroller@@AEAAPEAVElement@DirectUI@@PEAV23@@Z
    ::DirectUI::Element * _GetViewerForElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewerWidth@LineScroller@@AEAAHXZ
    int _GetViewerWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasScrollableHeader@LineScroller@@AEAAHXZ
    int _HasScrollableHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOnlyRow@LineScroller@@AEAAHAEBVRowInfo@@@Z
    int _IsOnlyRow(RowInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRowPageBottom@LineScroller@@AEAAHW4SCROLLDIR@@HH@Z
    int _IsRowPageBottom(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayoutContent@LineScroller@@AEAAXW4OFFSCREENCONTENT@@@Z
    void _LayoutContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeVisibleWorker@LineScroller@@AEAAXPEAVElement@DirectUI@@0@Z
    void _MakeVisibleWorker(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayMakeVisible@LineScroller@@AEAAXXZ
    void _OnDelayMakeVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyPageUpDown@LineScroller@@AEAAXW4SCROLLDIR@@@Z
    void _OnKeyPageUpDown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnScrollTickCountChanged@LineScroller@@AEAAXXZ
    void _OnScrollTickCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeContent@LineScroller@@AEAAXW4OFFSCREENCONTENT@@@Z
    void _RealizeContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeDirectionWorker@LineScroller@@AEAAJPEAUIVirtualizedUI@@HW4REALIZEDIRECTION@@HPEAHPEAVCRealizedIntervalHelper@@@Z
    long _RealizeDirectionWorker(IVirtualizedUI *, int, int, int, int *, CRealizedIntervalHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeScrollTickWorker@LineScroller@@AEAAJPEAUIVirtualizedUI@@H@Z
    long _RealizeScrollTickWorker(IVirtualizedUI *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordMakeVisible@LineScroller@@AEAAXPEAVElement@DirectUI@@@Z
    void _RecordMakeVisible(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollLineUpDown@LineScroller@@AEAAXHW4SCROLLDIR@@@Z
    void _ScrollLineUpDown(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollRowToEdge@LineScroller@@AEAAXAEBVRowInfo@@W4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void _ScrollRowToEdge(RowInfo const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollRowToPositionWorker@LineScroller@@AEAAXAEBVRowInfo@@HW4VIEWPOSITION@@W4SCROLLSYNC@@H@Z
    void _ScrollRowToPositionWorker(RowInfo const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowScrollTips@LineScroller@@AEAAXH@Z
    void _ShowScrollTips(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncHeaderToScrollbar@LineScroller@@AEAAXXZ
    void _SyncHeaderToScrollbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncScrollbarToHeader@LineScroller@@AEAAXXZ
    void _SyncScrollbarToHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnchorFromScrollbar@LineScroller@@AEAAXXZ
    void _UpdateAnchorFromScrollbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollTips@LineScroller@@AEAAXXZ
    void _UpdateScrollTips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollbarAfterLayout@LineScroller@@AEAAXXZ
    void _UpdateScrollbarAfterLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollbarMetrics@LineScroller@@AEAAXXZ
    void _UpdateScrollbarMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Viewer_MakeVisibleWorker@LineScroller@@AEAAXPEAVElement@DirectUI@@AEBUtagRECT@@@Z
    void _Viewer_MakeVisibleWorker(::DirectUI::Element *, tagRECT const &);
};
