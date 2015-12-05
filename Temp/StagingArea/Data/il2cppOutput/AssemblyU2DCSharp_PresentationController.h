#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t5_58;
// System.String[]
struct StringU5BU5D_t1_198;
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t1_938;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PresentationController
struct  PresentationController_t7_6  : public MonoBehaviour_t5_78
{
	// System.Int32 PresentationController::numberOfPresentations
	int32_t ___numberOfPresentations_2;
	// UnityEngine.TextAsset PresentationController::VeryEasyText
	TextAsset_t5_58 * ___VeryEasyText_3;
	// UnityEngine.TextAsset PresentationController::EasyText
	TextAsset_t5_58 * ___EasyText_4;
	// UnityEngine.TextAsset PresentationController::MediumText
	TextAsset_t5_58 * ___MediumText_5;
	// UnityEngine.TextAsset PresentationController::HardText
	TextAsset_t5_58 * ___HardText_6;
	// System.Int32 PresentationController::veryEasyCount
	int32_t ___veryEasyCount_7;
	// System.Int32 PresentationController::easyCount
	int32_t ___easyCount_8;
	// System.Int32 PresentationController::mediumCount
	int32_t ___mediumCount_9;
	// System.Int32 PresentationController::hardCount
	int32_t ___hardCount_10;
	// System.String[] PresentationController::veryEasyLines
	StringU5BU5D_t1_198* ___veryEasyLines_11;
	// System.String[] PresentationController::easyLines
	StringU5BU5D_t1_198* ___easyLines_12;
	// System.String[] PresentationController::mediumLines
	StringU5BU5D_t1_198* ___mediumLines_13;
	// System.String[] PresentationController::hardLines
	StringU5BU5D_t1_198* ___hardLines_14;
	// System.String[][][] PresentationController::dataArray
	StringU5BU5DU5BU5DU5BU5D_t1_938* ___dataArray_15;
	// System.Int32 PresentationController::currDiff
	int32_t ___currDiff_16;
	// System.Int32 PresentationController::currLineNum
	int32_t ___currLineNum_17;
	// System.String PresentationController::currLine
	String_t* ___currLine_18;
	// System.String PresentationController::currAnswer
	String_t* ___currAnswer_19;
};
