#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 42 member(s).
class CAnimationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVisualChangeEvent@CAnimationManager@@UEAAJPEAUVisualChangeEvent@@@Z
    virtual long HandleVisualChangeEvent(VisualChangeEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimating@CAnimationManager@@UEAAHXZ
    virtual int IsAnimating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CAnimationManager@@UEAAJPEAUHDC__@@PEAUtagRECT@@@Z
    virtual long Paint(HDC__*, tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CAnimationManager@@UEAAXK@Z
    virtual void SetBackgroundColor(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocateHBITMAP@CAnimationManager@@AEAAJHHPEAH@Z
    long _AllocateHBITMAP(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimationTimeProc@CAnimationManager@@AEAAXPEAUGMA_ACTIONINFO@@@Z
    void _AnimationTimeProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheCurrentViewMode@CAnimationManager@@AEAAXXZ
    void _CacheCurrentViewMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBackBuffer@CAnimationManager@@AEAAJHHPEAPEAUHBITMAP__@@@Z
    long _CreateBackBuffer(int, int, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndAnimation@CAnimationManager@@AEAAXW4ENDANIMATIONFLAGS@@@Z
    void _EndAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureElementPositionChangeInfo@CAnimationManager@@AEAAXXZ
    void _EnsureElementPositionChangeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishAnimationSetup@CAnimationManager@@AEAAXXZ
    void _FinishAnimationSetup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishElementPositionChange@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishElementPositionChange(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishGroupCollapse@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishGroupCollapse(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishGroupExpand@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishGroupExpand(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollDown@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishScrollDown(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollGeneral@CAnimationManager@@AEAAXPEAUAnimatingRect@@PEAUtagPOINT@@PEAUtagRECT@@2@Z
    void _FinishScrollGeneral(AnimatingRect *, tagPOINT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishScrollUp@CAnimationManager@@AEAAXPEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAUAnimatingRect@@@Z
    void _FinishScrollUp(WindissectOpaque *, AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAnimationSpeed@CAnimationManager@@AEAANW4ANIMATIONTYPE@@W4SPEEDBOUND@@@Z
    double _GetAnimationSpeed(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAnimationTime@CAnimationManager@@AEAAHW4ANIMATIONTYPE@@@Z
    int _GetAnimationTime(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemsViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetItemsViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNonViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetNonViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewRect@CAnimationManager@@AEAAXPEAUtagRECT@@@Z
    void _GetViewRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAnimationManager@@AEAAJPEAVUIItemsView@@@Z
    long _Initialize(UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSlowKeyPressed@CAnimationManager@@AEAAHXZ
    int _IsSlowKeyPressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintCurrentViewHBITMAP@CAnimationManager@@AEAAJPEAH@Z
    long _PaintCurrentViewHBITMAP(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetAnimations@CAnimationManager@@AEAAXXZ
    void _ResetAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPositionChangeRect@CAnimationManager@@AEAAXPEAUAnimatingRect@@@Z
    void _ResetPositionChangeRect(AnimatingRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupElementPositionChange@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupElementPositionChange(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupGroupCollapse@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupGroupCollapse(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupGroupExpand@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupGroupExpand(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupNonViewAnimatingRect@CAnimationManager@@AEAAJXZ
    long _SetupNonViewAnimatingRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollDown@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupScrollDown(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollGeneral@CAnimationManager@@AEAAXPEAVLineScroller@@W4SETUPSCROLLGENERALORIENTATION@1@W4ANIMATIONTYPE@@PEAVElement@DirectUI@@PEAUtagRECT@@PEAUtagPOINT@@@Z
    void _SetupScrollGeneral(LineScroller *, int, int, ::DirectUI::Element *, tagRECT *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupScrollUp@CAnimationManager@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetupScrollUp(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimer@CAnimationManager@@AEAAJXZ
    long _StartTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimer@CAnimationManager@@AEAAXW4ENDANIMATIONFLAGS@@@Z
    void _StopTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllAnimatingRects@CAnimationManager@@AEAAXXZ
    void _UpdateAllAnimatingRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AnimationTimeProc@CAnimationManager@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_AnimationTimeProc(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationManager@@AEAA@XZ
    ~CAnimationManager();
};
