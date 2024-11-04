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
QAudioFormat* QAudioFormat_new2(QAudioFormat* other);
void QAudioFormat_OperatorAssign(QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_OperatorEqual(const QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_OperatorNotEqual(const QAudioFormat* self, QAudioFormat* other);
bool QAudioFormat_IsValid(const QAudioFormat* self);
void QAudioFormat_SetSampleRate(QAudioFormat* self, int sampleRate);
int QAudioFormat_SampleRate(const QAudioFormat* self);
void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount);
int QAudioFormat_ChannelCount(const QAudioFormat* self);
void QAudioFormat_SetSampleSize(QAudioFormat* self, int sampleSize);
int QAudioFormat_SampleSize(const QAudioFormat* self);
void QAudioFormat_SetCodec(QAudioFormat* self, struct miqt_string codec);
struct miqt_string QAudioFormat_Codec(const QAudioFormat* self);
void QAudioFormat_SetByteOrder(QAudioFormat* self, int byteOrder);
int QAudioFormat_ByteOrder(const QAudioFormat* self);
void QAudioFormat_SetSampleType(QAudioFormat* self, int sampleType);
int QAudioFormat_SampleType(const QAudioFormat* self);
int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long duration);
long long QAudioFormat_DurationForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_BytesForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_FramesForBytes(const QAudioFormat* self, int byteCount);
int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long duration);
long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount);
int QAudioFormat_BytesPerFrame(const QAudioFormat* self);
void QAudioFormat_Delete(QAudioFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
