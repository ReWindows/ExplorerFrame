// Flat C exports observed in ExplorerFrame.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef EXPLORERFRAME_C_H
#define EXPLORERFRAME_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: CCDllGetVersion (ABI unverified)
// Export: DllGetVersion (ABI unverified)
// Export: #ordinal134 (ABI unverified)
// Export: SHGetNavigateTarget (ABI unverified)
// Export: #ordinal110 (ABI unverified)
// Export: #ordinal111 (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // EXPLORERFRAME_C_H
