#pragma once
#ifndef MIQT_QT6_GEN_QTEMPORARYDIR_H
#define MIQT_QT6_GEN_QTEMPORARYDIR_H

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
void QTemporaryDir_swap(QTemporaryDir* self, QTemporaryDir* other);
bool QTemporaryDir_isValid(const QTemporaryDir* self);
struct miqt_string QTemporaryDir_errorString(const QTemporaryDir* self);
bool QTemporaryDir_autoRemove(const QTemporaryDir* self);
void QTemporaryDir_setAutoRemove(QTemporaryDir* self, bool b);
bool QTemporaryDir_remove(QTemporaryDir* self);
struct miqt_string QTemporaryDir_path(const QTemporaryDir* self);
struct miqt_string QTemporaryDir_filePath(const QTemporaryDir* self, struct miqt_string fileName);
void QTemporaryDir_delete(QTemporaryDir* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
