#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOPROBE_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOPROBE_H

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
class QAudioProbe;
class QChildEvent;
class QEvent;
class QMediaObject;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioProbe QAudioProbe;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioProbe* QAudioProbe_new();
QAudioProbe* QAudioProbe_new2(QObject* parent);
void QAudioProbe_virtbase(QAudioProbe* src, QObject** outptr_QObject);
QMetaObject* QAudioProbe_metaObject(const QAudioProbe* self);
void* QAudioProbe_metacast(QAudioProbe* self, const char* param1);
struct miqt_string QAudioProbe_tr(const char* s);
struct miqt_string QAudioProbe_trUtf8(const char* s);
bool QAudioProbe_setSource(QAudioProbe* self, QMediaObject* source);
bool QAudioProbe_setSourceWithSource(QAudioProbe* self, QMediaRecorder* source);
bool QAudioProbe_isActive(const QAudioProbe* self);
void QAudioProbe_audioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer);
void QAudioProbe_connect_audioBufferProbed(QAudioProbe* self, intptr_t slot);
void QAudioProbe_flush(QAudioProbe* self);
void QAudioProbe_connect_flush(QAudioProbe* self, intptr_t slot);
struct miqt_string QAudioProbe_tr2(const char* s, const char* c);
struct miqt_string QAudioProbe_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioProbe_trUtf82(const char* s, const char* c);
struct miqt_string QAudioProbe_trUtf83(const char* s, const char* c, int n);
bool QAudioProbe_override_virtual_event(void* self, intptr_t slot);
bool QAudioProbe_virtualbase_event(void* self, QEvent* event);
bool QAudioProbe_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioProbe_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioProbe_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioProbe_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioProbe_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioProbe_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioProbe_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioProbe_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioProbe_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAudioProbe_delete(QAudioProbe* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
