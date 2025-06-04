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
class QMetaMethod;
class QMetaObject;
class QObject;
class QUrl;
class QWebEngineDownloadItem;
class QWebEnginePage;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineDownloadItem QWebEngineDownloadItem;
typedef struct QWebEnginePage QWebEnginePage;
#endif

void QWebEngineDownloadItem_virtbase(QWebEngineDownloadItem* src, QObject** outptr_QObject);
QMetaObject* QWebEngineDownloadItem_metaObject(const QWebEngineDownloadItem* self);
void* QWebEngineDownloadItem_metacast(QWebEngineDownloadItem* self, const char* param1);
struct miqt_string QWebEngineDownloadItem_tr(const char* s);
struct miqt_string QWebEngineDownloadItem_trUtf8(const char* s);
unsigned int QWebEngineDownloadItem_id(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_state(const QWebEngineDownloadItem* self);
long long QWebEngineDownloadItem_totalBytes(const QWebEngineDownloadItem* self);
long long QWebEngineDownloadItem_receivedBytes(const QWebEngineDownloadItem* self);
QUrl* QWebEngineDownloadItem_url(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_mimeType(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_path(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_setPath(QWebEngineDownloadItem* self, struct miqt_string path);
bool QWebEngineDownloadItem_isFinished(const QWebEngineDownloadItem* self);
bool QWebEngineDownloadItem_isPaused(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_savePageFormat(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_setSavePageFormat(QWebEngineDownloadItem* self, int format);
int QWebEngineDownloadItem_type(const QWebEngineDownloadItem* self);
int QWebEngineDownloadItem_interruptReason(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_interruptReasonString(const QWebEngineDownloadItem* self);
bool QWebEngineDownloadItem_isSavePageDownload(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_suggestedFileName(const QWebEngineDownloadItem* self);
struct miqt_string QWebEngineDownloadItem_downloadDirectory(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_setDownloadDirectory(QWebEngineDownloadItem* self, struct miqt_string directory);
struct miqt_string QWebEngineDownloadItem_downloadFileName(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_setDownloadFileName(QWebEngineDownloadItem* self, struct miqt_string fileName);
QWebEnginePage* QWebEngineDownloadItem_page(const QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_accept(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_cancel(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_pause(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_resume(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_finished(QWebEngineDownloadItem* self);
void QWebEngineDownloadItem_connect_finished(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_stateChanged(QWebEngineDownloadItem* self, int state);
void QWebEngineDownloadItem_connect_stateChanged(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_downloadProgress(QWebEngineDownloadItem* self, long long bytesReceived, long long bytesTotal);
void QWebEngineDownloadItem_connect_downloadProgress(QWebEngineDownloadItem* self, intptr_t slot);
void QWebEngineDownloadItem_isPausedChanged(QWebEngineDownloadItem* self, bool isPaused);
void QWebEngineDownloadItem_connect_isPausedChanged(QWebEngineDownloadItem* self, intptr_t slot);
struct miqt_string QWebEngineDownloadItem_tr2(const char* s, const char* c);
struct miqt_string QWebEngineDownloadItem_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineDownloadItem_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineDownloadItem_trUtf83(const char* s, const char* c, int n);

void QWebEngineDownloadItem_delete(QWebEngineDownloadItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
