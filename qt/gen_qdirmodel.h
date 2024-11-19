#pragma once
#ifndef MIQT_QT_GEN_QDIRMODEL_H
#define MIQT_QT_GEN_QDIRMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QByteArray;
class QDirModel;
class QFileIconProvider;
class QFileInfo;
class QIcon;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QByteArray QByteArray;
typedef struct QDirModel QDirModel;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

void QDirModel_new(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort, QDirModel** outptr_QDirModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QDirModel_new2(QDirModel** outptr_QDirModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QDirModel_new3(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort, QObject* parent, QDirModel** outptr_QDirModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QDirModel_new4(QObject* parent, QDirModel** outptr_QDirModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
QMetaObject* QDirModel_MetaObject(const QDirModel* self);
void* QDirModel_Metacast(QDirModel* self, const char* param1);
struct miqt_string QDirModel_Tr(const char* s);
struct miqt_string QDirModel_TrUtf8(const char* s);
QModelIndex* QDirModel_Index(const QDirModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QDirModel_Parent(const QDirModel* self, QModelIndex* child);
int QDirModel_RowCount(const QDirModel* self, QModelIndex* parent);
int QDirModel_ColumnCount(const QDirModel* self, QModelIndex* parent);
QVariant* QDirModel_Data(const QDirModel* self, QModelIndex* index, int role);
bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QDirModel_HeaderData(const QDirModel* self, int section, int orientation, int role);
bool QDirModel_HasChildren(const QDirModel* self, QModelIndex* index);
int QDirModel_Flags(const QDirModel* self, QModelIndex* index);
void QDirModel_Sort(QDirModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QDirModel_MimeTypes(const QDirModel* self);
QMimeData* QDirModel_MimeData(const QDirModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QDirModel_DropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QDirModel_SupportedDropActions(const QDirModel* self);
void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider);
QFileIconProvider* QDirModel_IconProvider(const QDirModel* self);
void QDirModel_SetNameFilters(QDirModel* self, struct miqt_array /* of struct miqt_string */  filters);
struct miqt_array /* of struct miqt_string */  QDirModel_NameFilters(const QDirModel* self);
void QDirModel_SetFilter(QDirModel* self, int filters);
int QDirModel_Filter(const QDirModel* self);
void QDirModel_SetSorting(QDirModel* self, int sort);
int QDirModel_Sorting(const QDirModel* self);
void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable);
bool QDirModel_ResolveSymlinks(const QDirModel* self);
void QDirModel_SetReadOnly(QDirModel* self, bool enable);
bool QDirModel_IsReadOnly(const QDirModel* self);
void QDirModel_SetLazyChildCount(QDirModel* self, bool enable);
bool QDirModel_LazyChildCount(const QDirModel* self);
QModelIndex* QDirModel_IndexWithPath(const QDirModel* self, struct miqt_string path);
bool QDirModel_IsDir(const QDirModel* self, QModelIndex* index);
QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string name);
bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index);
bool QDirModel_Remove(QDirModel* self, QModelIndex* index);
struct miqt_string QDirModel_FilePath(const QDirModel* self, QModelIndex* index);
struct miqt_string QDirModel_FileName(const QDirModel* self, QModelIndex* index);
QIcon* QDirModel_FileIcon(const QDirModel* self, QModelIndex* index);
QFileInfo* QDirModel_FileInfo(const QDirModel* self, QModelIndex* index);
void QDirModel_Refresh(QDirModel* self);
struct miqt_string QDirModel_Tr2(const char* s, const char* c);
struct miqt_string QDirModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QDirModel_TrUtf82(const char* s, const char* c);
struct miqt_string QDirModel_TrUtf83(const char* s, const char* c, int n);
QModelIndex* QDirModel_Index2(const QDirModel* self, struct miqt_string path, int column);
void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent);
void QDirModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QDirModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_Parent(const void* self, QModelIndex* child);
void QDirModel_override_virtual_RowCount(void* self, intptr_t slot);
int QDirModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QDirModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QDirModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QDirModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QDirModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QDirModel_override_virtual_SetData(void* self, intptr_t slot);
bool QDirModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QDirModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QDirModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QDirModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QDirModel_virtualbase_HasChildren(const void* self, QModelIndex* index);
void QDirModel_override_virtual_Flags(void* self, intptr_t slot);
int QDirModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QDirModel_override_virtual_Sort(void* self, intptr_t slot);
void QDirModel_virtualbase_Sort(void* self, int column, int order);
void QDirModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QDirModel_virtualbase_MimeTypes(const void* self);
void QDirModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QDirModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QDirModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QDirModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QDirModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QDirModel_virtualbase_SupportedDropActions(const void* self);
void QDirModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QDirModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QDirModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QDirModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QDirModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QDirModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QDirModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QDirModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QDirModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QDirModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QDirModel_virtualbase_SupportedDragActions(const void* self);
void QDirModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QDirModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QDirModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QDirModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QDirModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QDirModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QDirModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QDirModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QDirModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QDirModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QDirModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QDirModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QDirModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QDirModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QDirModel_virtualbase_Span(const void* self, QModelIndex* index);
void QDirModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QDirModel_virtualbase_RoleNames(const void* self);
void QDirModel_override_virtual_Submit(void* self, intptr_t slot);
bool QDirModel_virtualbase_Submit(void* self);
void QDirModel_override_virtual_Revert(void* self, intptr_t slot);
void QDirModel_virtualbase_Revert(void* self);
void QDirModel_Delete(QDirModel* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
