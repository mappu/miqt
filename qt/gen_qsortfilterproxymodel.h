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
class QItemSelection;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QRegExp;
class QRegularExpression;
class QSize;
class QSortFilterProxyModel;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSize QSize;
typedef struct QSortFilterProxyModel QSortFilterProxyModel;
typedef struct QVariant QVariant;
#endif

QSortFilterProxyModel* QSortFilterProxyModel_new();
QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent);
void QSortFilterProxyModel_virtbase(QSortFilterProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QSortFilterProxyModel_MetaObject(const QSortFilterProxyModel* self);
void* QSortFilterProxyModel_Metacast(QSortFilterProxyModel* self, const char* param1);
struct miqt_string QSortFilterProxyModel_Tr(const char* s);
struct miqt_string QSortFilterProxyModel_TrUtf8(const char* s);
void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex);
QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, QItemSelection* proxySelection);
QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, QItemSelection* sourceSelection);
QRegExp* QSortFilterProxyModel_FilterRegExp(const QSortFilterProxyModel* self);
QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column);
int QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, int cs);
int QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, int cs);
bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on);
int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self);
bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable);
int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role);
int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role);
bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive);
void QSortFilterProxyModel_SetFilterRegExp(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_SetFilterRegExpWithRegExp(QSortFilterProxyModel* self, QRegExp* regExp);
void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression);
void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, struct miqt_string pattern);
void QSortFilterProxyModel_Clear(QSortFilterProxyModel* self);
void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent);
bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent);
bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right);
QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, QModelIndex* child);
QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx);
int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, QModelIndex* parent);
QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, QModelIndex* index, int role);
bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role);
bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, QVariant* value, int role);
QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, QModelIndex* index);
QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, QModelIndex* index);
struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, QModelIndex* index);
void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter);
void QSortFilterProxyModel_connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity);
void QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity);
void QSortFilterProxyModel_connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware);
void QSortFilterProxyModel_connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole);
void QSortFilterProxyModel_connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole);
void QSortFilterProxyModel_connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled);
void QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot);
struct miqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QSortFilterProxyModel_TrUtf82(const char* s, const char* c);
struct miqt_string QSortFilterProxyModel_TrUtf83(const char* s, const char* c, int n);
void QSortFilterProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel);
void QSortFilterProxyModel_override_virtual_MapToSource(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex);
void QSortFilterProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex);
void QSortFilterProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* proxySelection);
void QSortFilterProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* sourceSelection);
void QSortFilterProxyModel_override_virtual_FilterAcceptsRow(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_FilterAcceptsRow(const void* self, int source_row, QModelIndex* source_parent);
void QSortFilterProxyModel_override_virtual_FilterAcceptsColumn(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_FilterAcceptsColumn(const void* self, int source_column, QModelIndex* source_parent);
void QSortFilterProxyModel_override_virtual_LessThan(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_LessThan(const void* self, QModelIndex* source_left, QModelIndex* source_right);
void QSortFilterProxyModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_Parent(const void* self, QModelIndex* child);
void QSortFilterProxyModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QSortFilterProxyModel_override_virtual_RowCount(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QSortFilterProxyModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QSortFilterProxyModel_override_virtual_SetData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QSortFilterProxyModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QSortFilterProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
void QSortFilterProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
void QSortFilterProxyModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QSortFilterProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
void QSortFilterProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_Flags(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QSortFilterProxyModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index);
void QSortFilterProxyModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QSortFilterProxyModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QSortFilterProxyModel_virtualbase_Span(const void* self, QModelIndex* index);
void QSortFilterProxyModel_override_virtual_Sort(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_Sort(void* self, int column, int order);
void QSortFilterProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_virtualbase_MimeTypes(const void* self);
void QSortFilterProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_SupportedDropActions(const void* self);
void QSortFilterProxyModel_override_virtual_Submit(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_Submit(void* self);
void QSortFilterProxyModel_override_virtual_Revert(void* self, intptr_t slot);
void QSortFilterProxyModel_virtualbase_Revert(void* self);
void QSortFilterProxyModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QSortFilterProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QSortFilterProxyModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QSortFilterProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QSortFilterProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QSortFilterProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QSortFilterProxyModel_virtualbase_SupportedDragActions(const void* self);
void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
