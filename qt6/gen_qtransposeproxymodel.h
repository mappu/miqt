#ifndef GEN_QTRANSPOSEPROXYMODEL_H
#define GEN_QTRANSPOSEPROXYMODEL_H

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
class QModelIndex;
class QObject;
class QSize;
class QTransposeProxyModel;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
#endif

QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self);
void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1);
struct miqt_string QTransposeProxyModel_Tr(const char* s);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self);
int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self);
QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value);
bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, QModelIndex* index, struct miqt_map roles);
QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, QModelIndex* index);
struct miqt_map QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column);
struct miqt_string QTransposeProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n);
int QTransposeProxyModel_RowCount1(const QTransposeProxyModel* self, QModelIndex* parent);
int QTransposeProxyModel_ColumnCount1(const QTransposeProxyModel* self, QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData3(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_SetHeaderData4(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
QModelIndex* QTransposeProxyModel_Index3(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_InsertRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_InsertColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
void QTransposeProxyModel_Sort2(QTransposeProxyModel* self, int column, int order);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
