#ifndef GEN_QDIRMODEL_H
#define GEN_QDIRMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDirModel;
class QFileIconProvider;
class QFileInfo;
class QIcon;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QVariant;
#else
typedef struct QDirModel QDirModel;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QDirModel* QDirModel_new(struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort);
QDirModel* QDirModel_new2();
QDirModel* QDirModel_new3(struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort, QObject* parent);
QDirModel* QDirModel_new4(QObject* parent);
QMetaObject* QDirModel_MetaObject(const QDirModel* self);
void* QDirModel_Metacast(QDirModel* self, const char* param1);
struct miqt_string* QDirModel_Tr(const char* s);
struct miqt_string* QDirModel_TrUtf8(const char* s);
QModelIndex* QDirModel_Index(const QDirModel* self, int row, int column);
QModelIndex* QDirModel_Parent(const QDirModel* self, QModelIndex* child);
int QDirModel_RowCount(const QDirModel* self);
int QDirModel_ColumnCount(const QDirModel* self);
QVariant* QDirModel_Data(const QDirModel* self, QModelIndex* index);
bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value);
QVariant* QDirModel_HeaderData(const QDirModel* self, int section, int orientation);
bool QDirModel_HasChildren(const QDirModel* self);
int QDirModel_Flags(const QDirModel* self, QModelIndex* index);
void QDirModel_Sort(QDirModel* self, int column);
struct miqt_array* QDirModel_MimeTypes(const QDirModel* self);
QMimeData* QDirModel_MimeData(const QDirModel* self, struct miqt_array* /* of QModelIndex* */ indexes);
bool QDirModel_DropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QDirModel_SupportedDropActions(const QDirModel* self);
void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider);
QFileIconProvider* QDirModel_IconProvider(const QDirModel* self);
void QDirModel_SetNameFilters(QDirModel* self, struct miqt_array* /* of struct miqt_string* */ filters);
struct miqt_array* QDirModel_NameFilters(const QDirModel* self);
void QDirModel_SetFilter(QDirModel* self, int filters);
int QDirModel_Filter(const QDirModel* self);
void QDirModel_SetSorting(QDirModel* self, int sort);
int QDirModel_Sorting(const QDirModel* self);
void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable);
bool QDirModel_ResolveSymlinks(const QDirModel* self);
void QDirModel_SetReadOnly(QDirModel* self, bool enable);
bool QDirModel_IsReadOnly(const QDirModel* self);
void QDirModel_SetLazyChildCount(QDirModel* self, bool enable);
bool QDirModel_LazyChildCount(const QDirModel* self);
QModelIndex* QDirModel_IndexWithPath(const QDirModel* self, struct miqt_string* path);
bool QDirModel_IsDir(const QDirModel* self, QModelIndex* index);
QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string* name);
bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index);
bool QDirModel_Remove(QDirModel* self, QModelIndex* index);
struct miqt_string* QDirModel_FilePath(const QDirModel* self, QModelIndex* index);
struct miqt_string* QDirModel_FileName(const QDirModel* self, QModelIndex* index);
QIcon* QDirModel_FileIcon(const QDirModel* self, QModelIndex* index);
QFileInfo* QDirModel_FileInfo(const QDirModel* self, QModelIndex* index);
void QDirModel_Refresh(QDirModel* self);
struct miqt_string* QDirModel_Tr2(const char* s, const char* c);
struct miqt_string* QDirModel_Tr3(const char* s, const char* c, int n);
struct miqt_string* QDirModel_TrUtf82(const char* s, const char* c);
struct miqt_string* QDirModel_TrUtf83(const char* s, const char* c, int n);
QModelIndex* QDirModel_Index3(const QDirModel* self, int row, int column, QModelIndex* parent);
int QDirModel_RowCount1(const QDirModel* self, QModelIndex* parent);
int QDirModel_ColumnCount1(const QDirModel* self, QModelIndex* parent);
QVariant* QDirModel_Data2(const QDirModel* self, QModelIndex* index, int role);
bool QDirModel_SetData3(QDirModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QDirModel_HeaderData3(const QDirModel* self, int section, int orientation, int role);
bool QDirModel_HasChildren1(const QDirModel* self, QModelIndex* index);
void QDirModel_Sort2(QDirModel* self, int column, int order);
QModelIndex* QDirModel_Index2(const QDirModel* self, struct miqt_string* path, int column);
void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent);
void QDirModel_Delete(QDirModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
