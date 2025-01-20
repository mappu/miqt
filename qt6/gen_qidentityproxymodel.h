#pragma once
#ifndef MIQT_QT6_GEN_QIDENTITYPROXYMODEL_H
#define MIQT_QT6_GEN_QIDENTITYPROXYMODEL_H

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
class QAbstractProxyModel;
class QChildEvent;
class QEvent;
class QIdentityProxyModel;
class QItemSelection;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIdentityProxyModel QIdentityProxyModel;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
void QIdentityProxyModel_virtbase(QIdentityProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self);
void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1);
struct miqt_string QIdentityProxyModel_Tr(const char* s);
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, QModelIndex* parent);
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role);
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection);
QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_Match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_string QIdentityProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n);
bool QIdentityProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex);
bool QIdentityProxyModel_override_virtual_MapToSource(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex);
bool QIdentityProxyModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_Parent(const void* self, QModelIndex* child);
bool QIdentityProxyModel_override_virtual_RowCount(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QIdentityProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
bool QIdentityProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
bool QIdentityProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection);
bool QIdentityProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection);
bool QIdentityProxyModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QIdentityProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_override_virtual_Submit(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_Submit(void* self);
bool QIdentityProxyModel_override_virtual_Revert(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_Revert(void* self);
bool QIdentityProxyModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QIdentityProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role);
bool QIdentityProxyModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QIdentityProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_Flags(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_Flags(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_SetData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
bool QIdentityProxyModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QIdentityProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QIdentityProxyModel_override_virtual_ClearItemData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_ClearItemData(void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_Sort(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_Sort(void* self, int column, int order);
bool QIdentityProxyModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QIdentityProxyModel_virtualbase_Span(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QIdentityProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QIdentityProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QIdentityProxyModel_virtualbase_MimeTypes(const void* self);
bool QIdentityProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_SupportedDragActions(const void* self);
bool QIdentityProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_SupportedDropActions(const void* self);
bool QIdentityProxyModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QIdentityProxyModel_virtualbase_RoleNames(const void* self);
bool QIdentityProxyModel_override_virtual_MultiData(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QIdentityProxyModel_override_virtual_ResetInternalData(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_ResetInternalData(void* self);
bool QIdentityProxyModel_override_virtual_Event(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_Event(void* self, QEvent* event);
bool QIdentityProxyModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QIdentityProxyModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QIdentityProxyModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QIdentityProxyModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QIdentityProxyModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QIdentityProxyModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
