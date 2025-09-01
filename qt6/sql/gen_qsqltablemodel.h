#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLTABLEMODEL_H
#define MIQT_QT6_SQL_GEN_QSQLTABLEMODEL_H

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
class QModelRoleDataSpan;
class QObject;
class QSize;
class QSqlDatabase;
class QSqlError;
class QSqlIndex;
class QSqlQuery;
class QSqlQueryModel;
class QSqlRecord;
class QSqlTableModel;
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
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlError QSqlError;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlQueryModel QSqlQueryModel;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlTableModel QSqlTableModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSqlTableModel* QSqlTableModel_new();
QSqlTableModel* QSqlTableModel_new2(QObject* parent);
QSqlTableModel* QSqlTableModel_new3(QObject* parent, QSqlDatabase* db);
void QSqlTableModel_virtbase(QSqlTableModel* src, QSqlQueryModel** outptr_QSqlQueryModel);
QMetaObject* QSqlTableModel_metaObject(const QSqlTableModel* self);
void* QSqlTableModel_metacast(QSqlTableModel* self, const char* param1);
struct miqt_string QSqlTableModel_tr(const char* s);
void QSqlTableModel_setTable(QSqlTableModel* self, struct miqt_string tableName);
struct miqt_string QSqlTableModel_tableName(const QSqlTableModel* self);
int QSqlTableModel_flags(const QSqlTableModel* self, QModelIndex* index);
QSqlRecord* QSqlTableModel_record(const QSqlTableModel* self);
QSqlRecord* QSqlTableModel_recordWithRow(const QSqlTableModel* self, int row);
QVariant* QSqlTableModel_data(const QSqlTableModel* self, QModelIndex* idx, int role);
bool QSqlTableModel_setData(QSqlTableModel* self, QModelIndex* index, QVariant* value, int role);
bool QSqlTableModel_clearItemData(QSqlTableModel* self, QModelIndex* index);
QVariant* QSqlTableModel_headerData(const QSqlTableModel* self, int section, int orientation, int role);
bool QSqlTableModel_isDirty(const QSqlTableModel* self);
bool QSqlTableModel_isDirtyWithIndex(const QSqlTableModel* self, QModelIndex* index);
void QSqlTableModel_clear(QSqlTableModel* self);
void QSqlTableModel_setEditStrategy(QSqlTableModel* self, int strategy);
int QSqlTableModel_editStrategy(const QSqlTableModel* self);
QSqlIndex* QSqlTableModel_primaryKey(const QSqlTableModel* self);
QSqlDatabase* QSqlTableModel_database(const QSqlTableModel* self);
int QSqlTableModel_fieldIndex(const QSqlTableModel* self, struct miqt_string fieldName);
void QSqlTableModel_sort(QSqlTableModel* self, int column, int order);
void QSqlTableModel_setSort(QSqlTableModel* self, int column, int order);
struct miqt_string QSqlTableModel_filter(const QSqlTableModel* self);
void QSqlTableModel_setFilter(QSqlTableModel* self, struct miqt_string filter);
int QSqlTableModel_rowCount(const QSqlTableModel* self, QModelIndex* parent);
bool QSqlTableModel_removeColumns(QSqlTableModel* self, int column, int count, QModelIndex* parent);
bool QSqlTableModel_removeRows(QSqlTableModel* self, int row, int count, QModelIndex* parent);
bool QSqlTableModel_insertRows(QSqlTableModel* self, int row, int count, QModelIndex* parent);
bool QSqlTableModel_insertRecord(QSqlTableModel* self, int row, QSqlRecord* record);
bool QSqlTableModel_setRecord(QSqlTableModel* self, int row, QSqlRecord* record);
void QSqlTableModel_revertRow(QSqlTableModel* self, int row);
bool QSqlTableModel_select(QSqlTableModel* self);
bool QSqlTableModel_selectRow(QSqlTableModel* self, int row);
bool QSqlTableModel_submit(QSqlTableModel* self);
void QSqlTableModel_revert(QSqlTableModel* self);
bool QSqlTableModel_submitAll(QSqlTableModel* self);
void QSqlTableModel_revertAll(QSqlTableModel* self);
void QSqlTableModel_primeInsert(QSqlTableModel* self, int row, QSqlRecord* record);
void QSqlTableModel_connect_primeInsert(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_beforeInsert(QSqlTableModel* self, QSqlRecord* record);
void QSqlTableModel_connect_beforeInsert(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_beforeUpdate(QSqlTableModel* self, int row, QSqlRecord* record);
void QSqlTableModel_connect_beforeUpdate(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_beforeDelete(QSqlTableModel* self, int row);
void QSqlTableModel_connect_beforeDelete(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_updateRowInTable(QSqlTableModel* self, int row, QSqlRecord* values);
bool QSqlTableModel_insertRowIntoTable(QSqlTableModel* self, QSqlRecord* values);
bool QSqlTableModel_deleteRowFromTable(QSqlTableModel* self, int row);
struct miqt_string QSqlTableModel_orderByClause(const QSqlTableModel* self);
struct miqt_string QSqlTableModel_selectStatement(const QSqlTableModel* self);
QModelIndex* QSqlTableModel_indexInQuery(const QSqlTableModel* self, QModelIndex* item);
struct miqt_string QSqlTableModel_tr2(const char* s, const char* c);
struct miqt_string QSqlTableModel_tr3(const char* s, const char* c, int n);

bool QSqlTableModel_override_virtual_setTable(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_setTable(void* self, struct miqt_string tableName);
bool QSqlTableModel_override_virtual_flags(void* self, intptr_t slot);
int QSqlTableModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QSqlTableModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QSqlTableModel_virtualbase_data(const void* self, QModelIndex* idx, int role);
bool QSqlTableModel_override_virtual_setData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QSqlTableModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QSqlTableModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QSqlTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QSqlTableModel_override_virtual_clear(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_clear(void* self);
bool QSqlTableModel_override_virtual_setEditStrategy(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_setEditStrategy(void* self, int strategy);
bool QSqlTableModel_override_virtual_sort(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_sort(void* self, int column, int order);
bool QSqlTableModel_override_virtual_setSort(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_setSort(void* self, int column, int order);
bool QSqlTableModel_override_virtual_setFilter(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_setFilter(void* self, struct miqt_string filter);
bool QSqlTableModel_override_virtual_rowCount(void* self, intptr_t slot);
int QSqlTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QSqlTableModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlTableModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlTableModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlTableModel_override_virtual_revertRow(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_revertRow(void* self, int row);
bool QSqlTableModel_override_virtual_select(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_select(void* self);
bool QSqlTableModel_override_virtual_selectRow(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_selectRow(void* self, int row);
bool QSqlTableModel_override_virtual_submit(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_submit(void* self);
bool QSqlTableModel_override_virtual_revert(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_revert(void* self);
bool QSqlTableModel_override_virtual_updateRowInTable(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values);
bool QSqlTableModel_override_virtual_insertRowIntoTable(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values);
bool QSqlTableModel_override_virtual_deleteRowFromTable(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_deleteRowFromTable(void* self, int row);
bool QSqlTableModel_override_virtual_orderByClause(void* self, intptr_t slot);
struct miqt_string QSqlTableModel_virtualbase_orderByClause(const void* self);
bool QSqlTableModel_override_virtual_selectStatement(void* self, intptr_t slot);
struct miqt_string QSqlTableModel_virtualbase_selectStatement(const void* self);
bool QSqlTableModel_override_virtual_indexInQuery(void* self, intptr_t slot);
QModelIndex* QSqlTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item);
bool QSqlTableModel_override_virtual_columnCount(void* self, intptr_t slot);
int QSqlTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QSqlTableModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QSqlTableModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlTableModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QSqlTableModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QSqlTableModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QSqlTableModel_virtualbase_roleNames(const void* self);
bool QSqlTableModel_override_virtual_queryChange(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_queryChange(void* self);
bool QSqlTableModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QSqlTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QSqlTableModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QSqlTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QSqlTableModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlTableModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QSqlTableModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QSqlTableModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QSqlTableModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSqlTableModel_virtualbase_mimeTypes(const void* self);
bool QSqlTableModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QSqlTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSqlTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QSqlTableModel_virtualbase_supportedDropActions(const void* self);
bool QSqlTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QSqlTableModel_virtualbase_supportedDragActions(const void* self);
bool QSqlTableModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlTableModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlTableModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QSqlTableModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QSqlTableModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QSqlTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QSqlTableModel_override_virtual_span(void* self, intptr_t slot);
QSize* QSqlTableModel_virtualbase_span(const void* self, QModelIndex* index);
bool QSqlTableModel_override_virtual_multiData(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QSqlTableModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_resetInternalData(void* self);
bool QSqlTableModel_override_virtual_event(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_event(void* self, QEvent* event);
bool QSqlTableModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSqlTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSqlTableModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSqlTableModel_override_virtual_childEvent(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSqlTableModel_override_virtual_customEvent(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_customEvent(void* self, QEvent* event);
bool QSqlTableModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSqlTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSqlTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSqlTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key);
void QSqlTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query);
QSqlRecord* QSqlTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row);
void QSqlTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error);
QModelIndex* QSqlTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QSqlTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QSqlTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
bool QSqlTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QSqlTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
bool QSqlTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QSqlTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QSqlTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QSqlTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QSqlTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSqlTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSqlTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSqlTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSqlTableModel_delete(QSqlTableModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
