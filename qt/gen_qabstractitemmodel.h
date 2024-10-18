#ifndef GEN_QABSTRACTITEMMODEL_H
#define GEN_QABSTRACTITEMMODEL_H

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
class QMetaObject;
class QMimeData;
class QModelIndex;
class QPersistentModelIndex;
class QSize;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QAbstractTableModel QAbstractTableModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

QModelIndex* QModelIndex_new();
QModelIndex* QModelIndex_new2(QModelIndex* param1);
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
void QModelIndex_Delete(QModelIndex* self);

QPersistentModelIndex* QPersistentModelIndex_new();
QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index);
QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other);
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
void QPersistentModelIndex_Delete(QPersistentModelIndex* self);

QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self);
void* QAbstractItemModel_Metacast(QAbstractItemModel* self, const char* param1);
struct miqt_string QAbstractItemModel_Tr(const char* s);
struct miqt_string QAbstractItemModel_TrUtf8(const char* s);
bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column);
QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column);
QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, QModelIndex* child);
QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx);
int QAbstractItemModel_RowCount(const QAbstractItemModel* self);
int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self);
bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self);
QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, QModelIndex* index);
bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value);
QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation);
bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value);
struct miqt_array* QAbstractItemModel_MimeTypes(const QAbstractItemModel* self);
QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, struct miqt_array* /* of QModelIndex* */ indexes);
bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self);
int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self);
bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count);
bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count);
bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count);
bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count);
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
void QAbstractItemModel_Sort(QAbstractItemModel* self, int column);
QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, QModelIndex* index);
struct miqt_array* QAbstractItemModel_Match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value);
QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, QModelIndex* index);
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
QModelIndex* QAbstractItemModel_Index3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent);
int QAbstractItemModel_RowCount1(const QAbstractItemModel* self, QModelIndex* parent);
int QAbstractItemModel_ColumnCount1(const QAbstractItemModel* self, QModelIndex* parent);
bool QAbstractItemModel_HasChildren1(const QAbstractItemModel* self, QModelIndex* parent);
QVariant* QAbstractItemModel_Data2(const QAbstractItemModel* self, QModelIndex* index, int role);
bool QAbstractItemModel_SetData3(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QAbstractItemModel_HeaderData3(const QAbstractItemModel* self, int section, int orientation, int role);
bool QAbstractItemModel_SetHeaderData4(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role);
bool QAbstractItemModel_InsertRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_InsertColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
void QAbstractItemModel_Sort2(QAbstractItemModel* self, int column, int order);
struct miqt_array* QAbstractItemModel_Match4(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits);
struct miqt_array* QAbstractItemModel_Match5(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, QModelIndex* index, int options);
void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array* /* of int */ roles);
void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex* */ parents);
void QAbstractItemModel_connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex* */ parents, int hint);
void QAbstractItemModel_connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex* */ parents);
void QAbstractItemModel_connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex* */ parents, int hint);
void QAbstractItemModel_connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot);
void QAbstractItemModel_Delete(QAbstractItemModel* self);

QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self);
void* QAbstractTableModel_Metacast(QAbstractTableModel* self, const char* param1);
struct miqt_string QAbstractTableModel_Tr(const char* s);
struct miqt_string QAbstractTableModel_TrUtf8(const char* s);
QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column);
QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx);
bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractTableModel_Flags(const QAbstractTableModel* self, QModelIndex* index);
struct miqt_string QAbstractTableModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractTableModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractTableModel_TrUtf83(const char* s, const char* c, int n);
QModelIndex* QAbstractTableModel_Index3(const QAbstractTableModel* self, int row, int column, QModelIndex* parent);
void QAbstractTableModel_Delete(QAbstractTableModel* self);

QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self);
void* QAbstractListModel_Metacast(QAbstractListModel* self, const char* param1);
struct miqt_string QAbstractListModel_Tr(const char* s);
struct miqt_string QAbstractListModel_TrUtf8(const char* s);
QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row);
QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx);
bool QAbstractListModel_DropMimeData(QAbstractListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QAbstractListModel_Flags(const QAbstractListModel* self, QModelIndex* index);
struct miqt_string QAbstractListModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractListModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractListModel_TrUtf83(const char* s, const char* c, int n);
QModelIndex* QAbstractListModel_Index2(const QAbstractListModel* self, int row, int column);
QModelIndex* QAbstractListModel_Index3(const QAbstractListModel* self, int row, int column, QModelIndex* parent);
void QAbstractListModel_Delete(QAbstractListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
