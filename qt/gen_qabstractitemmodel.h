#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTITEMMODEL_H
#define MIQT_QT_GEN_QABSTRACTITEMMODEL_H

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
class QAbstractTableModel;
class QByteArray;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QPersistentModelIndex;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QAbstractTableModel QAbstractTableModel;
typedef struct QByteArray QByteArray;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

void QModelIndex_new(QModelIndex** outptr_QModelIndex);
void QModelIndex_new2(QModelIndex* param1, QModelIndex** outptr_QModelIndex);
int QModelIndex_Row(const QModelIndex* self);
int QModelIndex_Column(const QModelIndex* self);
uintptr_t QModelIndex_InternalId(const QModelIndex* self);
void* QModelIndex_InternalPointer(const QModelIndex* self);
QModelIndex* QModelIndex_Parent(const QModelIndex* self);
QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column);
QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column);
QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row);
QModelIndex* QModelIndex_Child(const QModelIndex* self, int row, int column);
QVariant* QModelIndex_Data(const QModelIndex* self);
int QModelIndex_Flags(const QModelIndex* self);
QAbstractItemModel* QModelIndex_Model(const QModelIndex* self);
bool QModelIndex_IsValid(const QModelIndex* self);
bool QModelIndex_OperatorEqual(const QModelIndex* self, QModelIndex* other);
bool QModelIndex_OperatorNotEqual(const QModelIndex* self, QModelIndex* other);
bool QModelIndex_OperatorLesser(const QModelIndex* self, QModelIndex* other);
QVariant* QModelIndex_Data1(const QModelIndex* self, int role);
void QModelIndex_Delete(QModelIndex* self, bool isSubclass);

void QPersistentModelIndex_new(QPersistentModelIndex** outptr_QPersistentModelIndex);
void QPersistentModelIndex_new2(QModelIndex* index, QPersistentModelIndex** outptr_QPersistentModelIndex);
void QPersistentModelIndex_new3(QPersistentModelIndex* other, QPersistentModelIndex** outptr_QPersistentModelIndex);
bool QPersistentModelIndex_OperatorLesser(const QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorNotEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other);
void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other);
void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other);
bool QPersistentModelIndex_OperatorNotEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other);
void QPersistentModelIndex_OperatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other);
int QPersistentModelIndex_Row(const QPersistentModelIndex* self);
int QPersistentModelIndex_Column(const QPersistentModelIndex* self);
void* QPersistentModelIndex_InternalPointer(const QPersistentModelIndex* self);
uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self);
QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self);
QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column);
QModelIndex* QPersistentModelIndex_Child(const QPersistentModelIndex* self, int row, int column);
QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self);
int QPersistentModelIndex_Flags(const QPersistentModelIndex* self);
QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self);
bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self);
QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role);
void QPersistentModelIndex_Delete(QPersistentModelIndex* self, bool isSubclass);

