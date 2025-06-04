#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTCLASSPROPERTYITERATOR_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTCLASSPROPERTYITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptClassPropertyIterator;
class QScriptString;
class QScriptValue;
#else
typedef struct QScriptClassPropertyIterator QScriptClassPropertyIterator;
typedef struct QScriptString QScriptString;
typedef struct QScriptValue QScriptValue;
#endif

QScriptValue* QScriptClassPropertyIterator_object(const QScriptClassPropertyIterator* self);
bool QScriptClassPropertyIterator_hasNext(const QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_next(QScriptClassPropertyIterator* self);
bool QScriptClassPropertyIterator_hasPrevious(const QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_previous(QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_toFront(QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_toBack(QScriptClassPropertyIterator* self);
QScriptString* QScriptClassPropertyIterator_name(const QScriptClassPropertyIterator* self);
unsigned int QScriptClassPropertyIterator_id(const QScriptClassPropertyIterator* self);
int QScriptClassPropertyIterator_flags(const QScriptClassPropertyIterator* self);

void QScriptClassPropertyIterator_delete(QScriptClassPropertyIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
