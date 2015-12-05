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

// PresentationController
struct PresentationController_t7_6;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PresentationController::.ctor()
extern "C" void PresentationController__ctor_m7_34 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::Awake()
extern "C" void PresentationController_Awake_m7_35 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::Update()
extern "C" void PresentationController_Update_m7_36 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::readText()
extern "C" void PresentationController_readText_m7_37 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::setCurrentDifficulty(System.Int32)
extern "C" void PresentationController_setCurrentDifficulty_m7_38 (PresentationController_t7_6 * __this, int32_t ___diff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PresentationController::getCurrentDifficulty()
extern "C" int32_t PresentationController_getCurrentDifficulty_m7_39 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::setCurrentLine(System.String)
extern "C" void PresentationController_setCurrentLine_m7_40 (PresentationController_t7_6 * __this, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PresentationController::getCurrentLine()
extern "C" String_t* PresentationController_getCurrentLine_m7_41 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::setCurrentAnswer(System.String)
extern "C" void PresentationController_setCurrentAnswer_m7_42 (PresentationController_t7_6 * __this, String_t* ___ans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PresentationController::getCurrentAnswer()
extern "C" String_t* PresentationController_getCurrentAnswer_m7_43 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::setCurrentLineNumber(System.Int32)
extern "C" void PresentationController_setCurrentLineNumber_m7_44 (PresentationController_t7_6 * __this, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PresentationController::getCurrentLineNumber()
extern "C" int32_t PresentationController_getCurrentLineNumber_m7_45 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PresentationController::getNewWords()
extern "C" String_t* PresentationController_getNewWords_m7_46 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::recordToArray(System.Single)
extern "C" void PresentationController_recordToArray_m7_47 (PresentationController_t7_6 * __this, float ___responseTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentationController::logRecordedEntries()
extern "C" void PresentationController_logRecordedEntries_m7_48 (PresentationController_t7_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
