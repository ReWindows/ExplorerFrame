#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class LineViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@LineViewer@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LineViewer@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LineViewer@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?LayoutStateProp@LineViewer@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * LayoutStateProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@LineViewer@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LineViewer@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@LineViewer@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@LineViewer@@QEAAJH@Z
    long SetLayoutState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@LineViewer@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@LineViewer@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardNavigate@LineViewer@@AEAAXPEAUKeyboardNavigateEvent@DirectUI@@@Z
    void _OnKeyboardNavigate(::DirectUI::KeyboardNavigateEvent *);
};
