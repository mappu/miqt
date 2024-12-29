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
QMetaObject* QAudioProbe_MetaObject(const QAudioProbe* self);
void* QAudioProbe_Metacast(QAudioProbe* self, const char* param1);
struct miqt_string QAudioProbe_Tr(const char* s);
struct miqt_string QAudioProbe_TrUtf8(const char* s);
bool QAudioProbe_SetSource(QAudioProbe* self, QMediaObject* source);
bool QAudioProbe_SetSourceWithSource(QAudioProbe* self, QMediaRecorder* source);
bool QAudioProbe_IsActive(const QAudioProbe* self);
void QAudioProbe_AudioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer);
void QAudioProbe_connect_AudioBufferProbed(QAudioProbe* self, intptr_t slot);
void QAudioProbe_Flush(QAudioProbe* self);
void QAudioProbe_connect_Flush(QAudioProbe* self, intptr_t slot);
struct miqt_string QAudioProbe_Tr2(const char* s, const char* c);
struct miqt_string QAudioProbe_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioProbe_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioProbe_TrUtf83(const char* s, const char* c, int n);
void QAudioProbe_override_virtual_Event(void* self, intptr_t slot);
bool QAudioProbe_virtualbase_Event(void* self, QEvent* event);
void QAudioProbe_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioProbe_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioProbe_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioProbe_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioProbe_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioProbe_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioProbe_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioProbe_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioProbe_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioProbe_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioProbe_Delete(QAudioProbe* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
