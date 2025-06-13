#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCICOMMANDSET_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCICOMMANDSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSettings;
class QsciCommand;
class QsciCommandSet;
#else
typedef struct QSettings QSettings;
typedef struct QsciCommand QsciCommand;
typedef struct QsciCommandSet QsciCommandSet;
#endif

bool QsciCommandSet_readSettings(QsciCommandSet* self, QSettings* qs);
bool QsciCommandSet_writeSettings(QsciCommandSet* self, QSettings* qs);
struct miqt_array /* of QsciCommand* */  QsciCommandSet_commands(QsciCommandSet* self);
void QsciCommandSet_clearKeys(QsciCommandSet* self);
void QsciCommandSet_clearAlternateKeys(QsciCommandSet* self);
QsciCommand* QsciCommandSet_boundTo(const QsciCommandSet* self, int key);
QsciCommand* QsciCommandSet_find(const QsciCommandSet* self, int command);
bool QsciCommandSet_readSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);
bool QsciCommandSet_writeSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
