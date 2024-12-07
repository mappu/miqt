#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEDOWNLOADREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEDOWNLOADREQUEST_H

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
class QWebEngineDownloadRequest;
class QWebEnginePage;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineDownloadRequest QWebEngineDownloadRequest;
typedef struct QWebEnginePage QWebEnginePage;
#endif

void QWebEngineDownloadRequest_virtbase(QWebEngineDownloadRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineDownloadRequest_MetaObject(const QWebEngineDownloadRequest* self);
void* QWebEngineDownloadRequest_Metacast(QWebEngineDownloadRequest* self, const char* param1);
struct miqt_string QWebEngineDownloadRequest_Tr(const char* s);
unsigned int QWebEngineDownloadRequest_Id(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_State(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_TotalBytes(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_ReceivedBytes(const QWebEngineDownloadRequest* self);
QUrl* QWebEngineDownloadRequest_Url(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_MimeType(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsFinished(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsPaused(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_SavePageFormat(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetSavePageFormat(QWebEngineDownloadRequest* self, int format);
int QWebEngineDownloadRequest_InterruptReason(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_InterruptReasonString(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsSavePageDownload(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_SuggestedFileName(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_DownloadDirectory(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetDownloadDirectory(QWebEngineDownloadRequest* self, struct miqt_string directory);
struct miqt_string QWebEngineDownloadRequest_DownloadFileName(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetDownloadFileName(QWebEngineDownloadRequest* self, struct miqt_string fileName);
QWebEnginePage* QWebEngineDownloadRequest_Page(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Accept(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Cancel(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Pause(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Resume(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_StateChanged(QWebEngineDownloadRequest* self, int state);
void QWebEngineDownloadRequest_connect_StateChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_SavePageFormatChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_SavePageFormatChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_ReceivedBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_ReceivedBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_TotalBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_TotalBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_InterruptReasonChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_InterruptReasonChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_IsFinishedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_IsFinishedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_IsPausedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_IsPausedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_DownloadDirectoryChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_DownloadDirectoryChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_DownloadFileNameChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_DownloadFileNameChanged(QWebEngineDownloadRequest* self, intptr_t slot);
struct miqt_string QWebEngineDownloadRequest_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineDownloadRequest_Delete(QWebEngineDownloadRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
