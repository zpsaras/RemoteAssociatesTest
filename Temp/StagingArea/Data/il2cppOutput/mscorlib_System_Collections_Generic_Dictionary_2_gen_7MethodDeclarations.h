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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_984;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_986;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1401;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_1402;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_990;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_5957_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5957(__this, method) (( void (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2__ctor_m1_5957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_5959_gshared (Dictionary_2_t1_984 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5959(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_984 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_5959_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_5960_gshared (Dictionary_2_t1_984 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5960(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_984 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_5960_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_5962_gshared (Dictionary_2_t1_984 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5962(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_984 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_5962_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_5964_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_5964(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_5964_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_5966_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_5966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_5966_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_5968_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_5968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_5968_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_5970_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_5970(__this, ___key, method) (( bool (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_5970_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_5972_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_5972(__this, ___key, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_5972_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_5974_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_5974(__this, method) (( bool (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_5974_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5976_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5976(__this, method) (( Object_t * (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5976_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5978_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5978(__this, method) (( bool (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5980_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2_t1_987  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5980(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_984 *, KeyValuePair_2_t1_987 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5980_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5982_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2_t1_987  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5982(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_984 *, KeyValuePair_2_t1_987 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5982_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5984_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2U5BU5D_t1_1401* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5984(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_984 *, KeyValuePair_2U5BU5D_t1_1401*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5984_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5986_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2_t1_987  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5986(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_984 *, KeyValuePair_2_t1_987 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5986_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_5988_gshared (Dictionary_2_t1_984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_5988(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_984 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_5988_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5990_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5990(__this, method) (( Object_t * (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5990_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5992_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5992(__this, method) (( Object_t* (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5992_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5994_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5994(__this, method) (( Object_t * (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_5996_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_5996(__this, method) (( int32_t (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_get_Count_m1_5996_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_5998_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_5998(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_5998_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6000_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6000(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_6000_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6002_gshared (Dictionary_2_t1_984 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6002(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_984 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6002_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6004_gshared (Dictionary_2_t1_984 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6004(__this, ___size, method) (( void (*) (Dictionary_2_t1_984 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6004_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6006_gshared (Dictionary_2_t1_984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6006(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_984 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6006_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_987  Dictionary_2_make_pair_m1_6008_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6008(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_987  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_6008_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_6010_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6010(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_6010_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6012_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2U5BU5D_t1_1401* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_984 *, KeyValuePair_2U5BU5D_t1_1401*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6012_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_6014_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6014(__this, method) (( void (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_Resize_m1_6014_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6016_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_6016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_6018_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6018(__this, method) (( void (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_Clear_m1_6018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6020_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6020(__this, ___key, method) (( bool (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6020_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6022_gshared (Dictionary_2_t1_984 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6022(__this, ___value, method) (( bool (*) (Dictionary_2_t1_984 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_6022_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6024_gshared (Dictionary_2_t1_984 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6024(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_984 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6024_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6026_gshared (Dictionary_2_t1_984 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6026(__this, ___sender, method) (( void (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6026_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6028_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6028(__this, ___key, method) (( bool (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6028_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6030_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6030(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_984 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6030_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1_990 * Dictionary_2_get_Values_m1_6032_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6032(__this, method) (( ValueCollection_t1_990 * (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_get_Values_m1_6032_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6034_gshared (Dictionary_2_t1_984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6034(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6034_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_6036_gshared (Dictionary_2_t1_984 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6036(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_984 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6036_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6038_gshared (Dictionary_2_t1_984 * __this, KeyValuePair_2_t1_987  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6038(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_984 *, KeyValuePair_2_t1_987 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6038_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_992  Dictionary_2_GetEnumerator_m1_6040_gshared (Dictionary_2_t1_984 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6040(__this, method) (( Enumerator_t1_992  (*) (Dictionary_2_t1_984 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6040_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6042_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6042(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6042_gshared)(__this /* static, unused */, ___key, ___value, method)
