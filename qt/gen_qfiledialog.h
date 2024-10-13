#ifndef GEN_QFILEDIALOG_H
#define GEN_QFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QFileDialog* QFileDialog_new4(QWidget* parent, struct miqt_string* caption);
QFileDialog* QFileDialog_new5(QWidget* parent, struct miqt_string* caption, struct miqt_string* directory);
QFileDialog* QFileDialog_new6(QWidget* parent, struct miqt_string* caption, struct miqt_string* directory, struct miqt_string* filter);
QMetaObject* QFileDialog_MetaObject(const QFileDialog* self);
void* QFileDialog_Metacast(QFileDialog* self, const char* param1);
struct miqt_string* QFileDialog_Tr(const char* s);
struct miqt_string* QFileDialog_TrUtf8(const char* s);
void QFileDialog_SetDirectory(QFileDialog* self, struct miqt_string* directory);
void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory);
QDir* QFileDialog_Directory(const QFileDialog* self);
void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory);
QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self);
void QFileDialog_SelectFile(QFileDialog* self, struct miqt_string* filename);
struct miqt_array* QFileDialog_SelectedFiles(const QFileDialog* self);
void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url);
struct miqt_array* QFileDialog_SelectedUrls(const QFileDialog* self);
void QFileDialog_SetNameFilterDetailsVisible(QFileDialog* self, bool enabled);
bool QFileDialog_IsNameFilterDetailsVisible(const QFileDialog* self);
void QFileDialog_SetNameFilter(QFileDialog* self, struct miqt_string* filter);
void QFileDialog_SetNameFilters(QFileDialog* self, struct miqt_array* /* of struct miqt_string* */ filters);
struct miqt_array* QFileDialog_NameFilters(const QFileDialog* self);
void QFileDialog_SelectNameFilter(QFileDialog* self, struct miqt_string* filter);
struct miqt_string* QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self);
struct miqt_string* QFileDialog_SelectedNameFilter(const QFileDialog* self);
void QFileDialog_SetMimeTypeFilters(QFileDialog* self, struct miqt_array* /* of struct miqt_string* */ filters);
struct miqt_array* QFileDialog_MimeTypeFilters(const QFileDialog* self);
void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, struct miqt_string* filter);
int QFileDialog_Filter(const QFileDialog* self);
void QFileDialog_SetFilter(QFileDialog* self, int filters);
void QFileDialog_SetViewMode(QFileDialog* self, int mode);
int QFileDialog_ViewMode(const QFileDialog* self);
void QFileDialog_SetFileMode(QFileDialog* self, int mode);
int QFileDialog_FileMode(const QFileDialog* self);
void QFileDialog_SetAcceptMode(QFileDialog* self, int mode);
int QFileDialog_AcceptMode(const QFileDialog* self);
void QFileDialog_SetReadOnly(QFileDialog* self, bool enabled);
bool QFileDialog_IsReadOnly(const QFileDialog* self);
void QFileDialog_SetResolveSymlinks(QFileDialog* self, bool enabled);
bool QFileDialog_ResolveSymlinks(const QFileDialog* self);
void QFileDialog_SetSidebarUrls(QFileDialog* self, struct miqt_array* /* of QUrl* */ urls);
struct miqt_array* QFileDialog_SidebarUrls(const QFileDialog* self);
QByteArray* QFileDialog_SaveState(const QFileDialog* self);
bool QFileDialog_RestoreState(QFileDialog* self, QByteArray* state);
void QFileDialog_SetConfirmOverwrite(QFileDialog* self, bool enabled);
bool QFileDialog_ConfirmOverwrite(const QFileDialog* self);
void QFileDialog_SetDefaultSuffix(QFileDialog* self, struct miqt_string* suffix);
struct miqt_string* QFileDialog_DefaultSuffix(const QFileDialog* self);
void QFileDialog_SetHistory(QFileDialog* self, struct miqt_array* /* of struct miqt_string* */ paths);
struct miqt_array* QFileDialog_History(const QFileDialog* self);
void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self);
void QFileDialog_SetIconProvider(QFileDialog* self, QFileIconProvider* provider);
QFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self);
void QFileDialog_SetLabelText(QFileDialog* self, int label, struct miqt_string* text);
struct miqt_string* QFileDialog_LabelText(const QFileDialog* self, int label);
void QFileDialog_SetSupportedSchemes(QFileDialog* self, struct miqt_array* /* of struct miqt_string* */ schemes);
struct miqt_array* QFileDialog_SupportedSchemes(const QFileDialog* self);
void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model);
QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self);
void QFileDialog_SetOption(QFileDialog* self, int option);
bool QFileDialog_TestOption(const QFileDialog* self, int option);
void QFileDialog_SetOptions(QFileDialog* self, int options);
int QFileDialog_Options(const QFileDialog* self);
void QFileDialog_SetVisible(QFileDialog* self, bool visible);
void QFileDialog_FileSelected(QFileDialog* self, struct miqt_string* file);
void QFileDialog_connect_FileSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_FilesSelected(QFileDialog* self, struct miqt_array* /* of struct miqt_string* */ files);
void QFileDialog_connect_FilesSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentChanged(QFileDialog* self, struct miqt_string* path);
void QFileDialog_connect_CurrentChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryEntered(QFileDialog* self, struct miqt_string* directory);
void QFileDialog_connect_DirectoryEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url);
void QFileDialog_connect_UrlSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlsSelected(QFileDialog* self, struct miqt_array* /* of QUrl* */ urls);
void QFileDialog_connect_UrlsSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url);
void QFileDialog_connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory);
void QFileDialog_connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_FilterSelected(QFileDialog* self, struct miqt_string* filter);
void QFileDialog_connect_FilterSelected(QFileDialog* self, intptr_t slot);
struct miqt_string* QFileDialog_GetOpenFileName();
QUrl* QFileDialog_GetOpenFileUrl();
struct miqt_string* QFileDialog_GetSaveFileName();
QUrl* QFileDialog_GetSaveFileUrl();
struct miqt_string* QFileDialog_GetExistingDirectory();
QUrl* QFileDialog_GetExistingDirectoryUrl();
struct miqt_array* QFileDialog_GetOpenFileNames();
struct miqt_array* QFileDialog_GetOpenFileUrls();
void QFileDialog_SaveFileContent(QByteArray* fileContent);
struct miqt_string* QFileDialog_Tr2(const char* s, const char* c);
struct miqt_string* QFileDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string* QFileDialog_TrUtf82(const char* s, const char* c);
struct miqt_string* QFileDialog_TrUtf83(const char* s, const char* c, int n);
void QFileDialog_SetOption2(QFileDialog* self, int option, bool on);
struct miqt_string* QFileDialog_GetOpenFileName1(QWidget* parent);
struct miqt_string* QFileDialog_GetOpenFileName2(QWidget* parent, struct miqt_string* caption);
struct miqt_string* QFileDialog_GetOpenFileName3(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir);
struct miqt_string* QFileDialog_GetOpenFileName4(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir, struct miqt_string* filter);
QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, struct miqt_string* caption);
QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, struct miqt_string* caption, QUrl* dir);
QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, struct miqt_string* caption, QUrl* dir, struct miqt_string* filter);
struct miqt_string* QFileDialog_GetSaveFileName1(QWidget* parent);
struct miqt_string* QFileDialog_GetSaveFileName2(QWidget* parent, struct miqt_string* caption);
struct miqt_string* QFileDialog_GetSaveFileName3(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir);
struct miqt_string* QFileDialog_GetSaveFileName4(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir, struct miqt_string* filter);
QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, struct miqt_string* caption);
QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, struct miqt_string* caption, QUrl* dir);
QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, struct miqt_string* caption, QUrl* dir, struct miqt_string* filter);
struct miqt_string* QFileDialog_GetExistingDirectory1(QWidget* parent);
struct miqt_string* QFileDialog_GetExistingDirectory2(QWidget* parent, struct miqt_string* caption);
struct miqt_string* QFileDialog_GetExistingDirectory3(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir);
struct miqt_string* QFileDialog_GetExistingDirectory4(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent);
QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, struct miqt_string* caption);
QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, struct miqt_string* caption, QUrl* dir);
QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, struct miqt_string* caption, QUrl* dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, struct miqt_string* caption, QUrl* dir, int options, struct miqt_array* /* of struct miqt_string* */ supportedSchemes);
struct miqt_array* QFileDialog_GetOpenFileNames1(QWidget* parent);
struct miqt_array* QFileDialog_GetOpenFileNames2(QWidget* parent, struct miqt_string* caption);
struct miqt_array* QFileDialog_GetOpenFileNames3(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir);
struct miqt_array* QFileDialog_GetOpenFileNames4(QWidget* parent, struct miqt_string* caption, struct miqt_string* dir, struct miqt_string* filter);
struct miqt_array* QFileDialog_GetOpenFileUrls1(QWidget* parent);
struct miqt_array* QFileDialog_GetOpenFileUrls2(QWidget* parent, struct miqt_string* caption);
struct miqt_array* QFileDialog_GetOpenFileUrls3(QWidget* parent, struct miqt_string* caption, QUrl* dir);
struct miqt_array* QFileDialog_GetOpenFileUrls4(QWidget* parent, struct miqt_string* caption, QUrl* dir, struct miqt_string* filter);
void QFileDialog_SaveFileContent2(QByteArray* fileContent, struct miqt_string* fileNameHint);
void QFileDialog_Delete(QFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
