#pragma once
#ifndef MIQT_QT_GEN_QRESOURCE_H
#define MIQT_QT_GEN_QRESOURCE_H

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
void QResource_SetFileName(QResource* self, struct miqt_string file);
struct miqt_string QResource_FileName(const QResource* self);
struct miqt_string QResource_AbsoluteFilePath(const QResource* self);
void QResource_SetLocale(QResource* self, QLocale* locale);
QLocale* QResource_Locale(const QResource* self);
bool QResource_IsValid(const QResource* self);
int QResource_CompressionAlgorithm(const QResource* self);
long long QResource_Size(const QResource* self);
const unsigned char* QResource_Data(const QResource* self);
long long QResource_UncompressedSize(const QResource* self);
struct miqt_string QResource_UncompressedData(const QResource* self);
QDateTime* QResource_LastModified(const QResource* self);
void QResource_AddSearchPath(struct miqt_string path);
struct miqt_array /* of struct miqt_string */  QResource_SearchPaths();
bool QResource_IsCompressed(const QResource* self);
bool QResource_RegisterResource(struct miqt_string rccFilename);
bool QResource_UnregisterResource(struct miqt_string rccFilename);
bool QResource_RegisterResourceWithRccData(const unsigned char* rccData);
bool QResource_UnregisterResourceWithRccData(const unsigned char* rccData);
bool QResource_RegisterResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot);
bool QResource_UnregisterResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot);
bool QResource_RegisterResource22(const unsigned char* rccData, struct miqt_string resourceRoot);
bool QResource_UnregisterResource22(const unsigned char* rccData, struct miqt_string resourceRoot);
void QResource_Delete(QResource* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
