#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
namespace CNavBar {
class CNavBandSite {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNavBandSite@CNavBar@@QEAA@XZ
    CNavBandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CNavBandSite@CNavBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CNavBandSite@CNavBar@@MEAAJPEAUHWND__@@@Z
    virtual long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBorderStyles@CNavBandSite@CNavBar@@MEAAXHH@Z
    virtual void _SetBorderStyles(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMinDimensions@CNavBandSite@CNavBar@@MEAAHXZ
    virtual int _SetMinDimensions();
};
} // namespace CNavBar
