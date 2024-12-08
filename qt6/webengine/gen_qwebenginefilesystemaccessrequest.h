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
void QWebEngineFileSystemAccessRequest_OperatorAssign(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_Swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_Accept(QWebEngineFileSystemAccessRequest* self);
void QWebEngineFileSystemAccessRequest_Reject(QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_Origin(const QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_FilePath(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_HandleType(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_AccessFlags(const QWebEngineFileSystemAccessRequest* self);
void QWebEngineFileSystemAccessRequest_Delete(QWebEngineFileSystemAccessRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
