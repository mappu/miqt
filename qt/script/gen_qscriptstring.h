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

void QScriptString_new(QScriptString** outptr_QScriptString);
void QScriptString_new2(QScriptString* other, QScriptString** outptr_QScriptString);
void QScriptString_OperatorAssign(QScriptString* self, QScriptString* other);
bool QScriptString_IsValid(const QScriptString* self);
bool QScriptString_OperatorEqual(const QScriptString* self, QScriptString* other);
bool QScriptString_OperatorNotEqual(const QScriptString* self, QScriptString* other);
unsigned int QScriptString_ToArrayIndex(const QScriptString* self);
struct miqt_string QScriptString_ToString(const QScriptString* self);
unsigned int QScriptString_ToArrayIndex1(const QScriptString* self, bool* ok);
void QScriptString_Delete(QScriptString* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
