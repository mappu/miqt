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
class QDataStream;
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
typedef struct QDataStream QDataStream;
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
int QTransposeProxyModel_rowCount(const QTransposeProxyModel* self, struct miqt_qmodelindex parent);
int QTransposeProxyModel_columnCount(const QTransposeProxyModel* self, struct miqt_qmodelindex parent);
QVariant* QTransposeProxyModel_headerData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_setHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_setItemData(QTransposeProxyModel* self, struct miqt_qmodelindex index, struct miqt_map /* of int to QVariant* */  roles);
struct miqt_qsize QTransposeProxyModel_span(const QTransposeProxyModel* self, struct miqt_qmodelindex index);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_itemData(const QTransposeProxyModel* self, struct miqt_qmodelindex index);
struct miqt_qmodelindex QTransposeProxyModel_mapFromSource(const QTransposeProxyModel* self, struct miqt_qmodelindex sourceIndex);
struct miqt_qmodelindex QTransposeProxyModel_mapToSource(const QTransposeProxyModel* self, struct miqt_qmodelindex proxyIndex);
struct miqt_qmodelindex QTransposeProxyModel_parent(const QTransposeProxyModel* self, struct miqt_qmodelindex index);
struct miqt_qmodelindex QTransposeProxyModel_index(const QTransposeProxyModel* self, int row, int column, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_insertRows(QTransposeProxyModel* self, int row, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_removeRows(QTransposeProxyModel* self, int row, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_moveRows(QTransposeProxyModel* self, struct miqt_qmodelindex sourceParent, int sourceRow, int count, struct miqt_qmodelindex destinationParent, int destinationChild);
bool QTransposeProxyModel_insertColumns(QTransposeProxyModel* self, int column, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_removeColumns(QTransposeProxyModel* self, int column, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_moveColumns(QTransposeProxyModel* self, struct miqt_qmodelindex sourceParent, int sourceColumn, int count, struct miqt_qmodelindex destinationParent, int destinationChild);
void QTransposeProxyModel_sort(QTransposeProxyModel* self, int column, int order);
struct miqt_string QTransposeProxyModel_tr2(const char* s, const char* c);
struct miqt_string QTransposeProxyModel_tr3(const char* s, const char* c, int n);

bool QTransposeProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* newSourceModel);
bool QTransposeProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_rowCount(const void* self, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_columnCount(const void* self, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QTransposeProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QTransposeProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setItemData(void* self, struct miqt_qmodelindex index, struct miqt_map /* of int to QVariant* */  roles);
bool QTransposeProxyModel_override_virtual_span(void* self, intptr_t slot);
struct miqt_qsize QTransposeProxyModel_virtualbase_span(const void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_itemData(const void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_mapFromSource(const void* self, struct miqt_qmodelindex sourceIndex);
bool QTransposeProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_mapToSource(const void* self, struct miqt_qmodelindex proxyIndex);
bool QTransposeProxyModel_override_virtual_parent(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_parent(const void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_index(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_index(const void* self, int row, int column, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_insertRows(void* self, int row, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_removeRows(void* self, int row, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_moveRows(void* self, struct miqt_qmodelindex sourceParent, int sourceRow, int count, struct miqt_qmodelindex destinationParent, int destinationChild);
bool QTransposeProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_insertColumns(void* self, int column, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_removeColumns(void* self, int column, int count, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_moveColumns(void* self, struct miqt_qmodelindex sourceParent, int sourceColumn, int count, struct miqt_qmodelindex destinationParent, int destinationChild);
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
QVariant* QTransposeProxyModel_virtualbase_data(const void* self, struct miqt_qmodelindex proxyIndex, int role);
bool QTransposeProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_flags(const void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_setData(void* self, struct miqt_qmodelindex index, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_clearItemData(void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_buddy(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_buddy(const void* self, struct miqt_qmodelindex index);
bool QTransposeProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_canFetchMore(const void* self, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_fetchMore(void* self, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_hasChildren(const void* self, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_sibling(void* self, intptr_t slot);
struct miqt_qmodelindex QTransposeProxyModel_virtualbase_sibling(const void* self, int row, int column, struct miqt_qmodelindex idx);
bool QTransposeProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QTransposeProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of struct miqt_qmodelindex */  indexes);
bool QTransposeProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, struct miqt_qmodelindex parent);
bool QTransposeProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_mimeTypes(const void* self);
bool QTransposeProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_supportedDragActions(const void* self);
bool QTransposeProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_supportedDropActions(const void* self);
bool QTransposeProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_roleNames(const void* self);
bool QTransposeProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_qmodelindex */  QTransposeProxyModel_virtualbase_match(const void* self, struct miqt_qmodelindex start, int role, QVariant* value, int hits, int flags);
bool QTransposeProxyModel_override_virtual_multiData(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_multiData(const void* self, struct miqt_qmodelindex index, QModelRoleDataSpan* roleDataSpan);
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
QVariant* QTransposeProxyModel_virtualreturncopy_QVariant(QVariant* src);
QItemSelection* QTransposeProxyModel_virtualreturncopy_QItemSelection(QItemSelection* src);

struct miqt_qmodelindex QTransposeProxyModel_protectedbase_createSourceIndex(bool* _dynamic_cast_ok, const void* self, int row, int col, void* internalPtr);
struct miqt_qmodelindex QTransposeProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QTransposeProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of struct miqt_qmodelindex */  indexes, QDataStream* stream);
bool QTransposeProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, struct miqt_qmodelindex parent, QDataStream* stream);
void QTransposeProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex parent, int first, int last);
void QTransposeProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex parent, int first, int last);
void QTransposeProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QTransposeProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex sourceParent, int sourceFirst, int sourceLast, struct miqt_qmodelindex destinationParent, int destinationRow);
void QTransposeProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex parent, int first, int last);
void QTransposeProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex parent, int first, int last);
void QTransposeProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QTransposeProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex sourceParent, int sourceFirst, int sourceLast, struct miqt_qmodelindex destinationParent, int destinationColumn);
void QTransposeProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QTransposeProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, struct miqt_qmodelindex from, struct miqt_qmodelindex to);
void QTransposeProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of struct miqt_qmodelindex */  from, struct miqt_array /* of struct miqt_qmodelindex */  to);
struct miqt_array /* of struct miqt_qmodelindex */  QTransposeProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QTransposeProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTransposeProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTransposeProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTransposeProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QTransposeProxyModel_delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
