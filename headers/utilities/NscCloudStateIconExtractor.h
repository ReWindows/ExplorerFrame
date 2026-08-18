#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class NscCloudStateIconExtractor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@NscCloudStateIconExtractor@@QEAAXXZ
    void OnSettingsChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@NscCloudStateIconExtractor@@AEAAJ_K@Z
    long Extract(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconResourceString@NscCloudStateIconExtractor@@AEAAJ_KPEAPEAG@Z
    long GetIconResourceString(uint64_t, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellCachedImageIndex@NscCloudStateIconExtractor@@AEAAJPEAG_K@Z
    long GetShellCachedImageIndex(unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCloudStateImageList@NscCloudStateIconExtractor@@AEAAJPEAUHWND__@@@Z
    long SetCloudStateImageList(HWND__*);
};
