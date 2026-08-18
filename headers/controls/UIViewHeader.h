#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 49 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIViewHeader {
public:
    class ColumnElement;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreColumnHeadersVisible@UIViewHeader@@QEAAJXZ
    long AreColumnHeadersVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeAllColumns@UIViewHeader@@QEAAXXZ
    void AutoSizeAllColumns();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@UIViewHeader@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIViewHeader@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeader@UIViewHeader@@QEAAPEAVUIColumnHeader@@I@Z
    UIColumnHeader * GetColumnHeader(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizable@UIViewHeader@@QEAA_NXZ
    bool GetResizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIViewHeader@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIViewHeader@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@UIViewHeader@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@UIViewHeader@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@UIViewHeader@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIViewHeader@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UIViewHeader@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIViewHeader@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ResizableProp@UIViewHeader@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ResizableProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreKeyFocus@UIViewHeader@@QEAAJXZ
    long RestoreKeyFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocusedProperty@UIViewHeader@@QEAAXAEBU_tagpropertykey@@@Z
    void SetKeyFocusedProperty(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilteredState@UIViewHeader@@QEAAXXZ
    void UpdateFilteredState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIViewHeader@@UEAA@XZ
    virtual ~UIViewHeader();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@UIViewHeader@@MEAAXXZ
    virtual void SetKeyFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumn@UIViewHeader@@IEAAJIAEBU_tagpropertykey@@PEAUIViewSettings@@PEAUHDC__@@H@Z
    long _AddColumn(unsigned int, _tagpropertykey const &, IViewSettings *, HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoSizeColumn@UIViewHeader@@IEAAXPEAVUIColumnHeader@@@Z
    void _AutoSizeColumn(UIColumnHeader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginColumnHeaderDrag@UIViewHeader@@IEAAXPEAVUIColumnHeader@@PEBUMouseEvent@DirectUI@@@Z
    void _BeginColumnHeaderDrag(UIColumnHeader *, ::DirectUI::MouseEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BroadcastColumnEvent@UIViewHeader@@IEAAXVUID@@I@Z
    void _BroadcastColumnEvent(UID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableAnimations@UIViewHeader@@IEAAXXZ
    void _EnableAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndColumnHeaderDrag@UIViewHeader@@IEAAXPEBUMouseEvent@DirectUI@@@Z
    void _EndColumnHeaderDrag(::DirectUI::MouseEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnHeaderWithPropkey@UIViewHeader@@IEAAPEAVUIColumnHeader@@AEBU_tagpropertykey@@@Z
    UIColumnHeader * _GetColumnHeaderWithPropkey(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnIndex@UIViewHeader@@IEAAHPEAVUIColumnHeader@@@Z
    int _GetColumnIndex(UIColumnHeader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragColumnIndex@UIViewHeader@@IEAAIJ@Z
    unsigned int _GetDragColumnIndex(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellBitmapFromResourceIndex@UIViewHeader@@IEAAPEAUHBITMAP__@@H@Z
    HBITMAP__* _GetShellBitmapFromResourceIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveColumn@UIViewHeader@@IEAAXII@Z
    void _MoveColumn(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardEvent@UIViewHeader@@IEAAXPEAUKeyboardEvent@DirectUI@@@Z
    void _OnKeyboardEvent(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardFocusMove@UIViewHeader@@IEAAXPEAVUIColumnHeader@@G@Z
    void _OnKeyboardFocusMove(UIColumnHeader *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOverflowButtonClicked@UIViewHeader@@IEAAXXZ
    void _OnOverflowButtonClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecalculateTotalWidth@UIViewHeader@@IEAAXXZ
    void _RecalculateTotalWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeColumnOnMove@UIViewHeader@@IEAAXII@Z
    void _ResizeColumnOnMove(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveColumnOrder@UIViewHeader@@IEAAXXZ
    void _SaveColumnOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveColumnWidth@UIViewHeader@@IEAAXPEAVUIColumnHeader@@@Z
    void _SaveColumnWidth(UIColumnHeader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@UIViewHeader@@MEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@UIViewHeader@@MEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColumnWidth@UIViewHeader@@IEAAXPEAVUIColumnHeader@@H@Z
    void _SetColumnWidth(UIColumnHeader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInflateFirstColumn@UIViewHeader@@IEAAHH@Z
    int _ShouldInflateFirstColumn(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateColumnHeaderLocations@UIViewHeader@@IEAAXPEAVUIColumnHeader@@PEBUMouseEvent@DirectUI@@@Z
    void _UpdateColumnHeaderLocations(UIColumnHeader *, ::DirectUI::MouseEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFromPropKeyStore@UIViewHeader@@IEAAJPEAUIPropertyKeyStore@@PEAUIViewSettings@@AEA_N@Z
    long _UpdateFromPropKeyStore(IPropertyKeyStore *, IViewSettings *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFromViewSettings@UIViewHeader@@IEAAXXZ
    void _UpdateFromViewSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateResizersPosition@UIViewHeader@@IEAAXXZ
    void _UpdateResizersPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewRequestsHeaders@UIViewHeader@@IEAAHPEAUIViewSettings@@@Z
    int _ViewRequestsHeaders(IViewSettings *);
};
