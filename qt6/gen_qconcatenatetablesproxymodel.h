#pragma once
#ifndef MIQT_QT6_GEN_QCONCATENATETABLESPROXYMODEL_H
#define MIQT_QT6_GEN_QCONCATENATETABLESPROXYMODEL_H

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
class QConcatenateTablesProxyModel;
class QDataStream;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QConcatenateTablesProxyModel QConcatenateTablesProxyModel;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new();
QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent);
void QConcatenateTablesProxyModel_virtbase(QConcatenateTablesProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QConcatenateTablesProxyModel_metaObject(const QConcatenateTablesProxyModel* self);
void* QConcatenateTablesProxyModel_metacast(QConcatenateTablesProxyModel* self, const char* param1);
struct miqt_string QConcatenateTablesProxyModel_tr(const char* s);
struct miqt_array /* of QAbstractItemModel* */  QConcatenateTablesProxyModel_sourceModels(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_addSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
void QConcatenateTablesProxyModel_removeSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QConcatenateTablesProxyModel_mapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QConcatenateTablesProxyModel_mapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
QVariant* QConcatenateTablesProxyModel_data(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_setData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role);
struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_itemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
bool QConcatenateTablesProxyModel_setItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
int QConcatenateTablesProxyModel_flags(const QConcatenateTablesProxyModel* self, QModelIndex* index);
QModelIndex* QConcatenateTablesProxyModel_index(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QConcatenateTablesProxyModel_parent(const QConcatenateTablesProxyModel* self, QModelIndex* index);
int QConcatenateTablesProxyModel_rowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
QVariant* QConcatenateTablesProxyModel_headerData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
int QConcatenateTablesProxyModel_columnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_mimeTypes(const QConcatenateTablesProxyModel* self);
QMimeData* QConcatenateTablesProxyModel_mimeData(const QConcatenateTablesProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QConcatenateTablesProxyModel_canDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_dropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QSize* QConcatenateTablesProxyModel_span(const QConcatenateTablesProxyModel* self, QModelIndex* index);
struct miqt_string QConcatenateTablesProxyModel_tr2(const char* s, const char* c);
struct miqt_string QConcatenateTablesProxyModel_tr3(const char* s, const char* c, int n);

bool QConcatenateTablesProxyModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QConcatenateTablesProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_virtualbase_itemData(const void* self, QModelIndex* proxyIndex);
bool QConcatenateTablesProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QConcatenateTablesProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_parent(const void* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QConcatenateTablesProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_mimeTypes(const void* self);
bool QConcatenateTablesProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QConcatenateTablesProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QConcatenateTablesProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_span(void* self, intptr_t slot);
QSize* QConcatenateTablesProxyModel_virtualbase_span(const void* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QConcatenateTablesProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QConcatenateTablesProxyModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_supportedDropActions(const void* self);
bool QConcatenateTablesProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QConcatenateTablesProxyModel_virtualbase_supportedDragActions(const void* self);
bool QConcatenateTablesProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QConcatenateTablesProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QConcatenateTablesProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_override_virtual_sort(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_sort(void* self, int column, int order);
bool QConcatenateTablesProxyModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QConcatenateTablesProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_roleNames(const void* self);
bool QConcatenateTablesProxyModel_override_virtual_multiData(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QConcatenateTablesProxyModel_override_virtual_submit(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_submit(void* self);
bool QConcatenateTablesProxyModel_override_virtual_revert(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_revert(void* self);
bool QConcatenateTablesProxyModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_resetInternalData(void* self);
bool QConcatenateTablesProxyModel_override_virtual_event(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_event(void* self, QEvent* event);
bool QConcatenateTablesProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QConcatenateTablesProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QConcatenateTablesProxyModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QConcatenateTablesProxyModel_override_virtual_childEvent(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QConcatenateTablesProxyModel_override_virtual_customEvent(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_customEvent(void* self, QEvent* event);
bool QConcatenateTablesProxyModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QConcatenateTablesProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QConcatenateTablesProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QModelIndex* QConcatenateTablesProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QConcatenateTablesProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QConcatenateTablesProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QConcatenateTablesProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QConcatenateTablesProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QConcatenateTablesProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QConcatenateTablesProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QConcatenateTablesProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QConcatenateTablesProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QConcatenateTablesProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QConcatenateTablesProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QConcatenateTablesProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QConcatenateTablesProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QConcatenateTablesProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QConcatenateTablesProxyModel_delete(QConcatenateTablesProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
