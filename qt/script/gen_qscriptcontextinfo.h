#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTCONTEXTINFO_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTCONTEXTINFO_H

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
class QScriptContextInfo;
#else
typedef struct QScriptContext QScriptContext;
typedef struct QScriptContextInfo QScriptContextInfo;
#endif

QScriptContextInfo* QScriptContextInfo_new(QScriptContext* context);
QScriptContextInfo* QScriptContextInfo_new2(QScriptContextInfo* other);
QScriptContextInfo* QScriptContextInfo_new3();
void QScriptContextInfo_operatorAssign(QScriptContextInfo* self, QScriptContextInfo* other);
bool QScriptContextInfo_isNull(const QScriptContextInfo* self);
long long QScriptContextInfo_scriptId(const QScriptContextInfo* self);
struct miqt_string QScriptContextInfo_fileName(const QScriptContextInfo* self);
int QScriptContextInfo_lineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_columnNumber(const QScriptContextInfo* self);
struct miqt_string QScriptContextInfo_functionName(const QScriptContextInfo* self);
int QScriptContextInfo_functionType(const QScriptContextInfo* self);
struct miqt_array /* of struct miqt_string */  QScriptContextInfo_functionParameterNames(const QScriptContextInfo* self);
int QScriptContextInfo_functionStartLineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_functionEndLineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_functionMetaIndex(const QScriptContextInfo* self);
bool QScriptContextInfo_operatorEqual(const QScriptContextInfo* self, QScriptContextInfo* other);
bool QScriptContextInfo_operatorNotEqual(const QScriptContextInfo* self, QScriptContextInfo* other);

void QScriptContextInfo_delete(QScriptContextInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
