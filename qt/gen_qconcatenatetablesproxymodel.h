#ifndef GEN_QCONCATENATETABLESPROXYMODEL_H
#define GEN_QCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QConcatenateTablesProxyModel;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QConcatenateTablesProxyModel QConcatenateTablesProxyModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new();
QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent);
QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self);
struct miqt_string* QConcatenateTablesProxyModel_Tr(const char* s);
struct miqt_string* QConcatenateTablesProxyModel_TrUtf8(const char* s);
struct miqt_array* QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, QModelIndex* index);
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value);
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, QModelIndex* index);
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column);
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, QModelIndex* index);
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self);
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation);
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self);
struct miqt_array* QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self);
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, struct miqt_array* /* of QModelIndex* */ indexes);
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, QModelIndex* index);
struct miqt_string* QConcatenateTablesProxyModel_Tr2(const char* s, const char* c);
struct miqt_string* QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n);
struct miqt_string* QConcatenateTablesProxyModel_TrUtf82(const char* s, const char* c);
struct miqt_string* QConcatenateTablesProxyModel_TrUtf83(const char* s, const char* c, int n);
QVariant* QConcatenateTablesProxyModel_Data2(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_SetData3(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role);
QModelIndex* QConcatenateTablesProxyModel_Index3(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent);
int QConcatenateTablesProxyModel_RowCount1(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
QVariant* QConcatenateTablesProxyModel_HeaderData3(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
int QConcatenateTablesProxyModel_ColumnCount1(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
