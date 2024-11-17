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
class QIODevice;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSource QAudioSource;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioSource* QAudioSource_new();
QAudioSource* QAudioSource_new2(QAudioDevice* audioDeviceInfo);
QAudioSource* QAudioSource_new3(QAudioFormat* format);
QAudioSource* QAudioSource_new4(QAudioFormat* format, QObject* parent);
QAudioSource* QAudioSource_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSource* QAudioSource_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
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
void QAudioSource_Delete(QAudioSource* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
