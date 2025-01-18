#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOBUFFER_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioBuffer;
class QAudioFormat;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioFormat QAudioFormat;
#endif

QAudioBuffer* QAudioBuffer_new();
QAudioBuffer* QAudioBuffer_new2(QAudioBuffer* other);
QAudioBuffer* QAudioBuffer_new3(struct miqt_string data, QAudioFormat* format);
QAudioBuffer* QAudioBuffer_new4(int numFrames, QAudioFormat* format);
QAudioBuffer* QAudioBuffer_new5(struct miqt_string data, QAudioFormat* format, long long startTime);
QAudioBuffer* QAudioBuffer_new6(int numFrames, QAudioFormat* format, long long startTime);
void QAudioBuffer_OperatorAssign(QAudioBuffer* self, QAudioBuffer* other);
bool QAudioBuffer_IsValid(const QAudioBuffer* self);
QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self);
int QAudioBuffer_FrameCount(const QAudioBuffer* self);
int QAudioBuffer_SampleCount(const QAudioBuffer* self);
int QAudioBuffer_ByteCount(const QAudioBuffer* self);
long long QAudioBuffer_Duration(const QAudioBuffer* self);
long long QAudioBuffer_StartTime(const QAudioBuffer* self);
const void* QAudioBuffer_ConstData(const QAudioBuffer* self);
const void* QAudioBuffer_Data(const QAudioBuffer* self);
void* QAudioBuffer_Data2(QAudioBuffer* self);
void QAudioBuffer_Delete(QAudioBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
