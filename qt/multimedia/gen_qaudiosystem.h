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
class QMetaObject;
class QObject;
#else
typedef struct QAbstractAudioDeviceInfo QAbstractAudioDeviceInfo;
typedef struct QAbstractAudioInput QAbstractAudioInput;
typedef struct QAbstractAudioOutput QAbstractAudioOutput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstractAudioDeviceInfo_MetaObject(const QAbstractAudioDeviceInfo* self);
void* QAbstractAudioDeviceInfo_Metacast(QAbstractAudioDeviceInfo* self, const char* param1);
struct miqt_string QAbstractAudioDeviceInfo_Tr(const char* s);
struct miqt_string QAbstractAudioDeviceInfo_TrUtf8(const char* s);
QAudioFormat* QAbstractAudioDeviceInfo_PreferredFormat(const QAbstractAudioDeviceInfo* self);
bool QAbstractAudioDeviceInfo_IsFormatSupported(const QAbstractAudioDeviceInfo* self, QAudioFormat* format);
struct miqt_string QAbstractAudioDeviceInfo_DeviceName(const QAbstractAudioDeviceInfo* self);
struct miqt_array /* of struct miqt_string */  QAbstractAudioDeviceInfo_SupportedCodecs(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleRates(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedChannelCounts(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleSizes(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedByteOrders(QAbstractAudioDeviceInfo* self);
struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleTypes(QAbstractAudioDeviceInfo* self);
struct miqt_string QAbstractAudioDeviceInfo_Tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioDeviceInfo_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioDeviceInfo_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioDeviceInfo_TrUtf83(const char* s, const char* c, int n);
void QAbstractAudioDeviceInfo_Delete(QAbstractAudioDeviceInfo* self, bool isSubclass);

QMetaObject* QAbstractAudioOutput_MetaObject(const QAbstractAudioOutput* self);
void* QAbstractAudioOutput_Metacast(QAbstractAudioOutput* self, const char* param1);
struct miqt_string QAbstractAudioOutput_Tr(const char* s);
struct miqt_string QAbstractAudioOutput_TrUtf8(const char* s);
void QAbstractAudioOutput_Start(QAbstractAudioOutput* self, QIODevice* device);
QIODevice* QAbstractAudioOutput_Start2(QAbstractAudioOutput* self);
void QAbstractAudioOutput_Stop(QAbstractAudioOutput* self);
void QAbstractAudioOutput_Reset(QAbstractAudioOutput* self);
void QAbstractAudioOutput_Suspend(QAbstractAudioOutput* self);
void QAbstractAudioOutput_Resume(QAbstractAudioOutput* self);
int QAbstractAudioOutput_BytesFree(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_PeriodSize(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_SetBufferSize(QAbstractAudioOutput* self, int value);
int QAbstractAudioOutput_BufferSize(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_SetNotifyInterval(QAbstractAudioOutput* self, int milliSeconds);
int QAbstractAudioOutput_NotifyInterval(const QAbstractAudioOutput* self);
long long QAbstractAudioOutput_ProcessedUSecs(const QAbstractAudioOutput* self);
long long QAbstractAudioOutput_ElapsedUSecs(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_Error(const QAbstractAudioOutput* self);
int QAbstractAudioOutput_State(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_SetFormat(QAbstractAudioOutput* self, QAudioFormat* fmt);
QAudioFormat* QAbstractAudioOutput_Format(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_SetVolume(QAbstractAudioOutput* self, double volume);
double QAbstractAudioOutput_Volume(const QAbstractAudioOutput* self);
struct miqt_string QAbstractAudioOutput_Category(const QAbstractAudioOutput* self);
void QAbstractAudioOutput_SetCategory(QAbstractAudioOutput* self, struct miqt_string category);
void QAbstractAudioOutput_ErrorChanged(QAbstractAudioOutput* self, int error);
void QAbstractAudioOutput_connect_ErrorChanged(QAbstractAudioOutput* self, intptr_t slot);
void QAbstractAudioOutput_StateChanged(QAbstractAudioOutput* self, int state);
void QAbstractAudioOutput_connect_StateChanged(QAbstractAudioOutput* self, intptr_t slot);
void QAbstractAudioOutput_Notify(QAbstractAudioOutput* self);
void QAbstractAudioOutput_connect_Notify(QAbstractAudioOutput* self, intptr_t slot);
struct miqt_string QAbstractAudioOutput_Tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioOutput_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioOutput_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioOutput_TrUtf83(const char* s, const char* c, int n);
void QAbstractAudioOutput_Delete(QAbstractAudioOutput* self, bool isSubclass);

QMetaObject* QAbstractAudioInput_MetaObject(const QAbstractAudioInput* self);
void* QAbstractAudioInput_Metacast(QAbstractAudioInput* self, const char* param1);
struct miqt_string QAbstractAudioInput_Tr(const char* s);
struct miqt_string QAbstractAudioInput_TrUtf8(const char* s);
void QAbstractAudioInput_Start(QAbstractAudioInput* self, QIODevice* device);
QIODevice* QAbstractAudioInput_Start2(QAbstractAudioInput* self);
void QAbstractAudioInput_Stop(QAbstractAudioInput* self);
void QAbstractAudioInput_Reset(QAbstractAudioInput* self);
void QAbstractAudioInput_Suspend(QAbstractAudioInput* self);
void QAbstractAudioInput_Resume(QAbstractAudioInput* self);
int QAbstractAudioInput_BytesReady(const QAbstractAudioInput* self);
int QAbstractAudioInput_PeriodSize(const QAbstractAudioInput* self);
void QAbstractAudioInput_SetBufferSize(QAbstractAudioInput* self, int value);
int QAbstractAudioInput_BufferSize(const QAbstractAudioInput* self);
void QAbstractAudioInput_SetNotifyInterval(QAbstractAudioInput* self, int milliSeconds);
int QAbstractAudioInput_NotifyInterval(const QAbstractAudioInput* self);
long long QAbstractAudioInput_ProcessedUSecs(const QAbstractAudioInput* self);
long long QAbstractAudioInput_ElapsedUSecs(const QAbstractAudioInput* self);
int QAbstractAudioInput_Error(const QAbstractAudioInput* self);
int QAbstractAudioInput_State(const QAbstractAudioInput* self);
void QAbstractAudioInput_SetFormat(QAbstractAudioInput* self, QAudioFormat* fmt);
QAudioFormat* QAbstractAudioInput_Format(const QAbstractAudioInput* self);
void QAbstractAudioInput_SetVolume(QAbstractAudioInput* self, double volume);
double QAbstractAudioInput_Volume(const QAbstractAudioInput* self);
void QAbstractAudioInput_ErrorChanged(QAbstractAudioInput* self, int error);
void QAbstractAudioInput_connect_ErrorChanged(QAbstractAudioInput* self, intptr_t slot);
void QAbstractAudioInput_StateChanged(QAbstractAudioInput* self, int state);
void QAbstractAudioInput_connect_StateChanged(QAbstractAudioInput* self, intptr_t slot);
void QAbstractAudioInput_Notify(QAbstractAudioInput* self);
void QAbstractAudioInput_connect_Notify(QAbstractAudioInput* self, intptr_t slot);
struct miqt_string QAbstractAudioInput_Tr2(const char* s, const char* c);
struct miqt_string QAbstractAudioInput_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractAudioInput_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractAudioInput_TrUtf83(const char* s, const char* c, int n);
void QAbstractAudioInput_Delete(QAbstractAudioInput* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
