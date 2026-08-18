#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 35 member(s).
class CSearchBoxTextRangeProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchBoxTextRangeProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CSearchBoxTextRangeProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSearchBoxTextRangeProvider@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long Clone(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CSearchBoxTextRangeProvider@@UEAAJPEAUITextRangeProvider@@PEAH@Z
    virtual long Compare(ITextRangeProvider *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpoints@CSearchBoxTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@@PEAUITextRangeProvider@@0PEAH@Z
    virtual long CompareEndpoints(int, ITextRangeProvider *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnit@CSearchBoxTextRangeProvider@@UEAAJW4TextUnit@@@Z
    virtual long ExpandToEnclosingUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttribute@CSearchBoxTextRangeProvider@@UEAAJHUtagVARIANT@@HPEAPEAUITextRangeProvider@@@Z
    virtual long FindAttribute(int, tagVARIANT, int, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextW@CSearchBoxTextRangeProvider@@UEAAJPEAGHHPEAPEAUITextRangeProvider@@@Z
    virtual long FindTextW(unsigned short *, int, int, ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@CSearchBoxTextRangeProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetAttributeValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangles@CSearchBoxTextRangeProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetBoundingRectangles(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CSearchBoxTextRangeProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetChildren(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElement@CSearchBoxTextRangeProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetEnclosingElement(IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CSearchBoxTextRangeProvider@@UEAAJHPEAPEAG@Z
    virtual long GetText(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRange@CSearchBoxTextRangeProvider@@UEAAJPEAPEAUITextRange@@@Z
    virtual long GetTextRange(ITextRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CSearchBoxTextRangeProvider@@UEAAJW4TextUnit@@HPEAH@Z
    virtual long Move(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRange@CSearchBoxTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@@PEAUITextRangeProvider@@0@Z
    virtual long MoveEndpointByRange(int, ITextRangeProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnit@CSearchBoxTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@@W4TextUnit@@HPEAH@Z
    virtual long MoveEndpointByUnit(int, int, int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchBoxTextRangeProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchBoxTextRangeProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CSearchBoxTextRangeProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CSearchBoxTextRangeProvider@@UEAAJH@Z
    virtual long ScrollIntoView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CSearchBoxTextRangeProvider@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSearchBoxTextRangeProvider@@SAJPEAUITextRange@@PEAUIRawElementProviderSimple@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(ITextRange *, IRawElementProviderSimple *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchBoxTextRangeProvider@@AEAA@XZ
    CSearchBoxTextRangeProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchBoxTextRangeProvider@@AEAAJPEAUITextRange@@PEAUIRawElementProviderSimple@@@Z
    long Initialize(ITextRange *, IRawElementProviderSimple *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributeValueFromRange@CSearchBoxTextRangeProvider@@AEAAJPEAUITextRange@@HPEAUtagVARIANT@@@Z
    long _GetAttributeValueFromRange(ITextRange *, int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveEndFormatUnit@CSearchBoxTextRangeProvider@@AEAAJHPEAUITextRange@@@Z
    long _MoveEndFormatUnit(int, ITextRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveEndOneFormatUnit@CSearchBoxTextRangeProvider@@AEAAHHPEAUITextRange@@@Z
    int _MoveEndOneFormatUnit(int, ITextRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveStartFormatUnit@CSearchBoxTextRangeProvider@@AEAAJHPEAUITextRange@@@Z
    long _MoveStartFormatUnit(int, ITextRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveStartOneFormatUnit@CSearchBoxTextRangeProvider@@AEAAHHPEAUITextRange@@@Z
    int _MoveStartOneFormatUnit(int, ITextRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TomUnitFromTextUnit@CSearchBoxTextRangeProvider@@AEAAJW4TextUnit@@@Z
    long _TomUnitFromTextUnit(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchBoxTextRangeProvider@@AEAA@XZ
    ~CSearchBoxTextRangeProvider();
};
