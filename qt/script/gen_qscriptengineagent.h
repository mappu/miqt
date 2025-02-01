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
void QScriptEngineAgent_scriptLoad(QScriptEngineAgent* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber);
void QScriptEngineAgent_scriptUnload(QScriptEngineAgent* self, long long id);
void QScriptEngineAgent_contextPush(QScriptEngineAgent* self);
void QScriptEngineAgent_contextPop(QScriptEngineAgent* self);
void QScriptEngineAgent_functionEntry(QScriptEngineAgent* self, long long scriptId);
void QScriptEngineAgent_functionExit(QScriptEngineAgent* self, long long scriptId, QScriptValue* returnValue);
void QScriptEngineAgent_positionChange(QScriptEngineAgent* self, long long scriptId, int lineNumber, int columnNumber);
void QScriptEngineAgent_exceptionThrow(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception, bool hasHandler);
void QScriptEngineAgent_exceptionCatch(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception);
bool QScriptEngineAgent_supportsExtension(const QScriptEngineAgent* self, int extension);
QVariant* QScriptEngineAgent_extension(QScriptEngineAgent* self, int extension, QVariant* argument);
QScriptEngine* QScriptEngineAgent_engine(const QScriptEngineAgent* self);
bool QScriptEngineAgent_override_virtual_scriptLoad(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_scriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber);
bool QScriptEngineAgent_override_virtual_scriptUnload(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_scriptUnload(void* self, long long id);
bool QScriptEngineAgent_override_virtual_contextPush(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_contextPush(void* self);
bool QScriptEngineAgent_override_virtual_contextPop(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_contextPop(void* self);
bool QScriptEngineAgent_override_virtual_functionEntry(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_functionEntry(void* self, long long scriptId);
bool QScriptEngineAgent_override_virtual_functionExit(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_functionExit(void* self, long long scriptId, QScriptValue* returnValue);
bool QScriptEngineAgent_override_virtual_positionChange(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_positionChange(void* self, long long scriptId, int lineNumber, int columnNumber);
bool QScriptEngineAgent_override_virtual_exceptionThrow(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_exceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler);
bool QScriptEngineAgent_override_virtual_exceptionCatch(void* self, intptr_t slot);
void QScriptEngineAgent_virtualbase_exceptionCatch(void* self, long long scriptId, QScriptValue* exception);
bool QScriptEngineAgent_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QScriptEngineAgent_virtualbase_supportsExtension(const void* self, int extension);
bool QScriptEngineAgent_override_virtual_extension(void* self, intptr_t slot);
QVariant* QScriptEngineAgent_virtualbase_extension(void* self, int extension, QVariant* argument);
void QScriptEngineAgent_delete(QScriptEngineAgent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
