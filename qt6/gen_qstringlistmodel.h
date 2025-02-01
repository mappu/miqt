#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGLISTMODEL_H
#define MIQT_QT6_GEN_QSTRINGLISTMODEL_H

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
class QAbstractListModel;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QStringListModel;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QStringListModel QStringListModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(struct miqt_array /* of struct miqt_string */  strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(struct miqt_array /* of struct miqt_string */  strings, QObject* parent);
void QStringListModel_virtbase(QStringListModel* src, QAbstractListModel** outptr_QAbstractListModel);
QMetaObject* QStringListModel_metaObject(const QStringListModel* self);
void* QStringListModel_metacast(QStringListModel* self, const char* param1);
struct miqt_string QStringListModel_tr(const char* s);
int QStringListModel_rowCount(const QStringListModel* self, QModelIndex* parent);
QModelIndex* QStringListModel_sibling(const QStringListModel* self, int row, int column, QModelIndex* idx);
QVariant* QStringListModel_data(const QStringListModel* self, QModelIndex* index, int role);
bool QStringListModel_setData(QStringListModel* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_clearItemData(QStringListModel* self, QModelIndex* index);
int QStringListModel_flags(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_insertRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_removeRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_moveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_map /* of int to QVariant* */  QStringListModel_itemData(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_setItemData(QStringListModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStringListModel_sort(QStringListModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QStringListModel_stringList(const QStringListModel* self);
void QStringListModel_setStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */  strings);
int QStringListModel_supportedDropActions(const QStringListModel* self);
struct miqt_string QStringListModel_tr2(const char* s, const char* c);
struct miqt_string QStringListModel_tr3(const char* s, const char* c, int n);
bool QStringListModel_override_virtual_rowCount(void* self, intptr_t slot);
int QStringListModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QStringListModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QStringListModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QStringListModel_override_virtual_setData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QStringListModel_override_virtual_flags(void* self, intptr_t slot);
int QStringListModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QStringListModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QStringListModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QStringListModel_override_virtual_sort(void* self, intptr_t slot);
void QStringListModel_virtualbase_sort(void* self, int column, int order);
bool QStringListModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QStringListModel_virtualbase_supportedDropActions(const void* self);
bool QStringListModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QStringListModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QStringListModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QStringListModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QStringListModel_virtualbase_mimeTypes(const void* self);
bool QStringListModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QStringListModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStringListModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStringListModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QStringListModel_virtualbase_supportedDragActions(const void* self);
bool QStringListModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QStringListModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QStringListModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QStringListModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QStringListModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QStringListModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QStringListModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QStringListModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QStringListModel_override_virtual_span(void* self, intptr_t slot);
QSize* QStringListModel_virtualbase_span(const void* self, QModelIndex* index);
bool QStringListModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QStringListModel_virtualbase_roleNames(const void* self);
bool QStringListModel_override_virtual_multiData(void* self, intptr_t slot);
void QStringListModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QStringListModel_override_virtual_submit(void* self, intptr_t slot);
bool QStringListModel_virtualbase_submit(void* self);
bool QStringListModel_override_virtual_revert(void* self, intptr_t slot);
void QStringListModel_virtualbase_revert(void* self);
bool QStringListModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QStringListModel_virtualbase_resetInternalData(void* self);
bool QStringListModel_override_virtual_event(void* self, intptr_t slot);
bool QStringListModel_virtualbase_event(void* self, QEvent* event);
bool QStringListModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStringListModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStringListModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStringListModel_override_virtual_childEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStringListModel_override_virtual_customEvent(void* self, intptr_t slot);
void QStringListModel_virtualbase_customEvent(void* self, QEvent* event);
bool QStringListModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QStringListModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStringListModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStringListModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QStringListModel_delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
