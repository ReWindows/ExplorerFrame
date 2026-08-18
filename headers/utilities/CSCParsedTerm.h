#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 10 member(s).
class CSCParsedTerm {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSCParsedTerm@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharRange@CSCParsedTerm@@QEAAJPEAUITextDocument@@PEAH1@Z
    long GetCharRange(ITextDocument *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionAt@CSCParsedTerm@@QEAAJIAEBU_GUID@@PEAPEAX@Z
    long GetConditionAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRange@CSCParsedTerm@@QEAAJPEAUITextDocument@@PEAPEAUITextRange@@@Z
    long GetRange(ITextDocument *, ITextRange * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSCParsedTerm@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSCParsedTerm@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CSCParsedTerm@@QEAAJPEBG@Z
    long SetText(unsigned short const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSCParsedTerm@@EEAA@XZ
    virtual ~CSCParsedTerm();
};
