#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOFORMAT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOFORMAT_H

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
QAudioFormat* QAudioFormat_new2(QAudioFormat* param1);
bool QAudioFormat_isValid(const QAudioFormat* self);
void QAudioFormat_setSampleRate(QAudioFormat* self, int sampleRate);
int QAudioFormat_sampleRate(const QAudioFormat* self);
void QAudioFormat_setChannelConfig(QAudioFormat* self, uint32_t config);
uint32_t QAudioFormat_channelConfig(const QAudioFormat* self);
void QAudioFormat_setChannelCount(QAudioFormat* self, int channelCount);
int QAudioFormat_channelCount(const QAudioFormat* self);
int QAudioFormat_channelOffset(const QAudioFormat* self, int channel);
void QAudioFormat_setSampleFormat(QAudioFormat* self, uint16_t f);
uint16_t QAudioFormat_sampleFormat(const QAudioFormat* self);
int QAudioFormat_bytesForDuration(const QAudioFormat* self, long long microseconds);
long long QAudioFormat_durationForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_bytesForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_framesForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_framesForDuration(const QAudioFormat* self, long long microseconds);
long long QAudioFormat_durationForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_bytesPerFrame(const QAudioFormat* self);
int QAudioFormat_bytesPerSample(const QAudioFormat* self);
float QAudioFormat_normalizedSampleValue(const QAudioFormat* self, const void* sample);
uint32_t QAudioFormat_defaultChannelConfigForChannelCount(int channelCount);
void QAudioFormat_delete(QAudioFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
