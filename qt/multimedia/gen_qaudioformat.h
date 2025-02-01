#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOFORMAT_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioFormat;
#else
typedef struct QAudioFormat QAudioFormat;
#endif

QAudioFormat* QAudioFormat_new();
QAudioFormat* QAudioFormat_new2(QAudioFormat* other);
void QAudioFormat_operatorAssign(QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_operatorEqual(const QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_operatorNotEqual(const QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_isValid(const QAudioFormat* self);
void QAudioFormat_setSampleRate(QAudioFormat* self, int sampleRate);
int QAudioFormat_sampleRate(const QAudioFormat* self);
void QAudioFormat_setChannelCount(QAudioFormat* self, int channelCount);
int QAudioFormat_channelCount(const QAudioFormat* self);
void QAudioFormat_setSampleSize(QAudioFormat* self, int sampleSize);
int QAudioFormat_sampleSize(const QAudioFormat* self);
void QAudioFormat_setCodec(QAudioFormat* self, struct miqt_string codec);
struct miqt_string QAudioFormat_codec(const QAudioFormat* self);
void QAudioFormat_setByteOrder(QAudioFormat* self, int byteOrder);
int QAudioFormat_byteOrder(const QAudioFormat* self);
void QAudioFormat_setSampleType(QAudioFormat* self, int sampleType);
int QAudioFormat_sampleType(const QAudioFormat* self);
int QAudioFormat_bytesForDuration(const QAudioFormat* self, long long duration);
long long QAudioFormat_durationForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_bytesForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_framesForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_framesForDuration(const QAudioFormat* self, long long duration);
long long QAudioFormat_durationForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_bytesPerFrame(const QAudioFormat* self);
void QAudioFormat_delete(QAudioFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
