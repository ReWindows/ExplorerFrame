#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 37 member(s).
class CMRUList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@CMRUList@@UEAAJPEBG@Z
    virtual long AddEntry(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMRUList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CMRUList@@UEAAJHPEAUHWND__@@PEAUIShellBandProxy@@PEAUIAutoComplete@@@Z
    virtual long Connect(int, HWND__*, IShellBandProxy *, IAutoComplete *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CMRUList@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CMRUList@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CMRUList@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMRUList@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMRUList@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMRUList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CMRUList@@UEAAJK@Z
    virtual long Refresh(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMRUList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CMRUList@@UEAAJXZ
    virtual long Save();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CMRUList@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMRUList@@IEAA@XZ
    CMRUList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageList@CMRUList@@IEAAXXZ
    void SetImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindInMRU@CMRUList@@IEAAHPEBG@Z
    int _FindInMRU(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegKey@CMRUList@@IEAAPEAUHKEY__@@H@Z
    HKEY__* _GetRegKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitCombobox@CMRUList@@MEAAXXZ
    virtual void _InitCombobox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadList@CMRUList@@IEAAJXZ
    long _LoadList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MRUMerge@CMRUList@@IEAAJPEAUHKEY__@@@Z
    long _MRUMerge(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveAddressToTopOfMRU@CMRUList@@IEAAHH@Z
    int _MoveAddressToTopOfMRU(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Populate@CMRUList@@MEAAJXZ
    virtual long _Populate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTopItem@CMRUList@@IEAAJXZ
    long _SetTopItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMRU@CMRUList@@IEAAJXZ
    long _UpdateMRU();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMRUEntry@CMRUList@@IEAAJPEBGHHH@Z
    long _UpdateMRUEntry(unsigned short const *, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMRUList@@MEAA@XZ
    virtual ~CMRUList();
};
