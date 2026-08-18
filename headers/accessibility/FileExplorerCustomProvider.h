#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 19 member(s).
class FileExplorerCustomProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPoint@FileExplorerCustomProvider@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileExplorerCustomProvider@@QEAA@XZ
    FileExplorerCustomProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@FileExplorerCustomProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@FileExplorerCustomProvider@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@FileExplorerCustomProvider@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@FileExplorerCustomProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@FileExplorerCustomProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileExplorerCustomProvider@@QEAAJPEAUHWND__@@@Z
    long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@FileExplorerCustomProvider@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@FileExplorerCustomProvider@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@FileExplorerCustomProvider@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@FileExplorerCustomProvider@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@FileExplorerCustomProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@FileExplorerCustomProvider@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileExplorerCustomProvider@@UEAA@XZ
    virtual ~FileExplorerCustomProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRoot@FileExplorerCustomProvider@@AEAA_NXZ
    bool _IsRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RootElementProviderFromPoint@FileExplorerCustomProvider@@AEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    long _RootElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
};
