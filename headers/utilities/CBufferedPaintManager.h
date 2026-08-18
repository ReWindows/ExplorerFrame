#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 4 member(s).
class CBufferedPaintManager {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginDxBitmapBufferedPaint@CBufferedPaintManager@@AEAAJPEAUHDC__@@PEAUtagRECT@@PEAPEAU2@@Z
    long _BeginDxBitmapBufferedPaint(HDC__*, tagRECT *, HDC__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyDxBitmap@CBufferedPaintManager@@AEAAXXZ
    void _DestroyDxBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndDxBitmapBufferedPaint@CBufferedPaintManager@@AEAAXXZ
    void _EndDxBitmapBufferedPaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareDxBitmap@CBufferedPaintManager@@AEAAJPEAUHDC__@@PEAUtagRECT@@@Z
    long _PrepareDxBitmap(HDC__*, tagRECT *);
};
