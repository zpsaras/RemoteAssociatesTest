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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t5_228;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5_269;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_190;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1181_gshared (UnityEvent_1_t5_228 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1181(__this, method) (( void (*) (UnityEvent_1_t5_228 *, const MethodInfo*))UnityEvent_1__ctor_m5_1181_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1347_gshared (UnityEvent_1_t5_228 * __this, UnityAction_1_t5_269 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1347(__this, ___call, method) (( void (*) (UnityEvent_1_t5_228 *, UnityAction_1_t5_269 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1347_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_1348_gshared (UnityEvent_1_t5_228 * __this, UnityAction_1_t5_269 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_1348(__this, ___call, method) (( void (*) (UnityEvent_1_t5_228 *, UnityAction_1_t5_269 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_1348_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_1349_gshared (UnityEvent_1_t5_228 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_1349(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_228 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_1349_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_190 * UnityEvent_1_GetDelegate_m5_1350_gshared (UnityEvent_1_t5_228 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1350(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_190 * (*) (UnityEvent_1_t5_228 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1350_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_190 * UnityEvent_1_GetDelegate_m5_1351_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_269 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1351(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_190 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_269 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1351_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1183_gshared (UnityEvent_1_t5_228 * __this, Vector2_t5_37  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1183(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_228 *, Vector2_t5_37 , const MethodInfo*))UnityEvent_1_Invoke_m5_1183_gshared)(__this, ___arg0, method)
