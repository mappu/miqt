#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLFILE_H
#define MIQT_QT6_QML_GEN_QQMLFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QObject;
class QQmlEngine;
class QQmlFile;
class QUrl;
#else
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlFile QQmlFile;
typedef struct QUrl QUrl;
#endif

QQmlFile* QQmlFile_new();
QQmlFile* QQmlFile_new2(QQmlEngine* param1, QUrl* param2);
QQmlFile* QQmlFile_new3(QQmlEngine* param1, struct miqt_string param2);
bool QQmlFile_isNull(const QQmlFile* self);
bool QQmlFile_isReady(const QQmlFile* self);
bool QQmlFile_isError(const QQmlFile* self);
bool QQmlFile_isLoading(const QQmlFile* self);
QUrl* QQmlFile_url(const QQmlFile* self);
int QQmlFile_status(const QQmlFile* self);
struct miqt_string QQmlFile_error(const QQmlFile* self);
long long QQmlFile_size(const QQmlFile* self);
const char* QQmlFile_data(const QQmlFile* self);
struct miqt_string QQmlFile_dataByteArray(const QQmlFile* self);
void QQmlFile_load(QQmlFile* self, QQmlEngine* param1, QUrl* param2);
void QQmlFile_load2(QQmlFile* self, QQmlEngine* param1, struct miqt_string param2);
void QQmlFile_clear(QQmlFile* self);
void QQmlFile_clearWithQObject(QQmlFile* self, QObject* param1);
bool QQmlFile_connectFinished(QQmlFile* self, QObject* param1, const char* param2);
bool QQmlFile_connectFinished2(QQmlFile* self, QObject* param1, int param2);
bool QQmlFile_connectDownloadProgress(QQmlFile* self, QObject* param1, const char* param2);
bool QQmlFile_connectDownloadProgress2(QQmlFile* self, QObject* param1, int param2);
bool QQmlFile_isSynchronous(struct miqt_string url);
bool QQmlFile_isSynchronousWithUrl(QUrl* url);
bool QQmlFile_isLocalFile(struct miqt_string url);
bool QQmlFile_isLocalFileWithUrl(QUrl* url);
struct miqt_string QQmlFile_urlToLocalFileOrQrc(struct miqt_string param1);
struct miqt_string QQmlFile_urlToLocalFileOrQrcWithQUrl(QUrl* param1);

void QQmlFile_delete(QQmlFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
