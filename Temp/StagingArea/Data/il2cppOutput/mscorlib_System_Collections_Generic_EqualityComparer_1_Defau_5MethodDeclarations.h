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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1_1091;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m1_6972_gshared (DefaultComparer_t1_1091 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_6972(__this, method) (( void (*) (DefaultComparer_t1_1091 *, const MethodInfo*))DefaultComparer__ctor_m1_6972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_6973_gshared (DefaultComparer_t1_1091 * __this, Guid_t1_720  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_6973(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1091 *, Guid_t1_720 , const MethodInfo*))DefaultComparer_GetHashCode_m1_6973_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_6974_gshared (DefaultComparer_t1_1091 * __this, Guid_t1_720  ___x, Guid_t1_720  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_6974(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1091 *, Guid_t1_720 , Guid_t1_720 , const MethodInfo*))DefaultComparer_Equals_m1_6974_gshared)(__this, ___x, ___y, method)
