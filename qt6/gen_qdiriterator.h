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

void QDirIterator_new(QDir* dir, QDirIterator** outptr_QDirIterator);
void QDirIterator_new2(struct miqt_string path, QDirIterator** outptr_QDirIterator);
void QDirIterator_new3(struct miqt_string path, int filter, QDirIterator** outptr_QDirIterator);
void QDirIterator_new4(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters, QDirIterator** outptr_QDirIterator);
void QDirIterator_new5(QDir* dir, int flags, QDirIterator** outptr_QDirIterator);
void QDirIterator_new6(struct miqt_string path, int flags, QDirIterator** outptr_QDirIterator);
void QDirIterator_new7(struct miqt_string path, int filter, int flags, QDirIterator** outptr_QDirIterator);
void QDirIterator_new8(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, QDirIterator** outptr_QDirIterator);
void QDirIterator_new9(struct miqt_string path, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int flags, QDirIterator** outptr_QDirIterator);
struct miqt_string QDirIterator_Next(QDirIterator* self);
QFileInfo* QDirIterator_NextFileInfo(QDirIterator* self);
bool QDirIterator_HasNext(const QDirIterator* self);
struct miqt_string QDirIterator_FileName(const QDirIterator* self);
struct miqt_string QDirIterator_FilePath(const QDirIterator* self);
QFileInfo* QDirIterator_FileInfo(const QDirIterator* self);
struct miqt_string QDirIterator_Path(const QDirIterator* self);
void QDirIterator_Delete(QDirIterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
