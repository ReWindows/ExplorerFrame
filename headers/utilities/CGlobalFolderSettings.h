#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
class CGlobalFolderSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGlobalFolderSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CGlobalFolderSettings@@UEAAJPEAUDEFFOLDERSETTINGS@@H@Z
    virtual long Get(DEFFOLDERSETTINGS *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGlobalFolderSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGlobalFolderSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CGlobalFolderSettings@@UEAAJPEBUDEFFOLDERSETTINGS@@HI@Z
    virtual long Set(DEFFOLDERSETTINGS const *, int, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalFolderSettings@@IEAA@XZ
    CGlobalFolderSettings();
};
