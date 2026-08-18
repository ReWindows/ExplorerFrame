#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
class CBuildUnmatchedItemAnimatingRects {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBuildUnmatchedItemAnimatingRects@@QEAA@PEAV?$CSimpleArray@UAnimatingRect@@@ATL@@PEAVElement@DirectUI@@HKHHHPEAV?$CCoSimpleArray@VCElementIdentifier@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VCElementIdentifier@@@@@@@Z
    CBuildUnmatchedItemAnimatingRects(WindissectOpaque *, ::DirectUI::Element *, int, unsigned long, int, int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CBuildUnmatchedItemAnimatingRects@@QEAAHAEBVCElementIdentifier@@AEBUTaggedElement@@@Z
    int Enum(CElementIdentifier const &, TaggedElement const &);
};
