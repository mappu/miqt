#ifndef GEN_QFILEDIALOG_H
#define GEN_QFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractProxyModel;
class QByteArray;
class QDir;
class QFileDialog;
class QFileIconProvider;
class QMetaObject;
class QUrl;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QByteArray QByteArray;
typedef struct QDir QDir;
typedef struct QFileDialog QFileDialog;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QMetaObject QMetaObject;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

QFileDialog* QFileDialog_new();
QFileDialog* QFileDialog_new2(QWidget* parent);
QFileDialog* QFileDialog_new3(QWidget* parent, const char* caption, size_t caption_Strlen);
QFileDialog* QFileDialog_new4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen);
QFileDialog* QFileDialog_new5(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen, const char* filter, size_t filter_Strlen);
QMetaObject* QFileDialog_MetaObject(QFileDialog* self);
void QFileDialog_Tr(char* s, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFileDialog_SetDirectory(QFileDialog* self, const char* directory, size_t directory_Strlen);
void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory);
QDir* QFileDialog_Directory(QFileDialog* self);
void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory);
QUrl* QFileDialog_DirectoryUrl(QFileDialog* self);
void QFileDialog_SelectFile(QFileDialog* self, const char* filename, size_t filename_Strlen);
void QFileDialog_SelectedFiles(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url);
void QFileDialog_SelectedUrls(QFileDialog* self, QUrl*** _out, size_t* _out_len);
void QFileDialog_SetNameFilterDetailsVisible(QFileDialog* self, bool enabled);
bool QFileDialog_IsNameFilterDetailsVisible(QFileDialog* self);
void QFileDialog_SetNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_SetNameFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QFileDialog_NameFilters(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_SelectedMimeTypeFilter(QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SelectedNameFilter(QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SetMimeTypeFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QFileDialog_MimeTypeFilters(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_SetReadOnly(QFileDialog* self, bool enabled);
bool QFileDialog_IsReadOnly(QFileDialog* self);
void QFileDialog_SetResolveSymlinks(QFileDialog* self, bool enabled);
bool QFileDialog_ResolveSymlinks(QFileDialog* self);
void QFileDialog_SetSidebarUrls(QFileDialog* self, QUrl** urls, size_t urls_len);
void QFileDialog_SidebarUrls(QFileDialog* self, QUrl*** _out, size_t* _out_len);
QByteArray* QFileDialog_SaveState(QFileDialog* self);
bool QFileDialog_RestoreState(QFileDialog* self, QByteArray* state);
void QFileDialog_SetConfirmOverwrite(QFileDialog* self, bool enabled);
bool QFileDialog_ConfirmOverwrite(QFileDialog* self);
void QFileDialog_SetDefaultSuffix(QFileDialog* self, const char* suffix, size_t suffix_Strlen);
void QFileDialog_DefaultSuffix(QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SetHistory(QFileDialog* self, char** paths, uint64_t* paths_Lengths, size_t paths_len);
void QFileDialog_History(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QFileDialog_ItemDelegate(QFileDialog* self);
void QFileDialog_SetIconProvider(QFileDialog* self, QFileIconProvider* provider);
QFileIconProvider* QFileDialog_IconProvider(QFileDialog* self);
void QFileDialog_SetSupportedSchemes(QFileDialog* self, char** schemes, uint64_t* schemes_Lengths, size_t schemes_len);
void QFileDialog_SupportedSchemes(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model);
QAbstractProxyModel* QFileDialog_ProxyModel(QFileDialog* self);
void QFileDialog_SetVisible(QFileDialog* self, bool visible);
void QFileDialog_FileSelected(QFileDialog* self, const char* file, size_t file_Strlen);
void QFileDialog_connect_FileSelected(QFileDialog* self, void* slot);
void QFileDialog_FilesSelected(QFileDialog* self, char** files, uint64_t* files_Lengths, size_t files_len);
void QFileDialog_connect_FilesSelected(QFileDialog* self, void* slot);
void QFileDialog_CurrentChanged(QFileDialog* self, const char* path, size_t path_Strlen);
void QFileDialog_connect_CurrentChanged(QFileDialog* self, void* slot);
void QFileDialog_DirectoryEntered(QFileDialog* self, const char* directory, size_t directory_Strlen);
void QFileDialog_connect_DirectoryEntered(QFileDialog* self, void* slot);
void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url);
void QFileDialog_connect_UrlSelected(QFileDialog* self, void* slot);
void QFileDialog_UrlsSelected(QFileDialog* self, QUrl** urls, size_t urls_len);
void QFileDialog_connect_UrlsSelected(QFileDialog* self, void* slot);
void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url);
void QFileDialog_connect_CurrentUrlChanged(QFileDialog* self, void* slot);
void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory);
void QFileDialog_connect_DirectoryUrlEntered(QFileDialog* self, void* slot);
void QFileDialog_FilterSelected(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_connect_FilterSelected(QFileDialog* self, void* slot);
void QFileDialog_SaveFileContent(QByteArray* fileContent);
void QFileDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFileDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFileDialog_SaveFileContent2(QByteArray* fileContent, const char* fileNameHint, size_t fileNameHint_Strlen);
void QFileDialog_Delete(QFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif