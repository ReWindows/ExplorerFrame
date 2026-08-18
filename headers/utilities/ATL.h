#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 5 member(s).
class ATL {
public:
    class CComBSTR;
    class CComVariant;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z
    IUnknown * AtlComPtrAssign(IUnknown * *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z
    IUnknown * AtlComQIPtrAssign(IUnknown * *, IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleGetClassObject@ATL@@YAJPEAU_ATL_MODULE@1@AEBU_GUID@@1PEAPEAX@Z
    long AtlModuleGetClassObject(WindissectOpaque *, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleInit@ATL@@YAJPEAU_ATL_MODULE@1@PEAU_ATL_OBJMAP_ENTRY@1@PEAUHINSTANCE__@@@Z
    long AtlModuleInit(WindissectOpaque *, WindissectOpaque *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleTerm@ATL@@YAJPEAU_ATL_MODULE@1@@Z
    long AtlModuleTerm(WindissectOpaque *);
};
