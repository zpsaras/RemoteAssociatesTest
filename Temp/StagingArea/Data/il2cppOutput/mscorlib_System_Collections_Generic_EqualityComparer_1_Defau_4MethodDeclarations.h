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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1_1087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m1_6951_gshared (DefaultComparer_t1_1087 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_6951(__this, method) (( void (*) (DefaultComparer_t1_1087 *, const MethodInfo*))DefaultComparer__ctor_m1_6951_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_6952_gshared (DefaultComparer_t1_1087 * __this, DateTimeOffset_t1_697  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_6952(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1087 *, DateTimeOffset_t1_697 , const MethodInfo*))DefaultComparer_GetHashCode_m1_6952_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_6953_gshared (DefaultComparer_t1_1087 * __this, DateTimeOffset_t1_697  ___x, DateTimeOffset_t1_697  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_6953(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1087 *, DateTimeOffset_t1_697 , DateTimeOffset_t1_697 , const MethodInfo*))DefaultComparer_Equals_m1_6953_gshared)(__this, ___x, ___y, method)
