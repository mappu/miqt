#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOOUTPUT_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOOUTPUT_H

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
class QAudioOutput;
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
typedef struct QAudioOutput QAudioOutput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioOutput* QAudioOutput_new();
QAudioOutput* QAudioOutput_new2(QAudioDeviceInfo* audioDeviceInfo);
QAudioOutput* QAudioOutput_new3(QAudioFormat* format);
QAudioOutput* QAudioOutput_new4(QAudioFormat* format, QObject* parent);
QAudioOutput* QAudioOutput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format);
QAudioOutput* QAudioOutput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent);
void QAudioOutput_virtbase(QAudioOutput* src, QObject** outptr_QObject);
QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self);
void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1);
struct miqt_string QAudioOutput_Tr(const char* s);
struct miqt_string QAudioOutput_TrUtf8(const char* s);
QAudioFormat* QAudioOutput_Format(const QAudioOutput* self);
void QAudioOutput_Start(QAudioOutput* self, QIODevice* device);
QIODevice* QAudioOutput_Start2(QAudioOutput* self);
void QAudioOutput_Stop(QAudioOutput* self);
void QAudioOutput_Reset(QAudioOutput* self);
void QAudioOutput_Suspend(QAudioOutput* self);
void QAudioOutput_Resume(QAudioOutput* self);
void QAudioOutput_SetBufferSize(QAudioOutput* self, int bytes);
int QAudioOutput_BufferSize(const QAudioOutput* self);
int QAudioOutput_BytesFree(const QAudioOutput* self);
int QAudioOutput_PeriodSize(const QAudioOutput* self);
void QAudioOutput_SetNotifyInterval(QAudioOutput* self, int milliSeconds);
int QAudioOutput_NotifyInterval(const QAudioOutput* self);
long long QAudioOutput_ProcessedUSecs(const QAudioOutput* self);
long long QAudioOutput_ElapsedUSecs(const QAudioOutput* self);
int QAudioOutput_Error(const QAudioOutput* self);
int QAudioOutput_State(const QAudioOutput* self);
void QAudioOutput_SetVolume(QAudioOutput* self, double volume);
double QAudioOutput_Volume(const QAudioOutput* self);
struct miqt_string QAudioOutput_Category(const QAudioOutput* self);
void QAudioOutput_SetCategory(QAudioOutput* self, struct miqt_string category);
void QAudioOutput_StateChanged(QAudioOutput* self, int state);
void QAudioOutput_connect_StateChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_Notify(QAudioOutput* self);
void QAudioOutput_connect_Notify(QAudioOutput* self, intptr_t slot);
struct miqt_string QAudioOutput_Tr2(const char* s, const char* c);
struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioOutput_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioOutput_TrUtf83(const char* s, const char* c, int n);
void QAudioOutput_override_virtual_Event(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_Event(void* self, QEvent* event);
void QAudioOutput_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioOutput_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioOutput_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioOutput_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioOutput_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioOutput_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioOutput_Delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
