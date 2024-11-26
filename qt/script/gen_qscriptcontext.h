#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTCONTEXT_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTCONTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptContext;
class QScriptEngine;
class QScriptValue;
#else
typedef struct QScriptContext QScriptContext;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptValue QScriptValue;
#endif

QScriptContext* QScriptContext_ParentContext(const QScriptContext* self);
QScriptEngine* QScriptContext_Engine(const QScriptContext* self);
int QScriptContext_State(const QScriptContext* self);
QScriptValue* QScriptContext_Callee(const QScriptContext* self);
int QScriptContext_ArgumentCount(const QScriptContext* self);
QScriptValue* QScriptContext_Argument(const QScriptContext* self, int index);
QScriptValue* QScriptContext_ArgumentsObject(const QScriptContext* self);
struct miqt_array /* of QScriptValue* */  QScriptContext_ScopeChain(const QScriptContext* self);
void QScriptContext_PushScope(QScriptContext* self, QScriptValue* object);
QScriptValue* QScriptContext_PopScope(QScriptContext* self);
QScriptValue* QScriptContext_ReturnValue(const QScriptContext* self);
void QScriptContext_SetReturnValue(QScriptContext* self, QScriptValue* result);
QScriptValue* QScriptContext_ActivationObject(const QScriptContext* self);
void QScriptContext_SetActivationObject(QScriptContext* self, QScriptValue* activation);
QScriptValue* QScriptContext_ThisObject(const QScriptContext* self);
void QScriptContext_SetThisObject(QScriptContext* self, QScriptValue* thisObject);
bool QScriptContext_IsCalledAsConstructor(const QScriptContext* self);
QScriptValue* QScriptContext_ThrowValue(QScriptContext* self, QScriptValue* value);
QScriptValue* QScriptContext_ThrowError(QScriptContext* self, int error, struct miqt_string text);
QScriptValue* QScriptContext_ThrowErrorWithText(QScriptContext* self, struct miqt_string text);
struct miqt_array /* of struct miqt_string */  QScriptContext_Backtrace(const QScriptContext* self);
struct miqt_string QScriptContext_ToString(const QScriptContext* self);
void QScriptContext_Delete(QScriptContext* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
