#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFBOOKMARKMODEL_H
#define MIQT_QT_PDF_GEN_QPDFBOOKMARKMODEL_H

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
class QChildEvent;
class QDataStream;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QPdfBookmarkModel;
class QPdfDocument;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPdfBookmarkModel QPdfBookmarkModel;
typedef struct QPdfDocument QPdfDocument;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfBookmarkModel* QPdfBookmarkModel_new();
QPdfBookmarkModel* QPdfBookmarkModel_new2(QObject* parent);
void QPdfBookmarkModel_virtbase(QPdfBookmarkModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QPdfBookmarkModel_metaObject(const QPdfBookmarkModel* self);
void* QPdfBookmarkModel_metacast(QPdfBookmarkModel* self, const char* param1);
struct miqt_string QPdfBookmarkModel_tr(const char* s);
struct miqt_string QPdfBookmarkModel_trUtf8(const char* s);
QPdfDocument* QPdfBookmarkModel_document(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_setDocument(QPdfBookmarkModel* self, QPdfDocument* document);
int QPdfBookmarkModel_structureMode(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_setStructureMode(QPdfBookmarkModel* self, int mode);
QVariant* QPdfBookmarkModel_data(const QPdfBookmarkModel* self, QModelIndex* index, int role);
QModelIndex* QPdfBookmarkModel_index(const QPdfBookmarkModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QPdfBookmarkModel_parent(const QPdfBookmarkModel* self, QModelIndex* index);
int QPdfBookmarkModel_rowCount(const QPdfBookmarkModel* self, QModelIndex* parent);
int QPdfBookmarkModel_columnCount(const QPdfBookmarkModel* self, QModelIndex* parent);
struct miqt_map /* of int to struct miqt_string */  QPdfBookmarkModel_roleNames(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_documentChanged(QPdfBookmarkModel* self, QPdfDocument* document);
void QPdfBookmarkModel_connect_documentChanged(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_structureModeChanged(QPdfBookmarkModel* self, int structureMode);
void QPdfBookmarkModel_connect_structureModeChanged(QPdfBookmarkModel* self, intptr_t slot);
struct miqt_string QPdfBookmarkModel_tr2(const char* s, const char* c);
struct miqt_string QPdfBookmarkModel_tr3(const char* s, const char* c, int n);
struct miqt_string QPdfBookmarkModel_trUtf82(const char* s, const char* c);
struct miqt_string QPdfBookmarkModel_trUtf83(const char* s, const char* c, int n);

bool QPdfBookmarkModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QPdfBookmarkModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QPdfBookmarkModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_virtualbase_parent(const void* self, QModelIndex* index);
bool QPdfBookmarkModel_override_virtual_rowCount(void* self, intptr_t slot);
int QPdfBookmarkModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_columnCount(void* self, intptr_t slot);
int QPdfBookmarkModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QPdfBookmarkModel_virtualbase_roleNames(const void* self);
bool QPdfBookmarkModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QPdfBookmarkModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_setData(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QPdfBookmarkModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QPdfBookmarkModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QPdfBookmarkModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QPdfBookmarkModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QPdfBookmarkModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QPdfBookmarkModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QPdfBookmarkModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QPdfBookmarkModel_virtualbase_mimeTypes(const void* self);
bool QPdfBookmarkModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QPdfBookmarkModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QPdfBookmarkModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QPdfBookmarkModel_virtualbase_supportedDropActions(const void* self);
bool QPdfBookmarkModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QPdfBookmarkModel_virtualbase_supportedDragActions(const void* self);
bool QPdfBookmarkModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QPdfBookmarkModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QPdfBookmarkModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QPdfBookmarkModel_override_virtual_flags(void* self, intptr_t slot);
int QPdfBookmarkModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QPdfBookmarkModel_override_virtual_sort(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_sort(void* self, int column, int order);
bool QPdfBookmarkModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QPdfBookmarkModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QPdfBookmarkModel_override_virtual_span(void* self, intptr_t slot);
QSize* QPdfBookmarkModel_virtualbase_span(const void* self, QModelIndex* index);
bool QPdfBookmarkModel_override_virtual_submit(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_submit(void* self);
bool QPdfBookmarkModel_override_virtual_revert(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_revert(void* self);
bool QPdfBookmarkModel_override_virtual_event(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_event(void* self, QEvent* event);
bool QPdfBookmarkModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfBookmarkModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfBookmarkModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfBookmarkModel_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfBookmarkModel_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfBookmarkModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfBookmarkModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfBookmarkModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QPdfBookmarkModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QPdfBookmarkModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QPdfBookmarkModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QPdfBookmarkModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QPdfBookmarkModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QPdfBookmarkModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QPdfBookmarkModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QPdfBookmarkModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QPdfBookmarkModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QPdfBookmarkModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QPdfBookmarkModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QPdfBookmarkModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfBookmarkModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfBookmarkModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfBookmarkModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPdfBookmarkModel_delete(QPdfBookmarkModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
