#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CImpIExpDispSupport {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImpIExpDispSupport@@QEAA@XZ
    CImpIExpDispSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionPoint@CImpIExpDispSupport@@UEAAJAEBU_GUID@@PEAPEAUIConnectionPoint@@@Z
    virtual long FindConnectionPoint(_GUID const &, IConnectionPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CImpIExpDispSupport@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long OnInvoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTranslateAccelerator@CImpIExpDispSupport@@UEAAJPEAUtagMSG@@K@Z
    virtual long OnTranslateAccelerator(tagMSG *, unsigned long);
};
