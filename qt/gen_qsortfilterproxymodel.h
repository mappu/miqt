#pragma once
#ifndef MIQT_QT_GEN_QSORTFILTERPROXYMODEL_H
#define MIQT_QT_GEN_QSORTFILTERPROXYMODEL_H

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
class QObject;
class QRegExp;
class QRegularExpression;
class QSize;
class QSortFilterProxyModel;
class QTimerEvent;
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
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSize QSize;
typedef struct QSortFilterProxyModel QSortFilterProxyModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSortFilterProxyModel* QSortFilterProxyModel_new();
QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent);
void QSortFilterProxyModel_virtbase(QSortFilterProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QSortFilterProxyModel_metaObject(const QSortFilterProxyModel* self);
void* QSortFilterProxyModel_metacast(QSortFilterProxyModel* self, const char* param1);
struct miqt_string QSortFilterProxyModel_tr(const char* s);
struct miqt_string QSortFilterProxyModel_trUtf8(const char* s);
void QSortFilterProxyModel_setSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QSortFilterProxyModel_mapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QSortFilterProxyModel_mapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex);
QItemSelection* QSortFilterProxyModel_mapSelectionToSource(const QSortFilterProxyModel* self, QItemSelection* proxySelection);
QItemSelection* QSortFilterProxyModel_mapSelectionFromSource(const QSortFilterProxyModel* self, QItemSelection* sourceSelection);
QRegExp* QSortFilterProxyModel_filterRegExp(const QSortFilterProxyModel* self);
QRegularExpression* QSortFilterProxyModel_filterRegularExpression(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_filterKeyColumn(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setFilterKeyColumn(QSortFilterProxyModel* self, int column);
int QSortFilterProxyModel_filterCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setFilterCaseSensitivity(QSortFilterProxyModel* self, int cs);
int QSortFilterProxyModel_sortCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setSortCaseSensitivity(QSortFilterProxyModel* self, int cs);
bool QSortFilterProxyModel_isSortLocaleAware(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setSortLocaleAware(QSortFilterProxyModel* self, bool on);
int QSortFilterProxyModel_sortColumn(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_sortOrder(const QSortFilterProxyModel* self);
bool QSortFilterProxyModel_dynamicSortFilter(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setDynamicSortFilter(QSortFilterProxyModel* self, bool enable);
int QSortFilterProxyModel_sortRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setSortRole(QSortFilterProxyModel* self, int role);
int QSortFilterProxyModel_filterRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setFilterRole(QSortFilterProxyModel* self, int role);
bool QSortFilterProxyModel_isRecursiveFilteringEnabled(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_setRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive);
void QSortFilterProxyModel_setFilterRegExp(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_setFilterRegExpWithRegExp(QSortFilterProxyModel* self, QRegExp* regExp);
void QSortFilterProxyModel_setFilterRegularExpression(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_setFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression);
void QSortFilterProxyModel_setFilterWildcard(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_setFilterFixedString(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_clear(QSortFilterProxyModel* self);
void QSortFilterProxyModel_invalidate(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_filterAcceptsRow(const QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent);
bool QSortFilterProxyModel_filterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent);
bool QSortFilterProxyModel_lessThan(const QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right);
QModelIndex* QSortFilterProxyModel_index(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QSortFilterProxyModel_parent(const QSortFilterProxyModel* self, QModelIndex* child);
QModelIndex* QSortFilterProxyModel_sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx);
int QSortFilterProxyModel_rowCount(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_columnCount(const QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_hasChildren(const QSortFilterProxyModel* self, QModelIndex* parent);
QVariant* QSortFilterProxyModel_data(const QSortFilterProxyModel* self, QModelIndex* index, int role);
bool QSortFilterProxyModel_setData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QSortFilterProxyModel_headerData(const QSortFilterProxyModel* self, int section, int orientation, int role);
bool QSortFilterProxyModel_setHeaderData(QSortFilterProxyModel* self, int section, int orientation, QVariant* value, int role);
QMimeData* QSortFilterProxyModel_mimeData(const QSortFilterProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSortFilterProxyModel_dropMimeData(QSortFilterProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_insertRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_insertColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
bool QSortFilterProxyModel_removeRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_removeColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
void QSortFilterProxyModel_fetchMore(QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_canFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_flags(const QSortFilterProxyModel* self, QModelIndex* index);
QModelIndex* QSortFilterProxyModel_buddy(const QSortFilterProxyModel* self, QModelIndex* index);
struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
QSize* QSortFilterProxyModel_span(const QSortFilterProxyModel* self, QModelIndex* index);
void QSortFilterProxyModel_sort(QSortFilterProxyModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_mimeTypes(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_supportedDropActions(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_dynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter);
void QSortFilterProxyModel_connect_dynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_filterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity);
void QSortFilterProxyModel_connect_filterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_sortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity);
void QSortFilterProxyModel_connect_sortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_sortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware);
void QSortFilterProxyModel_connect_sortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_sortRoleChanged(QSortFilterProxyModel* self, int sortRole);
void QSortFilterProxyModel_connect_sortRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_filterRoleChanged(QSortFilterProxyModel* self, int filterRole);
void QSortFilterProxyModel_connect_filterRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_recursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled);
void QSortFilterProxyModel_connect_recursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot);
struct miqt_string QSortFilterProxyModel_tr2(const char* s, const char* c);
struct miqt_string QSortFilterProxyModel_tr3(const char* s, const char* c, int n);
struct miqt_string QSortFilterProxyModel_trUtf82(const char* s, const char* c);
struct miqt_string QSortFilterProxyModel_trUtf83(const char* s, const char* c, int n);

bool QSortFilterProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);
bool QSortFilterProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);
bool QSortFilterProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);
bool QSortFilterProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* proxySelection);
bool QSortFilterProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* sourceSelection);
bool QSortFilterProxyModel_override_virtual_filterAcceptsRow(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_filterAcceptsRow(const void* self, int source_row, QModelIndex* source_parent);
bool QSortFilterProxyModel_override_virtual_filterAcceptsColumn(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_filterAcceptsColumn(const void* self, int source_column, QModelIndex* source_parent);
bool QSortFilterProxyModel_override_virtual_lessThan(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_lessThan(const void* self, QModelIndex* source_left, QModelIndex* source_right);
bool QSortFilterProxyModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QSortFilterProxyModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QSortFilterProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QSortFilterProxyModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QSortFilterProxyModel_override_virtual_setData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QSortFilterProxyModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QSortFilterProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QSortFilterProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QSortFilterProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QSortFilterProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSortFilterProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_flags(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QSortFilterProxyModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QSortFilterProxyModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QSortFilterProxyModel_override_virtual_span(void* self, intptr_t slot);
QSize* QSortFilterProxyModel_virtualbase_span(const void* self, QModelIndex* index);
bool QSortFilterProxyModel_override_virtual_sort(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_sort(void* self, int column, int order);
bool QSortFilterProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_virtualbase_mimeTypes(const void* self);
bool QSortFilterProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_supportedDropActions(const void* self);
bool QSortFilterProxyModel_override_virtual_submit(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_submit(void* self);
bool QSortFilterProxyModel_override_virtual_revert(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_revert(void* self);
bool QSortFilterProxyModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QSortFilterProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QSortFilterProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QSortFilterProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_supportedDragActions(const void* self);
bool QSortFilterProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QSortFilterProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QSortFilterProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QSortFilterProxyModel_virtualbase_roleNames(const void* self);
bool QSortFilterProxyModel_override_virtual_event(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_event(void* self, QEvent* event);
bool QSortFilterProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSortFilterProxyModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSortFilterProxyModel_override_virtual_childEvent(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSortFilterProxyModel_override_virtual_customEvent(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_customEvent(void* self, QEvent* event);
bool QSortFilterProxyModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSortFilterProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSortFilterProxyModel_protectedbase_filterChanged(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_invalidateFilter(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QSortFilterProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QSortFilterProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QSortFilterProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QSortFilterProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSortFilterProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSortFilterProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QSortFilterProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QSortFilterProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSortFilterProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSortFilterProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QSortFilterProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QSortFilterProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QSortFilterProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QSortFilterProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QSortFilterProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSortFilterProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSortFilterProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSortFilterProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSortFilterProxyModel_delete(QSortFilterProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
