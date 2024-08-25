#ifndef GEN_QITEMSELECTIONMODEL_H
#define GEN_QITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QItemSelectionModel;
class QItemSelectionRange;
class QMetaObject;
class QModelIndex;
class QObject;
class QPersistentModelIndex;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QItemSelectionRange QItemSelectionRange;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
#endif

QItemSelectionRange* QItemSelectionRange_new();
QItemSelectionRange* QItemSelectionRange_new2(QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_new3(QModelIndex* topL, QModelIndex* bottomR);
QItemSelectionRange* QItemSelectionRange_new4(QModelIndex* index);
void QItemSelectionRange_OperatorAssign(QItemSelectionRange* self, QItemSelectionRange* other);
void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other);
int QItemSelectionRange_Top(QItemSelectionRange* self);
int QItemSelectionRange_Left(QItemSelectionRange* self);
int QItemSelectionRange_Bottom(QItemSelectionRange* self);
int QItemSelectionRange_Right(QItemSelectionRange* self);
int QItemSelectionRange_Width(QItemSelectionRange* self);
int QItemSelectionRange_Height(QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_TopLeft(QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_BottomRight(QItemSelectionRange* self);
QModelIndex* QItemSelectionRange_Parent(QItemSelectionRange* self);
QAbstractItemModel* QItemSelectionRange_Model(QItemSelectionRange* self);
bool QItemSelectionRange_Contains(QItemSelectionRange* self, QModelIndex* index);
bool QItemSelectionRange_Contains2(QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex);
bool QItemSelectionRange_Intersects(QItemSelectionRange* self, QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_Intersected(QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_OperatorEqual(QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_OperatorNotEqual(QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_OperatorLesser(QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_IsValid(QItemSelectionRange* self);
bool QItemSelectionRange_IsEmpty(QItemSelectionRange* self);
void QItemSelectionRange_Indexes(QItemSelectionRange* self, QModelIndex*** _out, size_t* _out_len);
void QItemSelectionRange_Delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
QMetaObject* QItemSelectionModel_MetaObject(QItemSelectionModel* self);
void QItemSelectionModel_Tr(char* s, char** _out, int* _out_Strlen);
void QItemSelectionModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
QModelIndex* QItemSelectionModel_CurrentIndex(QItemSelectionModel* self);
bool QItemSelectionModel_IsSelected(QItemSelectionModel* self, QModelIndex* index);
bool QItemSelectionModel_IsRowSelected(QItemSelectionModel* self, int row);
bool QItemSelectionModel_IsColumnSelected(QItemSelectionModel* self, int column);
bool QItemSelectionModel_RowIntersectsSelection(QItemSelectionModel* self, int row);
bool QItemSelectionModel_ColumnIntersectsSelection(QItemSelectionModel* self, int column);
bool QItemSelectionModel_HasSelection(QItemSelectionModel* self);
void QItemSelectionModel_SelectedIndexes(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len);
void QItemSelectionModel_SelectedRows(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len);
void QItemSelectionModel_SelectedColumns(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len);
QAbstractItemModel* QItemSelectionModel_Model(QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self);
void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_Clear(QItemSelectionModel* self);
void QItemSelectionModel_Reset(QItemSelectionModel* self);
void QItemSelectionModel_ClearSelection(QItemSelectionModel* self);
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentChanged(QItemSelectionModel* self, void* slot);
void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentRowChanged(QItemSelectionModel* self, void* slot);
void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentColumnChanged(QItemSelectionModel* self, void* slot);
void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_connect_ModelChanged(QItemSelectionModel* self, void* slot);
void QItemSelectionModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QItemSelectionModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QItemSelectionModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QItemSelectionModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
bool QItemSelectionModel_IsRowSelected2(QItemSelectionModel* self, int row, QModelIndex* parent);
bool QItemSelectionModel_IsColumnSelected2(QItemSelectionModel* self, int column, QModelIndex* parent);
bool QItemSelectionModel_RowIntersectsSelection2(QItemSelectionModel* self, int row, QModelIndex* parent);
bool QItemSelectionModel_ColumnIntersectsSelection2(QItemSelectionModel* self, int column, QModelIndex* parent);
void QItemSelectionModel_SelectedRows1(QItemSelectionModel* self, int column, QModelIndex*** _out, size_t* _out_len);
void QItemSelectionModel_SelectedColumns1(QItemSelectionModel* self, int row, QModelIndex*** _out, size_t* _out_len);
void QItemSelectionModel_Delete(QItemSelectionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
