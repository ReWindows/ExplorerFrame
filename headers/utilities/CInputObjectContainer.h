#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 19 member(s).
class CInputObjectContainer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CInputObjectContainer@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestoringFocus@CInputObjectContainer@@UEAAJXZ
    virtual long IsRestoringFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CInputObjectContainer@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CInputObjectContainer@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CInputObjectContainer@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CInputObjectContainer@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CInputObjectContainer@@IEAAJAEBU_GUID@@0PEAPEAX@Z
    long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreLastFocus@CInputObjectContainer@@IEAAXW4SAVE_FOCUS_TARGET@@PEAUHWND__@@@Z
    void RestoreLastFocus(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveLastFocus@CInputObjectContainer@@IEAAXW4SAVE_FOCUS_TARGET@@@Z
    void SaveLastFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNextChild@CInputObjectContainer@@IEAAJPEAUIInputObject@@HHPEAUtagMSG@@@Z
    long _ActivateNextChild(IInputObject *, int, int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddInputObject@CInputObjectContainer@@IEAAJPEAUIInputObject@@K@Z
    long _AddInputObject(IInputObject *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CycleFocus@CInputObjectContainer@@IEAAJPEAUtagMSG@@@Z
    long _CycleFocus(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseInputObjects@CInputObjectContainer@@IEAAXXZ
    void _ReleaseInputObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultFocus@CInputObjectContainer@@MEAAXXZ
    virtual void _SetDefaultFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputObjectContainer@@MEAA@XZ
    virtual ~CInputObjectContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?INPUTOBJDATADestroyCallback@CInputObjectContainer@@CAHPEAUINPUTOBJ_CHILDDATA@@PEAX@Z
    static int INPUTOBJDATADestroyCallback(INPUTOBJ_CHILDDATA *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixUpActiveIO@CInputObjectContainer@@AEAAXXZ
    void _FixUpActiveIO();
};
