#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTSTRING_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTSTRING_H

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
#else
typedef struct QScriptString QScriptString;
#endif

QScriptString* QScriptString_new();
QScriptString* QScriptString_new2(QScriptString* other);
void QScriptString_operatorAssign(QScriptString* self, QScriptString* other);
bool QScriptString_isValid(const QScriptString* self);
bool QScriptString_operatorEqual(const QScriptString* self, QScriptString* other);
bool QScriptString_operatorNotEqual(const QScriptString* self, QScriptString* other);
unsigned int QScriptString_toArrayIndex(const QScriptString* self);
struct miqt_string QScriptString_toString(const QScriptString* self);
struct miqt_string QScriptString_ToQString(const QScriptString* self);
unsigned int QScriptString_toArrayIndexWithOk(const QScriptString* self, bool* ok);

void QScriptString_delete(QScriptString* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
