#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 7 member(s).
class CRunnableTaskWithActivatableKeyboard {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOriginalKeyboardLayout@CRunnableTaskWithActivatableKeyboard@@UEAAXPEAPEAUHKL__@@@Z
    virtual void ActivateOriginalKeyboardLayout(HKL__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardNeededAndGlobalInputSwitchingOnThread@CRunnableTaskWithActivatableKeyboard@@UEAA_NXZ
    virtual bool IsKeyboardNeededAndGlobalInputSwitchingOnThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetKeyboardLayout@CRunnableTaskWithActivatableKeyboard@@UEAAXPEAUHKL__@@@Z
    virtual void ResetKeyboardLayout(HKL__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRunnableTaskWithActivatableKeyboard@@UEAA@XZ
    virtual ~CRunnableTaskWithActivatableKeyboard();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRunnableTaskWithActivatableKeyboard@@IEAA@W4RUN_TASK_FLAGS@@@Z
    CRunnableTaskWithActivatableKeyboard(int);
};
