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
QMetaObject* QIdentityProxyModel_MetaObject(QIdentityProxyModel* self);
void QIdentityProxyModel_Tr(const char* s, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QIdentityProxyModel_ColumnCount(QIdentityProxyModel* self);
QModelIndex* QIdentityProxyModel_Index(QIdentityProxyModel* self, int row, int column);
QModelIndex* QIdentityProxyModel_MapFromSource(QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_RowCount(QIdentityProxyModel* self);
QVariant* QIdentityProxyModel_HeaderData(QIdentityProxyModel* self, int section, uintptr_t orientation);
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Sibling(QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
void QIdentityProxyModel_Match(QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, QModelIndex*** _out, size_t* _out_len);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIdentityProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIdentityProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QIdentityProxyModel_ColumnCount1(QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index3(QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
int QIdentityProxyModel_RowCount1(QIdentityProxyModel* self, QModelIndex* parent);
QVariant* QIdentityProxyModel_HeaderData3(QIdentityProxyModel* self, int section, uintptr_t orientation, int role);
void QIdentityProxyModel_Match4(QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, QModelIndex*** _out, size_t* _out_len);
void QIdentityProxyModel_Match5(QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags, QModelIndex*** _out, size_t* _out_len);
bool QIdentityProxyModel_InsertColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_InsertRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
