#pragma once
#ifndef MIQT_QT_GEN_QFILEINFO_H
#define MIQT_QT_GEN_QFILEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QDir;
class QFile;
class QFileInfo;
#else
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFile QFile;
typedef struct QFileInfo QFileInfo;
#endif

QFileInfo* QFileInfo_new();
QFileInfo* QFileInfo_new2(struct miqt_string file);
QFileInfo* QFileInfo_new3(QFile* file);
QFileInfo* QFileInfo_new4(QDir* dir, struct miqt_string file);
QFileInfo* QFileInfo_new5(QFileInfo* fileinfo);
void QFileInfo_operatorAssign(QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_swap(QFileInfo* self, QFileInfo* other);
bool QFileInfo_operatorEqual(const QFileInfo* self, QFileInfo* fileinfo);
bool QFileInfo_operatorNotEqual(const QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_setFile(QFileInfo* self, struct miqt_string file);
void QFileInfo_setFileWithFile(QFileInfo* self, QFile* file);
void QFileInfo_setFile2(QFileInfo* self, QDir* dir, struct miqt_string file);
bool QFileInfo_exists(const QFileInfo* self);
bool QFileInfo_existsWithFile(struct miqt_string file);
void QFileInfo_refresh(QFileInfo* self);
struct miqt_string QFileInfo_filePath(const QFileInfo* self);
struct miqt_string QFileInfo_absoluteFilePath(const QFileInfo* self);
struct miqt_string QFileInfo_canonicalFilePath(const QFileInfo* self);
struct miqt_string QFileInfo_fileName(const QFileInfo* self);
struct miqt_string QFileInfo_baseName(const QFileInfo* self);
struct miqt_string QFileInfo_completeBaseName(const QFileInfo* self);
struct miqt_string QFileInfo_suffix(const QFileInfo* self);
struct miqt_string QFileInfo_bundleName(const QFileInfo* self);
struct miqt_string QFileInfo_completeSuffix(const QFileInfo* self);
struct miqt_string QFileInfo_path(const QFileInfo* self);
struct miqt_string QFileInfo_absolutePath(const QFileInfo* self);
struct miqt_string QFileInfo_canonicalPath(const QFileInfo* self);
QDir* QFileInfo_dir(const QFileInfo* self);
QDir* QFileInfo_absoluteDir(const QFileInfo* self);
bool QFileInfo_isReadable(const QFileInfo* self);
bool QFileInfo_isWritable(const QFileInfo* self);
bool QFileInfo_isExecutable(const QFileInfo* self);
bool QFileInfo_isHidden(const QFileInfo* self);
bool QFileInfo_isNativePath(const QFileInfo* self);
bool QFileInfo_isRelative(const QFileInfo* self);
bool QFileInfo_isAbsolute(const QFileInfo* self);
bool QFileInfo_makeAbsolute(QFileInfo* self);
bool QFileInfo_isFile(const QFileInfo* self);
bool QFileInfo_isDir(const QFileInfo* self);
bool QFileInfo_isSymLink(const QFileInfo* self);
bool QFileInfo_isSymbolicLink(const QFileInfo* self);
bool QFileInfo_isShortcut(const QFileInfo* self);
bool QFileInfo_isJunction(const QFileInfo* self);
bool QFileInfo_isRoot(const QFileInfo* self);
bool QFileInfo_isBundle(const QFileInfo* self);
struct miqt_string QFileInfo_readLink(const QFileInfo* self);
struct miqt_string QFileInfo_symLinkTarget(const QFileInfo* self);
struct miqt_string QFileInfo_owner(const QFileInfo* self);
unsigned int QFileInfo_ownerId(const QFileInfo* self);
struct miqt_string QFileInfo_group(const QFileInfo* self);
unsigned int QFileInfo_groupId(const QFileInfo* self);
bool QFileInfo_permission(const QFileInfo* self, int permissions);
int QFileInfo_permissions(const QFileInfo* self);
long long QFileInfo_size(const QFileInfo* self);
QDateTime* QFileInfo_created(const QFileInfo* self);
QDateTime* QFileInfo_birthTime(const QFileInfo* self);
QDateTime* QFileInfo_metadataChangeTime(const QFileInfo* self);
QDateTime* QFileInfo_lastModified(const QFileInfo* self);
QDateTime* QFileInfo_lastRead(const QFileInfo* self);
QDateTime* QFileInfo_fileTime(const QFileInfo* self, int time);
bool QFileInfo_caching(const QFileInfo* self);
void QFileInfo_setCaching(QFileInfo* self, bool on);
void QFileInfo_delete(QFileInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
