#pragma once
#ifndef MIQT_QT6_GEN_QMIMEDATABASE_H
#define MIQT_QT6_GEN_QMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileInfo;
class QIODevice;
class QMimeDatabase;
class QMimeType;
class QUrl;
#else
typedef struct QFileInfo QFileInfo;
typedef struct QIODevice QIODevice;
typedef struct QMimeDatabase QMimeDatabase;
typedef struct QMimeType QMimeType;
typedef struct QUrl QUrl;
#endif

QMimeDatabase* QMimeDatabase_new();
QMimeType* QMimeDatabase_mimeTypeForName(const QMimeDatabase* self, struct miqt_string nameOrAlias);
QMimeType* QMimeDatabase_mimeTypeForFile(const QMimeDatabase* self, struct miqt_string fileName);
QMimeType* QMimeDatabase_mimeTypeForFileWithFileInfo(const QMimeDatabase* self, QFileInfo* fileInfo);
struct miqt_array /* of QMimeType* */  QMimeDatabase_mimeTypesForFileName(const QMimeDatabase* self, struct miqt_string fileName);
QMimeType* QMimeDatabase_mimeTypeForData(const QMimeDatabase* self, struct miqt_string data);
QMimeType* QMimeDatabase_mimeTypeForDataWithDevice(const QMimeDatabase* self, QIODevice* device);
QMimeType* QMimeDatabase_mimeTypeForUrl(const QMimeDatabase* self, QUrl* url);
QMimeType* QMimeDatabase_mimeTypeForFileNameAndData(const QMimeDatabase* self, struct miqt_string fileName, QIODevice* device);
QMimeType* QMimeDatabase_mimeTypeForFileNameAndData2(const QMimeDatabase* self, struct miqt_string fileName, struct miqt_string data);
struct miqt_string QMimeDatabase_suffixForFileName(const QMimeDatabase* self, struct miqt_string fileName);
struct miqt_array /* of QMimeType* */  QMimeDatabase_allMimeTypes(const QMimeDatabase* self);
QMimeType* QMimeDatabase_mimeTypeForFile2(const QMimeDatabase* self, struct miqt_string fileName, int mode);
QMimeType* QMimeDatabase_mimeTypeForFile3(const QMimeDatabase* self, QFileInfo* fileInfo, int mode);
void QMimeDatabase_delete(QMimeDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
