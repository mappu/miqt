#ifndef GEN_QAUDIOFORMAT_H
#define GEN_QAUDIOFORMAT_H

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
bool QAudioFormat_IsValid(const QAudioFormat* self);
void QAudioFormat_SetSampleRate(QAudioFormat* self, int sampleRate);
int QAudioFormat_SampleRate(const QAudioFormat* self);
void QAudioFormat_SetChannelConfig(QAudioFormat* self, uint32_t config);
uint32_t QAudioFormat_ChannelConfig(const QAudioFormat* self);
void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount);
int QAudioFormat_ChannelCount(const QAudioFormat* self);
int QAudioFormat_ChannelOffset(const QAudioFormat* self, int channel);
void QAudioFormat_SetSampleFormat(QAudioFormat* self, uint16_t f);
uint16_t QAudioFormat_SampleFormat(const QAudioFormat* self);
int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long microseconds);
long long QAudioFormat_DurationForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_BytesForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_FramesForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long microseconds);
long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_BytesPerFrame(const QAudioFormat* self);
int QAudioFormat_BytesPerSample(const QAudioFormat* self);
float QAudioFormat_NormalizedSampleValue(const QAudioFormat* self, const void* sample);
uint32_t QAudioFormat_DefaultChannelConfigForChannelCount(int channelCount);
void QAudioFormat_Delete(QAudioFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
