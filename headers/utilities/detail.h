#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 3 member(s).
class detail {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceRolloutDelayReasons@detail@@YA?AW4ExperienceRolloutDelayReasons@@QEBG@Z
    int GetExperienceRolloutDelayReasons(unsigned short const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessSequenceNumber@detail@@YA_KPEAX@Z
    uint64_t GetProcessSequenceNumber(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRolloutDelayReasons@detail@@YAXW4ExperienceRolloutDelayReasons@@QEBG@Z
    void UpdateRolloutDelayReasons(int, unsigned short const * const);
};
