#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOINPUT_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDeviceInfo;
class QAudioFormat;
class QAudioInput;
class QChildEvent;
class QEvent;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDeviceInfo QAudioDeviceInfo;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioInput QAudioInput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo);
QAudioInput* QAudioInput_new3(QAudioFormat* format);
QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent);
QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format);
QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent);
void QAudioInput_virtbase(QAudioInput* src, QObject** outptr_QObject);
QMetaObject* QAudioInput_MetaObject(const QAudioInput* self);
void* QAudioInput_Metacast(QAudioInput* self, const char* param1);
struct miqt_string QAudioInput_Tr(const char* s);
struct miqt_string QAudioInput_TrUtf8(const char* s);
QAudioFormat* QAudioInput_Format(const QAudioInput* self);
void QAudioInput_Start(QAudioInput* self, QIODevice* device);
QIODevice* QAudioInput_Start2(QAudioInput* self);
void QAudioInput_Stop(QAudioInput* self);
void QAudioInput_Reset(QAudioInput* self);
void QAudioInput_Suspend(QAudioInput* self);
void QAudioInput_Resume(QAudioInput* self);
void QAudioInput_SetBufferSize(QAudioInput* self, int bytes);
int QAudioInput_BufferSize(const QAudioInput* self);
int QAudioInput_BytesReady(const QAudioInput* self);
int QAudioInput_PeriodSize(const QAudioInput* self);
void QAudioInput_SetNotifyInterval(QAudioInput* self, int milliSeconds);
int QAudioInput_NotifyInterval(const QAudioInput* self);
void QAudioInput_SetVolume(QAudioInput* self, double volume);
double QAudioInput_Volume(const QAudioInput* self);
long long QAudioInput_ProcessedUSecs(const QAudioInput* self);
long long QAudioInput_ElapsedUSecs(const QAudioInput* self);
int QAudioInput_Error(const QAudioInput* self);
int QAudioInput_State(const QAudioInput* self);
void QAudioInput_StateChanged(QAudioInput* self, int state);
void QAudioInput_connect_StateChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_Notify(QAudioInput* self);
void QAudioInput_connect_Notify(QAudioInput* self, intptr_t slot);
struct miqt_string QAudioInput_Tr2(const char* s, const char* c);
struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioInput_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioInput_TrUtf83(const char* s, const char* c, int n);
bool QAudioInput_override_virtual_Event(void* self, intptr_t slot);
bool QAudioInput_virtualbase_Event(void* self, QEvent* event);
bool QAudioInput_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioInput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioInput_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAudioInput_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAudioInput_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAudioInput_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAudioInput_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
