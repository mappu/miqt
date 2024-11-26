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

QScriptValue* QScriptClassPropertyIterator_Object(const QScriptClassPropertyIterator* self);
bool QScriptClassPropertyIterator_HasNext(const QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_Next(QScriptClassPropertyIterator* self);
bool QScriptClassPropertyIterator_HasPrevious(const QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_Previous(QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_ToFront(QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_ToBack(QScriptClassPropertyIterator* self);
QScriptString* QScriptClassPropertyIterator_Name(const QScriptClassPropertyIterator* self);
unsigned int QScriptClassPropertyIterator_Id(const QScriptClassPropertyIterator* self);
int QScriptClassPropertyIterator_Flags(const QScriptClassPropertyIterator* self);
void QScriptClassPropertyIterator_Delete(QScriptClassPropertyIterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
