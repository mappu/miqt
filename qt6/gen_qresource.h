#pragma once
#ifndef MIQT_QT6_GEN_QRESOURCE_H
#define MIQT_QT6_GEN_QRESOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QLocale;
class QResource;
#else
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QResource QResource;
#endif

QResource* QResource_new();
QResource* QResource_new2(struct miqt_string file);
QResource* QResource_new3(struct miqt_string file, QLocale* locale);
void QResource_setFileName(QResource* self, struct miqt_string file);
struct miqt_string QResource_fileName(const QResource* self);
struct miqt_string QResource_absoluteFilePath(const QResource* self);
void QResource_setLocale(QResource* self, QLocale* locale);
QLocale* QResource_locale(const QResource* self);
bool QResource_isValid(const QResource* self);
int QResource_compressionAlgorithm(const QResource* self);
long long QResource_size(const QResource* self);
const unsigned char* QResource_data(const QResource* self);
long long QResource_uncompressedSize(const QResource* self);
struct miqt_string QResource_uncompressedData(const QResource* self);
QDateTime* QResource_lastModified(const QResource* self);
bool QResource_registerResource(struct miqt_string rccFilename);
bool QResource_unregisterResource(struct miqt_string rccFilename);
bool QResource_registerResourceWithRccData(const unsigned char* rccData);
bool QResource_unregisterResourceWithRccData(const unsigned char* rccData);
bool QResource_registerResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot);
bool QResource_unregisterResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot);
bool QResource_registerResource3(const unsigned char* rccData, struct miqt_string resourceRoot);
bool QResource_unregisterResource3(const unsigned char* rccData, struct miqt_string resourceRoot);

void QResource_delete(QResource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
