#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 48 member(s).
class CBandSiteMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBandSiteMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBandSiteMenu@@QEAA@XZ
    CBandSiteMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMergeMenu@CBandSiteMenu@@QEAAHPEAUHMENU__@@IIII@Z
    int CreateMergeMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBandClass@CBandSiteMenu@@QEAAHAEBU_GUID@@@Z
    int DeleteBandClass(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumNextCatBand@CBandSiteMenu@@UEAAJAEBU_GUID@@PEAU2@PEAHPEAGPEAIPEAK2@Z
    virtual long EnumNextCatBand(_GUID const &, _GUID *, int *, unsigned short *, unsigned int *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumReset@CBandSiteMenu@@UEAAJAEBU_GUID@@@Z
    virtual long EnumReset(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandClassCount@CBandSiteMenu@@QEAAHPEBU_GUID@@H@Z
    int GetBandClassCount(_GUID const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CBandSiteMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CBandSiteMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CBandSiteMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCatBand@CBandSiteMenu@@UEAAJAEBU_GUID@@0H@Z
    virtual long HideCatBand(_GUID const &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CBandSiteMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromComCat@CBandSiteMenu@@QEAAHPEBU_GUID@@H@Z
    int LoadFromComCat(_GUID const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCatBand@CBandSiteMenu@@UEAAJAEBU_GUID@@0HPEAGIPEAKPEAH@Z
    virtual long QueryCatBand(_GUID const &, _GUID const &, int, unsigned short *, unsigned int, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CBandSiteMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBandSiteMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCatBandCache@CBandSiteMenu@@UEAAJAEBU_GUID@@@Z
    virtual long RefreshCatBandCache(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBandSiteMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CBandSiteMenu@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCatBand@CBandSiteMenu@@UEAAJAEBU_GUID@@0H@Z
    virtual long ShowCatBand(_GUID const &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleCatBand@CBandSiteMenu@@UEAAJAEBU_GUID@@0H@Z
    virtual long ToggleCatBand(_GUID const &, _GUID const &, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddMenuItemsForGenericFolderBands@CBandSiteMenu@@IEAAXPEAUHMENU__@@H@Z
    void _AddMenuItemsForGenericFolderBands(HMENU__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddNewFSBand@CBandSiteMenu@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    long _AddNewFSBand(_ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandClassEnum@CBandSiteMenu@@KAJAEBU_GUID@@0_J@Z
    static long _BandClassEnum(_GUID const &, _GUID const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseForNewFolderBand@CBandSiteMenu@@IEAAJXZ
    long _BrowseForNewFolderBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckUnique@CBandSiteMenu@@IEAAHPEAUIDeskBand@@PEAUHMENU__@@@Z
    int _CheckUnique(IDeskBand *, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DPA_FreeBandClassInfo@CBandSiteMenu@@KAHPEAX0@Z
    static int _DPA_FreeBandClassInfo(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DPA_FreeDeskBandItems@CBandSiteMenu@@KAHPEAX0@Z
    static int _DPA_FreeDeskBandItems(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindBand@CBandSiteMenu@@IEAAJAEBU_GUID@@HPEAK@Z
    long _FindBand(_GUID const &, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandIdentifiers@CBandSiteMenu@@IEAAJPEAUIUnknown@@PEAU_GUID@@PEAH@Z
    long _GetBandIdentifiers(IUnknown *, _GUID *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetComCatBandMenuText@CBandSiteMenu@@IEAAXPEBUBANDCLASSINFO@@PEAGI@Z
    void _GetComCatBandMenuText(BANDCLASSINFO const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUniqueIDForGenericFolderBand@CBandSiteMenu@@IEAAHXZ
    int _GetUniqueIDForGenericFolderBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitComCat@CBandSiteMenu@@IEAAHPEBU_GUID@@@Z
    int _InitComCat(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LegacyBandWarning@CBandSiteMenu@@IEAAHAEBU_GUID@@@Z
    int _LegacyBandWarning(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDeskBandItems@CBandSiteMenu@@IEAAXXZ
    void _LoadDeskBandItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDesktopFolderBandItem@CBandSiteMenu@@IEAAXXZ
    void _LoadDesktopFolderBandItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateSubmenu@CBandSiteMenu@@IEAAXPEAUHMENU__@@@Z
    void _PopulateSubmenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveGenericFolderBand@CBandSiteMenu@@IEAAJH@Z
    long _RemoveGenericFolderBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleCatBand@CBandSiteMenu@@IEAAJAEBU_GUID@@HK@Z
    long _ToggleCatBand(_GUID const &, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleComCatBand@CBandSiteMenu@@IEAAJAEBU_GUID@@K@Z
    long _ToggleComCatBand(_GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleSpecialFolderBand@CBandSiteMenu@@IEAAJHHK@Z
    long _ToggleSpecialFolderBand(int, int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandSiteMenu@@IEAA@XZ
    ~CBandSiteMenu();
};
