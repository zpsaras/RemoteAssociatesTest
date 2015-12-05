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

// UnityEngine.Component
struct Component_t5_18;
// UnityEngine.Transform
struct Transform_t5_55;
// UnityEngine.GameObject
struct GameObject_t5_84;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1_886;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m5_559 (Component_t5_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t5_55 * Component_get_transform_m5_560 (Component_t5_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t5_84 * Component_get_gameObject_m5_561 (Component_t5_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t5_18 * Component_GetComponent_m5_562 (Component_t5_18 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t5_18 * Component_GetComponentInChildren_m5_563 (Component_t5_18 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t5_18 * Component_GetComponentInParent_m5_564 (Component_t5_18 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5_565 (Component_t5_18 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m5_566 (Component_t5_18 * __this, Type_t * ___type, List_1_t1_886 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
