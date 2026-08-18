#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 15 member(s).
namespace DirectUI {
class HWNDElementProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HWNDElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPoint@HWNDElementProvider@DirectUI@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@HWNDElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HWNDElementProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HWNDElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HWNDElementProvider@DirectUI@@MEAAJPEAVHWNDElement@2@PEAVInvokeHelper@2@@Z
    virtual long Init(::DirectUI::HWNDElement *, ::DirectUI::InvokeHelper *);
};
} // namespace DirectUI
