#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 25 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIMarqueeSelector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMarquee@UIMarqueeSelector@@QEAAXXZ
    void EndMarquee();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIMarqueeSelector@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIMarqueeSelector@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIMarqueeSelector@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@UIMarqueeSelector@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@UIMarqueeSelector@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseMoved@UIMarqueeSelector@@QEAAXPEAUMouseDragEvent@DirectUI@@@Z
    void OnMouseMoved(::DirectUI::MouseDragEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIMarqueeSelector@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMarquee@UIMarqueeSelector@@QEAAXUtagPOINT@@PEAVElement@DirectUI@@W4INITIALSELECTION@@W4CLICKBUTTON@@W4__MIDL___MIDL_itf_itemsview_0000_0004_0001@@PEAVUIItem@@@Z
    void StartMarquee(tagPOINT, ::DirectUI::Element *, int, int, int, UIItem *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIMarqueeSelector@@QEAA@XZ
    UIMarqueeSelector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareWithAnchor@UIMarqueeSelector@@AEAAHPEAUIItem@@@Z
    int _CompareWithAnchor(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGutterLocation@UIMarqueeSelector@@AEAAXPEAUIVirtualizedUI@@HHPEAUVerticalHitTest@@@Z
    void _GetGutterLocation(IVirtualizedUI *, int, int, VerticalHitTest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIItemsInMarquee@UIMarqueeSelector@@AEAAXPEAVUICollection@@AEBUVIRTUALRECT@@1PEAH2PEAV?$CDPA@UIItem@@V?$CTContainer_PolicyUnOwned@UIItem@@@@@@3@Z
    void _GetIItemsInMarquee(UICollection *, VIRTUALRECT const &, VIRTUALRECT const &, int *, int *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTopCollection@UIMarqueeSelector@@AEAAPEAVUICollection@@XZ
    UICollection * _GetTopCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewer@UIMarqueeSelector@@AEAAPEAVLineViewer@@XZ
    LineViewer * _GetViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVirtualPoint@UIMarqueeSelector@@AEAAJAEBUPOINTV@@PEAUVIRTUALPOINT@@@Z
    long _GetVirtualPoint(POINTV const &, VIRTUALPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformItemCompare@UIMarqueeSelector@@AEAAXAEBUVIRTUALRECT@@0I@Z
    void _PerformItemCompare(VIRTUALRECT const &, VIRTUALRECT const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostScrollUpdateEvent@UIMarqueeSelector@@AEAAXXZ
    void _PostScrollUpdateEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNewEndpoint@UIMarqueeSelector@@AEAAXAEBUtagPOINT@@I@Z
    void _SetNewEndpoint(tagPOINT const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScrollTimers@UIMarqueeSelector@@AEAAXHHPEAVElement@DirectUI@@@Z
    void _SetScrollTimers(int, int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisualLoc@UIMarqueeSelector@@AEAAXAEBUVIRTUALPOINT@@AEBUPOINTV@@0@Z
    void _SetVisualLoc(VIRTUALPOINT const &, POINTV const &, VIRTUALPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ScrollCallback@UIMarqueeSelector@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_ScrollCallback(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIMarqueeSelector@@EEAA@XZ
    virtual ~UIMarqueeSelector();
};
