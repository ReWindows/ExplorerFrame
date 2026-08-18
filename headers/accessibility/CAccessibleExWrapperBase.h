#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 26 member(s).
class CAccessibleExWrapperBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAccessibleExWrapperBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertReturnedElement@CAccessibleExWrapperBase@@UEAAJPEAUIRawElementProviderSimple@@PEAPEAUIAccessibleEx@@@Z
    virtual long ConvertReturnedElement(IRawElementProviderSimple *, IAccessibleEx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIAccessiblePair@CAccessibleExWrapperBase@@UEAAJPEAPEAUIAccessible@@PEAJ@Z
    virtual long GetIAccessiblePair(IAccessible * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectForChild@CAccessibleExWrapperBase@@UEAAJJPEAPEAUIAccessibleEx@@@Z
    virtual long GetObjectForChild(long, IAccessibleEx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CAccessibleExWrapperBase@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CAccessibleExWrapperBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAccessibleExWrapperBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CAccessibleExWrapperBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAccessibleExWrapperBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CAccessibleExWrapperBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CAccessibleExWrapperBase@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};
