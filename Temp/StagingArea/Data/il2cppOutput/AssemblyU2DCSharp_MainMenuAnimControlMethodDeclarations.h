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

// MainMenuAnimControl
struct MainMenuAnimControl_t7_2;
// UnityEngine.Animator
struct Animator_t5_122;
// UnityEngine.GameObject
struct GameObject_t5_84;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"

// System.Void MainMenuAnimControl::.ctor()
extern "C" void MainMenuAnimControl__ctor_m7_6 (MainMenuAnimControl_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMenuAnimControl::OnEnable()
extern "C" void MainMenuAnimControl_OnEnable_m7_7 (MainMenuAnimControl_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMenuAnimControl::OpenPanel(UnityEngine.Animator)
extern "C" void MainMenuAnimControl_OpenPanel_m7_8 (MainMenuAnimControl_t7_2 * __this, Animator_t5_122 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MainMenuAnimControl::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C" GameObject_t5_84 * MainMenuAnimControl_FindFirstEnabledSelectable_m7_9 (Object_t * __this /* static, unused */, GameObject_t5_84 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMenuAnimControl::CloseCurrent()
extern "C" void MainMenuAnimControl_CloseCurrent_m7_10 (MainMenuAnimControl_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainMenuAnimControl::DisablePanelDeleyed(UnityEngine.Animator)
extern "C" Object_t * MainMenuAnimControl_DisablePanelDeleyed_m7_11 (MainMenuAnimControl_t7_2 * __this, Animator_t5_122 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMenuAnimControl::SetSelected(UnityEngine.GameObject)
extern "C" void MainMenuAnimControl_SetSelected_m7_12 (MainMenuAnimControl_t7_2 * __this, GameObject_t5_84 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
