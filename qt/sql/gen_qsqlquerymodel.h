#pragma once
#ifndef MIQT_QT_SQL_GEN_QSQLQUERYMODEL_H
#define MIQT_QT_SQL_GEN_QSQLQUERYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QAbstractTableModel;
class QChildEvent;
class QDataStream;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QSqlDatabase;
class QSqlError;
class QSqlQuery;
class QSqlQueryModel;
class QSqlRecord;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractTableModel QAbstractTableModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlError QSqlError;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlQueryModel QSqlQueryModel;
typedef struct QSqlRecord QSqlRecord;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSqlQueryModel* QSqlQueryModel_new();
QSqlQueryModel* QSqlQueryModel_new2(QObject* parent);
void QSqlQueryModel_virtbase(QSqlQueryModel* src, QAbstractTableModel** outptr_QAbstractTableModel);
QMetaObject* QSqlQueryModel_metaObject(const QSqlQueryModel* self);
void* QSqlQueryModel_metacast(QSqlQueryModel* self, const char* param1);
struct miqt_string QSqlQueryModel_tr(const char* s);
struct miqt_string QSqlQueryModel_trUtf8(const char* s);
int QSqlQueryModel_rowCount(const QSqlQueryModel* self, QModelIndex* parent);
int QSqlQueryModel_columnCount(const QSqlQueryModel* self, QModelIndex* parent);
QSqlRecord* QSqlQueryModel_record(const QSqlQueryModel* self, int row);
QSqlRecord* QSqlQueryModel_record2(const QSqlQueryModel* self);
QVariant* QSqlQueryModel_data(const QSqlQueryModel* self, QModelIndex* item, int role);
QVariant* QSqlQueryModel_headerData(const QSqlQueryModel* self, int section, int orientation, int role);
bool QSqlQueryModel_setHeaderData(QSqlQueryModel* self, int section, int orientation, QVariant* value, int role);
bool QSqlQueryModel_insertColumns(QSqlQueryModel* self, int column, int count, QModelIndex* parent);
bool QSqlQueryModel_removeColumns(QSqlQueryModel* self, int column, int count, QModelIndex* parent);
void QSqlQueryModel_setQuery(QSqlQueryModel* self, QSqlQuery* query);
void QSqlQueryModel_setQueryWithQuery(QSqlQueryModel* self, struct miqt_string query);
QSqlQuery* QSqlQueryModel_query(const QSqlQueryModel* self);
void QSqlQueryModel_clear(QSqlQueryModel* self);
QSqlError* QSqlQueryModel_lastError(const QSqlQueryModel* self);
void QSqlQueryModel_fetchMore(QSqlQueryModel* self, QModelIndex* parent);
bool QSqlQueryModel_canFetchMore(const QSqlQueryModel* self, QModelIndex* parent);
struct miqt_map /* of int to struct miqt_string */  QSqlQueryModel_roleNames(const QSqlQueryModel* self);
void QSqlQueryModel_queryChange(QSqlQueryModel* self);
QModelIndex* QSqlQueryModel_indexInQuery(const QSqlQueryModel* self, QModelIndex* item);
struct miqt_string QSqlQueryModel_tr2(const char* s, const char* c);
struct miqt_string QSqlQueryModel_tr3(const char* s, const char* c, int n);
struct miqt_string QSqlQueryModel_trUtf82(const char* s, const char* c);
struct miqt_string QSqlQueryModel_trUtf83(const char* s, const char* c, int n);
void QSqlQueryModel_setQuery2(QSqlQueryModel* self, struct miqt_string query, QSqlDatabase* db);

bool QSqlQueryModel_override_virtual_rowCount(void* self, intptr_t slot);
int QSqlQueryModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_columnCount(void* self, intptr_t slot);
int QSqlQueryModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QSqlQueryModel_virtualbase_data(const void* self, QModelIndex* item, int role);
bool QSqlQueryModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QSqlQueryModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QSqlQueryModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QSqlQueryModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_clear(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_clear(void* self);
bool QSqlQueryModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QSqlQueryModel_virtualbase_roleNames(const void* self);
bool QSqlQueryModel_override_virtual_queryChange(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_queryChange(void* self);
bool QSqlQueryModel_override_virtual_indexInQuery(void* self, intptr_t slot);
QModelIndex* QSqlQueryModel_virtualbase_indexInQuery(const void* self, QModelIndex* item);
bool QSqlQueryModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QSqlQueryModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QSqlQueryModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QSqlQueryModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_flags(void* self, intptr_t slot);
int QSqlQueryModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QSqlQueryModel_override_virtual_setData(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QSqlQueryModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QSqlQueryModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QSqlQueryModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QSqlQueryModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSqlQueryModel_virtualbase_mimeTypes(const void* self);
bool QSqlQueryModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QSqlQueryModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSqlQueryModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QSqlQueryModel_virtualbase_supportedDropActions(const void* self);
bool QSqlQueryModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QSqlQueryModel_virtualbase_supportedDragActions(const void* self);
bool QSqlQueryModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlQueryModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlQueryModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlQueryModel_override_virtual_sort(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_sort(void* self, int column, int order);
bool QSqlQueryModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QSqlQueryModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QSqlQueryModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QSqlQueryModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QSqlQueryModel_override_virtual_span(void* self, intptr_t slot);
QSize* QSqlQueryModel_virtualbase_span(const void* self, QModelIndex* index);
bool QSqlQueryModel_override_virtual_submit(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_submit(void* self);
bool QSqlQueryModel_override_virtual_revert(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_revert(void* self);
bool QSqlQueryModel_override_virtual_event(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_event(void* self, QEvent* event);
bool QSqlQueryModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSqlQueryModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSqlQueryModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSqlQueryModel_override_virtual_childEvent(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSqlQueryModel_override_virtual_customEvent(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_customEvent(void* self, QEvent* event);
bool QSqlQueryModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSqlQueryModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSqlQueryModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSqlQueryModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlQueryModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlQueryModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlQueryModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlQueryModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error);
void QSqlQueryModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QSqlQueryModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QSqlQueryModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QSqlQueryModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
bool QSqlQueryModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QSqlQueryModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
bool QSqlQueryModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QSqlQueryModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlQueryModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QSqlQueryModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QSqlQueryModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QSqlQueryModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSqlQueryModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSqlQueryModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSqlQueryModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSqlQueryModel_delete(QSqlQueryModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
