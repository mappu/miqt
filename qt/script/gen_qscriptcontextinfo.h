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

void QScriptContextInfo_new(QScriptContext* context, QScriptContextInfo** outptr_QScriptContextInfo);
void QScriptContextInfo_new2(QScriptContextInfo* other, QScriptContextInfo** outptr_QScriptContextInfo);
void QScriptContextInfo_new3(QScriptContextInfo** outptr_QScriptContextInfo);
void QScriptContextInfo_OperatorAssign(QScriptContextInfo* self, QScriptContextInfo* other);
bool QScriptContextInfo_IsNull(const QScriptContextInfo* self);
long long QScriptContextInfo_ScriptId(const QScriptContextInfo* self);
struct miqt_string QScriptContextInfo_FileName(const QScriptContextInfo* self);
int QScriptContextInfo_LineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_ColumnNumber(const QScriptContextInfo* self);
struct miqt_string QScriptContextInfo_FunctionName(const QScriptContextInfo* self);
int QScriptContextInfo_FunctionType(const QScriptContextInfo* self);
struct miqt_array /* of struct miqt_string */  QScriptContextInfo_FunctionParameterNames(const QScriptContextInfo* self);
int QScriptContextInfo_FunctionStartLineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_FunctionEndLineNumber(const QScriptContextInfo* self);
int QScriptContextInfo_FunctionMetaIndex(const QScriptContextInfo* self);
bool QScriptContextInfo_OperatorEqual(const QScriptContextInfo* self, QScriptContextInfo* other);
bool QScriptContextInfo_OperatorNotEqual(const QScriptContextInfo* self, QScriptContextInfo* other);
void QScriptContextInfo_Delete(QScriptContextInfo* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
