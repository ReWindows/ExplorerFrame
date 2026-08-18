#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CSearchBoxTextProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CSearchBoxTextProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@CSearchBoxTextProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetVisibleRanges(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@CSearchBoxTextProvider@@UEAAJPEAUIRawElementProviderSimple@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromChild(IRawElementProviderSimple *, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@CSearchBoxTextProvider@@UEAAJUUiaPoint@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromPoint(UiaPoint, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRange@CSearchBoxTextProvider@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long get_DocumentRange(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelection@CSearchBoxTextProvider@@UEAAJPEAW4SupportedTextSelection@@@Z
    virtual long get_SupportedTextSelection(int *);
};
