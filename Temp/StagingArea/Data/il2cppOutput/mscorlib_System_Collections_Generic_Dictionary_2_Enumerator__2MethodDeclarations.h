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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1010;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6271_gshared (Enumerator_t1_1016 * __this, Dictionary_2_t1_1010 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6271(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1016 *, Dictionary_2_t1_1010 *, const MethodInfo*))Enumerator__ctor_m1_6271_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6272_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6272(__this, method) (( Object_t * (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6273_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6273(__this, method) (( void (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6273_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6274_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6274(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6275_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6275(__this, method) (( Object_t * (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6275_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6276_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6276(__this, method) (( Object_t * (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6277_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6277(__this, method) (( bool (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_MoveNext_m1_6277_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1012  Enumerator_get_Current_m1_6278_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6278(__this, method) (( KeyValuePair_2_t1_1012  (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_get_Current_m1_6278_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6279_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6279(__this, method) (( Object_t * (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6279_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6280_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6280(__this, method) (( Object_t * (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6281_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6281(__this, method) (( void (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_Reset_m1_6281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6282_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6282(__this, method) (( void (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_VerifyState_m1_6282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6283_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6283(__this, method) (( void (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6284_gshared (Enumerator_t1_1016 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6284(__this, method) (( void (*) (Enumerator_t1_1016 *, const MethodInfo*))Enumerator_Dispose_m1_6284_gshared)(__this, method)
