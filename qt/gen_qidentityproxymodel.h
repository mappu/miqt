#pragma once
#ifndef MIQT_QT_GEN_QIDENTITYPROXYMODEL_H
#define MIQT_QT_GEN_QIDENTITYPROXYMODEL_H

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
class QDataStream;
class QEvent;
class QIdentityProxyModel;
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
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QIdentityProxyModel QIdentityProxyModel;
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

QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
void QIdentityProxyModel_virtbase(QIdentityProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QIdentityProxyModel_metaObject(const QIdentityProxyModel* self);
void* QIdentityProxyModel_metacast(QIdentityProxyModel* self, const char* param1);
struct miqt_string QIdentityProxyModel_tr(const char* s);
struct miqt_string QIdentityProxyModel_trUtf8(const char* s);
int QIdentityProxyModel_columnCount(const QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_mapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_mapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_parent(const QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_rowCount(const QIdentityProxyModel* self, QModelIndex* parent);
QVariant* QIdentityProxyModel_headerData(const QIdentityProxyModel* self, int section, int orientation, int role);
bool QIdentityProxyModel_dropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
QItemSelection* QIdentityProxyModel_mapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection);
QItemSelection* QIdentityProxyModel_mapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QIdentityProxyModel_setSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_insertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_insertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_removeColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_removeRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_moveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_moveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_string QIdentityProxyModel_tr2(const char* s, const char* c);
struct miqt_string QIdentityProxyModel_tr3(const char* s, const char* c, int n);
struct miqt_string QIdentityProxyModel_trUtf82(const char* s, const char* c);
struct miqt_string QIdentityProxyModel_trUtf83(const char* s, const char* c, int n);
bool QIdentityProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);
bool QIdentityProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);
bool QIdentityProxyModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QIdentityProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QIdentityProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QIdentityProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QIdentityProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);
bool QIdentityProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);
bool QIdentityProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QIdentityProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_override_virtual_submit(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_submit(void* self);
bool QIdentityProxyModel_override_virtual_revert(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_revert(void* self);
bool QIdentityProxyModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QIdentityProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);
bool QIdentityProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QIdentityProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QIdentityProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QIdentityProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QIdentityProxyModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_sort(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_sort(void* self, int column, int order);
bool QIdentityProxyModel_override_virtual_span(void* self, intptr_t slot);
QSize* QIdentityProxyModel_virtualbase_span(const void* self, QModelIndex* index);
bool QIdentityProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QIdentityProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QIdentityProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QIdentityProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QIdentityProxyModel_virtualbase_mimeTypes(const void* self);
bool QIdentityProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_supportedDragActions(const void* self);
bool QIdentityProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QIdentityProxyModel_virtualbase_supportedDropActions(const void* self);
bool QIdentityProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QIdentityProxyModel_virtualbase_roleNames(const void* self);
bool QIdentityProxyModel_override_virtual_event(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_event(void* self, QEvent* event);
bool QIdentityProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QIdentityProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QIdentityProxyModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QIdentityProxyModel_override_virtual_childEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QIdentityProxyModel_override_virtual_customEvent(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_customEvent(void* self, QEvent* event);
bool QIdentityProxyModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QIdentityProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QIdentityProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QIdentityProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QIdentityProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QIdentityProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QIdentityProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QIdentityProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QIdentityProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QIdentityProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QIdentityProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QIdentityProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QIdentityProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QIdentityProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QIdentityProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QIdentityProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QIdentityProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QIdentityProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QIdentityProxyModel_delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
