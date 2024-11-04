#ifndef GEN_QIDENTITYPROXYMODEL_H
#define GEN_QIDENTITYPROXYMODEL_H

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
class QIdentityProxyModel;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QIdentityProxyModel QIdentityProxyModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self);
void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1);
struct miqt_string QIdentityProxyModel_Tr(const char* s);
struct miqt_string QIdentityProxyModel_TrUtf8(const char* s);
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self);
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column);
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self);
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation);
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
struct miqt_array QIdentityProxyModel_Match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_string QIdentityProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QIdentityProxyModel_TrUtf82(const char* s, const char* c);
struct miqt_string QIdentityProxyModel_TrUtf83(const char* s, const char* c, int n);
int QIdentityProxyModel_ColumnCount1(const QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index3(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
int QIdentityProxyModel_RowCount1(const QIdentityProxyModel* self, QModelIndex* parent);
QVariant* QIdentityProxyModel_HeaderData3(const QIdentityProxyModel* self, int section, int orientation, int role);
struct miqt_array QIdentityProxyModel_Match4(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits);
struct miqt_array QIdentityProxyModel_Match5(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QIdentityProxyModel_InsertColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_InsertRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
