#ifndef GEN_QABSTRACTPROXYMODEL_H
#define GEN_QABSTRACTPROXYMODEL_H

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
class QMetaObject;
class QMimeData;
class QModelIndex;
class QSize;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self);
void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1);
struct miqt_string QAbstractProxyModel_Tr(const char* s);
struct miqt_string QAbstractProxyModel_TrUtf8(const char* s);
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex);
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self);
void QAbstractProxyModel_Revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, QModelIndex* proxyIndex);
QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation);
struct miqt_map QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, QModelIndex* index);
int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value);
bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map roles);
bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value);
QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column);
QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx);
QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */ indexes);
bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
struct miqt_array QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self);
struct miqt_string QAbstractProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractProxyModel_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractProxyModel_TrUtf83(const char* s, const char* c, int n);
QVariant* QAbstractProxyModel_Data2(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role);
QVariant* QAbstractProxyModel_HeaderData3(const QAbstractProxyModel* self, int section, int orientation, int role);
bool QAbstractProxyModel_SetData3(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_SetHeaderData4(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role);
void QAbstractProxyModel_Sort2(QAbstractProxyModel* self, int column, int order);
bool QAbstractProxyModel_HasChildren1(const QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_Delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
