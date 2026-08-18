#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 18 member(s).
class CRibbonTelemetry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRibbonTelemetry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CRibbonTelemetry@@UEAAJPEAUIUIFramework@@@Z
    virtual long Destroy(IUIFramework *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQATPinned@CRibbonTelemetry@@UEAAXI@Z
    virtual void OnQATPinned(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQATUnpinned@CRibbonTelemetry@@UEAAXI@Z
    virtual void OnQATUnpinned(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUIEvent@CRibbonTelemetry@@UEAAXPEAU_UI_EVENTPARAMS@@@Z
    virtual void OnUIEvent(_UI_EVENTPARAMS *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRibbonTelemetry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRibbonTelemetry@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRibbonMinimized@CRibbonTelemetry@@AEAA_NXZ
    bool _IsRibbonMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Record@CRibbonTelemetry@@AEAAXW4RIBBON_EVENT@1@I@Z
    void _Record(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Record@CRibbonTelemetry@@AEAAXW4RIBBON_EVENT@1@IH@Z
    void _Record(int, unsigned int, int);
};
