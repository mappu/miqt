#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIAFORMAT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIAFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaFormat;
class QMimeType;
#else
typedef struct QMediaFormat QMediaFormat;
typedef struct QMimeType QMimeType;
#endif

QMediaFormat* QMediaFormat_new();
QMediaFormat* QMediaFormat_new2(QMediaFormat* other);
QMediaFormat* QMediaFormat_new3(int format);
void QMediaFormat_operatorAssign(QMediaFormat* self, QMediaFormat* other);
void QMediaFormat_swap(QMediaFormat* self, QMediaFormat* other);
int QMediaFormat_fileFormat(const QMediaFormat* self);
void QMediaFormat_setFileFormat(QMediaFormat* self, int f);
void QMediaFormat_setVideoCodec(QMediaFormat* self, int codec);
int QMediaFormat_videoCodec(const QMediaFormat* self);
void QMediaFormat_setAudioCodec(QMediaFormat* self, int codec);
int QMediaFormat_audioCodec(const QMediaFormat* self);
bool QMediaFormat_isSupported(const QMediaFormat* self, int mode);
QMimeType* QMediaFormat_mimeType(const QMediaFormat* self);
struct miqt_array /* of int */  QMediaFormat_supportedFileFormats(QMediaFormat* self, int m);
struct miqt_array /* of int */  QMediaFormat_supportedVideoCodecs(QMediaFormat* self, int m);
struct miqt_array /* of int */  QMediaFormat_supportedAudioCodecs(QMediaFormat* self, int m);
struct miqt_string QMediaFormat_fileFormatName(int fileFormat);
struct miqt_string QMediaFormat_audioCodecName(int codec);
struct miqt_string QMediaFormat_videoCodecName(int codec);
struct miqt_string QMediaFormat_fileFormatDescription(int fileFormat);
struct miqt_string QMediaFormat_audioCodecDescription(int codec);
struct miqt_string QMediaFormat_videoCodecDescription(int codec);
bool QMediaFormat_operatorEqual(const QMediaFormat* self, QMediaFormat* other);
bool QMediaFormat_operatorNotEqual(const QMediaFormat* self, QMediaFormat* other);
void QMediaFormat_resolveForEncoding(QMediaFormat* self, int flags);

void QMediaFormat_delete(QMediaFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
