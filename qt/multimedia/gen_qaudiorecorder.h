#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIORECORDER_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIORECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioRecorder;
class QChildEvent;
class QEvent;
class QMediaBindableInterface;
class QMediaObject;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioRecorder QAudioRecorder;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioRecorder* QAudioRecorder_new();
QAudioRecorder* QAudioRecorder_new2(QObject* parent);
void QAudioRecorder_virtbase(QAudioRecorder* src, QMediaRecorder** outptr_QMediaRecorder);
QMetaObject* QAudioRecorder_metaObject(const QAudioRecorder* self);
void* QAudioRecorder_metacast(QAudioRecorder* self, const char* param1);
struct miqt_string QAudioRecorder_tr(const char* s);
struct miqt_string QAudioRecorder_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioRecorder_audioInputs(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_defaultAudioInput(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_audioInputDescription(const QAudioRecorder* self, struct miqt_string name);
struct miqt_string QAudioRecorder_audioInput(const QAudioRecorder* self);
void QAudioRecorder_setAudioInput(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_audioInputChanged(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_connect_audioInputChanged(QAudioRecorder* self, intptr_t slot);
void QAudioRecorder_availableAudioInputsChanged(QAudioRecorder* self);
void QAudioRecorder_connect_availableAudioInputsChanged(QAudioRecorder* self, intptr_t slot);
struct miqt_string QAudioRecorder_tr2(const char* s, const char* c);
struct miqt_string QAudioRecorder_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioRecorder_trUtf82(const char* s, const char* c);
struct miqt_string QAudioRecorder_trUtf83(const char* s, const char* c, int n);

bool QAudioRecorder_override_virtual_mediaObject(void* self, intptr_t slot);
QMediaObject* QAudioRecorder_virtualbase_mediaObject(const void* self);
bool QAudioRecorder_override_virtual_setMediaObject(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_setMediaObject(void* self, QMediaObject* object);
bool QAudioRecorder_override_virtual_event(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_event(void* self, QEvent* event);
bool QAudioRecorder_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioRecorder_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioRecorder_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioRecorder_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioRecorder_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioRecorder_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioRecorder_delete(QAudioRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
