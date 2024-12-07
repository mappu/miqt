#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEDOWNLOADITEM_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEDOWNLOADITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QUrl;
class QWebEngineDownloadItem;
class QWebEnginePage;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineDownloadItem QWebEngineDownloadItem;
typedef struct QWebEnginePage QWebEnginePage;
#endif

void QWebEngineDownloadItem_virtbase(QWebEngineDownloadItem* src, QObject** outptr_QObject);
QMetaObject* QWebEngineDownloadItem_MetaObject(const QWebEngineDownloadItem* self);
void* QWebEngineDownloadItem_Metacast(QWebEngineDownloadItem* self, const char* param1);
struct miqt_string QWebEngineDownloadItem_Tr(const char* s);
struct miqt_string QWebEngineDownloadItem_TrUtf8(const char* s);
unsigned int QWebEngineDownloadItem_Id(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_State(const QWebEngineDownloadItem* self);
long long QWebEngineDownloadItem_TotalBytes(const QWebEngineDownloadItem* self);
long long QWebEngineDownloadItem_ReceivedBytes(const QWebEngineDownloadItem* self);
QUrl* QWebEngineDownloadItem_Url(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_MimeType(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_Path(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_SetPath(QWebEngineDownloadItem* self, struct miqt_string path);
bool QWebEngineDownloadItem_IsFinished(const QWebEngineDownloadItem* self);
bool QWebEngineDownloadItem_IsPaused(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_SavePageFormat(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_SetSavePageFormat(QWebEngineDownloadItem* self, int format);
int QWebEngineDownloadItem_Type(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_InterruptReason(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_InterruptReasonString(const QWebEngineDownloadItem* self);
bool QWebEngineDownloadItem_IsSavePageDownload(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_SuggestedFileName(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_DownloadDirectory(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_SetDownloadDirectory(QWebEngineDownloadItem* self, struct miqt_string directory);
struct miqt_string QWebEngineDownloadItem_DownloadFileName(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_SetDownloadFileName(QWebEngineDownloadItem* self, struct miqt_string fileName);
QWebEnginePage* QWebEngineDownloadItem_Page(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_Accept(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_Cancel(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_Pause(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_Resume(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_Finished(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_connect_Finished(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_StateChanged(QWebEngineDownloadItem* self, int state);
void QWebEngineDownloadItem_connect_StateChanged(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_DownloadProgress(QWebEngineDownloadItem* self, long long bytesReceived, long long bytesTotal);
void QWebEngineDownloadItem_connect_DownloadProgress(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_IsPausedChanged(QWebEngineDownloadItem* self, bool isPaused);
void QWebEngineDownloadItem_connect_IsPausedChanged(QWebEngineDownloadItem* self, intptr_t slot);
struct miqt_string QWebEngineDownloadItem_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineDownloadItem_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineDownloadItem_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineDownloadItem_TrUtf83(const char* s, const char* c, int n);
void QWebEngineDownloadItem_Delete(QWebEngineDownloadItem* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
