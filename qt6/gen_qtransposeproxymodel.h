#pragma once
#ifndef MIQT_QT6_GEN_QTRANSPOSEPROXYMODEL_H
#define MIQT_QT6_GEN_QTRANSPOSEPROXYMODEL_H

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
class QItemSelection;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QTimerEvent;
class QTransposeProxyModel;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
#endif

QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
void QTransposeProxyModel_virtbase(QTransposeProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QTransposeProxyModel_metaObject(const QTransposeProxyModel* self);
void* QTransposeProxyModel_metacast(QTransposeProxyModel* self, const char* param1);
struct miqt_string QTransposeProxyModel_tr(const char* s);
void QTransposeProxyModel_setSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_rowCount(const QTransposeProxyModel* self, QModelIndex* parent);
int QTransposeProxyModel_columnCount(const QTransposeProxyModel* self, QModelIndex* parent);
QVariant* QTransposeProxyModel_headerData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_setHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_setItemData(QTransposeProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
QSize* QTransposeProxyModel_span(const QTransposeProxyModel* self, QModelIndex* index);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_itemData(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_mapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_mapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_parent(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_index(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_insertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_removeRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_moveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_insertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_removeColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_moveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_sort(QTransposeProxyModel* self, int column, int order);
struct miqt_string QTransposeProxyModel_tr2(const char* s, const char* c);
struct miqt_string QTransposeProxyModel_tr3(const char* s, const char* c, int n);
bool QTransposeProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* newSourceModel);
bool QTransposeProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QTransposeProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QTransposeProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QTransposeProxyModel_override_virtual_span(void* self, intptr_t slot);
QSize* QTransposeProxyModel_virtualbase_span(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);
bool QTransposeProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);
bool QTransposeProxyModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_parent(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_override_virtual_sort(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_sort(void* self, int column, int order);
bool QTransposeProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);
bool QTransposeProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);
bool QTransposeProxyModel_override_virtual_submit(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_submit(void* self);
bool QTransposeProxyModel_override_virtual_revert(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_revert(void* self);
bool QTransposeProxyModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QTransposeProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);
bool QTransposeProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QTransposeProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QTransposeProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QTransposeProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_mimeTypes(const void* self);
bool QTransposeProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_supportedDragActions(const void* self);
bool QTransposeProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_supportedDropActions(const void* self);
bool QTransposeProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_roleNames(const void* self);
bool QTransposeProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QTransposeProxyModel_override_virtual_multiData(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QTransposeProxyModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_resetInternalData(void* self);
bool QTransposeProxyModel_override_virtual_event(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_event(void* self, QEvent* event);
bool QTransposeProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTransposeProxyModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTransposeProxyModel_override_virtual_childEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTransposeProxyModel_override_virtual_customEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_customEvent(void* self, QEvent* event);
bool QTransposeProxyModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTransposeProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTransposeProxyModel_delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