void QAbstractItemModel_new(QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QAbstractItemModel_new2(QObject* parent, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self);
void* QAbstractItemModel_Metacast(QAbstractItemModel* self, const char* param1);
struct miqt_string QAbstractItemModel_Tr(const char* s);
struct miqt_string QAbstractItemModel_TrUtf8(const char* s);
bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column);
QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, QModelIndex* child);
QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx);
int QAbstractItemModel_RowCount(const QAbstractItemModel* self, QModelIndex* parent);
int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self, QModelIndex* parent);
bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self, QModelIndex* parent);
QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, QModelIndex* index, int role);
bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation, int role);
bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role);
struct miqt_map /* of int to QVariant* */  QAbstractItemModel_ItemData(const QAbstractItemModel* self, QModelIndex* index);
bool QAbstractItemModel_SetItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
struct miqt_array /* of struct miqt_string */  QAbstractItemModel_MimeTypes(const QAbstractItemModel* self);
QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self);
int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self);
bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row);
bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column);
bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row);
bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column);
bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild);
bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild);
void QAbstractItemModel_FetchMore(QAbstractItemModel* self, QModelIndex* parent);
bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, QModelIndex* parent);
int QAbstractItemModel_Flags(const QAbstractItemModel* self, QModelIndex* index);
void QAbstractItemModel_Sort(QAbstractItemModel* self, int column, int order);
QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, QModelIndex* index);
struct miqt_array /* of QModelIndex* */  QAbstractItemModel_Match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, QModelIndex* index);
struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_RoleNames(const QAbstractItemModel* self);
bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, QModelIndex* index);
void QAbstractItemModel_DataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight);
void QAbstractItemModel_connect_DataChanged(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, int orientation, int first, int last);
void QAbstractItemModel_connect_HeaderDataChanged(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self);
void QAbstractItemModel_connect_LayoutChanged(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self);
void QAbstractItemModel_connect_LayoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot);
bool QAbstractItemModel_Submit(QAbstractItemModel* self);
void QAbstractItemModel_Revert(QAbstractItemModel* self);
struct miqt_string QAbstractItemModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractItemModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractItemModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractItemModel_TrUtf83(const char* s, const char* c, int n);
bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent);
bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, QModelIndex* index, int options);
void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents);
void QAbstractItemModel_connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint);
void QAbstractItemModel_connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents);
void QAbstractItemModel_connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint);
void QAbstractItemModel_connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QAbstractItemModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QAbstractItemModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QAbstractItemModel_virtualbase_Parent(const void* self, QModelIndex* child);
void QAbstractItemModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QAbstractItemModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QAbstractItemModel_override_virtual_RowCount(void* self, intptr_t slot);
int QAbstractItemModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QAbstractItemModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QAbstractItemModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QAbstractItemModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
void QAbstractItemModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QAbstractItemModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QAbstractItemModel_override_virtual_SetData(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QAbstractItemModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QAbstractItemModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QAbstractItemModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QAbstractItemModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QAbstractItemModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QAbstractItemModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_MimeTypes(const void* self);
void QAbstractItemModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QAbstractItemModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QAbstractItemModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractItemModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractItemModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QAbstractItemModel_virtualbase_SupportedDropActions(const void* self);
void QAbstractItemModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QAbstractItemModel_virtualbase_SupportedDragActions(const void* self);
void QAbstractItemModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractItemModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractItemModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractItemModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractItemModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractItemModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractItemModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QAbstractItemModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QAbstractItemModel_override_virtual_Flags(void* self, intptr_t slot);
int QAbstractItemModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QAbstractItemModel_override_virtual_Sort(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_Sort(void* self, int column, int order);
void QAbstractItemModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QAbstractItemModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QAbstractItemModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QAbstractItemModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QAbstractItemModel_virtualbase_Span(const void* self, QModelIndex* index);
void QAbstractItemModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_RoleNames(const void* self);
void QAbstractItemModel_override_virtual_Submit(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_Submit(void* self);
void QAbstractItemModel_override_virtual_Revert(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_Revert(void* self);
void QAbstractItemModel_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_Event(void* self, QEvent* event);
void QAbstractItemModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractItemModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractItemModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractItemModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractItemModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractItemModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractItemModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractItemModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractItemModel_Delete(QAbstractItemModel* self, bool isSubclass);

void QAbstractTableModel_new(QAbstractTableModel** outptr_QAbstractTableModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QAbstractTableModel_new2(QObject* parent, QAbstractTableModel** outptr_QAbstractTableModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self);
void* QAbstractTableModel_Metacast(QAbstractTableModel* self, const char* param1);
struct miqt_string QAbstractTableModel_Tr(const char* s);
struct miqt_string QAbstractTableModel_TrUtf8(const char* s);
QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx);
bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractTableModel_Flags(const QAbstractTableModel* self, QModelIndex* index);
struct miqt_string QAbstractTableModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractTableModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractTableModel_TrUtf83(const char* s, const char* c, int n);
void QAbstractTableModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QAbstractTableModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QAbstractTableModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QAbstractTableModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QAbstractTableModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractTableModel_override_virtual_Flags(void* self, intptr_t slot);
int QAbstractTableModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QAbstractTableModel_override_virtual_RowCount(void* self, intptr_t slot);
int QAbstractTableModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QAbstractTableModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QAbstractTableModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QAbstractTableModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QAbstractTableModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QAbstractTableModel_override_virtual_SetData(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QAbstractTableModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QAbstractTableModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QAbstractTableModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QAbstractTableModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QAbstractTableModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QAbstractTableModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QAbstractTableModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAbstractTableModel_virtualbase_MimeTypes(const void* self);
void QAbstractTableModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QAbstractTableModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QAbstractTableModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractTableModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QAbstractTableModel_virtualbase_SupportedDropActions(const void* self);
void QAbstractTableModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QAbstractTableModel_virtualbase_SupportedDragActions(const void* self);
void QAbstractTableModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractTableModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractTableModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractTableModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractTableModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractTableModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractTableModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QAbstractTableModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QAbstractTableModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QAbstractTableModel_override_virtual_Sort(void* self, intptr_t slot);
void QAbstractTableModel_virtualbase_Sort(void* self, int column, int order);
void QAbstractTableModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QAbstractTableModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QAbstractTableModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractTableModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QAbstractTableModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QAbstractTableModel_virtualbase_Span(const void* self, QModelIndex* index);
void QAbstractTableModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QAbstractTableModel_virtualbase_RoleNames(const void* self);
void QAbstractTableModel_override_virtual_Submit(void* self, intptr_t slot);
bool QAbstractTableModel_virtualbase_Submit(void* self);
void QAbstractTableModel_override_virtual_Revert(void* self, intptr_t slot);
void QAbstractTableModel_virtualbase_Revert(void* self);
void QAbstractTableModel_Delete(QAbstractTableModel* self, bool isSubclass);

void QAbstractListModel_new(QAbstractListModel** outptr_QAbstractListModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
void QAbstractListModel_new2(QObject* parent, QAbstractListModel** outptr_QAbstractListModel, QAbstractItemModel** outptr_QAbstractItemModel, QObject** outptr_QObject);
QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self);
void* QAbstractListModel_Metacast(QAbstractListModel* self, const char* param1);
struct miqt_string QAbstractListModel_Tr(const char* s);
struct miqt_string QAbstractListModel_TrUtf8(const char* s);
QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx);
bool QAbstractListModel_DropMimeData(QAbstractListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractListModel_Flags(const QAbstractListModel* self, QModelIndex* index);
struct miqt_string QAbstractListModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractListModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractListModel_TrUtf83(const char* s, const char* c, int n);
void QAbstractListModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QAbstractListModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QAbstractListModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QAbstractListModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QAbstractListModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractListModel_override_virtual_Flags(void* self, intptr_t slot);
int QAbstractListModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QAbstractListModel_override_virtual_RowCount(void* self, intptr_t slot);
int QAbstractListModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QAbstractListModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QAbstractListModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QAbstractListModel_override_virtual_SetData(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QAbstractListModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QAbstractListModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QAbstractListModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QAbstractListModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QAbstractListModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QAbstractListModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QAbstractListModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAbstractListModel_virtualbase_MimeTypes(const void* self);
void QAbstractListModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QAbstractListModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QAbstractListModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QAbstractListModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QAbstractListModel_virtualbase_SupportedDropActions(const void* self);
void QAbstractListModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QAbstractListModel_virtualbase_SupportedDragActions(const void* self);
void QAbstractListModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractListModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractListModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QAbstractListModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QAbstractListModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractListModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QAbstractListModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QAbstractListModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QAbstractListModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QAbstractListModel_override_virtual_Sort(void* self, intptr_t slot);
void QAbstractListModel_virtualbase_Sort(void* self, int column, int order);
void QAbstractListModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QAbstractListModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QAbstractListModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractListModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QAbstractListModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QAbstractListModel_virtualbase_Span(const void* self, QModelIndex* index);
void QAbstractListModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QAbstractListModel_virtualbase_RoleNames(const void* self);
void QAbstractListModel_override_virtual_Submit(void* self, intptr_t slot);
bool QAbstractListModel_virtualbase_Submit(void* self);
void QAbstractListModel_override_virtual_Revert(void* self, intptr_t slot);
void QAbstractListModel_virtualbase_Revert(void* self);
void QAbstractListModel_Delete(QAbstractListModel* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
