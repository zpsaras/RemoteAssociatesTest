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

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t1_1151;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_7603_gshared (Comparison_1_t1_1151 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_7603(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1151 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_7603_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_7604_gshared (Comparison_1_t1_1151 * __this, Vector4_t5_44  ___x, Vector4_t5_44  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_7604(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1151 *, Vector4_t5_44 , Vector4_t5_44 , const MethodInfo*))Comparison_1_Invoke_m1_7604_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_7605_gshared (Comparison_1_t1_1151 * __this, Vector4_t5_44  ___x, Vector4_t5_44  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_7605(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1151 *, Vector4_t5_44 , Vector4_t5_44 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_7605_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_7606_gshared (Comparison_1_t1_1151 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_7606(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1151 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_7606_gshared)(__this, ___result, method)
