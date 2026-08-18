#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 36 member(s).
class VirtualElementProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VirtualElementProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VirtualElementProvider@@SAJPEAVElementProvider@DirectUI@@PEAVInvokeHelper@3@PEBUINDEX_AND_VERSION@@IPEBGPEAPEAV23@@Z
    static long Create(::DirectUI::ElementProvider *, ::DirectUI::InvokeHelper *, INDEX_AND_VERSION const *, unsigned int, unsigned short const *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@VirtualElementProvider@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetElement(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@VirtualElementProvider@@UEAAPEDVElement@DirectUI@@XZ
    virtual ::DirectUI::Element const volatile * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@VirtualElementProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndices@VirtualElementProvider@@UEAAJPEAUINDEX_AND_VERSION@@IPEAI@Z
    virtual long GetIndices(INDEX_AND_VERSION *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@VirtualElementProvider@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@VirtualElementProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@VirtualElementProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@VirtualElementProvider@@QEAAJPEAVElementProvider@DirectUI@@PEAVInvokeHelper@3@PEBUINDEX_AND_VERSION@@IPEBG@Z
    long Init(::DirectUI::ElementProvider *, ::DirectUI::InvokeHelper *, INDEX_AND_VERSION const *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@VirtualElementProvider@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VirtualElementProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realize@VirtualElementProvider@@UEAAJXZ
    virtual long Realize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VirtualElementProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@VirtualElementProvider@@UEAAJXZ
    virtual long SetFocus();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualElementProvider@@QEAA@XZ
    VirtualElementProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@VirtualElementProvider@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@VirtualElementProvider@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@VirtualElementProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@VirtualElementProvider@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualElementProvider@@UEAA@XZ
    virtual ~VirtualElementProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInvokePattern@VirtualElementProvider@@IEAAJHP6APEAVProviderProxy@DirectUI@@PEAVElement@3@@ZZZ
    long DoInvokePattern(int, ::DirectUI::ProviderProxy * ( *)(::DirectUI::Element *), ...);
};
