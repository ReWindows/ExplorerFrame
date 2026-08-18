#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class CDUIResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitThread@CDUIResourceManager@@QEAAJIW4DUI_RESOURCE_MANAGER_INIT_FLAGS@@@Z
    long InitThread(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadParser@CDUIResourceManager@@QEAAJW4DEVICE_SCALE_FACTOR@@PEAPEAVDUIXmlParser@DirectUI@@@Z
    long ReloadParser(int, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitThread@CDUIResourceManager@@QEAAXXZ
    void UninitThread();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceId@CDUIResourceManager@@AEAAIXZ
    unsigned int GetResourceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRefCountedParserForThread@CDUIResourceManager@@AEBAPEAUREFCOUNTEDPARSER@1@XZ
    WindissectOpaque * _GetRefCountedParserForThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitParserForThread@CDUIResourceManager@@AEAAJXZ
    long _InitParserForThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterElements@CDUIResourceManager@@AEAAJXZ
    long _RegisterElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterElements@CDUIResourceManager@@AEAAXI@Z
    void _UnregisterElements(unsigned int);
};
