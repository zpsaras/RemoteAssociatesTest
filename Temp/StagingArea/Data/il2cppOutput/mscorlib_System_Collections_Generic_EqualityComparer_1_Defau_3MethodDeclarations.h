﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1_1083;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m1_6934_gshared (DefaultComparer_t1_1083 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_6934(__this, method) (( void (*) (DefaultComparer_t1_1083 *, const MethodInfo*))DefaultComparer__ctor_m1_6934_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_6935_gshared (DefaultComparer_t1_1083 * __this, DateTime_t1_126  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_6935(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1083 *, DateTime_t1_126 , const MethodInfo*))DefaultComparer_GetHashCode_m1_6935_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_6936_gshared (DefaultComparer_t1_1083 * __this, DateTime_t1_126  ___x, DateTime_t1_126  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_6936(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1083 *, DateTime_t1_126 , DateTime_t1_126 , const MethodInfo*))DefaultComparer_Equals_m1_6936_gshared)(__this, ___x, ___y, method)
