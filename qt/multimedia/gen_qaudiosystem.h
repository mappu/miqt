#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOSYSTEM_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOSYSTEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAudioDeviceInfo;
class QAbstractAudioInput;
class QAbstractAudioOutput;
class QAudioFormat;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractAudioDeviceInfo QAbstractAudioDeviceInfo;
typedef struct QAbstractAudioInput QAbstractAudioInput;
typedef struct QAbstractAudioOutput QAbstractAudioOutput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAbstractAudioDeviceInfo_virtbase(QAbstractAudioDeviceInfo* src, QObject** outptr_QObject);
QMetaObject* QAbstractAudioDeviceInfo_metaObject(const QAbstractAudioDeviceInfo* self);
void* QAbstractAudioDeviceInfo_metacast(QAbstractAudioDeviceInfo* self, const char* param1);
struct miqt_string QAbstractAudioDeviceInfo_tr(const char* s);
struct miqt_string QAbstractAudioDeviceInfo_trUtf8(const char* s);
QAudioFormat* QAbstractAudioDeviceInfo_preferredFormat(const QAbstractAudioDeviceInfo* self);
bool QAbstractAudioDeviceInfo_isFormatSupported(const QAbstractAudioDeviceInfo* self, QAudioFormat* format);
struct miqt_string QAbstractAudioDeviceInfo_deviceName(const QAbstractAudioDeviceInfo* self);
struct miqt_array /* of struct miqt_string */  QAbstractAudioDeviceInfo_supportedCodecs(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleRates(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedChannelCounts(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleSizes(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedByteOrders(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleTypes(QAbstractAudioDeviceInfo* self);
struct miqt_string QAbstractAudioDeviceInfo_tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioDeviceInfo_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioDeviceInfo_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioDeviceInfo_trUtf83(const char* s, const char* c, int n);

void QAbstractAudioDeviceInfo_delete(QAbstractAudioDeviceInfo* self);

void QAbstractAudioOutput_virtbase(QAbstractAudioOutput* src, QObject** outptr_QObject);
QMetaObject* QAbstractAudioOutput_metaObject(const QAbstractAudioOutput* self);
void* QAbstractAudioOutput_metacast(QAbstractAudioOutput* self, const char* param1);
struct miqt_string QAbstractAudioOutput_tr(const char* s);
struct miqt_string QAbstractAudioOutput_trUtf8(const char* s);
void QAbstractAudioOutput_start(QAbstractAudioOutput* self, QIODevice* device);
QIODevice* QAbstractAudioOutput_start2(QAbstractAudioOutput* self);
void QAbstractAudioOutput_stop(QAbstractAudioOutput* self);
void QAbstractAudioOutput_reset(QAbstractAudioOutput* self);
void QAbstractAudioOutput_suspend(QAbstractAudioOutput* self);
void QAbstractAudioOutput_resume(QAbstractAudioOutput* self);
int QAbstractAudioOutput_bytesFree(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_periodSize(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_setBufferSize(QAbstractAudioOutput* self, int value);
int QAbstractAudioOutput_bufferSize(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_setNotifyInterval(QAbstractAudioOutput* self, int milliSeconds);
int QAbstractAudioOutput_notifyInterval(const QAbstractAudioOutput* self);
long long QAbstractAudioOutput_processedUSecs(const QAbstractAudioOutput* self);
long long QAbstractAudioOutput_elapsedUSecs(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_error(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_state(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_setFormat(QAbstractAudioOutput* self, QAudioFormat* fmt);
QAudioFormat* QAbstractAudioOutput_format(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_setVolume(QAbstractAudioOutput* self, double volume);
double QAbstractAudioOutput_volume(const QAbstractAudioOutput* self);
struct miqt_string QAbstractAudioOutput_category(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_setCategory(QAbstractAudioOutput* self, struct miqt_string category);
void QAbstractAudioOutput_errorChanged(QAbstractAudioOutput* self, int error);
void QAbstractAudioOutput_connect_errorChanged(QAbstractAudioOutput* self, intptr_t slot);
void QAbstractAudioOutput_stateChanged(QAbstractAudioOutput* self, int state);
void QAbstractAudioOutput_connect_stateChanged(QAbstractAudioOutput* self, intptr_t slot);
void QAbstractAudioOutput_notify(QAbstractAudioOutput* self);
void QAbstractAudioOutput_connect_notify(QAbstractAudioOutput* self, intptr_t slot);
struct miqt_string QAbstractAudioOutput_tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioOutput_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioOutput_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioOutput_trUtf83(const char* s, const char* c, int n);

void QAbstractAudioOutput_delete(QAbstractAudioOutput* self);

void QAbstractAudioInput_virtbase(QAbstractAudioInput* src, QObject** outptr_QObject);
QMetaObject* QAbstractAudioInput_metaObject(const QAbstractAudioInput* self);
void* QAbstractAudioInput_metacast(QAbstractAudioInput* self, const char* param1);
struct miqt_string QAbstractAudioInput_tr(const char* s);
struct miqt_string QAbstractAudioInput_trUtf8(const char* s);
void QAbstractAudioInput_start(QAbstractAudioInput* self, QIODevice* device);
QIODevice* QAbstractAudioInput_start2(QAbstractAudioInput* self);
void QAbstractAudioInput_stop(QAbstractAudioInput* self);
void QAbstractAudioInput_reset(QAbstractAudioInput* self);
void QAbstractAudioInput_suspend(QAbstractAudioInput* self);
void QAbstractAudioInput_resume(QAbstractAudioInput* self);
int QAbstractAudioInput_bytesReady(const QAbstractAudioInput* self);
int QAbstractAudioInput_periodSize(const QAbstractAudioInput* self);
void QAbstractAudioInput_setBufferSize(QAbstractAudioInput* self, int value);
int QAbstractAudioInput_bufferSize(const QAbstractAudioInput* self);
void QAbstractAudioInput_setNotifyInterval(QAbstractAudioInput* self, int milliSeconds);
int QAbstractAudioInput_notifyInterval(const QAbstractAudioInput* self);
long long QAbstractAudioInput_processedUSecs(const QAbstractAudioInput* self);
long long QAbstractAudioInput_elapsedUSecs(const QAbstractAudioInput* self);
int QAbstractAudioInput_error(const QAbstractAudioInput* self);
int QAbstractAudioInput_state(const QAbstractAudioInput* self);
void QAbstractAudioInput_setFormat(QAbstractAudioInput* self, QAudioFormat* fmt);
QAudioFormat* QAbstractAudioInput_format(const QAbstractAudioInput* self);
void QAbstractAudioInput_setVolume(QAbstractAudioInput* self, double volume);
double QAbstractAudioInput_volume(const QAbstractAudioInput* self);
void QAbstractAudioInput_errorChanged(QAbstractAudioInput* self, int error);
void QAbstractAudioInput_connect_errorChanged(QAbstractAudioInput* self, intptr_t slot);
void QAbstractAudioInput_stateChanged(QAbstractAudioInput* self, int state);
void QAbstractAudioInput_connect_stateChanged(QAbstractAudioInput* self, intptr_t slot);
void QAbstractAudioInput_notify(QAbstractAudioInput* self);
void QAbstractAudioInput_connect_notify(QAbstractAudioInput* self, intptr_t slot);
struct miqt_string QAbstractAudioInput_tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioInput_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioInput_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioInput_trUtf83(const char* s, const char* c, int n);

void QAbstractAudioInput_delete(QAbstractAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
