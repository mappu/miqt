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

QScriptContext* QScriptContext_parentContext(const QScriptContext* self);
QScriptEngine* QScriptContext_engine(const QScriptContext* self);
int QScriptContext_state(const QScriptContext* self);
QScriptValue* QScriptContext_callee(const QScriptContext* self);
int QScriptContext_argumentCount(const QScriptContext* self);
QScriptValue* QScriptContext_argument(const QScriptContext* self, int index);
QScriptValue* QScriptContext_argumentsObject(const QScriptContext* self);
struct miqt_array /* of QScriptValue* */  QScriptContext_scopeChain(const QScriptContext* self);
void QScriptContext_pushScope(QScriptContext* self, QScriptValue* object);
QScriptValue* QScriptContext_popScope(QScriptContext* self);
QScriptValue* QScriptContext_returnValue(const QScriptContext* self);
void QScriptContext_setReturnValue(QScriptContext* self, QScriptValue* result);
QScriptValue* QScriptContext_activationObject(const QScriptContext* self);
void QScriptContext_setActivationObject(QScriptContext* self, QScriptValue* activation);
QScriptValue* QScriptContext_thisObject(const QScriptContext* self);
void QScriptContext_setThisObject(QScriptContext* self, QScriptValue* thisObject);
bool QScriptContext_isCalledAsConstructor(const QScriptContext* self);
QScriptValue* QScriptContext_throwValue(QScriptContext* self, QScriptValue* value);
QScriptValue* QScriptContext_throwError(QScriptContext* self, int error, struct miqt_string text);
QScriptValue* QScriptContext_throwErrorWithText(QScriptContext* self, struct miqt_string text);
struct miqt_array /* of struct miqt_string */  QScriptContext_backtrace(const QScriptContext* self);
struct miqt_string QScriptContext_toString(const QScriptContext* self);
void QScriptContext_delete(QScriptContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
