#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTENGINE_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QDateTime;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRegExp;
class QScriptClass;
class QScriptContext;
class QScriptEngine;
class QScriptEngineAgent;
class QScriptProgram;
class QScriptString;
class QScriptSyntaxCheckResult;
class QScriptValue;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QScriptClass QScriptClass;
typedef struct QScriptContext QScriptContext;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptEngineAgent QScriptEngineAgent;
typedef struct QScriptProgram QScriptProgram;
typedef struct QScriptString QScriptString;
typedef struct QScriptSyntaxCheckResult QScriptSyntaxCheckResult;
typedef struct QScriptValue QScriptValue;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QScriptSyntaxCheckResult* QScriptSyntaxCheckResult_new(QScriptSyntaxCheckResult* other);
int QScriptSyntaxCheckResult_State(const QScriptSyntaxCheckResult* self);
int QScriptSyntaxCheckResult_ErrorLineNumber(const QScriptSyntaxCheckResult* self);
int QScriptSyntaxCheckResult_ErrorColumnNumber(const QScriptSyntaxCheckResult* self);
struct miqt_string QScriptSyntaxCheckResult_ErrorMessage(const QScriptSyntaxCheckResult* self);
void QScriptSyntaxCheckResult_OperatorAssign(QScriptSyntaxCheckResult* self, QScriptSyntaxCheckResult* other);
void QScriptSyntaxCheckResult_Delete(QScriptSyntaxCheckResult* self);

