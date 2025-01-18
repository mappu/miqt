#pragma once
#ifndef MIQT_QT_GEN_QTEMPORARYDIR_H
#define MIQT_QT_GEN_QTEMPORARYDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTemporaryDir;
#else
typedef struct QTemporaryDir QTemporaryDir;
#endif

QTemporaryDir* QTemporaryDir_new();
QTemporaryDir* QTemporaryDir_new2(struct miqt_string templateName);
bool QTemporaryDir_IsValid(const QTemporaryDir* self);
struct miqt_string QTemporaryDir_ErrorString(const QTemporaryDir* self);
bool QTemporaryDir_AutoRemove(const QTemporaryDir* self);
void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b);
bool QTemporaryDir_Remove(QTemporaryDir* self);
struct miqt_string QTemporaryDir_Path(const QTemporaryDir* self);
struct miqt_string QTemporaryDir_FilePath(const QTemporaryDir* self, struct miqt_string fileName);
void QTemporaryDir_Delete(QTemporaryDir* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
