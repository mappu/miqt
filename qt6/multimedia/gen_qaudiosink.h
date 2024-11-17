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
class QIODevice;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSink QAudioSink;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioSink* QAudioSink_new();
QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo);
QAudioSink* QAudioSink_new3(QAudioFormat* format);
QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent);
QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
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
void QAudioSink_Delete(QAudioSink* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
