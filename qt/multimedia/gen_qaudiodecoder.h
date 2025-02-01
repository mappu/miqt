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
class QChildEvent;
class QEvent;
class QIODevice;
class QMediaObject;
class QMediaService;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoder QAudioDecoder;
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioDecoder* QAudioDecoder_new();
QAudioDecoder* QAudioDecoder_new2(QObject* parent);
void QAudioDecoder_virtbase(QAudioDecoder* src, QMediaObject** outptr_QMediaObject);
QMetaObject* QAudioDecoder_metaObject(const QAudioDecoder* self);
void* QAudioDecoder_metacast(QAudioDecoder* self, const char* param1);
struct miqt_string QAudioDecoder_tr(const char* s);
struct miqt_string QAudioDecoder_trUtf8(const char* s);
int QAudioDecoder_hasSupport(struct miqt_string mimeType);
int QAudioDecoder_state(const QAudioDecoder* self);
struct miqt_string QAudioDecoder_sourceFilename(const QAudioDecoder* self);
void QAudioDecoder_setSourceFilename(QAudioDecoder* self, struct miqt_string fileName);
QIODevice* QAudioDecoder_sourceDevice(const QAudioDecoder* self);
void QAudioDecoder_setSourceDevice(QAudioDecoder* self, QIODevice* device);
QAudioFormat* QAudioDecoder_audioFormat(const QAudioDecoder* self);
void QAudioDecoder_setAudioFormat(QAudioDecoder* self, QAudioFormat* format);
int QAudioDecoder_error(const QAudioDecoder* self);
struct miqt_string QAudioDecoder_errorString(const QAudioDecoder* self);
QAudioBuffer* QAudioDecoder_read(const QAudioDecoder* self);
bool QAudioDecoder_bufferAvailable(const QAudioDecoder* self);
long long QAudioDecoder_position(const QAudioDecoder* self);
long long QAudioDecoder_duration(const QAudioDecoder* self);
void QAudioDecoder_start(QAudioDecoder* self);
void QAudioDecoder_stop(QAudioDecoder* self);
void QAudioDecoder_bufferAvailableChanged(QAudioDecoder* self, bool param1);
void QAudioDecoder_connect_bufferAvailableChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_bufferReady(QAudioDecoder* self);
void QAudioDecoder_connect_bufferReady(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_finished(QAudioDecoder* self);
void QAudioDecoder_connect_finished(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_stateChanged(QAudioDecoder* self, int newState);
void QAudioDecoder_connect_stateChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_formatChanged(QAudioDecoder* self, QAudioFormat* format);
void QAudioDecoder_connect_formatChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_errorWithError(QAudioDecoder* self, int error);
void QAudioDecoder_connect_errorWithError(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_sourceChanged(QAudioDecoder* self);
void QAudioDecoder_connect_sourceChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_positionChanged(QAudioDecoder* self, long long position);
void QAudioDecoder_connect_positionChanged(QAudioDecoder* self, intptr_t slot);
void QAudioDecoder_durationChanged(QAudioDecoder* self, long long duration);
void QAudioDecoder_connect_durationChanged(QAudioDecoder* self, intptr_t slot);
bool QAudioDecoder_bind(QAudioDecoder* self, QObject* param1);
void QAudioDecoder_unbind(QAudioDecoder* self, QObject* param1);
struct miqt_string QAudioDecoder_tr2(const char* s, const char* c);
struct miqt_string QAudioDecoder_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioDecoder_trUtf82(const char* s, const char* c);
struct miqt_string QAudioDecoder_trUtf83(const char* s, const char* c, int n);
int QAudioDecoder_hasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
bool QAudioDecoder_override_virtual_bind(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_bind(void* self, QObject* param1);
bool QAudioDecoder_override_virtual_unbind(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_unbind(void* self, QObject* param1);
bool QAudioDecoder_override_virtual_isAvailable(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_isAvailable(const void* self);
bool QAudioDecoder_override_virtual_availability(void* self, intptr_t slot);
int QAudioDecoder_virtualbase_availability(const void* self);
bool QAudioDecoder_override_virtual_service(void* self, intptr_t slot);
QMediaService* QAudioDecoder_virtualbase_service(const void* self);
bool QAudioDecoder_override_virtual_event(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_event(void* self, QEvent* event);
bool QAudioDecoder_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioDecoder_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioDecoder_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioDecoder_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioDecoder_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioDecoder_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAudioDecoder_delete(QAudioDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
