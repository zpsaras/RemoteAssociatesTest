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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_986;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1405;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1406;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1_1014;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6195_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6195(__this, method) (( void (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2__ctor_m1_6195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6196_gshared (Dictionary_2_t1_1010 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6196(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6196_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6197_gshared (Dictionary_2_t1_1010 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6197(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1010 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6197_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6198_gshared (Dictionary_2_t1_1010 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6198(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1010 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_6198_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6199_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6199(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6199_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6200_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6200(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6200_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6201_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6201(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6201_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6202_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6202(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6203_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6203(__this, ___key, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6203_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6204_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6204(__this, method) (( bool (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6204_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6205_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6205(__this, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6206_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6206(__this, method) (( bool (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6206_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6207_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2_t1_1012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6207(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1010 *, KeyValuePair_2_t1_1012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6207_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6208_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2_t1_1012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6208(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1010 *, KeyValuePair_2_t1_1012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6208_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6209_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2U5BU5D_t1_1405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6209(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1010 *, KeyValuePair_2U5BU5D_t1_1405*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6209_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6210_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2_t1_1012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6210(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1010 *, KeyValuePair_2_t1_1012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6210_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6211_gshared (Dictionary_2_t1_1010 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6211(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1010 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6211_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6212_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6212(__this, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6212_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6213_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6213(__this, method) (( Object_t* (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6213_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6214_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6214(__this, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6214_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6215_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6215(__this, method) (( int32_t (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_get_Count_m1_6215_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_6216_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6216(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6216_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6217_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6217(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_6217_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6218_gshared (Dictionary_2_t1_1010 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6218(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1010 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6218_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6219_gshared (Dictionary_2_t1_1010 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6219(__this, ___size, method) (( void (*) (Dictionary_2_t1_1010 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6219_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6220_gshared (Dictionary_2_t1_1010 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6220(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1010 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6220_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1012  Dictionary_2_make_pair_m1_6221_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6221(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1012  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_6221_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_6222_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6222(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_6222_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6223_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2U5BU5D_t1_1405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6223(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1010 *, KeyValuePair_2U5BU5D_t1_1405*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6223_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_6224_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6224(__this, method) (( void (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_Resize_m1_6224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6225_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6225(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_6225_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_6226_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6226(__this, method) (( void (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_Clear_m1_6226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6227_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6227(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6227_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6228_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6228(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_6228_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6229_gshared (Dictionary_2_t1_1010 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6229(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1010 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6229_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6230_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6230(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6230_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6231_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6231(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6231_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6232_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6232(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1010 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_6232_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1_1014 * Dictionary_2_get_Values_m1_6233_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6233(__this, method) (( ValueCollection_t1_1014 * (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_get_Values_m1_6233_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6234_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6234(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6234_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_6235_gshared (Dictionary_2_t1_1010 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6235(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1010 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6235_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6236_gshared (Dictionary_2_t1_1010 * __this, KeyValuePair_2_t1_1012  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6236(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1010 *, KeyValuePair_2_t1_1012 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6236_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1016  Dictionary_2_GetEnumerator_m1_6237_gshared (Dictionary_2_t1_1010 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6237(__this, method) (( Enumerator_t1_1016  (*) (Dictionary_2_t1_1010 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6237_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6238_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6238(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6238_gshared)(__this /* static, unused */, ___key, ___value, method)
