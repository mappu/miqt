#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTENGINEAGENT_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTENGINEAGENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptEngine;
class QScriptEngineAgent;
class QScriptValue;
class QVariant;
#else
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptEngineAgent QScriptEngineAgent;
typedef struct QScriptValue QScriptValue;
typedef struct QVariant QVariant;
#endif

QScriptEngineAgent* QScriptEngineAgent_new(QScriptEngine* engine);
void QScriptEngineAgent_ScriptLoad(QScriptEngineAgent* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber);
void QScriptEngineAgent_ScriptUnload(QScriptEngineAgent* self, long long id);
void QScriptEngineAgent_ContextPush(QScriptEngineAgent* self);
void QScriptEngineAgent_ContextPop(QScriptEngineAgent* self);
void QScriptEngineAgent_FunctionEntry(QScriptEngineAgent* self, long long scriptId);
void QScriptEngineAgent_FunctionExit(QScriptEngineAgent* self, long long scriptId, QScriptValue* returnValue);
void QScriptEngineAgent_PositionChange(QScriptEngineAgent* self, long long scriptId, int lineNumber, int columnNumber);
void QScriptEngineAgent_ExceptionThrow(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception, bool hasHandler);
void QScriptEngineAgent_ExceptionCatch(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception);
bool QScriptEngineAgent_SupportsExtension(const QScriptEngineAgent* self, int extension);
QVariant* QScriptEngineAgent_Extension(QScriptEngineAgent* self, int extension, QVariant* argument);
QScriptEngine* QScriptEngineAgent_Engine(const QScriptEngineAgent* self);
void QScriptEngineAgent_override_virtual_ScriptLoad(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ScriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber);
void QScriptEngineAgent_override_virtual_ScriptUnload(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ScriptUnload(void* self, long long id);
void QScriptEngineAgent_override_virtual_ContextPush(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ContextPush(void* self);
void QScriptEngineAgent_override_virtual_ContextPop(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ContextPop(void* self);
void QScriptEngineAgent_override_virtual_FunctionEntry(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_FunctionEntry(void* self, long long scriptId);
void QScriptEngineAgent_override_virtual_FunctionExit(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_FunctionExit(void* self, long long scriptId, QScriptValue* returnValue);
void QScriptEngineAgent_override_virtual_PositionChange(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_PositionChange(void* self, long long scriptId, int lineNumber, int columnNumber);
void QScriptEngineAgent_override_virtual_ExceptionThrow(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ExceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler);
void QScriptEngineAgent_override_virtual_ExceptionCatch(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_ExceptionCatch(void* self, long long scriptId, QScriptValue* exception);
void QScriptEngineAgent_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QScriptEngineAgent_virtualbase_SupportsExtension(const void* self, int extension);
void QScriptEngineAgent_override_virtual_Extension(void* self, intptr_t slot);
QVariant* QScriptEngineAgent_virtualbase_Extension(void* self, int extension, QVariant* argument);
void QScriptEngineAgent_Delete(QScriptEngineAgent* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
