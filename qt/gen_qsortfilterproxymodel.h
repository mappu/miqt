#ifndef GEN_QSORTFILTERPROXYMODEL_H
#define GEN_QSORTFILTERPROXYMODEL_H

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
QMetaObject* QSortFilterProxyModel_MetaObject(const QSortFilterProxyModel* self);
void* QSortFilterProxyModel_Metacast(QSortFilterProxyModel* self, const char* param1);
struct miqt_string QSortFilterProxyModel_Tr(const char* s);
struct miqt_string QSortFilterProxyModel_TrUtf8(const char* s);
void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex);
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
QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column);
QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, QModelIndex* child);
QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx);
int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self);
bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self);
QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, QModelIndex* index);
bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value);
QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation);
bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, QVariant* value);
QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, struct miqt_array /* of QModelIndex* */ indexes);
bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count);
bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count);
bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count);
bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count);
void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, QModelIndex* index);
QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, QModelIndex* index);
struct miqt_array QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value);
QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, QModelIndex* index);
void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column);
struct miqt_array QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self);
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
QModelIndex* QSortFilterProxyModel_Index3(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent);
int QSortFilterProxyModel_RowCount1(const QSortFilterProxyModel* self, QModelIndex* parent);
int QSortFilterProxyModel_ColumnCount1(const QSortFilterProxyModel* self, QModelIndex* parent);
bool QSortFilterProxyModel_HasChildren1(const QSortFilterProxyModel* self, QModelIndex* parent);
QVariant* QSortFilterProxyModel_Data2(const QSortFilterProxyModel* self, QModelIndex* index, int role);
bool QSortFilterProxyModel_SetData3(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QSortFilterProxyModel_HeaderData3(const QSortFilterProxyModel* self, int section, int orientation, int role);
bool QSortFilterProxyModel_SetHeaderData4(QSortFilterProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QSortFilterProxyModel_InsertRows3(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_InsertColumns3(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
bool QSortFilterProxyModel_RemoveRows3(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent);
bool QSortFilterProxyModel_RemoveColumns3(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent);
struct miqt_array QSortFilterProxyModel_Match4(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits);
struct miqt_array QSortFilterProxyModel_Match5(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QSortFilterProxyModel_Sort2(QSortFilterProxyModel* self, int column, int order);
void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
