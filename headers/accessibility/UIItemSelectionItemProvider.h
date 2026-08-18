#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 8 member(s).
class UIItemSelectionItemProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@UIItemSelectionItemProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@UIItemSelectionItemProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@UIItemSelectionItemProvider@@UEAAJXZ
    virtual long Select();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIItemSelectionItemProvider@@QEAA@XZ
    UIItemSelectionItemProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@UIItemSelectionItemProvider@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@UIItemSelectionItemProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};
