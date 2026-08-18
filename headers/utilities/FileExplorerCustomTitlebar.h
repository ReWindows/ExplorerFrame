#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 9 member(s).
class FileExplorerCustomTitlebar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedBorderWidth@FileExplorerCustomTitlebar@@QEAA?AUtagSIZE@@H@Z
    tagSIZE GetReservedBorderWidth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTitleBarScaffoldingWindow@FileExplorerCustomTitlebar@@QEAAXXZ
    void MakeTitleBarScaffoldingWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileExplorerCustomTitlebar@@QEAA@XZ
    ~FileExplorerCustomTitlebar();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileExplorerCustomTitlebar@@AEAA@PEAUIExplorerFrame@@@Z
    FileExplorerCustomTitlebar(IExplorerFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDraggableControlNcHitTest@FileExplorerCustomTitlebar@@AEAA_JPEAUHWND__@@_J@Z
    int64_t OnDraggableControlNcHitTest(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeTitleBarScaffoldingWindow@FileExplorerCustomTitlebar@@AEAAX_NJH@Z
    void ResizeTitleBarScaffoldingWindow(bool, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticTitlebarScaffoldingWndProc@FileExplorerCustomTitlebar@@CA_JQEAUHWND__@@I_K_J@Z
    static int64_t StaticTitlebarScaffoldingWndProc(HWND__* const, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TitlebarScaffoldingInputSinkMessageHandler@FileExplorerCustomTitlebar@@AEAA_JI_K_JPEA_N@Z
    int64_t TitlebarScaffoldingInputSinkMessageHandler(unsigned int, uint64_t, int64_t, bool *);
};
