#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 23 member(s).
class CPerfTrackProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPerfTrackProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPerfTrackProvider@@QEAA@XZ
    CPerfTrackProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStartEvent@CPerfTrackProvider@@QEAAXPEAUIShellItem@@@Z
    void LogStartEvent(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationEvent@CPerfTrackProvider@@UEAAJPEBGW4TRACKOPERATIONTYPE@@W4TRACKOPERATIONEVENT@@@Z
    virtual long OperationEvent(unsigned short const *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPerfTrackProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPerfTrackProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCount@CPerfTrackProvider@@UEAAJI@Z
    virtual long SetItemCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProviderAttributes@CPerfTrackProvider@@UEAAJW4PROVIDER_ATTRIBUTES@@@Z
    virtual long SetProviderAttributes(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCheckIsFixedLocal@CPerfTrackProvider@@AEAA_NPEAUIShellItem@@@Z
    bool TryCheckIsFixedLocal(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireCplStopEvents@CPerfTrackProvider@@AEAA_NPEAUIShellItem@@II@Z
    bool _FireCplStopEvents(IShellItem *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireDeviceCenterStopEvents@CPerfTrackProvider@@AEAA_NPEAUIShellItem@@_NII@Z
    bool _FireDeviceCenterStopEvents(IShellItem *, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireKnownLibraryStopEvents@CPerfTrackProvider@@AEAA_NPEAUIShellItem@@_NII@Z
    bool _FireKnownLibraryStopEvents(IShellItem *, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireNetworkDPIStopEvents@CPerfTrackProvider@@AEAAXPEAUIShellItem@@II@Z
    void _FireNetworkDPIStopEvents(IShellItem *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTopViewStopEvents@CPerfTrackProvider@@AEAAXPEAUIShellItem@@II@Z
    void _FireTopViewStopEvents(IShellItem *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNamespaceCLSID@CPerfTrackProvider@@AEAAJPEAUIShellItem@@PEAU_GUID@@@Z
    long _GetNamespaceCLSID(IShellItem *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogEndEvent@CPerfTrackProvider@@AEAAX_N@Z
    void _LogEndEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPerfInfo@CPerfTrackProvider@@EEAAXXZ
    virtual void _SendPerfInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerfTrackProvider@@EEAA@XZ
    virtual ~CPerfTrackProvider();
};
