#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTPROGRAM_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTPROGRAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptProgram;
#else
typedef struct QScriptProgram QScriptProgram;
#endif

void QScriptProgram_new(QScriptProgram** outptr_QScriptProgram);
void QScriptProgram_new2(struct miqt_string sourceCode, QScriptProgram** outptr_QScriptProgram);
void QScriptProgram_new3(QScriptProgram* other, QScriptProgram** outptr_QScriptProgram);
void QScriptProgram_new4(struct miqt_string sourceCode, struct miqt_string fileName, QScriptProgram** outptr_QScriptProgram);
void QScriptProgram_new5(struct miqt_string sourceCode, struct miqt_string fileName, int firstLineNumber, QScriptProgram** outptr_QScriptProgram);
void QScriptProgram_OperatorAssign(QScriptProgram* self, QScriptProgram* other);
bool QScriptProgram_IsNull(const QScriptProgram* self);
struct miqt_string QScriptProgram_SourceCode(const QScriptProgram* self);
struct miqt_string QScriptProgram_FileName(const QScriptProgram* self);
int QScriptProgram_FirstLineNumber(const QScriptProgram* self);
bool QScriptProgram_OperatorEqual(const QScriptProgram* self, QScriptProgram* other);
bool QScriptProgram_OperatorNotEqual(const QScriptProgram* self, QScriptProgram* other);
void QScriptProgram_Delete(QScriptProgram* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
