#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 31 member(s).
class CAddressList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddressList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CAddressList@@UEAAJHPEAUHWND__@@PEAUIShellBandProxy@@PEAUIAutoComplete@@@Z
    virtual long Connect(int, HWND__*, IShellBandProxy *, IAutoComplete *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CAddressList@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CAddressList@@UEAAJXZ
    virtual long Load();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationComplete@CAddressList@@UEAAJPEAUIShellUrl@@@Z
    virtual long NavigationComplete(IShellUrl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CAddressList@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CAddressList@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddressList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CAddressList@@UEAAJK@Z
    virtual long Refresh(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddressList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CAddressList@@UEAAJXZ
    virtual long Save();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToListIndex@CAddressList@@UEAAJHPEAUIShellUrl@@@Z
    virtual long SetToListIndex(int, IShellUrl *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddressList@@IEAA@XZ
    CAddressList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComboBoxInsertURL@CAddressList@@IEAAXPEBGHH@Z
    void _ComboBoxInsertURL(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragDropPidl@CAddressList@@MEAAPEAU_ITEMIDLIST_ABSOLUTE@@PEAUNMCBEDRAGBEGINW@@@Z
    virtual _ITEMIDLIST_ABSOLUTE * _GetDragDropPidl(NMCBEDRAGBEGINW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFastPathIcons@CAddressList@@IEAAJPEBGPEAH1@Z
    long _GetFastPathIcons(unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPidlIcon@CAddressList@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAH1@Z
    long _GetPidlIcon(_ITEMIDLIST_ABSOLUTE const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUrlUI@CAddressList@@IEAAJPEAUIShellUrl@@PEBGPEAH2@Z
    long _GetUrlUI(IShellUrl *, unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitCombobox@CAddressList@@MEAAXXZ
    virtual void _InitCombobox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveAddressToTopOfList@CAddressList@@IEAAHH@Z
    int _MoveAddressToTopOfList(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CAddressList@@MEAA_J_K_J@Z
    virtual int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBeginA@CAddressList@@IEAA_JPEAUNMCBEDRAGBEGINA@@@Z
    int64_t _OnDragBeginA(NMCBEDRAGBEGINA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBeginW@CAddressList@@IEAA_JPEAUNMCBEDRAGBEGINW@@@Z
    int64_t _OnDragBeginW(NMCBEDRAGBEGINW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CAddressList@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PurgeComboBox@CAddressList@@MEAAXXZ
    virtual void _PurgeComboBox();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddressList@@MEAA@XZ
    virtual ~CAddressList();
};
