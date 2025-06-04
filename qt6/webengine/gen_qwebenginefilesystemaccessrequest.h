#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFILESYSTEMACCESSREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFILESYSTEMACCESSREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineFileSystemAccessRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineFileSystemAccessRequest QWebEngineFileSystemAccessRequest;
#endif

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_operatorAssign(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_accept(QWebEngineFileSystemAccessRequest* self);
void QWebEngineFileSystemAccessRequest_reject(QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_origin(const QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_filePath(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_handleType(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_accessFlags(const QWebEngineFileSystemAccessRequest* self);

void QWebEngineFileSystemAccessRequest_delete(QWebEngineFileSystemAccessRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
