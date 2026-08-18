#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::CCBaseScrollBar (likely; classinfo-template-instantiation).
class LineScrollbarBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LineScrollbarBase@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@LineScrollbarBase@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxScrollPosition@LineScrollbarBase@@QEAAHXZ
    int GetMaxScrollPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@LineScrollbarBase@@UEAAXI@Z
    virtual void LineDown(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LineScrollbarBase@@QEAA@K@Z
    LineScrollbarBase(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@LineScrollbarBase@@UEAAXI@Z
    virtual void LineUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@LineScrollbarBase@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@LineScrollbarBase@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@LineScrollbarBase@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LineScrollbarBase@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@LineScrollbarBase@@UEAAXI@Z
    virtual void PageDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@LineScrollbarBase@@UEAAXI@Z
    virtual void PageUp(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ScrollHookProc@LineScrollbarBase@@CA_JH_K_J@Z
    static int64_t s_ScrollHookProc(int, uint64_t, int64_t);
};
