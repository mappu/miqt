#pragma once
#ifndef MIQT_QT6_GEN_QITEMSELECTIONMODEL_H
#define MIQT_QT6_GEN_QITEMSELECTIONMODEL_H

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
class QChildEvent;
class QEvent;
class QItemSelection;
class QItemSelectionModel;
class QItemSelectionRange;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QPersistentModelIndex;
class QTimerEvent;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QItemSelectionRange QItemSelectionRange;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QTimerEvent QTimerEvent;
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
struct miqt_array /* of QModelIndex* */  QItemSelectionRange_Indexes(const QItemSelectionRange* self);
void QItemSelectionRange_Delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
void QItemSelectionModel_virtbase(QItemSelectionModel* src, QObject** outptr_QObject);
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
struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self);
struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedRows(const QItemSelectionModel* self);
struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self);
QItemSelection* QItemSelectionModel_Selection(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self);
void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command);
void QItemSelectionModel_Select(QItemSelectionModel* self, QModelIndex* index, int command);
void QItemSelectionModel_Select2(QItemSelectionModel* self, QItemSelection* selection, int command);
void QItemSelectionModel_Clear(QItemSelectionModel* self);
void QItemSelectionModel_Reset(QItemSelectionModel* self);
void QItemSelectionModel_ClearSelection(QItemSelectionModel* self);
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_SelectionChanged(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected);
void QItemSelectionModel_connect_SelectionChanged(QItemSelectionModel* self, intptr_t slot);
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
struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column);
struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_override_virtual_SetCurrentIndex(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_SetCurrentIndex(void* self, QModelIndex* index, int command);
bool QItemSelectionModel_override_virtual_Select(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_Select(void* self, QModelIndex* index, int command);
bool QItemSelectionModel_override_virtual_Select2(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_Select2(void* self, QItemSelection* selection, int command);
bool QItemSelectionModel_override_virtual_Clear(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_Clear(void* self);
bool QItemSelectionModel_override_virtual_Reset(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_Reset(void* self);
bool QItemSelectionModel_override_virtual_ClearCurrentIndex(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_ClearCurrentIndex(void* self);
bool QItemSelectionModel_override_virtual_Event(void* self, intptr_t slot);
bool QItemSelectionModel_virtualbase_Event(void* self, QEvent* event);
bool QItemSelectionModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QItemSelectionModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QItemSelectionModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QItemSelectionModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QItemSelectionModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QItemSelectionModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QItemSelectionModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QItemSelectionModel_Delete(QItemSelectionModel* self);

QItemSelection* QItemSelection_new(QModelIndex* topLeft, QModelIndex* bottomRight);
QItemSelection* QItemSelection_new2();
QItemSelection* QItemSelection_new3(QItemSelection* param1);
void QItemSelection_Select(QItemSelection* self, QModelIndex* topLeft, QModelIndex* bottomRight);
bool QItemSelection_Contains(const QItemSelection* self, QModelIndex* index);
struct miqt_array /* of QModelIndex* */  QItemSelection_Indexes(const QItemSelection* self);
void QItemSelection_Merge(QItemSelection* self, QItemSelection* other, int command);
void QItemSelection_Split(QItemSelectionRange* rangeVal, QItemSelectionRange* other, QItemSelection* result);
void QItemSelection_Delete(QItemSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
