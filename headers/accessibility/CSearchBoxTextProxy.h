#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CSearchBoxTextProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMethod@CSearchBoxTextProxy@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextRangeProvider@CSearchBoxTextProxy@@AEAAJPEAUITextRange@@PEAPEAUITextRangeProvider@@@Z
    long CreateTextRangeProvider(ITextRange *, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDocumentRange@CSearchBoxTextProxy@@AEAAJPEAPEAUITextRangeProvider@@@Z
    long _GetDocumentRange(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRangeFromPoint@CSearchBoxTextProxy@@AEAAJUUiaPoint@@PEAPEAUITextRangeProvider@@@Z
    long _GetRangeFromPoint(UiaPoint, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CSearchBoxTextProxy@@AEAAJPEAPEAUtagSAFEARRAY@@@Z
    long _GetSelection(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleRanges@CSearchBoxTextProxy@@AEAAJPEAPEAUtagSAFEARRAY@@@Z
    long _GetVisibleRanges(tagSAFEARRAY * *);
};
