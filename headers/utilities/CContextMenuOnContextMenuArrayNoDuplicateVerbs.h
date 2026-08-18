#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CContextMenuOnContextMenuArrayNoDuplicateVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuOnContextMenuArrayNoDuplicateVerbs@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuOnContextMenuArrayNoDuplicateVerbs@@IEAA@XZ
    CContextMenuOnContextMenuArrayNoDuplicateVerbs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuOnContextMenuArrayNoDuplicateVerbs@@IEAAJQEAPEAUIContextMenu@@I@Z
    long Initialize(IContextMenu * * const, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuOnContextMenuArrayNoDuplicateVerbs@@MEAA@XZ
    virtual ~CContextMenuOnContextMenuArrayNoDuplicateVerbs();
};
