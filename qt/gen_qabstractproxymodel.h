#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTPROXYMODEL_H
#define MIQT_QT_GEN_QABSTRACTPROXYMODEL_H

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
class QObject;
class QSize;
class QTimerEvent;
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
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractProxyModel* QAbstractProxyModel_new();
QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent);
void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QAbstractProxyModel_metaObject(const QAbstractProxyModel* self);
void* QAbstractProxyModel_metacast(QAbstractProxyModel* self, const char* param1);
struct miqt_string QAbstractProxyModel_tr(const char* s);
struct miqt_string QAbstractProxyModel_trUtf8(const char* s);
void QAbstractProxyModel_setSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_sourceModel(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_mapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_mapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex);
QItemSelection* QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection);
QItemSelection* QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection);
bool QAbstractProxyModel_submit(QAbstractProxyModel* self);
void QAbstractProxyModel_revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role);
QVariant* QAbstractProxyModel_headerData(const QAbstractProxyModel* self, int section, int orientation, int role);
struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_itemData(const QAbstractProxyModel* self, QModelIndex* index);
int QAbstractProxyModel_flags(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_setData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_setItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QAbstractProxyModel_setHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role);
QModelIndex* QAbstractProxyModel_buddy(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_canFetchMore(const QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_fetchMore(QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_sort(QAbstractProxyModel* self, int column, int order);
QSize* QAbstractProxyModel_span(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_hasChildren(const QAbstractProxyModel* self, QModelIndex* parent);
QModelIndex* QAbstractProxyModel_sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx);
QMimeData* QAbstractProxyModel_mimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_dropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_mimeTypes(const QAbstractProxyModel* self);
int QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel* self);
int QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel* self);
struct miqt_string QAbstractProxyModel_tr2(const char* s, const char* c);
struct miqt_string QAbstractProxyModel_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractProxyModel_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractProxyModel_trUtf83(const char* s, const char* c, int n);
bool QAbstractProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);
bool QAbstractProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);
bool QAbstractProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);
bool QAbstractProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);
bool QAbstractProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);
bool QAbstractProxyModel_override_virtual_submit(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_submit(void* self);
bool QAbstractProxyModel_override_virtual_revert(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_revert(void* self);
bool QAbstractProxyModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);
bool QAbstractProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QAbstractProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QAbstractProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QAbstractProxyModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_sort(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order);
bool QAbstractProxyModel_override_virtual_span(void* self, intptr_t slot);
QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QAbstractProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QAbstractProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self);
bool QAbstractProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self);
bool QAbstractProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self);
bool QAbstractProxyModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QAbstractProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QAbstractProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self);
bool QAbstractProxyModel_override_virtual_event(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event);
bool QAbstractProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractProxyModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractProxyModel_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractProxyModel_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractProxyModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractProxyModel_delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