QScriptEngine* QScriptEngine_new();
QScriptEngine* QScriptEngine_new2(QObject* parent);
void QScriptEngine_virtbase(QScriptEngine* src, QObject** outptr_QObject);
QMetaObject* QScriptEngine_MetaObject(const QScriptEngine* self);
void* QScriptEngine_Metacast(QScriptEngine* self, const char* param1);
struct miqt_string QScriptEngine_Tr(const char* s);
struct miqt_string QScriptEngine_TrUtf8(const char* s);
QScriptValue* QScriptEngine_GlobalObject(const QScriptEngine* self);
void QScriptEngine_SetGlobalObject(QScriptEngine* self, QScriptValue* object);
QScriptContext* QScriptEngine_CurrentContext(const QScriptEngine* self);
QScriptContext* QScriptEngine_PushContext(QScriptEngine* self);
void QScriptEngine_PopContext(QScriptEngine* self);
bool QScriptEngine_CanEvaluate(const QScriptEngine* self, struct miqt_string program);
QScriptSyntaxCheckResult* QScriptEngine_CheckSyntax(struct miqt_string program);
QScriptValue* QScriptEngine_Evaluate(QScriptEngine* self, struct miqt_string program);
QScriptValue* QScriptEngine_EvaluateWithProgram(QScriptEngine* self, QScriptProgram* program);
bool QScriptEngine_IsEvaluating(const QScriptEngine* self);
void QScriptEngine_AbortEvaluation(QScriptEngine* self);
bool QScriptEngine_HasUncaughtException(const QScriptEngine* self);
QScriptValue* QScriptEngine_UncaughtException(const QScriptEngine* self);
int QScriptEngine_UncaughtExceptionLineNumber(const QScriptEngine* self);
struct miqt_array /* of struct miqt_string */  QScriptEngine_UncaughtExceptionBacktrace(const QScriptEngine* self);
void QScriptEngine_ClearExceptions(QScriptEngine* self);
QScriptValue* QScriptEngine_NullValue(QScriptEngine* self);
QScriptValue* QScriptEngine_UndefinedValue(QScriptEngine* self);
QScriptValue* QScriptEngine_NewVariant(QScriptEngine* self, QVariant* value);
QScriptValue* QScriptEngine_NewVariant2(QScriptEngine* self, QScriptValue* object, QVariant* value);
QScriptValue* QScriptEngine_NewRegExp(QScriptEngine* self, QRegExp* regexp);
QScriptValue* QScriptEngine_NewObject(QScriptEngine* self);
QScriptValue* QScriptEngine_NewObjectWithScriptClass(QScriptEngine* self, QScriptClass* scriptClass);
QScriptValue* QScriptEngine_NewArray(QScriptEngine* self);
QScriptValue* QScriptEngine_NewRegExp2(QScriptEngine* self, struct miqt_string pattern, struct miqt_string flags);
QScriptValue* QScriptEngine_NewDate(QScriptEngine* self, double value);
QScriptValue* QScriptEngine_NewDateWithValue(QScriptEngine* self, QDateTime* value);
QScriptValue* QScriptEngine_NewActivationObject(QScriptEngine* self);
QScriptValue* QScriptEngine_NewQObject(QScriptEngine* self, QObject* object);
QScriptValue* QScriptEngine_NewQObject2(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject);
QScriptValue* QScriptEngine_NewQMetaObject(QScriptEngine* self, QMetaObject* metaObject);
QScriptValue* QScriptEngine_DefaultPrototype(const QScriptEngine* self, int metaTypeId);
void QScriptEngine_SetDefaultPrototype(QScriptEngine* self, int metaTypeId, QScriptValue* prototype);
void QScriptEngine_InstallTranslatorFunctions(QScriptEngine* self);
QScriptValue* QScriptEngine_ImportExtension(QScriptEngine* self, struct miqt_string extension);
struct miqt_array /* of struct miqt_string */  QScriptEngine_AvailableExtensions(const QScriptEngine* self);
struct miqt_array /* of struct miqt_string */  QScriptEngine_ImportedExtensions(const QScriptEngine* self);
void QScriptEngine_CollectGarbage(QScriptEngine* self);
void QScriptEngine_ReportAdditionalMemoryCost(QScriptEngine* self, int size);
void QScriptEngine_SetProcessEventsInterval(QScriptEngine* self, int interval);
int QScriptEngine_ProcessEventsInterval(const QScriptEngine* self);
void QScriptEngine_SetAgent(QScriptEngine* self, QScriptEngineAgent* agent);
QScriptEngineAgent* QScriptEngine_Agent(const QScriptEngine* self);
QScriptString* QScriptEngine_ToStringHandle(QScriptEngine* self, struct miqt_string str);
QScriptValue* QScriptEngine_ToObject(QScriptEngine* self, QScriptValue* value);
QScriptValue* QScriptEngine_ObjectById(const QScriptEngine* self, long long id);
void QScriptEngine_SignalHandlerException(QScriptEngine* self, QScriptValue* exception);
void QScriptEngine_connect_SignalHandlerException(QScriptEngine* self, intptr_t slot);
struct miqt_string QScriptEngine_Tr2(const char* s, const char* c);
struct miqt_string QScriptEngine_Tr3(const char* s, const char* c, int n);
struct miqt_string QScriptEngine_TrUtf82(const char* s, const char* c);
struct miqt_string QScriptEngine_TrUtf83(const char* s, const char* c, int n);
QScriptValue* QScriptEngine_Evaluate2(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName);
QScriptValue* QScriptEngine_Evaluate3(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber);
void QScriptEngine_AbortEvaluation1(QScriptEngine* self, QScriptValue* result);
QScriptValue* QScriptEngine_NewObject2(QScriptEngine* self, QScriptClass* scriptClass, QScriptValue* data);
QScriptValue* QScriptEngine_NewArray1(QScriptEngine* self, unsigned int length);
QScriptValue* QScriptEngine_NewQObject22(QScriptEngine* self, QObject* object, int ownership);
QScriptValue* QScriptEngine_NewQObject3(QScriptEngine* self, QObject* object, int ownership, int* options);
QScriptValue* QScriptEngine_NewQObject32(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership);
QScriptValue* QScriptEngine_NewQObject4(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership, int* options);
QScriptValue* QScriptEngine_NewQMetaObject2(QScriptEngine* self, QMetaObject* metaObject, QScriptValue* ctor);
void QScriptEngine_InstallTranslatorFunctions1(QScriptEngine* self, QScriptValue* object);
bool QScriptEngine_override_virtual_Event(void* self, intptr_t slot);
bool QScriptEngine_virtualbase_Event(void* self, QEvent* event);
bool QScriptEngine_override_virtual_EventFilter(void* self, intptr_t slot);
bool QScriptEngine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QScriptEngine_override_virtual_TimerEvent(void* self, intptr_t slot);
void QScriptEngine_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QScriptEngine_override_virtual_ChildEvent(void* self, intptr_t slot);
void QScriptEngine_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QScriptEngine_override_virtual_CustomEvent(void* self, intptr_t slot);
void QScriptEngine_virtualbase_CustomEvent(void* self, QEvent* event);
bool QScriptEngine_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QScriptEngine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QScriptEngine_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QScriptEngine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QScriptEngine_Delete(QScriptEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
