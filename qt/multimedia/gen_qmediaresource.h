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

QMediaResource* QMediaResource_new();
QMediaResource* QMediaResource_new2(QUrl* url);
QMediaResource* QMediaResource_new3(QNetworkRequest* request);
QMediaResource* QMediaResource_new4(QMediaResource* other);
QMediaResource* QMediaResource_new5(QUrl* url, struct miqt_string mimeType);
QMediaResource* QMediaResource_new6(QNetworkRequest* request, struct miqt_string mimeType);
void QMediaResource_operatorAssign(QMediaResource* self, QMediaResource* other);
bool QMediaResource_isNull(const QMediaResource* self);
bool QMediaResource_operatorEqual(const QMediaResource* self, QMediaResource* other);
bool QMediaResource_operatorNotEqual(const QMediaResource* self, QMediaResource* other);
QUrl* QMediaResource_url(const QMediaResource* self);
QNetworkRequest* QMediaResource_request(const QMediaResource* self);
struct miqt_string QMediaResource_mimeType(const QMediaResource* self);
struct miqt_string QMediaResource_language(const QMediaResource* self);
void QMediaResource_setLanguage(QMediaResource* self, struct miqt_string language);
struct miqt_string QMediaResource_audioCodec(const QMediaResource* self);
void QMediaResource_setAudioCodec(QMediaResource* self, struct miqt_string codec);
struct miqt_string QMediaResource_videoCodec(const QMediaResource* self);
void QMediaResource_setVideoCodec(QMediaResource* self, struct miqt_string codec);
long long QMediaResource_dataSize(const QMediaResource* self);
void QMediaResource_setDataSize(QMediaResource* self, const long long size);
int QMediaResource_audioBitRate(const QMediaResource* self);
void QMediaResource_setAudioBitRate(QMediaResource* self, int rate);
int QMediaResource_sampleRate(const QMediaResource* self);
void QMediaResource_setSampleRate(QMediaResource* self, int frequency);
int QMediaResource_channelCount(const QMediaResource* self);
void QMediaResource_setChannelCount(QMediaResource* self, int channels);
int QMediaResource_videoBitRate(const QMediaResource* self);
void QMediaResource_setVideoBitRate(QMediaResource* self, int rate);
QSize* QMediaResource_resolution(const QMediaResource* self);
void QMediaResource_setResolution(QMediaResource* self, QSize* resolution);
void QMediaResource_setResolution2(QMediaResource* self, int width, int height);

void QMediaResource_delete(QMediaResource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
