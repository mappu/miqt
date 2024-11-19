#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIARESOURCE_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIARESOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaResource;
class QNetworkRequest;
class QSize;
class QUrl;
#else
typedef struct QMediaResource QMediaResource;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
#endif

void QMediaResource_new(QMediaResource** outptr_QMediaResource);
void QMediaResource_new2(QUrl* url, QMediaResource** outptr_QMediaResource);
void QMediaResource_new3(QNetworkRequest* request, QMediaResource** outptr_QMediaResource);
void QMediaResource_new4(QMediaResource* other, QMediaResource** outptr_QMediaResource);
void QMediaResource_new5(QUrl* url, struct miqt_string mimeType, QMediaResource** outptr_QMediaResource);
void QMediaResource_new6(QNetworkRequest* request, struct miqt_string mimeType, QMediaResource** outptr_QMediaResource);
void QMediaResource_OperatorAssign(QMediaResource* self, QMediaResource* other);
bool QMediaResource_IsNull(const QMediaResource* self);
bool QMediaResource_OperatorEqual(const QMediaResource* self, QMediaResource* other);
bool QMediaResource_OperatorNotEqual(const QMediaResource* self, QMediaResource* other);
QUrl* QMediaResource_Url(const QMediaResource* self);
QNetworkRequest* QMediaResource_Request(const QMediaResource* self);
struct miqt_string QMediaResource_MimeType(const QMediaResource* self);
struct miqt_string QMediaResource_Language(const QMediaResource* self);
void QMediaResource_SetLanguage(QMediaResource* self, struct miqt_string language);
struct miqt_string QMediaResource_AudioCodec(const QMediaResource* self);
void QMediaResource_SetAudioCodec(QMediaResource* self, struct miqt_string codec);
struct miqt_string QMediaResource_VideoCodec(const QMediaResource* self);
void QMediaResource_SetVideoCodec(QMediaResource* self, struct miqt_string codec);
long long QMediaResource_DataSize(const QMediaResource* self);
void QMediaResource_SetDataSize(QMediaResource* self, const long long size);
int QMediaResource_AudioBitRate(const QMediaResource* self);
void QMediaResource_SetAudioBitRate(QMediaResource* self, int rate);
int QMediaResource_SampleRate(const QMediaResource* self);
void QMediaResource_SetSampleRate(QMediaResource* self, int frequency);
int QMediaResource_ChannelCount(const QMediaResource* self);
void QMediaResource_SetChannelCount(QMediaResource* self, int channels);
int QMediaResource_VideoBitRate(const QMediaResource* self);
void QMediaResource_SetVideoBitRate(QMediaResource* self, int rate);
QSize* QMediaResource_Resolution(const QMediaResource* self);
void QMediaResource_SetResolution(QMediaResource* self, QSize* resolution);
void QMediaResource_SetResolution2(QMediaResource* self, int width, int height);
void QMediaResource_Delete(QMediaResource* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
