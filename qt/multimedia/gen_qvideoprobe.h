#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOPROBE_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOPROBE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaObject;
class QMediaRecorder;
class QMetaObject;
class QObject;
class QVideoFrame;
class QVideoProbe;
#else
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoProbe QVideoProbe;
#endif

QVideoProbe* QVideoProbe_new();
QVideoProbe* QVideoProbe_new2(QObject* parent);
QMetaObject* QVideoProbe_MetaObject(const QVideoProbe* self);
void* QVideoProbe_Metacast(QVideoProbe* self, const char* param1);
struct miqt_string QVideoProbe_Tr(const char* s);
struct miqt_string QVideoProbe_TrUtf8(const char* s);
bool QVideoProbe_SetSource(QVideoProbe* self, QMediaObject* source);
bool QVideoProbe_SetSourceWithSource(QVideoProbe* self, QMediaRecorder* source);
bool QVideoProbe_IsActive(const QVideoProbe* self);
void QVideoProbe_VideoFrameProbed(QVideoProbe* self, QVideoFrame* frame);
void QVideoProbe_connect_VideoFrameProbed(QVideoProbe* self, intptr_t slot);
void QVideoProbe_Flush(QVideoProbe* self);
void QVideoProbe_connect_Flush(QVideoProbe* self, intptr_t slot);
struct miqt_string QVideoProbe_Tr2(const char* s, const char* c);
struct miqt_string QVideoProbe_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoProbe_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoProbe_TrUtf83(const char* s, const char* c, int n);
void QVideoProbe_Delete(QVideoProbe* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
