#ifndef GEN_QABSTRACTITEMMODEL_H
#define GEN_QABSTRACTITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
int QModelIndex_Row(QModelIndex* self);
int QModelIndex_Column(QModelIndex* self);
uintptr_t QModelIndex_InternalId(QModelIndex* self);
QModelIndex* QModelIndex_Parent(QModelIndex* self);
QModelIndex* QModelIndex_Sibling(QModelIndex* self, int row, int column);
QModelIndex* QModelIndex_SiblingAtColumn(QModelIndex* self, int column);
QModelIndex* QModelIndex_SiblingAtRow(QModelIndex* self, int row);
QModelIndex* QModelIndex_Child(QModelIndex* self, int row, int column);
QVariant* QModelIndex_Data(QModelIndex* self);
QAbstractItemModel* QModelIndex_Model(QModelIndex* self);
bool QModelIndex_IsValid(QModelIndex* self);
bool QModelIndex_OperatorEqual(QModelIndex* self, QModelIndex* other);
bool QModelIndex_OperatorNotEqual(QModelIndex* self, QModelIndex* other);
bool QModelIndex_OperatorLesser(QModelIndex* self, QModelIndex* other);
QVariant* QModelIndex_Data1(QModelIndex* self, int role);
void QModelIndex_Delete(QModelIndex* self);

QPersistentModelIndex* QPersistentModelIndex_new();
QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index);
QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorLesser(QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorEqual(QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorNotEqual(QPersistentModelIndex* self, QPersistentModelIndex* other);
void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other);
void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other);
bool QPersistentModelIndex_OperatorEqualWithOther(QPersistentModelIndex* self, QModelIndex* other);
bool QPersistentModelIndex_OperatorNotEqualWithOther(QPersistentModelIndex* self, QModelIndex* other);
void QPersistentModelIndex_OperatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other);
int QPersistentModelIndex_Row(QPersistentModelIndex* self);
int QPersistentModelIndex_Column(QPersistentModelIndex* self);
uintptr_t QPersistentModelIndex_InternalId(QPersistentModelIndex* self);
QModelIndex* QPersistentModelIndex_Parent(QPersistentModelIndex* self);
QModelIndex* QPersistentModelIndex_Sibling(QPersistentModelIndex* self, int row, int column);
QModelIndex* QPersistentModelIndex_Child(QPersistentModelIndex* self, int row, int column);
QVariant* QPersistentModelIndex_Data(QPersistentModelIndex* self);
QAbstractItemModel* QPersistentModelIndex_Model(QPersistentModelIndex* self);
bool QPersistentModelIndex_IsValid(QPersistentModelIndex* self);
QVariant* QPersistentModelIndex_Data1(QPersistentModelIndex* self, int role);
void QPersistentModelIndex_Delete(QPersistentModelIndex* self);

QMetaObject* QAbstractItemModel_MetaObject(QAbstractItemModel* self);
void QAbstractItemModel_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractItemModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QAbstractItemModel_HasIndex(QAbstractItemModel* self, int row, int column);
QModelIndex* QAbstractItemModel_Index(QAbstractItemModel* self, int row, int column);
QModelIndex* QAbstractItemModel_Parent(QAbstractItemModel* self, QModelIndex* child);
QModelIndex* QAbstractItemModel_Sibling(QAbstractItemModel* self, int row, int column, QModelIndex* idx);
int QAbstractItemModel_RowCount(QAbstractItemModel* self);
int QAbstractItemModel_ColumnCount(QAbstractItemModel* self);
bool QAbstractItemModel_HasChildren(QAbstractItemModel* self);
QVariant* QAbstractItemModel_Data(QAbstractItemModel* self, QModelIndex* index);
bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value);
void QAbstractItemModel_MimeTypes(QAbstractItemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
QMimeData* QAbstractItemModel_MimeData(QAbstractItemModel* self, QModelIndex** indexes, size_t indexes_len);
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
bool QAbstractItemModel_CanFetchMore(QAbstractItemModel* self, QModelIndex* parent);
QModelIndex* QAbstractItemModel_Buddy(QAbstractItemModel* self, QModelIndex* index);
QSize* QAbstractItemModel_Span(QAbstractItemModel* self, QModelIndex* index);
void QAbstractItemModel_DataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight);
bool QAbstractItemModel_Submit(QAbstractItemModel* self);
void QAbstractItemModel_Revert(QAbstractItemModel* self);
void QAbstractItemModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractItemModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractItemModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractItemModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
bool QAbstractItemModel_HasIndex3(QAbstractItemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QAbstractItemModel_Index3(QAbstractItemModel* self, int row, int column, QModelIndex* parent);
int QAbstractItemModel_RowCount1(QAbstractItemModel* self, QModelIndex* parent);
int QAbstractItemModel_ColumnCount1(QAbstractItemModel* self, QModelIndex* parent);
bool QAbstractItemModel_HasChildren1(QAbstractItemModel* self, QModelIndex* parent);
QVariant* QAbstractItemModel_Data2(QAbstractItemModel* self, QModelIndex* index, int role);
bool QAbstractItemModel_SetData3(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractItemModel_InsertRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_InsertColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles, size_t roles_len);
void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, void* slot);
void QAbstractItemModel_Delete(QAbstractItemModel* self);

QMetaObject* QAbstractTableModel_MetaObject(QAbstractTableModel* self);
void QAbstractTableModel_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractTableModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
QModelIndex* QAbstractTableModel_Index(QAbstractTableModel* self, int row, int column);
QModelIndex* QAbstractTableModel_Sibling(QAbstractTableModel* self, int row, int column, QModelIndex* idx);
void QAbstractTableModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractTableModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractTableModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractTableModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QModelIndex* QAbstractTableModel_Index3(QAbstractTableModel* self, int row, int column, QModelIndex* parent);
void QAbstractTableModel_Delete(QAbstractTableModel* self);

QMetaObject* QAbstractListModel_MetaObject(QAbstractListModel* self);
void QAbstractListModel_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractListModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
QModelIndex* QAbstractListModel_Index(QAbstractListModel* self, int row);
QModelIndex* QAbstractListModel_Sibling(QAbstractListModel* self, int row, int column, QModelIndex* idx);
void QAbstractListModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractListModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractListModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractListModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QModelIndex* QAbstractListModel_Index2(QAbstractListModel* self, int row, int column);
QModelIndex* QAbstractListModel_Index3(QAbstractListModel* self, int row, int column, QModelIndex* parent);
void QAbstractListModel_Delete(QAbstractListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
