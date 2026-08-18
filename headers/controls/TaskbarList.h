#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 34 member(s).
class TaskbarList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTab@TaskbarList@@UEAAJPEAUHWND__@@@Z
    virtual long ActivateTab(HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TaskbarList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTab@TaskbarList@@UEAAJPEAUHWND__@@@Z
    virtual long AddTab(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTab@TaskbarList@@UEAAJPEAUHWND__@@@Z
    virtual long DeleteTab(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestartInfoFlags@TaskbarList@@UEAAJPEAW4RESTARTINFOFLAGS@@@Z
    virtual long GetRestartInfoFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@TaskbarList@@UEAAJXZ
    virtual long HrInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullscreenWindow@TaskbarList@@UEAAJPEAUHWND__@@H@Z
    virtual long MarkFullscreenWindow(HWND__*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TaskbarList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTab@TaskbarList@@UEAAJPEAUHWND__@@0@Z
    virtual long RegisterTab(HWND__*, HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TaskbarList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveAlt@TaskbarList@@UEAAJPEAUHWND__@@@Z
    virtual long SetActiveAlt(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayIcon@TaskbarList@@UEAAJPEAUHWND__@@PEAUHICON__@@PEBG@Z
    virtual long SetOverlayIcon(HWND__*, HICON__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressState@TaskbarList@@UEAAJPEAUHWND__@@W4TBPFLAG@@@Z
    virtual long SetProgressState(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressValue@TaskbarList@@UEAAJPEAUHWND__@@_K1@Z
    virtual long SetProgressValue(HWND__*, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabActive@TaskbarList@@UEAAJPEAUHWND__@@0K@Z
    virtual long SetTabActive(HWND__*, HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabOrder@TaskbarList@@UEAAJPEAUHWND__@@0@Z
    virtual long SetTabOrder(HWND__*, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabProperties@TaskbarList@@UEAAJPEAUHWND__@@W4STPFLAG@@@Z
    virtual long SetTabProperties(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailClip@TaskbarList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long SetThumbnailClip(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailTooltip@TaskbarList@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long SetThumbnailTooltip(HWND__*, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarList@@QEAA@XZ
    TaskbarList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarAddButtons@TaskbarList@@UEAAJPEAUHWND__@@IPEAUTHUMBBUTTON@@@Z
    virtual long ThumbBarAddButtons(HWND__*, unsigned int, THUMBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarSetImageList@TaskbarList@@UEAAJPEAUHWND__@@PEAU_IMAGELIST@@@Z
    virtual long ThumbBarSetImageList(HWND__*, _IMAGELIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarUpdateButtons@TaskbarList@@UEAAJPEAUHWND__@@IPEAUTHUMBBUTTON@@@Z
    virtual long ThumbBarUpdateButtons(HWND__*, unsigned int, THUMBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTab@TaskbarList@@UEAAJPEAUHWND__@@@Z
    virtual long UnregisterTab(HWND__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindTab@TaskbarList@@IEAAHAEBUtagPROPVARIANT@@PEAUHWND__@@@Z
    int _FindTab(tagPROPVARIANT const &, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HwndGetTaskbarList@TaskbarList@@IEAAPEAUHWND__@@XZ
    HWND__* _HwndGetTaskbarList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveNToM@TaskbarList@@IEAAXPEAKIHH@Z
    void _MoveNToM(unsigned long *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReallocTabs@TaskbarList@@IEAAJAEAVCComPropVariant@@I@Z
    long _ReallocTabs(CComPropVariant &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveInvalidTabs@TaskbarList@@IEAAJPEAUHWND__@@@Z
    long _RemoveInvalidTabs(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveTab@TaskbarList@@IEAAJPEAUHWND__@@0@Z
    long _RemoveTab(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThumbBarUpdateButtons@TaskbarList@@IEAAJPEAUHWND__@@IPEAUTHUMBBUTTON@@I@Z
    long _ThumbBarUpdateButtons(HWND__*, unsigned int, THUMBBUTTON *, unsigned int);
};
