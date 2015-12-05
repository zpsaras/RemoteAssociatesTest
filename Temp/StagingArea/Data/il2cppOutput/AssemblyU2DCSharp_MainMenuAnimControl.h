#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t5_122;
// UnityEngine.GameObject
struct GameObject_t5_84;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MainMenuAnimControl
struct  MainMenuAnimControl_t7_2  : public MonoBehaviour_t5_78
{
	// UnityEngine.Animator MainMenuAnimControl::initiallyOpen
	Animator_t5_122 * ___initiallyOpen_4;
	// UnityEngine.Animator MainMenuAnimControl::m_Open
	Animator_t5_122 * ___m_Open_5;
	// System.Int32 MainMenuAnimControl::m_OpenParameterId
	int32_t ___m_OpenParameterId_6;
	// UnityEngine.GameObject MainMenuAnimControl::m_PreviouslySelected
	GameObject_t5_84 * ___m_PreviouslySelected_7;
};
