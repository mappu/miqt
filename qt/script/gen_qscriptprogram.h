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

QScriptProgram* QScriptProgram_new();
QScriptProgram* QScriptProgram_new2(struct miqt_string sourceCode);
QScriptProgram* QScriptProgram_new3(QScriptProgram* other);
QScriptProgram* QScriptProgram_new4(struct miqt_string sourceCode, struct miqt_string fileName);
QScriptProgram* QScriptProgram_new5(struct miqt_string sourceCode, struct miqt_string fileName, int firstLineNumber);
void QScriptProgram_operatorAssign(QScriptProgram* self, QScriptProgram* other);
bool QScriptProgram_isNull(const QScriptProgram* self);
struct miqt_string QScriptProgram_sourceCode(const QScriptProgram* self);
struct miqt_string QScriptProgram_fileName(const QScriptProgram* self);
int QScriptProgram_firstLineNumber(const QScriptProgram* self);
bool QScriptProgram_operatorEqual(const QScriptProgram* self, QScriptProgram* other);
bool QScriptProgram_operatorNotEqual(const QScriptProgram* self, QScriptProgram* other);
void QScriptProgram_delete(QScriptProgram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
