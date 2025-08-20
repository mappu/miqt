#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLRELATIONALTABLEMODEL_H
#define MIQT_QT6_SQL_GEN_QSQLRELATIONALTABLEMODEL_H

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
class QSqlRelation;
class QSqlRelationalTableModel;
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
typedef struct QSqlRelation QSqlRelation;
typedef struct QSqlRelationalTableModel QSqlRelationalTableModel;
typedef struct QSqlTableModel QSqlTableModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSqlRelation* QSqlRelation_new();
QSqlRelation* QSqlRelation_new2(struct miqt_string aTableName, struct miqt_string indexCol, struct miqt_string displayCol);
QSqlRelation* QSqlRelation_new3(QSqlRelation* param1);
void QSqlRelation_swap(QSqlRelation* self, QSqlRelation* other);
struct miqt_string QSqlRelation_tableName(const QSqlRelation* self);
struct miqt_string QSqlRelation_indexColumn(const QSqlRelation* self);
struct miqt_string QSqlRelation_displayColumn(const QSqlRelation* self);
bool QSqlRelation_isValid(const QSqlRelation* self);

void QSqlRelation_delete(QSqlRelation* self);

QSqlRelationalTableModel* QSqlRelationalTableModel_new();
QSqlRelationalTableModel* QSqlRelationalTableModel_new2(QObject* parent);
QSqlRelationalTableModel* QSqlRelationalTableModel_new3(QObject* parent, QSqlDatabase* db);
void QSqlRelationalTableModel_virtbase(QSqlRelationalTableModel* src, QSqlTableModel** outptr_QSqlTableModel);
QMetaObject* QSqlRelationalTableModel_metaObject(const QSqlRelationalTableModel* self);
void* QSqlRelationalTableModel_metacast(QSqlRelationalTableModel* self, const char* param1);
struct miqt_string QSqlRelationalTableModel_tr(const char* s);
QVariant* QSqlRelationalTableModel_data(const QSqlRelationalTableModel* self, QModelIndex* item, int role);
bool QSqlRelationalTableModel_setData(QSqlRelationalTableModel* self, QModelIndex* item, QVariant* value, int role);
bool QSqlRelationalTableModel_removeColumns(QSqlRelationalTableModel* self, int column, int count, QModelIndex* parent);
void QSqlRelationalTableModel_clear(QSqlRelationalTableModel* self);
bool QSqlRelationalTableModel_select(QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_setTable(QSqlRelationalTableModel* self, struct miqt_string tableName);
void QSqlRelationalTableModel_setRelation(QSqlRelationalTableModel* self, int column, QSqlRelation* relation);
QSqlRelation* QSqlRelationalTableModel_relation(const QSqlRelationalTableModel* self, int column);
QSqlTableModel* QSqlRelationalTableModel_relationModel(const QSqlRelationalTableModel* self, int column);
void QSqlRelationalTableModel_setJoinMode(QSqlRelationalTableModel* self, int joinMode);
void QSqlRelationalTableModel_revertRow(QSqlRelationalTableModel* self, int row);
struct miqt_string QSqlRelationalTableModel_selectStatement(const QSqlRelationalTableModel* self);
bool QSqlRelationalTableModel_updateRowInTable(QSqlRelationalTableModel* self, int row, QSqlRecord* values);
bool QSqlRelationalTableModel_insertRowIntoTable(QSqlRelationalTableModel* self, QSqlRecord* values);
struct miqt_string QSqlRelationalTableModel_orderByClause(const QSqlRelationalTableModel* self);
struct miqt_string QSqlRelationalTableModel_tr2(const char* s, const char* c);
struct miqt_string QSqlRelationalTableModel_tr3(const char* s, const char* c, int n);

bool QSqlRelationalTableModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QSqlRelationalTableModel_virtualbase_data(const void* self, QModelIndex* item, int role);
bool QSqlRelationalTableModel_override_virtual_setData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_setData(void* self, QModelIndex* item, QVariant* value, int role);
bool QSqlRelationalTableModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_clear(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_clear(void* self);
bool QSqlRelationalTableModel_override_virtual_select(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_select(void* self);
bool QSqlRelationalTableModel_override_virtual_setTable(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_setTable(void* self, struct miqt_string tableName);
bool QSqlRelationalTableModel_override_virtual_setRelation(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_setRelation(void* self, int column, QSqlRelation* relation);
bool QSqlRelationalTableModel_override_virtual_relationModel(void* self, intptr_t slot);
QSqlTableModel* QSqlRelationalTableModel_virtualbase_relationModel(const void* self, int column);
bool QSqlRelationalTableModel_override_virtual_revertRow(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_revertRow(void* self, int row);
bool QSqlRelationalTableModel_override_virtual_selectStatement(void* self, intptr_t slot);
struct miqt_string QSqlRelationalTableModel_virtualbase_selectStatement(const void* self);
bool QSqlRelationalTableModel_override_virtual_updateRowInTable(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values);
bool QSqlRelationalTableModel_override_virtual_insertRowIntoTable(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values);
bool QSqlRelationalTableModel_override_virtual_orderByClause(void* self, intptr_t slot);
struct miqt_string QSqlRelationalTableModel_virtualbase_orderByClause(const void* self);
bool QSqlRelationalTableModel_override_virtual_flags(void* self, intptr_t slot);
int QSqlRelationalTableModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QSqlRelationalTableModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QSqlRelationalTableModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QSqlRelationalTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QSqlRelationalTableModel_override_virtual_setEditStrategy(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_setEditStrategy(void* self, int strategy);
bool QSqlRelationalTableModel_override_virtual_sort(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_sort(void* self, int column, int order);
bool QSqlRelationalTableModel_override_virtual_setSort(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_setSort(void* self, int column, int order);
bool QSqlRelationalTableModel_override_virtual_setFilter(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_setFilter(void* self, struct miqt_string filter);
bool QSqlRelationalTableModel_override_virtual_rowCount(void* self, intptr_t slot);
int QSqlRelationalTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_selectRow(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_selectRow(void* self, int row);
bool QSqlRelationalTableModel_override_virtual_submit(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_submit(void* self);
bool QSqlRelationalTableModel_override_virtual_revert(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_revert(void* self);
bool QSqlRelationalTableModel_override_virtual_deleteRowFromTable(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_deleteRowFromTable(void* self, int row);
bool QSqlRelationalTableModel_override_virtual_indexInQuery(void* self, intptr_t slot);
QModelIndex* QSqlRelationalTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item);
bool QSqlRelationalTableModel_override_virtual_columnCount(void* self, intptr_t slot);
int QSqlRelationalTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QSqlRelationalTableModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QSqlRelationalTableModel_virtualbase_roleNames(const void* self);
bool QSqlRelationalTableModel_override_virtual_queryChange(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_queryChange(void* self);
bool QSqlRelationalTableModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QSqlRelationalTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QSqlRelationalTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QSqlRelationalTableModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QSqlRelationalTableModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QSqlRelationalTableModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QSqlRelationalTableModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSqlRelationalTableModel_virtualbase_mimeTypes(const void* self);
bool QSqlRelationalTableModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QSqlRelationalTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSqlRelationalTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSqlRelationalTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QSqlRelationalTableModel_virtualbase_supportedDropActions(const void* self);
bool QSqlRelationalTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QSqlRelationalTableModel_virtualbase_supportedDragActions(const void* self);
bool QSqlRelationalTableModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlRelationalTableModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QSqlRelationalTableModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QSqlRelationalTableModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QSqlRelationalTableModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QSqlRelationalTableModel_override_virtual_span(void* self, intptr_t slot);
QSize* QSqlRelationalTableModel_virtualbase_span(const void* self, QModelIndex* index);
bool QSqlRelationalTableModel_override_virtual_multiData(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QSqlRelationalTableModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_resetInternalData(void* self);
bool QSqlRelationalTableModel_override_virtual_event(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_event(void* self, QEvent* event);
bool QSqlRelationalTableModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSqlRelationalTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSqlRelationalTableModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSqlRelationalTableModel_override_virtual_childEvent(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSqlRelationalTableModel_override_virtual_customEvent(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_customEvent(void* self, QEvent* event);
bool QSqlRelationalTableModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSqlRelationalTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSqlRelationalTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSqlRelationalTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key);
void QSqlRelationalTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query);
QSqlRecord* QSqlRelationalTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row);
void QSqlRelationalTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlRelationalTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlRelationalTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlRelationalTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QSqlRelationalTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error);
QModelIndex* QSqlRelationalTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QSqlRelationalTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QSqlRelationalTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
bool QSqlRelationalTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QSqlRelationalTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
bool QSqlRelationalTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QSqlRelationalTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QSqlRelationalTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QSqlRelationalTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QSqlRelationalTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSqlRelationalTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSqlRelationalTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSqlRelationalTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSqlRelationalTableModel_delete(QSqlRelationalTableModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
