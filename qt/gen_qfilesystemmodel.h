#ifndef GEN_QFILESYSTEMMODEL_H
#define GEN_QFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QDir;
class QFileIconProvider;
class QFileInfo;
class QFileSystemModel;
class QIcon;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QFileSystemModel* QFileSystemModel_new();
QFileSystemModel* QFileSystemModel_new2(QObject* parent);
QMetaObject* QFileSystemModel_MetaObject(QFileSystemModel* self);
void QFileSystemModel_Tr(char* s, char** _out, int* _out_Strlen);
void QFileSystemModel_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFileSystemModel_RootPathChanged(QFileSystemModel* self, const char* newPath, size_t newPath_Strlen);
void QFileSystemModel_connect_RootPathChanged(QFileSystemModel* self, void* slot);
void QFileSystemModel_FileRenamed(QFileSystemModel* self, const char* path, size_t path_Strlen, const char* oldName, size_t oldName_Strlen, const char* newName, size_t newName_Strlen);
void QFileSystemModel_connect_FileRenamed(QFileSystemModel* self, void* slot);
void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, const char* path, size_t path_Strlen);
void QFileSystemModel_connect_DirectoryLoaded(QFileSystemModel* self, void* slot);
QModelIndex* QFileSystemModel_Index(QFileSystemModel* self, int row, int column);
QModelIndex* QFileSystemModel_IndexWithPath(QFileSystemModel* self, const char* path, size_t path_Strlen);
QModelIndex* QFileSystemModel_Parent(QFileSystemModel* self, QModelIndex* child);
QModelIndex* QFileSystemModel_Sibling(QFileSystemModel* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_HasChildren(QFileSystemModel* self);
bool QFileSystemModel_CanFetchMore(QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount(QFileSystemModel* self);
int QFileSystemModel_ColumnCount(QFileSystemModel* self);
QVariant* QFileSystemModel_MyComputer(QFileSystemModel* self);
QVariant* QFileSystemModel_Data(QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value);
void QFileSystemModel_MimeTypes(QFileSystemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
QMimeData* QFileSystemModel_MimeData(QFileSystemModel* self, QModelIndex** indexes, size_t indexes_len);
QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const char* path, size_t path_Strlen);
void QFileSystemModel_RootPath(QFileSystemModel* self, char** _out, int* _out_Strlen);
QDir* QFileSystemModel_RootDirectory(QFileSystemModel* self);
void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QFileIconProvider* provider);
QFileIconProvider* QFileSystemModel_IconProvider(QFileSystemModel* self);
void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable);
bool QFileSystemModel_ResolveSymlinks(QFileSystemModel* self);
void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable);
bool QFileSystemModel_IsReadOnly(QFileSystemModel* self);
void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable);
bool QFileSystemModel_NameFilterDisables(QFileSystemModel* self);
void QFileSystemModel_SetNameFilters(QFileSystemModel* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QFileSystemModel_NameFilters(QFileSystemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSystemModel_FilePath(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen);
bool QFileSystemModel_IsDir(QFileSystemModel* self, QModelIndex* index);
int64_t QFileSystemModel_Size(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_Type(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen);
QDateTime* QFileSystemModel_LastModified(QFileSystemModel* self, QModelIndex* index);
QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, QModelIndex* parent, const char* name, size_t name_Strlen);
bool QFileSystemModel_Rmdir(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_FileName(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen);
QIcon* QFileSystemModel_FileIcon(QFileSystemModel* self, QModelIndex* index);
QFileInfo* QFileSystemModel_FileInfo(QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_Remove(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFileSystemModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFileSystemModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFileSystemModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QModelIndex* QFileSystemModel_Index3(QFileSystemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QFileSystemModel_Index2(QFileSystemModel* self, const char* path, size_t path_Strlen, int column);
bool QFileSystemModel_HasChildren1(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount1(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_ColumnCount1(QFileSystemModel* self, QModelIndex* parent);
QVariant* QFileSystemModel_MyComputer1(QFileSystemModel* self, int role);
QVariant* QFileSystemModel_Data2(QFileSystemModel* self, QModelIndex* index, int role);
bool QFileSystemModel_SetData3(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
void QFileSystemModel_Delete(QFileSystemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
