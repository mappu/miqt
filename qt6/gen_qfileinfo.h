#pragma once
#ifndef MIQT_QT6_GEN_QFILEINFO_H
#define MIQT_QT6_GEN_QFILEINFO_H

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
class QFileDevice;
class QFileInfo;
#else
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFileDevice QFileDevice;
typedef struct QFileInfo QFileInfo;
#endif

QFileInfo* QFileInfo_new();
QFileInfo* QFileInfo_new2(struct miqt_string file);
QFileInfo* QFileInfo_new3(QFileDevice* file);
QFileInfo* QFileInfo_new4(QDir* dir, struct miqt_string file);
QFileInfo* QFileInfo_new5(QFileInfo* fileinfo);
void QFileInfo_OperatorAssign(QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_Swap(QFileInfo* self, QFileInfo* other);
bool QFileInfo_OperatorEqual(const QFileInfo* self, QFileInfo* fileinfo);
bool QFileInfo_OperatorNotEqual(const QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_SetFile(QFileInfo* self, struct miqt_string file);
void QFileInfo_SetFileWithFile(QFileInfo* self, QFileDevice* file);
void QFileInfo_SetFile2(QFileInfo* self, QDir* dir, struct miqt_string file);
bool QFileInfo_Exists(const QFileInfo* self);
bool QFileInfo_ExistsWithFile(struct miqt_string file);
void QFileInfo_Refresh(QFileInfo* self);
struct miqt_string QFileInfo_FilePath(const QFileInfo* self);
struct miqt_string QFileInfo_AbsoluteFilePath(const QFileInfo* self);
struct miqt_string QFileInfo_CanonicalFilePath(const QFileInfo* self);
struct miqt_string QFileInfo_FileName(const QFileInfo* self);
struct miqt_string QFileInfo_BaseName(const QFileInfo* self);
struct miqt_string QFileInfo_CompleteBaseName(const QFileInfo* self);
struct miqt_string QFileInfo_Suffix(const QFileInfo* self);
struct miqt_string QFileInfo_BundleName(const QFileInfo* self);
struct miqt_string QFileInfo_CompleteSuffix(const QFileInfo* self);
struct miqt_string QFileInfo_Path(const QFileInfo* self);
struct miqt_string QFileInfo_AbsolutePath(const QFileInfo* self);
struct miqt_string QFileInfo_CanonicalPath(const QFileInfo* self);
QDir* QFileInfo_Dir(const QFileInfo* self);
QDir* QFileInfo_AbsoluteDir(const QFileInfo* self);
bool QFileInfo_IsReadable(const QFileInfo* self);
bool QFileInfo_IsWritable(const QFileInfo* self);
bool QFileInfo_IsExecutable(const QFileInfo* self);
bool QFileInfo_IsHidden(const QFileInfo* self);
bool QFileInfo_IsNativePath(const QFileInfo* self);
bool QFileInfo_IsRelative(const QFileInfo* self);
bool QFileInfo_IsAbsolute(const QFileInfo* self);
bool QFileInfo_MakeAbsolute(QFileInfo* self);
bool QFileInfo_IsFile(const QFileInfo* self);
bool QFileInfo_IsDir(const QFileInfo* self);
bool QFileInfo_IsSymLink(const QFileInfo* self);
bool QFileInfo_IsSymbolicLink(const QFileInfo* self);
bool QFileInfo_IsShortcut(const QFileInfo* self);
bool QFileInfo_IsAlias(const QFileInfo* self);
bool QFileInfo_IsJunction(const QFileInfo* self);
bool QFileInfo_IsRoot(const QFileInfo* self);
bool QFileInfo_IsBundle(const QFileInfo* self);
struct miqt_string QFileInfo_SymLinkTarget(const QFileInfo* self);
struct miqt_string QFileInfo_JunctionTarget(const QFileInfo* self);
struct miqt_string QFileInfo_Owner(const QFileInfo* self);
unsigned int QFileInfo_OwnerId(const QFileInfo* self);
struct miqt_string QFileInfo_Group(const QFileInfo* self);
unsigned int QFileInfo_GroupId(const QFileInfo* self);
bool QFileInfo_Permission(const QFileInfo* self, int permissions);
int QFileInfo_Permissions(const QFileInfo* self);
long long QFileInfo_Size(const QFileInfo* self);
QDateTime* QFileInfo_BirthTime(const QFileInfo* self);
QDateTime* QFileInfo_MetadataChangeTime(const QFileInfo* self);
QDateTime* QFileInfo_LastModified(const QFileInfo* self);
QDateTime* QFileInfo_LastRead(const QFileInfo* self);
QDateTime* QFileInfo_FileTime(const QFileInfo* self, int time);
bool QFileInfo_Caching(const QFileInfo* self);
void QFileInfo_SetCaching(QFileInfo* self, bool on);
void QFileInfo_Stat(QFileInfo* self);
void QFileInfo_Delete(QFileInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
