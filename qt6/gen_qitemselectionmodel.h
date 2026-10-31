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
QItemSelectionRange* QItemSelectionRange_new2(struct miqt_qmodelindex topL, struct miqt_qmodelindex bottomR);
QItemSelectionRange* QItemSelectionRange_new3(struct miqt_qmodelindex index);
QItemSelectionRange* QItemSelectionRange_new4(QItemSelectionRange* param1);
void QItemSelectionRange_swap(QItemSelectionRange* self, QItemSelectionRange* other);
int QItemSelectionRange_top(const QItemSelectionRange* self);
int QItemSelectionRange_left(const QItemSelectionRange* self);
int QItemSelectionRange_bottom(const QItemSelectionRange* self);
int QItemSelectionRange_right(const QItemSelectionRange* self);
int QItemSelectionRange_width(const QItemSelectionRange* self);
int QItemSelectionRange_height(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_topLeft(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_bottomRight(const QItemSelectionRange* self);
struct miqt_qmodelindex QItemSelectionRange_parent(const QItemSelectionRange* self);
QAbstractItemModel* QItemSelectionRange_model(const QItemSelectionRange* self);
bool QItemSelectionRange_contains(const QItemSelectionRange* self, struct miqt_qmodelindex index);
bool QItemSelectionRange_contains2(const QItemSelectionRange* self, int row, int column, struct miqt_qmodelindex parentIndex);
bool QItemSelectionRange_intersects(const QItemSelectionRange* self, QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_intersected(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_operatorEqual(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_operatorNotEqual(const QItemSelectionRange* self, QItemSelectionRange* other);
bool QItemSelectionRange_isValid(const QItemSelectionRange* self);
bool QItemSelectionRange_isEmpty(const QItemSelectionRange* self);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionRange_indexes(const QItemSelectionRange* self);
void QItemSelectionRange_operatorAssign(QItemSelectionRange* self, QItemSelectionRange* param1);

void QItemSelectionRange_delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
void QItemSelectionModel_virtbase(QItemSelectionModel* src, QObject** outptr_QObject);
QMetaObject* QItemSelectionModel_metaObject(const QItemSelectionModel* self);
void* QItemSelectionModel_metacast(QItemSelectionModel* self, const char* param1);
struct miqt_string QItemSelectionModel_tr(const char* s);
struct miqt_qmodelindex QItemSelectionModel_currentIndex(const QItemSelectionModel* self);
bool QItemSelectionModel_isSelected(const QItemSelectionModel* self, struct miqt_qmodelindex index);
bool QItemSelectionModel_isRowSelected(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_isColumnSelected(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_rowIntersectsSelection(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_columnIntersectsSelection(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_hasSelection(const QItemSelectionModel* self);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionModel_selectedIndexes(const QItemSelectionModel* self);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionModel_selectedRows(const QItemSelectionModel* self);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionModel_selectedColumns(const QItemSelectionModel* self);
QItemSelection* QItemSelectionModel_selection(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_model(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_model2(QItemSelectionModel* self);
void QItemSelectionModel_setModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_setCurrentIndex(QItemSelectionModel* self, struct miqt_qmodelindex index, int command);
void QItemSelectionModel_select(QItemSelectionModel* self, struct miqt_qmodelindex index, int command);
void QItemSelectionModel_select2(QItemSelectionModel* self, QItemSelection* selection, int command);
void QItemSelectionModel_clear(QItemSelectionModel* self);
void QItemSelectionModel_reset(QItemSelectionModel* self);
void QItemSelectionModel_clearSelection(QItemSelectionModel* self);
void QItemSelectionModel_clearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_selectionChanged(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected);
void QItemSelectionModel_connect_selectionChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_currentChanged(QItemSelectionModel* self, struct miqt_qmodelindex current, struct miqt_qmodelindex previous);
void QItemSelectionModel_connect_currentChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_currentRowChanged(QItemSelectionModel* self, struct miqt_qmodelindex current, struct miqt_qmodelindex previous);
void QItemSelectionModel_connect_currentRowChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_currentColumnChanged(QItemSelectionModel* self, struct miqt_qmodelindex current, struct miqt_qmodelindex previous);
void QItemSelectionModel_connect_currentColumnChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_modelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_connect_modelChanged(QItemSelectionModel* self, intptr_t slot);
struct miqt_string QItemSelectionModel_tr2(const char* s, const char* c);
struct miqt_string QItemSelectionModel_tr3(const char* s, const char* c, int n);
bool QItemSelectionModel_isRowSelected2(const QItemSelectionModel* self, int row, struct miqt_qmodelindex parent);
bool QItemSelectionModel_isColumnSelected2(const QItemSelectionModel* self, int column, struct miqt_qmodelindex parent);
bool QItemSelectionModel_rowIntersectsSelection2(const QItemSelectionModel* self, int row, struct miqt_qmodelindex parent);
bool QItemSelectionModel_columnIntersectsSelection2(const QItemSelectionModel* self, int column, struct miqt_qmodelindex parent);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionModel_selectedRowsWithColumn(const QItemSelectionModel* self, int column);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelectionModel_selectedColumnsWithRow(const QItemSelectionModel* self, int row);

bool QItemSelectionModel_override_virtual_setCurrentIndex(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_setCurrentIndex(void* self, struct miqt_qmodelindex index, int command);
bool QItemSelectionModel_override_virtual_select(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_select(void* self, struct miqt_qmodelindex index, int command);
bool QItemSelectionModel_override_virtual_select2(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_select2(void* self, QItemSelection* selection, int command);
bool QItemSelectionModel_override_virtual_clear(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_clear(void* self);
bool QItemSelectionModel_override_virtual_reset(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_reset(void* self);
bool QItemSelectionModel_override_virtual_clearCurrentIndex(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_clearCurrentIndex(void* self);
bool QItemSelectionModel_override_virtual_event(void* self, intptr_t slot);
bool QItemSelectionModel_virtualbase_event(void* self, QEvent* event);
bool QItemSelectionModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QItemSelectionModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QItemSelectionModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QItemSelectionModel_override_virtual_childEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QItemSelectionModel_override_virtual_customEvent(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_customEvent(void* self, QEvent* event);
bool QItemSelectionModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QItemSelectionModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QItemSelectionModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection);
QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QItemSelectionModel_delete(QItemSelectionModel* self);

QItemSelection* QItemSelection_new(struct miqt_qmodelindex topLeft, struct miqt_qmodelindex bottomRight);
QItemSelection* QItemSelection_new2();
QItemSelection* QItemSelection_new3(QItemSelection* param1);
void QItemSelection_select(QItemSelection* self, struct miqt_qmodelindex topLeft, struct miqt_qmodelindex bottomRight);
bool QItemSelection_contains(const QItemSelection* self, struct miqt_qmodelindex index);
struct miqt_array /* of struct miqt_qmodelindex */  QItemSelection_indexes(const QItemSelection* self);
void QItemSelection_merge(QItemSelection* self, QItemSelection* other, int command);
void QItemSelection_split(QItemSelectionRange* range, QItemSelectionRange* other, QItemSelection* result);

void QItemSelection_delete(QItemSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
