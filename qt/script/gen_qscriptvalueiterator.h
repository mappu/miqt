#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTVALUEITERATOR_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTVALUEITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptString;
class QScriptValue;
class QScriptValueIterator;
#else
typedef struct QScriptString QScriptString;
typedef struct QScriptValue QScriptValue;
typedef struct QScriptValueIterator QScriptValueIterator;
#endif

void QScriptValueIterator_new(QScriptValue* value, QScriptValueIterator** outptr_QScriptValueIterator);
bool QScriptValueIterator_HasNext(const QScriptValueIterator* self);
void QScriptValueIterator_Next(QScriptValueIterator* self);
bool QScriptValueIterator_HasPrevious(const QScriptValueIterator* self);
void QScriptValueIterator_Previous(QScriptValueIterator* self);
struct miqt_string QScriptValueIterator_Name(const QScriptValueIterator* self);
QScriptString* QScriptValueIterator_ScriptName(const QScriptValueIterator* self);
QScriptValue* QScriptValueIterator_Value(const QScriptValueIterator* self);
void QScriptValueIterator_SetValue(QScriptValueIterator* self, QScriptValue* value);
int QScriptValueIterator_Flags(const QScriptValueIterator* self);
void QScriptValueIterator_Remove(QScriptValueIterator* self);
void QScriptValueIterator_ToFront(QScriptValueIterator* self);
void QScriptValueIterator_ToBack(QScriptValueIterator* self);
void QScriptValueIterator_OperatorAssign(QScriptValueIterator* self, QScriptValue* value);
void QScriptValueIterator_Delete(QScriptValueIterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
