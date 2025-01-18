#pragma once
#ifndef MIQT_QT_GEN_QCONCATENATETABLESPROXYMODEL_H
#define MIQT_QT_GEN_QCONCATENATETABLESPROXYMODEL_H

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
class QConcatenateTablesProxyModel;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QConcatenateTablesProxyModel QConcatenateTablesProxyModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new();
QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent);
void QConcatenateTablesProxyModel_virtbase(QConcatenateTablesProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self);
void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1);
struct miqt_string QConcatenateTablesProxyModel_Tr(const char* s);
struct miqt_string QConcatenateTablesProxyModel_TrUtf8(const char* s);
struct miqt_array /* of QAbstractItemModel* */  QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role);
struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, QModelIndex* index);
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, QModelIndex* index);
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self);
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, QModelIndex* index);
struct miqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QConcatenateTablesProxyModel_TrUtf82(const char* s, const char* c);
struct miqt_string QConcatenateTablesProxyModel_TrUtf83(const char* s, const char* c, int n);
void QConcatenateTablesProxyModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QConcatenateTablesProxyModel_override_virtual_SetData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QConcatenateTablesProxyModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_virtualbase_ItemData(const void* self, QModelIndex* proxyIndex);
void QConcatenateTablesProxyModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QConcatenateTablesProxyModel_override_virtual_Flags(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QConcatenateTablesProxyModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_Parent(const void* self, QModelIndex* index);
void QConcatenateTablesProxyModel_override_virtual_RowCount(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QConcatenateTablesProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_MimeTypes(const void* self);
void QConcatenateTablesProxyModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QConcatenateTablesProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QConcatenateTablesProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QConcatenateTablesProxyModel_virtualbase_Span(const void* self, QModelIndex* index);
void QConcatenateTablesProxyModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QConcatenateTablesProxyModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QConcatenateTablesProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_SupportedDropActions(const void* self);
void QConcatenateTablesProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_SupportedDragActions(const void* self);
void QConcatenateTablesProxyModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QConcatenateTablesProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QConcatenateTablesProxyModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_override_virtual_Sort(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_Sort(void* self, int column, int order);
void QConcatenateTablesProxyModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QConcatenateTablesProxyModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QConcatenateTablesProxyModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_RoleNames(const void* self);
void QConcatenateTablesProxyModel_override_virtual_Submit(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_Submit(void* self);
void QConcatenateTablesProxyModel_override_virtual_Revert(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_Revert(void* self);
void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
