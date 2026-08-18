#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 14 member(s).
class CBandDataObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBandDataObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DAdvise@CBandDataObject@@UEAAJPEAUtagFORMATETC@@KPEAUIAdviseSink@@PEAK@Z
    virtual long DAdvise(tagFORMATETC *, unsigned long, IAdviseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUnadvise@CBandDataObject@@UEAAJK@Z
    virtual long DUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDAdvise@CBandDataObject@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumDAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFormatEtc@CBandDataObject@@UEAAJKPEAPEAUIEnumFORMATETC@@@Z
    virtual long EnumFormatEtc(unsigned long, IEnumFORMATETC * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalFormatEtc@CBandDataObject@@UEAAJPEAUtagFORMATETC@@0@Z
    virtual long GetCanonicalFormatEtc(tagFORMATETC *, tagFORMATETC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CBandDataObject@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataHere@CBandDataObject@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetDataHere(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CBandDataObject@@QEAAJPEAUIUnknown@@PEAUIBandSite@@K@Z
    long Init(IUnknown *, IBandSite *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CBandDataObject@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBandDataObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBandDataObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CBandDataObject@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@H@Z
    virtual long SetData(tagFORMATETC *, tagSTGMEDIUM *, int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandDataObject@@IEAA@XZ
    ~CBandDataObject();
};
