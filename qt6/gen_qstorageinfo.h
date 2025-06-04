#pragma once
#ifndef MIQT_QT6_GEN_QSTORAGEINFO_H
#define MIQT_QT6_GEN_QSTORAGEINFO_H

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
class QStorageInfo;
#else
typedef struct QDir QDir;
typedef struct QStorageInfo QStorageInfo;
#endif

QStorageInfo* QStorageInfo_new();
QStorageInfo* QStorageInfo_new2(struct miqt_string path);
QStorageInfo* QStorageInfo_new3(QDir* dir);
QStorageInfo* QStorageInfo_new4(QStorageInfo* other);
void QStorageInfo_operatorAssign(QStorageInfo* self, QStorageInfo* other);
void QStorageInfo_swap(QStorageInfo* self, QStorageInfo* other);
void QStorageInfo_setPath(QStorageInfo* self, struct miqt_string path);
struct miqt_string QStorageInfo_rootPath(const QStorageInfo* self);
struct miqt_string QStorageInfo_device(const QStorageInfo* self);
struct miqt_string QStorageInfo_subvolume(const QStorageInfo* self);
struct miqt_string QStorageInfo_fileSystemType(const QStorageInfo* self);
struct miqt_string QStorageInfo_name(const QStorageInfo* self);
struct miqt_string QStorageInfo_displayName(const QStorageInfo* self);
long long QStorageInfo_bytesTotal(const QStorageInfo* self);
long long QStorageInfo_bytesFree(const QStorageInfo* self);
long long QStorageInfo_bytesAvailable(const QStorageInfo* self);
int QStorageInfo_blockSize(const QStorageInfo* self);
bool QStorageInfo_isRoot(const QStorageInfo* self);
bool QStorageInfo_isReadOnly(const QStorageInfo* self);
bool QStorageInfo_isReady(const QStorageInfo* self);
bool QStorageInfo_isValid(const QStorageInfo* self);
void QStorageInfo_refresh(QStorageInfo* self);
struct miqt_array /* of QStorageInfo* */  QStorageInfo_mountedVolumes();
QStorageInfo* QStorageInfo_root();

void QStorageInfo_delete(QStorageInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
