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
QMetaObject* QWebEngineDownloadRequest_metaObject(const QWebEngineDownloadRequest* self);
void* QWebEngineDownloadRequest_metacast(QWebEngineDownloadRequest* self, const char* param1);
struct miqt_string QWebEngineDownloadRequest_tr(const char* s);
unsigned int QWebEngineDownloadRequest_id(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_state(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_totalBytes(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_receivedBytes(const QWebEngineDownloadRequest* self);
QUrl* QWebEngineDownloadRequest_url(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_mimeType(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_isFinished(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_isPaused(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_savePageFormat(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_setSavePageFormat(QWebEngineDownloadRequest* self, int format);
int QWebEngineDownloadRequest_interruptReason(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_interruptReasonString(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_isSavePageDownload(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_suggestedFileName(const QWebEngineDownloadRequest* self);
struct miqt_string QWebEngineDownloadRequest_downloadDirectory(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_setDownloadDirectory(QWebEngineDownloadRequest* self, struct miqt_string directory);
struct miqt_string QWebEngineDownloadRequest_downloadFileName(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_setDownloadFileName(QWebEngineDownloadRequest* self, struct miqt_string fileName);
QWebEnginePage* QWebEngineDownloadRequest_page(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_accept(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_cancel(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_pause(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_resume(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_stateChanged(QWebEngineDownloadRequest* self, int state);
void QWebEngineDownloadRequest_connect_stateChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_savePageFormatChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_savePageFormatChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_receivedBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_receivedBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_totalBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_totalBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_interruptReasonChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_interruptReasonChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_isFinishedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_isFinishedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_isPausedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_isPausedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_downloadDirectoryChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_downloadDirectoryChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_downloadFileNameChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_connect_downloadFileNameChanged(QWebEngineDownloadRequest* self, intptr_t slot);
struct miqt_string QWebEngineDownloadRequest_tr2(const char* s, const char* c);
struct miqt_string QWebEngineDownloadRequest_tr3(const char* s, const char* c, int n);
void QWebEngineDownloadRequest_delete(QWebEngineDownloadRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
