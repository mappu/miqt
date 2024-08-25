#ifndef GEN_QDIRMODEL_H
#define GEN_QDIRMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QDirModel* QDirModel_new();
QDirModel* QDirModel_new2(QObject* parent);
QMetaObject* QDirModel_MetaObject(QDirModel* self);
void QDirModel_Tr(char* s, char** _out, int* _out_Strlen);
void QDirModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
QModelIndex* QDirModel_Index(QDirModel* self, int row, int column);
QModelIndex* QDirModel_Parent(QDirModel* self, QModelIndex* child);
int QDirModel_RowCount(QDirModel* self);
int QDirModel_ColumnCount(QDirModel* self);
QVariant* QDirModel_Data(QDirModel* self, QModelIndex* index);
bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value);
bool QDirModel_HasChildren(QDirModel* self);
void QDirModel_MimeTypes(QDirModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
QMimeData* QDirModel_MimeData(QDirModel* self, QModelIndex** indexes, size_t indexes_len);
void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider);
QFileIconProvider* QDirModel_IconProvider(QDirModel* self);
void QDirModel_SetNameFilters(QDirModel* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QDirModel_NameFilters(QDirModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable);
bool QDirModel_ResolveSymlinks(QDirModel* self);
void QDirModel_SetReadOnly(QDirModel* self, bool enable);
bool QDirModel_IsReadOnly(QDirModel* self);
void QDirModel_SetLazyChildCount(QDirModel* self, bool enable);
bool QDirModel_LazyChildCount(QDirModel* self);
QModelIndex* QDirModel_IndexWithPath(QDirModel* self, const char* path, size_t path_Strlen);
bool QDirModel_IsDir(QDirModel* self, QModelIndex* index);
QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, const char* name, size_t name_Strlen);
bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index);
bool QDirModel_Remove(QDirModel* self, QModelIndex* index);
void QDirModel_FilePath(QDirModel* self, QModelIndex* index, char** _out, int* _out_Strlen);
void QDirModel_FileName(QDirModel* self, QModelIndex* index, char** _out, int* _out_Strlen);
QIcon* QDirModel_FileIcon(QDirModel* self, QModelIndex* index);
QFileInfo* QDirModel_FileInfo(QDirModel* self, QModelIndex* index);
void QDirModel_Refresh(QDirModel* self);
void QDirModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QDirModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDirModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QDirModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QModelIndex* QDirModel_Index3(QDirModel* self, int row, int column, QModelIndex* parent);
int QDirModel_RowCount1(QDirModel* self, QModelIndex* parent);
int QDirModel_ColumnCount1(QDirModel* self, QModelIndex* parent);
QVariant* QDirModel_Data2(QDirModel* self, QModelIndex* index, int role);
bool QDirModel_SetData3(QDirModel* self, QModelIndex* index, QVariant* value, int role);
bool QDirModel_HasChildren1(QDirModel* self, QModelIndex* index);
QModelIndex* QDirModel_Index2(QDirModel* self, const char* path, size_t path_Strlen, int column);
void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent);
void QDirModel_Delete(QDirModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
