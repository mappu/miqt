#ifndef GEN_QSCICOMMANDSET_H
#define GEN_QSCICOMMANDSET_H

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

bool QsciCommandSet_ReadSettings(QsciCommandSet* self, QSettings* qs);
bool QsciCommandSet_WriteSettings(QsciCommandSet* self, QSettings* qs);
struct miqt_array* QsciCommandSet_Commands(QsciCommandSet* self);
void QsciCommandSet_ClearKeys(QsciCommandSet* self);
void QsciCommandSet_ClearAlternateKeys(QsciCommandSet* self);
QsciCommand* QsciCommandSet_BoundTo(const QsciCommandSet* self, int key);
QsciCommand* QsciCommandSet_Find(const QsciCommandSet* self, int command);
bool QsciCommandSet_ReadSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);
bool QsciCommandSet_WriteSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
