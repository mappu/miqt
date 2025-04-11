#pragma once
#ifndef MIQT_QT6_GEN_QFILESYSTEMMODEL_H
#define MIQT_QT6_GEN_QFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractFileIconProvider;
class QAbstractItemModel;
class QChildEvent;
class QDataStream;
class QDateTime;
class QDir;
class QEvent;
class QFileInfo;
class QFileSystemModel;
class QIcon;
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
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
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

QFileSystemModel* QFileSystemModel_new();
QFileSystemModel* QFileSystemModel_new2(QObject* parent);
void QFileSystemModel_virtbase(QFileSystemModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QFileSystemModel_metaObject(const QFileSystemModel* self);
void* QFileSystemModel_metacast(QFileSystemModel* self, const char* param1);
struct miqt_string QFileSystemModel_tr(const char* s);
void QFileSystemModel_rootPathChanged(QFileSystemModel* self, struct miqt_string newPath);
void QFileSystemModel_connect_rootPathChanged(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_fileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName);
void QFileSystemModel_connect_fileRenamed(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_directoryLoaded(QFileSystemModel* self, struct miqt_string path);
void QFileSystemModel_connect_directoryLoaded(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_index(const QFileSystemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QFileSystemModel_indexWithPath(const QFileSystemModel* self, struct miqt_string path);
QModelIndex* QFileSystemModel_parent(const QFileSystemModel* self, QModelIndex* child);
QModelIndex* QFileSystemModel_sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_hasChildren(const QFileSystemModel* self, QModelIndex* parent);
bool QFileSystemModel_canFetchMore(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_fetchMore(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_rowCount(const QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_columnCount(const QFileSystemModel* self, QModelIndex* parent);
QVariant* QFileSystemModel_myComputer(const QFileSystemModel* self);
QVariant* QFileSystemModel_data(const QFileSystemModel* self, QModelIndex* index, int role);
bool QFileSystemModel_setData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QFileSystemModel_headerData(const QFileSystemModel* self, int section, int orientation, int role);
int QFileSystemModel_flags(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_sort(QFileSystemModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_mimeTypes(const QFileSystemModel* self);
QMimeData* QFileSystemModel_mimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QFileSystemModel_dropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QFileSystemModel_supportedDropActions(const QFileSystemModel* self);
struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_roleNames(const QFileSystemModel* self);
QModelIndex* QFileSystemModel_setRootPath(QFileSystemModel* self, struct miqt_string path);
struct miqt_string QFileSystemModel_rootPath(const QFileSystemModel* self);
QDir* QFileSystemModel_rootDirectory(const QFileSystemModel* self);
void QFileSystemModel_setIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileSystemModel_iconProvider(const QFileSystemModel* self);
void QFileSystemModel_setFilter(QFileSystemModel* self, int filters);
int QFileSystemModel_filter(const QFileSystemModel* self);
void QFileSystemModel_setResolveSymlinks(QFileSystemModel* self, bool enable);
bool QFileSystemModel_resolveSymlinks(const QFileSystemModel* self);
void QFileSystemModel_setReadOnly(QFileSystemModel* self, bool enable);
bool QFileSystemModel_isReadOnly(const QFileSystemModel* self);
void QFileSystemModel_setNameFilterDisables(QFileSystemModel* self, bool enable);
bool QFileSystemModel_nameFilterDisables(const QFileSystemModel* self);
void QFileSystemModel_setNameFilters(QFileSystemModel* self, struct miqt_array /* of struct miqt_string */  filters);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_nameFilters(const QFileSystemModel* self);
void QFileSystemModel_setOption(QFileSystemModel* self, int option);
bool QFileSystemModel_testOption(const QFileSystemModel* self, int option);
void QFileSystemModel_setOptions(QFileSystemModel* self, int options);
int QFileSystemModel_options(const QFileSystemModel* self);
struct miqt_string QFileSystemModel_filePath(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_isDir(const QFileSystemModel* self, QModelIndex* index);
long long QFileSystemModel_size(const QFileSystemModel* self, QModelIndex* index);
struct miqt_string QFileSystemModel_type(const QFileSystemModel* self, QModelIndex* index);
QDateTime* QFileSystemModel_lastModified(const QFileSystemModel* self, QModelIndex* index);
QModelIndex* QFileSystemModel_mkdir(QFileSystemModel* self, QModelIndex* parent, struct miqt_string name);
bool QFileSystemModel_rmdir(QFileSystemModel* self, QModelIndex* index);
struct miqt_string QFileSystemModel_fileName(const QFileSystemModel* self, QModelIndex* index);
QIcon* QFileSystemModel_fileIcon(const QFileSystemModel* self, QModelIndex* index);
int QFileSystemModel_permissions(const QFileSystemModel* self, QModelIndex* index);
QFileInfo* QFileSystemModel_fileInfo(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_remove(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_timerEvent(QFileSystemModel* self, QTimerEvent* event);
bool QFileSystemModel_event(QFileSystemModel* self, QEvent* event);
struct miqt_string QFileSystemModel_tr2(const char* s, const char* c);
struct miqt_string QFileSystemModel_tr3(const char* s, const char* c, int n);
QModelIndex* QFileSystemModel_index2(const QFileSystemModel* self, struct miqt_string path, int column);
QVariant* QFileSystemModel_myComputerWithRole(const QFileSystemModel* self, int role);
void QFileSystemModel_setOption2(QFileSystemModel* self, int option, bool on);
bool QFileSystemModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QFileSystemModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QFileSystemModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QFileSystemModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QFileSystemModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QFileSystemModel_override_virtual_rowCount(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QFileSystemModel_override_virtual_columnCount(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QFileSystemModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QFileSystemModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QFileSystemModel_override_virtual_setData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QFileSystemModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QFileSystemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QFileSystemModel_override_virtual_flags(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QFileSystemModel_override_virtual_sort(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_sort(void* self, int column, int order);
bool QFileSystemModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QFileSystemModel_virtualbase_mimeTypes(const void* self);
bool QFileSystemModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QFileSystemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QFileSystemModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QFileSystemModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_supportedDropActions(const void* self);
bool QFileSystemModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_virtualbase_roleNames(const void* self);
bool QFileSystemModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFileSystemModel_override_virtual_event(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_event(void* self, QEvent* event);
bool QFileSystemModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QFileSystemModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QFileSystemModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QFileSystemModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QFileSystemModel_override_virtual_clearItemData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_clearItemData(void* self, QModelIndex* index);
bool QFileSystemModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QFileSystemModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QFileSystemModel_virtualbase_supportedDragActions(const void* self);
bool QFileSystemModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QFileSystemModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QFileSystemModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QFileSystemModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QFileSystemModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QFileSystemModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QFileSystemModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QFileSystemModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QFileSystemModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QFileSystemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QFileSystemModel_override_virtual_span(void* self, intptr_t slot);
QSize* QFileSystemModel_virtualbase_span(const void* self, QModelIndex* index);
bool QFileSystemModel_override_virtual_multiData(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QFileSystemModel_override_virtual_submit(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_submit(void* self);
bool QFileSystemModel_override_virtual_revert(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_revert(void* self);
bool QFileSystemModel_override_virtual_resetInternalData(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_resetInternalData(void* self);
bool QFileSystemModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFileSystemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFileSystemModel_override_virtual_childEvent(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFileSystemModel_override_virtual_customEvent(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_customEvent(void* self, QEvent* event);
bool QFileSystemModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFileSystemModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFileSystemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QModelIndex* QFileSystemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QFileSystemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QFileSystemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QFileSystemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QFileSystemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QFileSystemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QFileSystemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QFileSystemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QFileSystemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QFileSystemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QFileSystemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QFileSystemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFileSystemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFileSystemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFileSystemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QFileSystemModel_delete(QFileSystemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
