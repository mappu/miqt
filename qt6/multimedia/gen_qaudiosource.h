#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSOURCE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSOURCE_H

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
class QAudioSource;
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
typedef struct QAudioSource QAudioSource;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioSource* QAudioSource_new();
QAudioSource* QAudioSource_new2(QAudioDevice* audioDeviceInfo);
QAudioSource* QAudioSource_new3(QAudioFormat* format);
QAudioSource* QAudioSource_new4(QAudioFormat* format, QObject* parent);
QAudioSource* QAudioSource_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSource* QAudioSource_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
void QAudioSource_virtbase(QAudioSource* src, QObject** outptr_QObject);
QMetaObject* QAudioSource_MetaObject(const QAudioSource* self);
void* QAudioSource_Metacast(QAudioSource* self, const char* param1);
struct miqt_string QAudioSource_Tr(const char* s);
bool QAudioSource_IsNull(const QAudioSource* self);
QAudioFormat* QAudioSource_Format(const QAudioSource* self);
void QAudioSource_Start(QAudioSource* self, QIODevice* device);
QIODevice* QAudioSource_Start2(QAudioSource* self);
void QAudioSource_Stop(QAudioSource* self);
void QAudioSource_Reset(QAudioSource* self);
void QAudioSource_Suspend(QAudioSource* self);
void QAudioSource_Resume(QAudioSource* self);
void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes);
ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self);
ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self);
void QAudioSource_SetVolume(QAudioSource* self, double volume);
double QAudioSource_Volume(const QAudioSource* self);
long long QAudioSource_ProcessedUSecs(const QAudioSource* self);
long long QAudioSource_ElapsedUSecs(const QAudioSource* self);
int QAudioSource_Error(const QAudioSource* self);
int QAudioSource_State(const QAudioSource* self);
void QAudioSource_StateChanged(QAudioSource* self, int state);
void QAudioSource_connect_StateChanged(QAudioSource* self, intptr_t slot);
struct miqt_string QAudioSource_Tr2(const char* s, const char* c);
struct miqt_string QAudioSource_Tr3(const char* s, const char* c, int n);
void QAudioSource_override_virtual_Event(void* self, intptr_t slot);
bool QAudioSource_virtualbase_Event(void* self, QEvent* event);
void QAudioSource_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioSource_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioSource_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioSource_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioSource_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioSource_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioSource_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioSource_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioSource_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioSource_Delete(QAudioSource* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
