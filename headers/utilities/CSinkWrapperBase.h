#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CSinkWrapperBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CSinkWrapperBase@@UEAAJPEAX@Z
    virtual long Dispatch(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventAction@CSinkWrapperBase@@UEAAJPEAXHPEAW4tagEVENTACTION@@@Z
    virtual long GetEventAction(void *, int, int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CSinkWrapperBase@@IEAAXPEAUHWND__@@PEAVIEventQueue@@PEAXP6AJ2PEAUIUnknown@@H2PEAW4tagEVENTACTION@@@ZP6AJ232@Z@Z
    void _Init(HWND__*, IEventQueue *, void *, long ( *)(void *, IUnknown *, int, void *, int *), long ( *)(void *, IUnknown *, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Release@CSinkWrapperBase@@IEAAKXZ
    unsigned long _Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSinkWrapperBase@@MEAA@XZ
    virtual ~CSinkWrapperBase();
};
