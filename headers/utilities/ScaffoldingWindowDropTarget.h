#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class ScaffoldingWindowDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@ScaffoldingWindowDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@ScaffoldingWindowDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@ScaffoldingWindowDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@ScaffoldingWindowDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScaffoldingWindowDropTarget@@UEAA@XZ
    virtual ~ScaffoldingWindowDropTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewTab@ScaffoldingWindowDropTarget@@AEAA?AUfire_and_forget@winrt@@UDataPackageView@DataTransfer@ApplicationModel@Windows@3@PEAUHWND__@@@Z
    WindissectOpaque CreateNewTab(WindissectOpaque, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageItemAsync@ScaffoldingWindowDropTarget@@AEAA?AU?$IAsyncOperation@UIStorageItem@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UDataPackageView@DataTransfer@ApplicationModel@45@@Z
    WindissectOpaque GetStorageItemAsync(WindissectOpaque);
};
