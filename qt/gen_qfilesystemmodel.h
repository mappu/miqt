#pragma once
#ifndef MIQT_QT_GEN_QFILESYSTEMMODEL_H
#define MIQT_QT_GEN_QFILESYSTEMMODEL_H

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
class QFileIconProvider;
class QFileInfo;
class QFileSystemModel;
class QIcon;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QFileSystemModel* QFileSystemModel_new();
QFileSystemModel* QFileSystemModel_new2(QObject* parent);
QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self);
void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1);
struct miqt_string QFileSystemModel_Tr(const char* s);
struct miqt_string QFileSystemModel_TrUtf8(const char* s);
void QFileSystemModel_RootPathChanged(QFileSystemModel* self, struct miqt_string newPath);
void QFileSystemModel_connect_RootPathChanged(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_FileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName);
void QFileSystemModel_connect_FileRenamed(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, struct miqt_string path);
void QFileSystemModel_connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column);
QModelIndex* QFileSystemModel_IndexWithPath(const QFileSystemModel* self, struct miqt_string path);
QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, QModelIndex* child);
QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_HasChildren(const QFileSystemModel* self);
bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount(const QFileSystemModel* self);
int QFileSystemModel_ColumnCount(const QFileSystemModel* self);
QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self);
QVariant* QFileSystemModel_Data(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value);
QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation);
int QFileSystemModel_Flags(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_Sort(QFileSystemModel* self, int column);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_MimeTypes(const QFileSystemModel* self);
QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QFileSystemModel_DropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self);
QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, struct miqt_string path);
struct miqt_string QFileSystemModel_RootPath(const QFileSystemModel* self);
QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self);
void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QFileIconProvider* provider);
QFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self);
void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters);
int QFileSystemModel_Filter(const QFileSystemModel* self);
void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable);
bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self);
void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable);
bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable);
bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilters(QFileSystemModel* self, struct miqt_array /* of struct miqt_string */  filters);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_NameFilters(const QFileSystemModel* self);
void QFileSystemModel_SetOption(QFileSystemModel* self, int option);
bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option);
void QFileSystemModel_SetOptions(QFileSystemModel* self, int options);
int QFileSystemModel_Options(const QFileSystemModel* self);
struct miqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_IsDir(const QFileSystemModel* self, QModelIndex* index);
long long QFileSystemModel_Size(const QFileSystemModel* self, QModelIndex* index);
struct miqt_string QFileSystemModel_Type(const QFileSystemModel* self, QModelIndex* index);
QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, QModelIndex* index);
QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, QModelIndex* parent, struct miqt_string name);
bool QFileSystemModel_Rmdir(QFileSystemModel* self, QModelIndex* index);
struct miqt_string QFileSystemModel_FileName(const QFileSystemModel* self, QModelIndex* index);
QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, QModelIndex* index);
int QFileSystemModel_Permissions(const QFileSystemModel* self, QModelIndex* index);
QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_Remove(QFileSystemModel* self, QModelIndex* index);
struct miqt_string QFileSystemModel_Tr2(const char* s, const char* c);
struct miqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QFileSystemModel_TrUtf82(const char* s, const char* c);
struct miqt_string QFileSystemModel_TrUtf83(const char* s, const char* c, int n);
QModelIndex* QFileSystemModel_Index3(const QFileSystemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, struct miqt_string path, int column);
bool QFileSystemModel_HasChildren1(const QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount1(const QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_ColumnCount1(const QFileSystemModel* self, QModelIndex* parent);
QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role);
QVariant* QFileSystemModel_Data2(const QFileSystemModel* self, QModelIndex* index, int role);
bool QFileSystemModel_SetData3(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QFileSystemModel_HeaderData3(const QFileSystemModel* self, int section, int orientation, int role);
void QFileSystemModel_Sort2(QFileSystemModel* self, int column, int order);
void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on);
void QFileSystemModel_Delete(QFileSystemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
