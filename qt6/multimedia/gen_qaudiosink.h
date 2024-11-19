#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSINK_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDevice;
class QAudioFormat;
class QAudioSink;
class QChildEvent;
class QEvent;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSink QAudioSink;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

void QAudioSink_new(QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
void QAudioSink_new2(QAudioDevice* audioDeviceInfo, QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
void QAudioSink_new3(QAudioFormat* format, QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
void QAudioSink_new4(QAudioFormat* format, QObject* parent, QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
void QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
void QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent, QAudioSink** outptr_QAudioSink, QObject** outptr_QObject);
QMetaObject* QAudioSink_MetaObject(const QAudioSink* self);
void* QAudioSink_Metacast(QAudioSink* self, const char* param1);
struct miqt_string QAudioSink_Tr(const char* s);
bool QAudioSink_IsNull(const QAudioSink* self);
QAudioFormat* QAudioSink_Format(const QAudioSink* self);
void QAudioSink_Start(QAudioSink* self, QIODevice* device);
QIODevice* QAudioSink_Start2(QAudioSink* self);
void QAudioSink_Stop(QAudioSink* self);
void QAudioSink_Reset(QAudioSink* self);
void QAudioSink_Suspend(QAudioSink* self);
void QAudioSink_Resume(QAudioSink* self);
void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes);
ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self);
ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self);
long long QAudioSink_ProcessedUSecs(const QAudioSink* self);
long long QAudioSink_ElapsedUSecs(const QAudioSink* self);
int QAudioSink_Error(const QAudioSink* self);
int QAudioSink_State(const QAudioSink* self);
void QAudioSink_SetVolume(QAudioSink* self, double volume);
double QAudioSink_Volume(const QAudioSink* self);
void QAudioSink_StateChanged(QAudioSink* self, int state);
void QAudioSink_connect_StateChanged(QAudioSink* self, intptr_t slot);
struct miqt_string QAudioSink_Tr2(const char* s, const char* c);
struct miqt_string QAudioSink_Tr3(const char* s, const char* c, int n);
void QAudioSink_override_virtual_Event(void* self, intptr_t slot);
bool QAudioSink_virtualbase_Event(void* self, QEvent* event);
void QAudioSink_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioSink_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioSink_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioSink_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioSink_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioSink_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioSink_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioSink_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioSink_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioSink_Delete(QAudioSink* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
