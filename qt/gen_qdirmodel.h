#pragma once
#ifndef MIQT_QT_GEN_QDIRMODEL_H
#define MIQT_QT_GEN_QDIRMODEL_H

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
class QDirModel;
class QEvent;
class QFileIconProvider;
class QFileInfo;
class QIcon;
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
typedef struct QChildEvent QChildEvent;
typedef struct QDirModel QDirModel;
typedef struct QEvent QEvent;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QDirModel* QDirModel_new(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort);
QDirModel* QDirModel_new2();
QDirModel* QDirModel_new3(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort, QObject* parent);
QDirModel* QDirModel_new4(QObject* parent);
void QDirModel_virtbase(QDirModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QDirModel_metaObject(const QDirModel* self);
void* QDirModel_metacast(QDirModel* self, const char* param1);
struct miqt_string QDirModel_tr(const char* s);
struct miqt_string QDirModel_trUtf8(const char* s);
QModelIndex* QDirModel_index(const QDirModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QDirModel_parent(const QDirModel* self, QModelIndex* child);
int QDirModel_rowCount(const QDirModel* self, QModelIndex* parent);
int QDirModel_columnCount(const QDirModel* self, QModelIndex* parent);
QVariant* QDirModel_data(const QDirModel* self, QModelIndex* index, int role);
bool QDirModel_setData(QDirModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QDirModel_headerData(const QDirModel* self, int section, int orientation, int role);
bool QDirModel_hasChildren(const QDirModel* self, QModelIndex* index);
int QDirModel_flags(const QDirModel* self, QModelIndex* index);
void QDirModel_sort(QDirModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QDirModel_mimeTypes(const QDirModel* self);
QMimeData* QDirModel_mimeData(const QDirModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QDirModel_dropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QDirModel_supportedDropActions(const QDirModel* self);
void QDirModel_setIconProvider(QDirModel* self, QFileIconProvider* provider);
QFileIconProvider* QDirModel_iconProvider(const QDirModel* self);
void QDirModel_setNameFilters(QDirModel* self, struct miqt_array /* of struct miqt_string */  filters);
struct miqt_array /* of struct miqt_string */  QDirModel_nameFilters(const QDirModel* self);
void QDirModel_setFilter(QDirModel* self, int filters);
int QDirModel_filter(const QDirModel* self);
void QDirModel_setSorting(QDirModel* self, int sort);
int QDirModel_sorting(const QDirModel* self);
void QDirModel_setResolveSymlinks(QDirModel* self, bool enable);
bool QDirModel_resolveSymlinks(const QDirModel* self);
void QDirModel_setReadOnly(QDirModel* self, bool enable);
bool QDirModel_isReadOnly(const QDirModel* self);
void QDirModel_setLazyChildCount(QDirModel* self, bool enable);
bool QDirModel_lazyChildCount(const QDirModel* self);
QModelIndex* QDirModel_indexWithPath(const QDirModel* self, struct miqt_string path);
bool QDirModel_isDir(const QDirModel* self, QModelIndex* index);
QModelIndex* QDirModel_mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string name);
bool QDirModel_rmdir(QDirModel* self, QModelIndex* index);
bool QDirModel_remove(QDirModel* self, QModelIndex* index);
struct miqt_string QDirModel_filePath(const QDirModel* self, QModelIndex* index);
struct miqt_string QDirModel_fileName(const QDirModel* self, QModelIndex* index);
QIcon* QDirModel_fileIcon(const QDirModel* self, QModelIndex* index);
QFileInfo* QDirModel_fileInfo(const QDirModel* self, QModelIndex* index);
void QDirModel_refresh(QDirModel* self);
struct miqt_string QDirModel_tr2(const char* s, const char* c);
struct miqt_string QDirModel_tr3(const char* s, const char* c, int n);
struct miqt_string QDirModel_trUtf82(const char* s, const char* c);
struct miqt_string QDirModel_trUtf83(const char* s, const char* c, int n);
QModelIndex* QDirModel_index2(const QDirModel* self, struct miqt_string path, int column);
void QDirModel_refresh1(QDirModel* self, QModelIndex* parent);
bool QDirModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QDirModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QDirModel_override_virtual_rowCount(void* self, intptr_t slot);
int QDirModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QDirModel_override_virtual_columnCount(void* self, intptr_t slot);
int QDirModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QDirModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QDirModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QDirModel_override_virtual_setData(void* self, intptr_t slot);
bool QDirModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QDirModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QDirModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QDirModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QDirModel_virtualbase_hasChildren(const void* self, QModelIndex* index);
bool QDirModel_override_virtual_flags(void* self, intptr_t slot);
int QDirModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QDirModel_override_virtual_sort(void* self, intptr_t slot);
void QDirModel_virtualbase_sort(void* self, int column, int order);
bool QDirModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QDirModel_virtualbase_mimeTypes(const void* self);
bool QDirModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QDirModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QDirModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QDirModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QDirModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QDirModel_virtualbase_supportedDropActions(const void* self);
bool QDirModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QDirModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QDirModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QDirModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QDirModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QDirModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QDirModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QDirModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QDirModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QDirModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QDirModel_virtualbase_supportedDragActions(const void* self);
bool QDirModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QDirModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QDirModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QDirModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QDirModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QDirModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QDirModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QDirModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QDirModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QDirModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QDirModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QDirModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QDirModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QDirModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QDirModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QDirModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QDirModel_override_virtual_span(void* self, intptr_t slot);
QSize* QDirModel_virtualbase_span(const void* self, QModelIndex* index);
bool QDirModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QDirModel_virtualbase_roleNames(const void* self);
bool QDirModel_override_virtual_submit(void* self, intptr_t slot);
bool QDirModel_virtualbase_submit(void* self);
bool QDirModel_override_virtual_revert(void* self, intptr_t slot);
void QDirModel_virtualbase_revert(void* self);
bool QDirModel_override_virtual_event(void* self, intptr_t slot);
bool QDirModel_virtualbase_event(void* self, QEvent* event);
bool QDirModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDirModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDirModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QDirModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDirModel_override_virtual_childEvent(void* self, intptr_t slot);
void QDirModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDirModel_override_virtual_customEvent(void* self, intptr_t slot);
void QDirModel_virtualbase_customEvent(void* self, QEvent* event);
bool QDirModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QDirModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDirModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDirModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QDirModel_delete(QDirModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
