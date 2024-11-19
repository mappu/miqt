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
class QByteArray;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioFormat QAudioFormat;
typedef struct QByteArray QByteArray;
#endif

void QAudioBuffer_new(QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_new2(QAudioBuffer* other, QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_new3(struct miqt_string data, QAudioFormat* format, QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_new4(int numFrames, QAudioFormat* format, QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_new5(struct miqt_string data, QAudioFormat* format, long long startTime, QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_new6(int numFrames, QAudioFormat* format, long long startTime, QAudioBuffer** outptr_QAudioBuffer);
void QAudioBuffer_OperatorAssign(QAudioBuffer* self, QAudioBuffer* other);
void QAudioBuffer_Swap(QAudioBuffer* self, QAudioBuffer* other);
bool QAudioBuffer_IsValid(const QAudioBuffer* self);
void QAudioBuffer_Detach(QAudioBuffer* self);
QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_FrameCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_SampleCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_ByteCount(const QAudioBuffer* self);
long long QAudioBuffer_Duration(const QAudioBuffer* self);
long long QAudioBuffer_StartTime(const QAudioBuffer* self);
void QAudioBuffer_Delete(QAudioBuffer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
