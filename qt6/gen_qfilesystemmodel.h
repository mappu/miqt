#pragma once
#ifndef MIQT_QT6_GEN_QFILESYSTEMMODEL_H
#define MIQT_QT6_GEN_QFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractFileIconProvider;
class QAbstractItemModel;
class QDateTime;
class QDir;
class QEvent;
class QFileInfo;
class QFileSystemModel;
class QIcon;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

void QFileSystemModel_new(QFileSystemModel** outptr_QFileSystemModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QFileSystemModel_new2(QObject* parent, QFileSystemModel** outptr_QFileSystemModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self);
void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1);
struct miqt_string QFileSystemModel_Tr(const char* s);
void QFileSystemModel_RootPathChanged(QFileSystemModel* self, struct miqt_string newPath);
void QFileSystemModel_connect_RootPathChanged(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_FileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName);
void QFileSystemModel_connect_FileRenamed(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, struct miqt_string path);
void QFileSystemModel_connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QFileSystemModel_IndexWithPath(const QFileSystemModel* self, struct miqt_string path);
QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, QModelIndex* child);
QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_HasChildren(const QFileSystemModel* self, QModelIndex* parent);
bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount(const QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_ColumnCount(const QFileSystemModel* self, QModelIndex* parent);
QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self);
QVariant* QFileSystemModel_Data(const QFileSystemModel* self, QModelIndex* index, int role);
bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role);
int QFileSystemModel_Flags(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_MimeTypes(const QFileSystemModel* self);
QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QFileSystemModel_DropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self);
struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_RoleNames(const QFileSystemModel* self);
QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, struct miqt_string path);
struct miqt_string QFileSystemModel_RootPath(const QFileSystemModel* self);
QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self);
void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self);
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
void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event);
bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event);
struct miqt_string QFileSystemModel_Tr2(const char* s, const char* c);
struct miqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, struct miqt_string path, int column);
QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role);
void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on);
void QFileSystemModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QFileSystemModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_Parent(const void* self, QModelIndex* child);
void QFileSystemModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QFileSystemModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
void QFileSystemModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QFileSystemModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QFileSystemModel_override_virtual_RowCount(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QFileSystemModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QFileSystemModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QFileSystemModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QFileSystemModel_override_virtual_SetData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QFileSystemModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QFileSystemModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QFileSystemModel_override_virtual_Flags(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QFileSystemModel_override_virtual_Sort(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_Sort(void* self, int column, int order);
void QFileSystemModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_virtualbase_MimeTypes(const void* self);
void QFileSystemModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QFileSystemModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QFileSystemModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QFileSystemModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_SupportedDropActions(const void* self);
void QFileSystemModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_virtualbase_RoleNames(const void* self);
void QFileSystemModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QFileSystemModel_override_virtual_Event(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_Event(void* self, QEvent* event);
void QFileSystemModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QFileSystemModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QFileSystemModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QFileSystemModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QFileSystemModel_override_virtual_ClearItemData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_ClearItemData(void* self, QModelIndex* index);
void QFileSystemModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QFileSystemModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_SupportedDragActions(const void* self);
void QFileSystemModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QFileSystemModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QFileSystemModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QFileSystemModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QFileSystemModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QFileSystemModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QFileSystemModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QFileSystemModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QFileSystemModel_virtualbase_Span(const void* self, QModelIndex* index);
void QFileSystemModel_override_virtual_MultiData(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QFileSystemModel_override_virtual_Submit(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_Submit(void* self);
void QFileSystemModel_override_virtual_Revert(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_Revert(void* self);
void QFileSystemModel_override_virtual_ResetInternalData(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_ResetInternalData(void* self);
void QFileSystemModel_Delete(QFileSystemModel* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
