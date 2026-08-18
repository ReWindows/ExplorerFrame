#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIImage {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIImage@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyChangingListener@UIImage@@UEAAXPEBUPropertyInfo@DirectUI@@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyListener@UIImage@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIImage@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIImage@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@UIImage@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIImage@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?UseImageHeightProp@UIImage@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * UseImageHeightProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyViewSettings@UIImage@@AEAAXPEAUIItem@@PEAVUIItemsView@@@Z
    void _ApplyViewSettings(IItem *, UIItemsView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormattedLocalContentRect@UIImage@@AEAAXAEBUtagRECT@@PEAU2@@Z
    void _GetFormattedLocalContentRect(tagRECT const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsClickInWhiteSpace@UIImage@@AEAAHUtagPOINT@@@Z
    int _IsClickInWhiteSpace(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@UIImage@@AEAAXPEAUIItem@@H@Z
    void _Update(IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImageSize@UIImage@@AEAAXW4UPDATEIMAGESIZEFLAGS@@@Z
    void _UpdateImageSize(int);
};
