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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t1_1059;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_6727_gshared (Comparison_1_t1_1059 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_6727(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1059 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_6727_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_6728_gshared (Comparison_1_t1_1059 * __this, CustomAttributeNamedArgument_t1_326  ___x, CustomAttributeNamedArgument_t1_326  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_6728(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1059 *, CustomAttributeNamedArgument_t1_326 , CustomAttributeNamedArgument_t1_326 , const MethodInfo*))Comparison_1_Invoke_m1_6728_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_6729_gshared (Comparison_1_t1_1059 * __this, CustomAttributeNamedArgument_t1_326  ___x, CustomAttributeNamedArgument_t1_326  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_6729(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1059 *, CustomAttributeNamedArgument_t1_326 , CustomAttributeNamedArgument_t1_326 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_6729_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_6730_gshared (Comparison_1_t1_1059 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_6730(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1059 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_6730_gshared)(__this, ___result, method)
