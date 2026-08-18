#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 36 member(s).
class CNscAccessible {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNscAccessible@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CNscAccessible@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CNscAccessible@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CNscAccessible@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CNscAccessible@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CNscAccessible@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CNscAccessible@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNscAccessible@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNscAccessible@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CNscAccessible@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CNscAccessible@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accDoDefaultAction@CNscAccessible@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accHitTest@CNscAccessible@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accLocation@CNscAccessible@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accNavigate@CNscAccessible@@UEAAJJUtagVARIANT@@PEAU2@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@CNscAccessible@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChild@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChildCount@CNscAccessible@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDefaultAction@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDescription@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CNscAccessible@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelp@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelpTopic@CNscAccessible@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accParent@CNscAccessible@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CNscAccessible@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accSelection@CNscAccessible@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CNscAccessible@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accValue@CNscAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accName@CNscAccessible@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accValue@CNscAccessible@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNscAccessible@@AEAA@XZ
    ~CNscAccessible();
};
