#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFER_H

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
void QAudioBuffer_operatorAssign(QAudioBuffer* self, QAudioBuffer* other);
void QAudioBuffer_swap(QAudioBuffer* self, QAudioBuffer* other);
bool QAudioBuffer_isValid(const QAudioBuffer* self);
void QAudioBuffer_detach(QAudioBuffer* self);
QAudioFormat* QAudioBuffer_format(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_frameCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_sampleCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_byteCount(const QAudioBuffer* self);
long long QAudioBuffer_duration(const QAudioBuffer* self);
long long QAudioBuffer_startTime(const QAudioBuffer* self);
void QAudioBuffer_delete(QAudioBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
