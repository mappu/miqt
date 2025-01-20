#pragma once
#ifndef MIQT_QT_GEN_QSTRINGLISTMODEL_H
#define MIQT_QT_GEN_QSTRINGLISTMODEL_H

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
class QAbstractListModel;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QStringListModel;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QStringListModel QStringListModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(struct miqt_array /* of struct miqt_string */  strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(struct miqt_array /* of struct miqt_string */  strings, QObject* parent);
void QStringListModel_virtbase(QStringListModel* src, QAbstractListModel** outptr_QAbstractListModel);
QMetaObject* QStringListModel_MetaObject(const QStringListModel* self);
void* QStringListModel_Metacast(QStringListModel* self, const char* param1);
struct miqt_string QStringListModel_Tr(const char* s);
struct miqt_string QStringListModel_TrUtf8(const char* s);
int QStringListModel_RowCount(const QStringListModel* self, QModelIndex* parent);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index, int role);
bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value, int role);
int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_map /* of int to QVariant* */  QStringListModel_ItemData(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_SetItemData(QStringListModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStringListModel_Sort(QStringListModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QStringListModel_StringList(const QStringListModel* self);
void QStringListModel_SetStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */  strings);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
struct miqt_string QStringListModel_Tr2(const char* s, const char* c);
struct miqt_string QStringListModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QStringListModel_TrUtf82(const char* s, const char* c);
struct miqt_string QStringListModel_TrUtf83(const char* s, const char* c, int n);
bool QStringListModel_override_virtual_RowCount(void* self, intptr_t slot);
int QStringListModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
bool QStringListModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QStringListModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
bool QStringListModel_override_virtual_SetData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_override_virtual_Flags(void* self, intptr_t slot);
int QStringListModel_virtualbase_Flags(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QStringListModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QStringListModel_virtualbase_ItemData(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QStringListModel_override_virtual_Sort(void* self, intptr_t slot);
void QStringListModel_virtualbase_Sort(void* self, int column, int order);
bool QStringListModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QStringListModel_virtualbase_SupportedDropActions(const void* self);
bool QStringListModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QStringListModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
bool QStringListModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QStringListModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QStringListModel_virtualbase_MimeTypes(const void* self);
bool QStringListModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QStringListModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStringListModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QStringListModel_virtualbase_SupportedDragActions(const void* self);
bool QStringListModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QStringListModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QStringListModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QStringListModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_Buddy(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QStringListModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QStringListModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QStringListModel_virtualbase_Span(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QStringListModel_virtualbase_RoleNames(const void* self);
bool QStringListModel_override_virtual_Submit(void* self, intptr_t slot);
bool QStringListModel_virtualbase_Submit(void* self);
bool QStringListModel_override_virtual_Revert(void* self, intptr_t slot);
void QStringListModel_virtualbase_Revert(void* self);
bool QStringListModel_override_virtual_Event(void* self, intptr_t slot);
bool QStringListModel_virtualbase_Event(void* self, QEvent* event);
bool QStringListModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStringListModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QStringListModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QStringListModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QStringListModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QStringListModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStringListModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QStringListModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStringListModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
