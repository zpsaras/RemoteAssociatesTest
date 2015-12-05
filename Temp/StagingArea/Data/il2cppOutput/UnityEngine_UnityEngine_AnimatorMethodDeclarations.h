#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Animator
struct Animator_t5_122;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t5_126;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C" bool Animator_GetBool_m5_759 (Animator_t5_122 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C" void Animator_SetBool_m5_760 (Animator_t5_122 * __this, int32_t ___id, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m5_761 (Animator_t5_122 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m5_762 (Animator_t5_122 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t5_116  Animator_GetCurrentAnimatorStateInfo_m5_763 (Animator_t5_122 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C" bool Animator_IsInTransition_m5_764 (Animator_t5_122 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t5_126 * Animator_get_runtimeAnimatorController_m5_765 (Animator_t5_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m5_766 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" void Animator_SetBoolID_m5_767 (Animator_t5_122 * __this, int32_t ___id, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" bool Animator_GetBoolID_m5_768 (Animator_t5_122 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m5_769 (Animator_t5_122 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m5_770 (Animator_t5_122 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
