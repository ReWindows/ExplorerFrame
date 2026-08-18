#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 2 member(s).
namespace BandSizing {
class BandSizingHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalculatedBandHeight@BandSizingHelper@BandSizing@@QEAAIPEAUHWND__@@PEAXHH@Z
    unsigned int GetCalculatedBandHeight(HWND__*, void *, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextHeight@BandSizingHelper@BandSizing@@AEAAXPEAUHWND__@@@Z
    void CalculateTextHeight(HWND__*);
};
} // namespace BandSizing
