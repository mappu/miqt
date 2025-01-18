#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTABLE_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTABLE_H

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
class QScriptable;
#else
typedef struct QScriptContext QScriptContext;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptValue QScriptValue;
typedef struct QScriptable QScriptable;
#endif

QScriptable* QScriptable_new();
QScriptEngine* QScriptable_Engine(const QScriptable* self);
QScriptContext* QScriptable_Context(const QScriptable* self);
QScriptValue* QScriptable_ThisObject(const QScriptable* self);
int QScriptable_ArgumentCount(const QScriptable* self);
QScriptValue* QScriptable_Argument(const QScriptable* self, int index);
void QScriptable_Delete(QScriptable* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
