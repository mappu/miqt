#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QWAVEDECODER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioFormat;
class QIODevice;
class QIODeviceBase;
class QMetaObject;
class QObject;
class QWaveDecoder;
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWaveDecoder QWaveDecoder;
#endif

QWaveDecoder* QWaveDecoder_new(QIODevice* device);
QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format);
QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent);
QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent);
void QWaveDecoder_virtbase(QWaveDecoder* src, QIODevice** outptr_QIODevice);
QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self);
void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1);
struct miqt_string QWaveDecoder_Tr(const char* s);
QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self);
QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self);
int QWaveDecoder_Duration(const QWaveDecoder* self);
long long QWaveDecoder_HeaderLength();
bool QWaveDecoder_Open(QWaveDecoder* self, int mode);
void QWaveDecoder_Close(QWaveDecoder* self);
bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos);
long long QWaveDecoder_Pos(const QWaveDecoder* self);
long long QWaveDecoder_Size(const QWaveDecoder* self);
bool QWaveDecoder_IsSequential(const QWaveDecoder* self);
long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self);
void QWaveDecoder_FormatKnown(QWaveDecoder* self);
void QWaveDecoder_connect_FormatKnown(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_ParsingError(QWaveDecoder* self);
void QWaveDecoder_connect_ParsingError(QWaveDecoder* self, intptr_t slot);
struct miqt_string QWaveDecoder_Tr2(const char* s, const char* c);
struct miqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n);
bool QWaveDecoder_override_virtual_Open(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_Open(void* self, int mode);
bool QWaveDecoder_override_virtual_Close(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_Close(void* self);
bool QWaveDecoder_override_virtual_Seek(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_Seek(void* self, long long pos);
bool QWaveDecoder_override_virtual_Pos(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_Pos(const void* self);
bool QWaveDecoder_override_virtual_Size(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_Size(const void* self);
bool QWaveDecoder_override_virtual_IsSequential(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_IsSequential(const void* self);
bool QWaveDecoder_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_BytesAvailable(const void* self);
bool QWaveDecoder_override_virtual_AtEnd(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_AtEnd(const void* self);
bool QWaveDecoder_override_virtual_Reset(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_Reset(void* self);
bool QWaveDecoder_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_BytesToWrite(const void* self);
bool QWaveDecoder_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_CanReadLine(const void* self);
bool QWaveDecoder_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QWaveDecoder_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QWaveDecoder_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QWaveDecoder_override_virtual_SkipData(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_SkipData(void* self, long long maxSize);
void QWaveDecoder_Delete(QWaveDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
