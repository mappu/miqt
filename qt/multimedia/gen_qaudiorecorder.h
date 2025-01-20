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
QMetaObject* QAudioRecorder_MetaObject(const QAudioRecorder* self);
void* QAudioRecorder_Metacast(QAudioRecorder* self, const char* param1);
struct miqt_string QAudioRecorder_Tr(const char* s);
struct miqt_string QAudioRecorder_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioRecorder_AudioInputs(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_DefaultAudioInput(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_AudioInputDescription(const QAudioRecorder* self, struct miqt_string name);
struct miqt_string QAudioRecorder_AudioInput(const QAudioRecorder* self);
void QAudioRecorder_SetAudioInput(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_AudioInputChanged(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_connect_AudioInputChanged(QAudioRecorder* self, intptr_t slot);
void QAudioRecorder_AvailableAudioInputsChanged(QAudioRecorder* self);
void QAudioRecorder_connect_AvailableAudioInputsChanged(QAudioRecorder* self, intptr_t slot);
struct miqt_string QAudioRecorder_Tr2(const char* s, const char* c);
struct miqt_string QAudioRecorder_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioRecorder_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioRecorder_TrUtf83(const char* s, const char* c, int n);
bool QAudioRecorder_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QAudioRecorder_virtualbase_MediaObject(const void* self);
bool QAudioRecorder_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_SetMediaObject(void* self, QMediaObject* object);
bool QAudioRecorder_override_virtual_Event(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_Event(void* self, QEvent* event);
bool QAudioRecorder_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioRecorder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioRecorder_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAudioRecorder_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAudioRecorder_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAudioRecorder_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAudioRecorder_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioRecorder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioRecorder_Delete(QAudioRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
