#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 27 member(s).
class CGenericTabsetHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGenericTabsetHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CGenericTabsetHandler@@UEAAJIW4UI_EXECUTIONVERB@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAUIUISimplePropertySet@@@Z
    virtual long Execute(unsigned int, int, _tagpropertykey const *, tagPROPVARIANT const *, IUISimplePropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnableSelectionTabset@CGenericTabsetHandler@@UEAAJIW4UI_CONTEXTAVAILABILITY_CB@@I@Z
    virtual long OnEnableSelectionTabset(unsigned int, int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGenericTabsetHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGenericTabsetHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePerHandlerCache@CGenericTabsetHandler@@UEAAJH@Z
    virtual long UpdatePerHandlerCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperty@CGenericTabsetHandler@@UEAAJIAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEAU3@@Z
    virtual long UpdateProperty(unsigned int, _tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLocationTabsets@CGenericTabsetHandler@@AEAAXPEAUIFolderView2@@PEAUIShellFolder@@@Z
    void _UpdateLocationTabsets(IFolderView2*, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSelectionTabsets@CGenericTabsetHandler@@AEAAXPEAUIFolderView2@@@Z
    void _UpdateSelectionTabsets(IFolderView2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddFolderTypeTabsetsForFolder@CGenericTabsetHandler@@CAXPEAUIShellFolder@@PEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static void s_AddFolderTypeTabsetsForFolder(IShellFolder *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddSelectionTabset@CGenericTabsetHandler@@CAJPEAUIShellItemArray@@KKPEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static long s_AddSelectionTabset(IShellItemArray *, unsigned long, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddTabsetFromKeyIfPresent@CGenericTabsetHandler@@CAXPEAUHKEY__@@PEBGKW4DESIRED_TABSET_TYPE@@PEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static void s_AddTabsetFromKeyIfPresent(HKEY__*, unsigned short const *, unsigned long, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PopulateTabsetsForItem@CGenericTabsetHandler@@CAJPEAUIShellItem@@KW4DESIRED_TABSET_TYPE@@PEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static long s_PopulateTabsetsForItem(IShellItem *, unsigned long, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateLocationAsSelectionTabsets@CGenericTabsetHandler@@CAXPEAUIShellFolder@@PEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static void s_UpdateLocationAsSelectionTabsets(IShellFolder *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateSelectionTabsets@CGenericTabsetHandler@@CAXPEAUIShellItemArray@@PEAUIShellFolder@@PEAV?$CSimpleHashTable@IW4UI_CONTEXTAVAILABILITY@@V?$CDefaultHashPolicy@I@@V?$CDefaultKeyCompare@I@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@@Z
    static void s_UpdateSelectionTabsets(IShellItemArray *, IShellFolder *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGenericTabsetHandler@@EEAA@XZ
    virtual ~CGenericTabsetHandler();
};
