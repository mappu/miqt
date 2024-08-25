#ifndef GEN_QIDENTITYPROXYMODEL_H
#define GEN_QIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QIdentityProxyModel;
class QMetaObject;
class QModelIndex;
class QObject;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QIdentityProxyModel QIdentityProxyModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
#endif

QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
QMetaObject* QIdentityProxyModel_MetaObject(QIdentityProxyModel* self);
void QIdentityProxyModel_Tr(char* s, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QIdentityProxyModel_ColumnCount(QIdentityProxyModel* self);
QModelIndex* QIdentityProxyModel_Index(QIdentityProxyModel* self, int row, int column);
QModelIndex* QIdentityProxyModel_MapFromSource(QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_RowCount(QIdentityProxyModel* self);
QModelIndex* QIdentityProxyModel_Sibling(QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QIdentityProxyModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
int QIdentityProxyModel_ColumnCount1(QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index3(QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
int QIdentityProxyModel_RowCount1(QIdentityProxyModel* self, QModelIndex* parent);
bool QIdentityProxyModel_InsertColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_InsertRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
