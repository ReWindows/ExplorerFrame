#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 64 member(s).
class CDeskBarApp {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeskBarApp@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeskBarApp@@QEAA@XZ
    CDeskBarApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CDeskBarApp@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDeskBarApp@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CDeskBarApp@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CDeskBarApp@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CDeskBarApp@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CDeskBarApp@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CDeskBarApp@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CDeskBarApp@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CDeskBarApp@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDeskBarApp@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDeskBarApp@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CDeskBarApp@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeskBarApp@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDeskBarApp@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeskBarApp@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CDeskBarApp@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CDeskBarApp@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBandSiteMenu@CDeskBarApp@@IEAAXXZ
    void _CreateBandSiteMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LeaveSide@CDeskBarApp@@IEAAXXZ
    void _LeaveSide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeSide@CDeskBarApp@@IEAAJPEAUIBandSite@@@Z
    long _MergeSide(IBandSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyModeChange@CDeskBarApp@@MEAAXK@Z
    virtual void _NotifyModeChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCloseBar@CDeskBarApp@@MEAAHH@Z
    virtual int _OnCloseBar(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetModeSide@CDeskBarApp@@MEAAXIIPEAUHMONITOR__@@H@Z
    virtual void _SetModeSide(unsigned int, unsigned int, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptionTitle@CDeskBarApp@@MEAAXXZ
    virtual void _UpdateCaptionTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CDeskBarApp@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeskBarApp@@MEAA@XZ
    virtual ~CDeskBarApp();
};
