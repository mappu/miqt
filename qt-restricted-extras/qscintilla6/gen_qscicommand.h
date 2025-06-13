#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCICOMMAND_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCICOMMAND_H

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

int QsciCommand_command(const QsciCommand* self);
void QsciCommand_execute(QsciCommand* self);
void QsciCommand_setKey(QsciCommand* self, int key);
void QsciCommand_setAlternateKey(QsciCommand* self, int altkey);
int QsciCommand_key(const QsciCommand* self);
int QsciCommand_alternateKey(const QsciCommand* self);
bool QsciCommand_validKey(int key);
struct miqt_string QsciCommand_description(const QsciCommand* self);

void QsciCommand_delete(QsciCommand* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
