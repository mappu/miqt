#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIODECODER_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIODECODER_H

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
class QMediaObject;
class QMediaService;
class QMetaObject;
class QObject;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoder QAudioDecoder;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioDecoder* QAudioDecoder_new();
QAudioDecoder* QAudioDecoder_new2(QObject* parent);
void QAudioDecoder_virtbase(QAudioDecoder* src, QMediaObject** outptr_QMediaObject);
QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self);
void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1);
struct miqt_string QAudioDecoder_Tr(const char* s);
struct miqt_string QAudioDecoder_TrUtf8(const char* s);
int QAudioDecoder_HasSupport(struct miqt_string mimeType);
int QAudioDecoder_State(const QAudioDecoder* self);
struct miqt_string QAudioDecoder_SourceFilename(const QAudioDecoder* self);
void QAudioDecoder_SetSourceFilename(QAudioDecoder* self, struct miqt_string fileName);
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
void QAudioDecoder_StateChanged(QAudioDecoder* self, int newState);
void QAudioDecoder_connect_StateChanged(QAudioDecoder* self, intptr_t slot);
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
bool QAudioDecoder_Bind(QAudioDecoder* self, QObject* param1);
void QAudioDecoder_Unbind(QAudioDecoder* self, QObject* param1);
struct miqt_string QAudioDecoder_Tr2(const char* s, const char* c);
struct miqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioDecoder_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioDecoder_TrUtf83(const char* s, const char* c, int n);
int QAudioDecoder_HasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
void QAudioDecoder_override_virtual_Bind(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_Bind(void* self, QObject* param1);
void QAudioDecoder_override_virtual_Unbind(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_Unbind(void* self, QObject* param1);
void QAudioDecoder_override_virtual_IsAvailable(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_IsAvailable(const void* self);
void QAudioDecoder_override_virtual_Availability(void* self, intptr_t slot);
int QAudioDecoder_virtualbase_Availability(const void* self);
void QAudioDecoder_override_virtual_Service(void* self, intptr_t slot);
QMediaService* QAudioDecoder_virtualbase_Service(const void* self);
void QAudioDecoder_Delete(QAudioDecoder* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
