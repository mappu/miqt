#pragma once
#ifndef MIQT_QT6_GEN_QDIRITERATOR_H
#define MIQT_QT6_GEN_QDIRITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDir;
class QDirIterator;
class QFileInfo;
#else
typedef struct QDir QDir;
typedef struct QDirIterator QDirIterator;
typedef struct QFileInfo QFileInfo;
#endif

QDirIterator* QDirIterator_new(QDir* dir);
QDirIterator* QDirIterator_new2(struct miqt_string path);
QDirIterator* QDirIterator_new3(struct miqt_string path, int filter);
QDirIterator* QDirIterator_new4(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters);
QDirIterator* QDirIterator_new5(QDir* dir, int flags);
QDirIterator* QDirIterator_new6(struct miqt_string path, int flags);
QDirIterator* QDirIterator_new7(struct miqt_string path, int filter, int flags);
QDirIterator* QDirIterator_new8(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters, int filters);
QDirIterator* QDirIterator_new9(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int flags);
struct miqt_string QDirIterator_next(QDirIterator* self);
QFileInfo* QDirIterator_nextFileInfo(QDirIterator* self);
bool QDirIterator_hasNext(const QDirIterator* self);
struct miqt_string QDirIterator_fileName(const QDirIterator* self);
struct miqt_string QDirIterator_filePath(const QDirIterator* self);
QFileInfo* QDirIterator_fileInfo(const QDirIterator* self);
struct miqt_string QDirIterator_path(const QDirIterator* self);

void QDirIterator_delete(QDirIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
