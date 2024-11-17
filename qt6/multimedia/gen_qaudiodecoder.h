#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIODECODER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIODECODER_H

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
class QAudioDecoder;
class QAudioFormat;
class QIODevice;
class QMetaObject;
class QObject;
class QUrl;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoder QAudioDecoder;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QAudioDecoder* QAudioDecoder_new();
QAudioDecoder* QAudioDecoder_new2(QObject* parent);
QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self);
void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1);
struct miqt_string QAudioDecoder_Tr(const char* s);
bool QAudioDecoder_IsSupported(const QAudioDecoder* self);
bool QAudioDecoder_IsDecoding(const QAudioDecoder* self);
QUrl* QAudioDecoder_Source(const QAudioDecoder* self);
void QAudioDecoder_SetSource(QAudioDecoder* self, QUrl* fileName);
QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self);
void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device);
QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self);
void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, QAudioFormat* format);
int QAudioDecoder_Error(const QAudioDecoder* self);
struct miqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self);
QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self);
bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self);
long long QAudioDecoder_Position(const QAudioDecoder* self);
long long QAudioDecoder_Duration(const QAudioDecoder* self);
void QAudioDecoder_Start(QAudioDecoder* self);
void QAudioDecoder_Stop(QAudioDecoder* self);
void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1);
void QAudioDecoder_connect_BufferAvailableChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_BufferReady(QAudioDecoder* self);
void QAudioDecoder_connect_BufferReady(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_Finished(QAudioDecoder* self);
void QAudioDecoder_connect_Finished(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1);
void QAudioDecoder_connect_IsDecodingChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_FormatChanged(QAudioDecoder* self, QAudioFormat* format);
void QAudioDecoder_connect_FormatChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_ErrorWithError(QAudioDecoder* self, int error);
void QAudioDecoder_connect_ErrorWithError(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_SourceChanged(QAudioDecoder* self);
void QAudioDecoder_connect_SourceChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position);
void QAudioDecoder_connect_PositionChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration);
void QAudioDecoder_connect_DurationChanged(QAudioDecoder* self, intptr_t slot);
struct miqt_string QAudioDecoder_Tr2(const char* s, const char* c);
struct miqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n);
void QAudioDecoder_Delete(QAudioDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
