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
// PresentationController
struct PresentationController_t7_6;
// UnityEngine.Animator
struct Animator_t5_122;
// UnityEngine.AudioSource
struct AudioSource_t5_112;
// UnityEngine.GameObject
struct GameObject_t5_84;
// UnityEngine.UI.InputField
struct InputField_t6_98;
// UnityEngine.RectTransform
struct RectTransform_t5_54;
// UnityEngine.UI.Image
struct Image_t6_64;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PresentAnimControl
struct  PresentAnimControl_t7_5  : public MonoBehaviour_t5_78
{
	// PresentationController PresentAnimControl::controller
	PresentationController_t7_6 * ___controller_4;
	// System.Single PresentAnimControl::timerStartVal
	float ___timerStartVal_5;
	// System.Single PresentAnimControl::timer
	float ___timer_6;
	// UnityEngine.Animator PresentAnimControl::leftPresent
	Animator_t5_122 * ___leftPresent_7;
	// UnityEngine.Animator PresentAnimControl::centerPresent
	Animator_t5_122 * ___centerPresent_8;
	// UnityEngine.Animator PresentAnimControl::rightPresent
	Animator_t5_122 * ___rightPresent_9;
	// UnityEngine.AudioSource PresentAnimControl::clickSource
	AudioSource_t5_112 * ___clickSource_10;
	// UnityEngine.GameObject PresentAnimControl::TimerBarPanel
	GameObject_t5_84 * ___TimerBarPanel_11;
	// UnityEngine.UI.InputField PresentAnimControl::answerField
	InputField_t6_98 * ___answerField_12;
	// System.Int32 PresentAnimControl::m_InParameterId
	int32_t ___m_InParameterId_13;
	// System.Boolean PresentAnimControl::taskFinished
	bool ___taskFinished_14;
	// UnityEngine.RectTransform PresentAnimControl::trt
	RectTransform_t5_54 * ___trt_15;
	// UnityEngine.UI.Image PresentAnimControl::tbi
	Image_t6_64 * ___tbi_16;
};
