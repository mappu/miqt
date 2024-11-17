#pragma once
#ifndef MIQT_QT_GEN_QMIMEDATABASE_H
#define MIQT_QT_GEN_QMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QFileInfo;
class QIODevice;
class QMimeDatabase;
class QMimeType;
class QUrl;
#else
typedef struct QByteArray QByteArray;
typedef struct QFileInfo QFileInfo;
typedef struct QIODevice QIODevice;
typedef struct QMimeDatabase QMimeDatabase;
typedef struct QMimeType QMimeType;
typedef struct QUrl QUrl;
#endif

QMimeDatabase* QMimeDatabase_new();
QMimeType* QMimeDatabase_MimeTypeForName(const QMimeDatabase* self, struct miqt_string nameOrAlias);
QMimeType* QMimeDatabase_MimeTypeForFile(const QMimeDatabase* self, struct miqt_string fileName);
QMimeType* QMimeDatabase_MimeTypeForFileWithFileInfo(const QMimeDatabase* self, QFileInfo* fileInfo);
struct miqt_array /* of QMimeType* */  QMimeDatabase_MimeTypesForFileName(const QMimeDatabase* self, struct miqt_string fileName);
QMimeType* QMimeDatabase_MimeTypeForData(const QMimeDatabase* self, struct miqt_string data);
QMimeType* QMimeDatabase_MimeTypeForDataWithDevice(const QMimeDatabase* self, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForUrl(const QMimeDatabase* self, QUrl* url);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(const QMimeDatabase* self, struct miqt_string fileName, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(const QMimeDatabase* self, struct miqt_string fileName, struct miqt_string data);
struct miqt_string QMimeDatabase_SuffixForFileName(const QMimeDatabase* self, struct miqt_string fileName);
struct miqt_array /* of QMimeType* */  QMimeDatabase_AllMimeTypes(const QMimeDatabase* self);
QMimeType* QMimeDatabase_MimeTypeForFile2(const QMimeDatabase* self, struct miqt_string fileName, int mode);
QMimeType* QMimeDatabase_MimeTypeForFile22(const QMimeDatabase* self, QFileInfo* fileInfo, int mode);
void QMimeDatabase_Delete(QMimeDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
