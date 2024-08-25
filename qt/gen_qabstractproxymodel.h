#ifndef GEN_QABSTRACTPROXYMODEL_H
#define GEN_QABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QMetaObject* QAbstractProxyModel_MetaObject(QAbstractProxyModel* self);
void QAbstractProxyModel_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractProxyModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_SourceModel(QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_MapToSource(QAbstractProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_MapFromSource(QAbstractProxyModel* self, QModelIndex* sourceIndex);
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self);
void QAbstractProxyModel_Revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_Data(QAbstractProxyModel* self, QModelIndex* proxyIndex);
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value);
QModelIndex* QAbstractProxyModel_Buddy(QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_CanFetchMore(QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent);
QSize* QAbstractProxyModel_Span(QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_HasChildren(QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_Sibling(QAbstractProxyModel* self, int row, int column, QModelIndex* idx);
QMimeData* QAbstractProxyModel_MimeData(QAbstractProxyModel* self, QModelIndex** indexes, size_t indexes_len);
void QAbstractProxyModel_MimeTypes(QAbstractProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QAbstractProxyModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractProxyModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractProxyModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractProxyModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QVariant* QAbstractProxyModel_Data2(QAbstractProxyModel* self, QModelIndex* proxyIndex, int role);
bool QAbstractProxyModel_SetData3(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_HasChildren1(QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_Delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
