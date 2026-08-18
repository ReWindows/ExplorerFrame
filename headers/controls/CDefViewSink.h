#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
namespace CShellBrowser {
class CDefViewSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefViewSink@CShellBrowser@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CDefViewSink@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CDefViewSink@CShellBrowser@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CDefViewSink@CShellBrowser@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDefViewSink@CShellBrowser@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefViewSink@CShellBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefViewSink@CShellBrowser@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CShellBrowser
