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

QScriptValueIterator* QScriptValueIterator_new(QScriptValue* value);
bool QScriptValueIterator_hasNext(const QScriptValueIterator* self);
void QScriptValueIterator_next(QScriptValueIterator* self);
bool QScriptValueIterator_hasPrevious(const QScriptValueIterator* self);
void QScriptValueIterator_previous(QScriptValueIterator* self);
struct miqt_string QScriptValueIterator_name(const QScriptValueIterator* self);
QScriptString* QScriptValueIterator_scriptName(const QScriptValueIterator* self);
QScriptValue* QScriptValueIterator_value(const QScriptValueIterator* self);
void QScriptValueIterator_setValue(QScriptValueIterator* self, QScriptValue* value);
int QScriptValueIterator_flags(const QScriptValueIterator* self);
void QScriptValueIterator_remove(QScriptValueIterator* self);
void QScriptValueIterator_toFront(QScriptValueIterator* self);
void QScriptValueIterator_toBack(QScriptValueIterator* self);
void QScriptValueIterator_operatorAssign(QScriptValueIterator* self, QScriptValue* value);

void QScriptValueIterator_delete(QScriptValueIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
