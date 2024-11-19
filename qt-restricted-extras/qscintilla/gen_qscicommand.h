#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCICOMMAND_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCICOMMAND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QsciCommand;
#else
typedef struct QsciCommand QsciCommand;
#endif

int QsciCommand_Command(const QsciCommand* self);
void QsciCommand_Execute(QsciCommand* self);
void QsciCommand_SetKey(QsciCommand* self, int key);
void QsciCommand_SetAlternateKey(QsciCommand* self, int altkey);
int QsciCommand_Key(const QsciCommand* self);
int QsciCommand_AlternateKey(const QsciCommand* self);
bool QsciCommand_ValidKey(int key);
struct miqt_string QsciCommand_Description(const QsciCommand* self);
void QsciCommand_Delete(QsciCommand* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
