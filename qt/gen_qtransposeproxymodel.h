#ifndef GEN_QTRANSPOSEPROXYMODEL_H
#define GEN_QTRANSPOSEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QTransposeProxyModel_MetaObject(QTransposeProxyModel* self);
void QTransposeProxyModel_Tr(const char* s, char** _out, int* _out_Strlen);
void QTransposeProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(QTransposeProxyModel* self);
int QTransposeProxyModel_ColumnCount(QTransposeProxyModel* self);
QVariant* QTransposeProxyModel_HeaderData(QTransposeProxyModel* self, int section, uintptr_t orientation);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value);
QSize* QTransposeProxyModel_Span(QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(QTransposeProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(QTransposeProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(QTransposeProxyModel* self, int row, int column);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column);
void QTransposeProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTransposeProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTransposeProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTransposeProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QTransposeProxyModel_RowCount1(QTransposeProxyModel* self, QModelIndex* parent);
int QTransposeProxyModel_ColumnCount1(QTransposeProxyModel* self, QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData3(QTransposeProxyModel* self, int section, uintptr_t orientation, int role);
bool QTransposeProxyModel_SetHeaderData4(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value, int role);
QModelIndex* QTransposeProxyModel_Index3(QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_InsertRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_InsertColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
void QTransposeProxyModel_Sort2(QTransposeProxyModel* self, int column, uintptr_t order);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
