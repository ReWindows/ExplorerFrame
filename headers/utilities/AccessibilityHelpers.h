#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class AccessibilityHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextHeight@AccessibilityHelpers@@YAJPEAUHWND__@@@Z
    long CalculateTextHeight(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextHeightFromFont@AccessibilityHelpers@@YAJPEAUHWND__@@AEBUtagLOGFONTW@@@Z
    long CalculateTextHeightFromFont(HWND__*, tagLOGFONTW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateListViewProxy@AccessibilityHelpers@@YAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    long CreateListViewProxy(HWND__*, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSafeArrayAndPutElement@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAUtagVARIANT@@@Z
    long CreateSafeArrayAndPutElement(IRawElementProviderSimple *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextScaleFactorFromRegistry@AccessibilityHelpers@@YAHXZ
    int GetTextScaleFactorFromRegistry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenReaderEnabled@AccessibilityHelpers@@YA_NXZ
    bool IsScreenReaderEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupListViewProxyFactory@AccessibilityHelpers@@YAJPEAPEAUIUIAutomationProxyFactory@@@Z
    long LookupListViewProxyFactory(IUIAutomationProxyFactory * *);
};
