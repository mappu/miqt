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
class QMetaObject;
class QObject;
class QWaveDecoder;
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWaveDecoder QWaveDecoder;
#endif

QWaveDecoder* QWaveDecoder_new(QIODevice* device);
QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format);
QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent);
QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent);
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
void QWaveDecoder_Delete(QWaveDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
