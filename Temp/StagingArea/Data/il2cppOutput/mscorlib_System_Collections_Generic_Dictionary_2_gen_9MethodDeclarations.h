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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1099;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_986;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1412;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1413;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1103;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7029_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7029(__this, method) (( void (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2__ctor_m1_7029_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7030_gshared (Dictionary_2_t1_1099 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7030(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7030_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7032_gshared (Dictionary_2_t1_1099 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7032(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1099 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7032_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7034_gshared (Dictionary_2_t1_1099 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7034(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1099 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_7034_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7036_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7036(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7036_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7038_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7038(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7038_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7040_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7040(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7040_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7042_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7042(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7042_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7044_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7044(__this, ___key, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7044_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7046_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7046(__this, method) (( bool (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7048_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7048(__this, method) (( Object_t * (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7048_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7050_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7050(__this, method) (( bool (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7050_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7052_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2_t1_1101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7052(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1099 *, KeyValuePair_2_t1_1101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7052_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7054_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2_t1_1101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7054(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1099 *, KeyValuePair_2_t1_1101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7054_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7056_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2U5BU5D_t1_1412* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1099 *, KeyValuePair_2U5BU5D_t1_1412*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7056_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7058_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2_t1_1101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7058(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1099 *, KeyValuePair_2_t1_1101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7058_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7060_gshared (Dictionary_2_t1_1099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7060(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7060_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7062_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7062(__this, method) (( Object_t * (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7062_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7064_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7064(__this, method) (( Object_t* (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7064_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7066_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7066(__this, method) (( Object_t * (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7068_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7068(__this, method) (( int32_t (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_get_Count_m1_7068_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_7070_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7070(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7070_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7072_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7072(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_7072_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7074_gshared (Dictionary_2_t1_1099 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7074(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1099 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7074_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7076_gshared (Dictionary_2_t1_1099 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7076(__this, ___size, method) (( void (*) (Dictionary_2_t1_1099 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7076_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7078_gshared (Dictionary_2_t1_1099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7078_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1101  Dictionary_2_make_pair_m1_7080_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7080(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1101  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_7080_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_7082_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7082(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_7082_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7084_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2U5BU5D_t1_1412* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7084(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1099 *, KeyValuePair_2U5BU5D_t1_1412*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7084_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_7086_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7086(__this, method) (( void (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_Resize_m1_7086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7088_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7088(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_7088_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_7090_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7090(__this, method) (( void (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_Clear_m1_7090_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7092_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7092(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7092_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7094_gshared (Dictionary_2_t1_1099 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7094(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1099 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_7094_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7096_gshared (Dictionary_2_t1_1099 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7096(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1099 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7096_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7098_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7098(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7098_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7100_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7100(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7100_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7102_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7102(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7102_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1103 * Dictionary_2_get_Values_m1_7104_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7104(__this, method) (( ValueCollection_t1_1103 * (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_get_Values_m1_7104_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7106_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7106(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7106_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_7108_gshared (Dictionary_2_t1_1099 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7108(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7108_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7110_gshared (Dictionary_2_t1_1099 * __this, KeyValuePair_2_t1_1101  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7110(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1099 *, KeyValuePair_2_t1_1101 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7110_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1105  Dictionary_2_GetEnumerator_m1_7112_gshared (Dictionary_2_t1_1099 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7112(__this, method) (( Enumerator_t1_1105  (*) (Dictionary_2_t1_1099 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7112_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7114_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7114(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7114_gshared)(__this /* static, unused */, ___key, ___value, method)
