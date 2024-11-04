#ifndef GEN_QITEMSELECTIONMODEL_H
#define GEN_QITEMSELECTIONMODEL_H

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
QItemSelectionRange* QItemSelectionRange_new2(QModelIndex* topL, QModelIndex* bottomR);
QItemSelectionRange* QItemSelectionRange_new3(QModelIndex* index);
QItemSelectionRange* QItemSelectionRange_new4(QItemSelectionRange* param1);
void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other);
int QItemSelectionRange_Top(const QItemSelectionRange* self);
int QItemSelectionRange_Left(const QItemSelectionRange* self);
int QItemSelectionRange_Bottom(const QItemSelectionRange* self);
int QItemSelectionRange_Right(const QItemSelectionRange* self);
int QItemSelectionRange_Width(const QItemSelectionRange* self);
int QItemSelectionRange_Height(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self);
QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self);
QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self);
bool QItemSelectionRange_Contains(const QItemSelectionRange* self, QModelIndex* index);
bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex);
bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_OperatorEqual(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_OperatorNotEqual(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_IsValid(const QItemSelectionRange* self);
bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self);
struct miqt_array QItemSelectionRange_Indexes(const QItemSelectionRange* self);
void QItemSelectionRange_Delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
QMetaObject* QItemSelectionModel_MetaObject(const QItemSelectionModel* self);
void* QItemSelectionModel_Metacast(QItemSelectionModel* self, const char* param1);
struct miqt_string QItemSelectionModel_Tr(const char* s);
QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self);
bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, QModelIndex* index);
bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self);
struct miqt_array QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self);
struct miqt_array QItemSelectionModel_SelectedRows(const QItemSelectionModel* self);
struct miqt_array QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self);
void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command);
void QItemSelectionModel_Select(QItemSelectionModel* self, QModelIndex* index, int command);
void QItemSelectionModel_Clear(QItemSelectionModel* self);
void QItemSelectionModel_Reset(QItemSelectionModel* self);
void QItemSelectionModel_ClearSelection(QItemSelectionModel* self);
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
void QItemSelectionModel_connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_connect_ModelChanged(QItemSelectionModel* self, intptr_t slot);
struct miqt_string QItemSelectionModel_Tr2(const char* s, const char* c);
struct miqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n);
bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, QModelIndex* parent);
bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, QModelIndex* parent);
bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, QModelIndex* parent);
bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, QModelIndex* parent);
struct miqt_array QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column);
struct miqt_array QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row);
void QItemSelectionModel_Delete(QItemSelectionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
