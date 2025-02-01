#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAENCODERSETTINGS_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAENCODERSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioEncoderSettings;
class QImageEncoderSettings;
class QSize;
class QVariant;
class QVideoEncoderSettings;
#else
typedef struct QAudioEncoderSettings QAudioEncoderSettings;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QVideoEncoderSettings QVideoEncoderSettings;
#endif

QAudioEncoderSettings* QAudioEncoderSettings_new();
QAudioEncoderSettings* QAudioEncoderSettings_new2(QAudioEncoderSettings* other);
void QAudioEncoderSettings_operatorAssign(QAudioEncoderSettings* self, QAudioEncoderSettings* other);
bool QAudioEncoderSettings_operatorEqual(const QAudioEncoderSettings* self, QAudioEncoderSettings* other);
bool QAudioEncoderSettings_operatorNotEqual(const QAudioEncoderSettings* self, QAudioEncoderSettings* other);
bool QAudioEncoderSettings_isNull(const QAudioEncoderSettings* self);
int QAudioEncoderSettings_encodingMode(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setEncodingMode(QAudioEncoderSettings* self, int encodingMode);
struct miqt_string QAudioEncoderSettings_codec(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setCodec(QAudioEncoderSettings* self, struct miqt_string codec);
int QAudioEncoderSettings_bitRate(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setBitRate(QAudioEncoderSettings* self, int bitrate);
int QAudioEncoderSettings_channelCount(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setChannelCount(QAudioEncoderSettings* self, int channels);
int QAudioEncoderSettings_sampleRate(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setSampleRate(QAudioEncoderSettings* self, int rate);
int QAudioEncoderSettings_quality(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setQuality(QAudioEncoderSettings* self, int quality);
QVariant* QAudioEncoderSettings_encodingOption(const QAudioEncoderSettings* self, struct miqt_string option);
struct miqt_map /* of struct miqt_string to QVariant* */  QAudioEncoderSettings_encodingOptions(const QAudioEncoderSettings* self);
void QAudioEncoderSettings_setEncodingOption(QAudioEncoderSettings* self, struct miqt_string option, QVariant* value);
void QAudioEncoderSettings_setEncodingOptions(QAudioEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options);
void QAudioEncoderSettings_delete(QAudioEncoderSettings* self);

QVideoEncoderSettings* QVideoEncoderSettings_new();
QVideoEncoderSettings* QVideoEncoderSettings_new2(QVideoEncoderSettings* other);
void QVideoEncoderSettings_operatorAssign(QVideoEncoderSettings* self, QVideoEncoderSettings* other);
bool QVideoEncoderSettings_operatorEqual(const QVideoEncoderSettings* self, QVideoEncoderSettings* other);
bool QVideoEncoderSettings_operatorNotEqual(const QVideoEncoderSettings* self, QVideoEncoderSettings* other);
bool QVideoEncoderSettings_isNull(const QVideoEncoderSettings* self);
int QVideoEncoderSettings_encodingMode(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setEncodingMode(QVideoEncoderSettings* self, int encodingMode);
struct miqt_string QVideoEncoderSettings_codec(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setCodec(QVideoEncoderSettings* self, struct miqt_string codec);
QSize* QVideoEncoderSettings_resolution(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setResolution(QVideoEncoderSettings* self, QSize* resolution);
void QVideoEncoderSettings_setResolution2(QVideoEncoderSettings* self, int width, int height);
double QVideoEncoderSettings_frameRate(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setFrameRate(QVideoEncoderSettings* self, double rate);
int QVideoEncoderSettings_bitRate(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setBitRate(QVideoEncoderSettings* self, int bitrate);
int QVideoEncoderSettings_quality(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setQuality(QVideoEncoderSettings* self, int quality);
QVariant* QVideoEncoderSettings_encodingOption(const QVideoEncoderSettings* self, struct miqt_string option);
struct miqt_map /* of struct miqt_string to QVariant* */  QVideoEncoderSettings_encodingOptions(const QVideoEncoderSettings* self);
void QVideoEncoderSettings_setEncodingOption(QVideoEncoderSettings* self, struct miqt_string option, QVariant* value);
void QVideoEncoderSettings_setEncodingOptions(QVideoEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options);
void QVideoEncoderSettings_delete(QVideoEncoderSettings* self);

QImageEncoderSettings* QImageEncoderSettings_new();
QImageEncoderSettings* QImageEncoderSettings_new2(QImageEncoderSettings* other);
void QImageEncoderSettings_operatorAssign(QImageEncoderSettings* self, QImageEncoderSettings* other);
bool QImageEncoderSettings_operatorEqual(const QImageEncoderSettings* self, QImageEncoderSettings* other);
bool QImageEncoderSettings_operatorNotEqual(const QImageEncoderSettings* self, QImageEncoderSettings* other);
bool QImageEncoderSettings_isNull(const QImageEncoderSettings* self);
struct miqt_string QImageEncoderSettings_codec(const QImageEncoderSettings* self);
void QImageEncoderSettings_setCodec(QImageEncoderSettings* self, struct miqt_string codec);
QSize* QImageEncoderSettings_resolution(const QImageEncoderSettings* self);
void QImageEncoderSettings_setResolution(QImageEncoderSettings* self, QSize* resolution);
void QImageEncoderSettings_setResolution2(QImageEncoderSettings* self, int width, int height);
int QImageEncoderSettings_quality(const QImageEncoderSettings* self);
void QImageEncoderSettings_setQuality(QImageEncoderSettings* self, int quality);
QVariant* QImageEncoderSettings_encodingOption(const QImageEncoderSettings* self, struct miqt_string option);
struct miqt_map /* of struct miqt_string to QVariant* */  QImageEncoderSettings_encodingOptions(const QImageEncoderSettings* self);
void QImageEncoderSettings_setEncodingOption(QImageEncoderSettings* self, struct miqt_string option, QVariant* value);
void QImageEncoderSettings_setEncodingOptions(QImageEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options);
void QImageEncoderSettings_delete(QImageEncoderSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
