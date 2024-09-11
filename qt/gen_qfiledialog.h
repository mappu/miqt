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

QFileDialog* QFileDialog_new(QWidget* parent, int f);
QFileDialog* QFileDialog_new2();
QFileDialog* QFileDialog_new3(QWidget* parent);
QFileDialog* QFileDialog_new4(QWidget* parent, const char* caption, size_t caption_Strlen);
QFileDialog* QFileDialog_new5(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen);
QFileDialog* QFileDialog_new6(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen, const char* filter, size_t filter_Strlen);
QMetaObject* QFileDialog_MetaObject(const QFileDialog* self);
void QFileDialog_Tr(const char* s, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFileDialog_SetDirectory(QFileDialog* self, const char* directory, size_t directory_Strlen);
void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory);
QDir* QFileDialog_Directory(const QFileDialog* self);
void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory);
QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self);
void QFileDialog_SelectFile(QFileDialog* self, const char* filename, size_t filename_Strlen);
void QFileDialog_SelectedFiles(const QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url);
void QFileDialog_SelectedUrls(const QFileDialog* self, QUrl*** _out, size_t* _out_len);
void QFileDialog_SetNameFilterDetailsVisible(QFileDialog* self, bool enabled);
bool QFileDialog_IsNameFilterDetailsVisible(const QFileDialog* self);
void QFileDialog_SetNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_SetNameFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QFileDialog_NameFilters(const QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
void QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SelectedNameFilter(const QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SetMimeTypeFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len);
void QFileDialog_MimeTypeFilters(const QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const char* filter, size_t filter_Strlen);
int QFileDialog_Filter(const QFileDialog* self);
void QFileDialog_SetFilter(QFileDialog* self, int filters);
void QFileDialog_SetViewMode(QFileDialog* self, uintptr_t mode);
uintptr_t QFileDialog_ViewMode(const QFileDialog* self);
void QFileDialog_SetFileMode(QFileDialog* self, uintptr_t mode);
uintptr_t QFileDialog_FileMode(const QFileDialog* self);
void QFileDialog_SetAcceptMode(QFileDialog* self, uintptr_t mode);
uintptr_t QFileDialog_AcceptMode(const QFileDialog* self);
void QFileDialog_SetReadOnly(QFileDialog* self, bool enabled);
bool QFileDialog_IsReadOnly(const QFileDialog* self);
void QFileDialog_SetResolveSymlinks(QFileDialog* self, bool enabled);
bool QFileDialog_ResolveSymlinks(const QFileDialog* self);
void QFileDialog_SetSidebarUrls(QFileDialog* self, QUrl** urls, size_t urls_len);
void QFileDialog_SidebarUrls(const QFileDialog* self, QUrl*** _out, size_t* _out_len);
QByteArray* QFileDialog_SaveState(const QFileDialog* self);
bool QFileDialog_RestoreState(QFileDialog* self, QByteArray* state);
void QFileDialog_SetConfirmOverwrite(QFileDialog* self, bool enabled);
bool QFileDialog_ConfirmOverwrite(const QFileDialog* self);
void QFileDialog_SetDefaultSuffix(QFileDialog* self, const char* suffix, size_t suffix_Strlen);
void QFileDialog_DefaultSuffix(const QFileDialog* self, char** _out, int* _out_Strlen);
void QFileDialog_SetHistory(QFileDialog* self, char** paths, uint64_t* paths_Lengths, size_t paths_len);
void QFileDialog_History(const QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self);
void QFileDialog_SetIconProvider(QFileDialog* self, QFileIconProvider* provider);
QFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self);
void QFileDialog_SetLabelText(QFileDialog* self, uintptr_t label, const char* text, size_t text_Strlen);
void QFileDialog_LabelText(const QFileDialog* self, uintptr_t label, char** _out, int* _out_Strlen);
void QFileDialog_SetSupportedSchemes(QFileDialog* self, char** schemes, uint64_t* schemes_Lengths, size_t schemes_len);
void QFileDialog_SupportedSchemes(const QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model);
QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self);
void QFileDialog_SetOption(QFileDialog* self, uintptr_t option);
bool QFileDialog_TestOption(const QFileDialog* self, uintptr_t option);
void QFileDialog_SetOptions(QFileDialog* self, int options);
int QFileDialog_Options(const QFileDialog* self);
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
void QFileDialog_GetOpenFileName(char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetOpenFileUrl();
void QFileDialog_GetSaveFileName(char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetSaveFileUrl();
void QFileDialog_GetExistingDirectory(char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetExistingDirectoryUrl();
void QFileDialog_GetOpenFileNames(char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_GetOpenFileUrls(QUrl*** _out, size_t* _out_len);
void QFileDialog_SaveFileContent(QByteArray* fileContent);
void QFileDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileDialog_SetOption2(QFileDialog* self, uintptr_t option, bool on);
void QFileDialog_GetOpenFileName1(QWidget* parent, char** _out, int* _out_Strlen);
void QFileDialog_GetOpenFileName2(QWidget* parent, const char* caption, size_t caption_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetOpenFileName3(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetOpenFileName4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, const char* filter, size_t filter_Strlen, char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, const char* caption, size_t caption_Strlen);
QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir);
QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, const char* filter, size_t filter_Strlen);
void QFileDialog_GetSaveFileName1(QWidget* parent, char** _out, int* _out_Strlen);
void QFileDialog_GetSaveFileName2(QWidget* parent, const char* caption, size_t caption_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetSaveFileName3(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetSaveFileName4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, const char* filter, size_t filter_Strlen, char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, const char* caption, size_t caption_Strlen);
QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir);
QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, const char* filter, size_t filter_Strlen);
void QFileDialog_GetExistingDirectory1(QWidget* parent, char** _out, int* _out_Strlen);
void QFileDialog_GetExistingDirectory2(QWidget* parent, const char* caption, size_t caption_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetExistingDirectory3(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, char** _out, int* _out_Strlen);
void QFileDialog_GetExistingDirectory4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, int options, char** _out, int* _out_Strlen);
QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent);
QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, const char* caption, size_t caption_Strlen);
QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir);
QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, int options, char** supportedSchemes, uint64_t* supportedSchemes_Lengths, size_t supportedSchemes_len);
void QFileDialog_GetOpenFileNames1(QWidget* parent, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_GetOpenFileNames2(QWidget* parent, const char* caption, size_t caption_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_GetOpenFileNames3(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_GetOpenFileNames4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* dir, size_t dir_Strlen, const char* filter, size_t filter_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileDialog_GetOpenFileUrls1(QWidget* parent, QUrl*** _out, size_t* _out_len);
void QFileDialog_GetOpenFileUrls2(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl*** _out, size_t* _out_len);
void QFileDialog_GetOpenFileUrls3(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, QUrl*** _out, size_t* _out_len);
void QFileDialog_GetOpenFileUrls4(QWidget* parent, const char* caption, size_t caption_Strlen, QUrl* dir, const char* filter, size_t filter_Strlen, QUrl*** _out, size_t* _out_len);
void QFileDialog_SaveFileContent2(QByteArray* fileContent, const char* fileNameHint, size_t fileNameHint_Strlen);
void QFileDialog_Delete(QFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
