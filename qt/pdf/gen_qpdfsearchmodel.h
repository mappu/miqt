#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFSEARCHMODEL_H
#define MIQT_QT_PDF_GEN_QPDFSEARCHMODEL_H

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
class QAbstractListModel;
class QChildEvent;
class QDataStream;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QPdfDocument;
class QPdfSearchModel;
class QPdfSearchResult;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfSearchModel QPdfSearchModel;
typedef struct QPdfSearchResult QPdfSearchResult;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfSearchModel* QPdfSearchModel_new();
QPdfSearchModel* QPdfSearchModel_new2(QObject* parent);
void QPdfSearchModel_virtbase(QPdfSearchModel* src, QAbstractListModel** outptr_QAbstractListModel);
QMetaObject* QPdfSearchModel_metaObject(const QPdfSearchModel* self);
void* QPdfSearchModel_metacast(QPdfSearchModel* self, const char* param1);
struct miqt_string QPdfSearchModel_tr(const char* s);
struct miqt_string QPdfSearchModel_trUtf8(const char* s);
struct miqt_array /* of QPdfSearchResult* */  QPdfSearchModel_resultsOnPage(const QPdfSearchModel* self, int page);
QPdfSearchResult* QPdfSearchModel_resultAtIndex(const QPdfSearchModel* self, int index);
QPdfDocument* QPdfSearchModel_document(const QPdfSearchModel* self);
struct miqt_string QPdfSearchModel_searchString(const QPdfSearchModel* self);
struct miqt_map /* of int to struct miqt_string */  QPdfSearchModel_roleNames(const QPdfSearchModel* self);
int QPdfSearchModel_rowCount(const QPdfSearchModel* self, QModelIndex* parent);
QVariant* QPdfSearchModel_data(const QPdfSearchModel* self, QModelIndex* index, int role);
void QPdfSearchModel_setSearchString(QPdfSearchModel* self, struct miqt_string searchString);
void QPdfSearchModel_setDocument(QPdfSearchModel* self, QPdfDocument* document);
void QPdfSearchModel_documentChanged(QPdfSearchModel* self);
void QPdfSearchModel_connect_documentChanged(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_searchStringChanged(QPdfSearchModel* self);
void QPdfSearchModel_connect_searchStringChanged(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_timerEvent(QPdfSearchModel* self, QTimerEvent* event);
struct miqt_string QPdfSearchModel_tr2(const char* s, const char* c);
struct miqt_string QPdfSearchModel_tr3(const char* s, const char* c, int n);
struct miqt_string QPdfSearchModel_trUtf82(const char* s, const char* c);
struct miqt_string QPdfSearchModel_trUtf83(const char* s, const char* c, int n);

bool QPdfSearchModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QPdfSearchModel_virtualbase_roleNames(const void* self);
bool QPdfSearchModel_override_virtual_rowCount(void* self, intptr_t slot);
int QPdfSearchModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QPdfSearchModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QPdfSearchModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfSearchModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QPdfSearchModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QPdfSearchModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QPdfSearchModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_flags(void* self, intptr_t slot);
int QPdfSearchModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QPdfSearchModel_override_virtual_setData(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QPdfSearchModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QPdfSearchModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QPdfSearchModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QPdfSearchModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QPdfSearchModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QPdfSearchModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QPdfSearchModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QPdfSearchModel_virtualbase_mimeTypes(const void* self);
bool QPdfSearchModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QPdfSearchModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QPdfSearchModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QPdfSearchModel_virtualbase_supportedDropActions(const void* self);
bool QPdfSearchModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QPdfSearchModel_virtualbase_supportedDragActions(const void* self);
bool QPdfSearchModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QPdfSearchModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QPdfSearchModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QPdfSearchModel_override_virtual_sort(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_sort(void* self, int column, int order);
bool QPdfSearchModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QPdfSearchModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QPdfSearchModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QPdfSearchModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QPdfSearchModel_override_virtual_span(void* self, intptr_t slot);
QSize* QPdfSearchModel_virtualbase_span(const void* self, QModelIndex* index);
bool QPdfSearchModel_override_virtual_submit(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_submit(void* self);
bool QPdfSearchModel_override_virtual_revert(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_revert(void* self);
bool QPdfSearchModel_override_virtual_event(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_event(void* self, QEvent* event);
bool QPdfSearchModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfSearchModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfSearchModel_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfSearchModel_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfSearchModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfSearchModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfSearchModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QPdfSearchModel_protectedbase_updatePage(bool* _dynamic_cast_ok, void* self, int page);
void QPdfSearchModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QPdfSearchModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QPdfSearchModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QPdfSearchModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QPdfSearchModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfSearchModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfSearchModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QPdfSearchModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QPdfSearchModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfSearchModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfSearchModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QPdfSearchModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QPdfSearchModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QPdfSearchModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QPdfSearchModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QPdfSearchModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QPdfSearchModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfSearchModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfSearchModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfSearchModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPdfSearchModel_delete(QPdfSearchModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
