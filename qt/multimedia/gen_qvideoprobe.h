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
class QChildEvent;
class QEvent;
class QMediaObject;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVideoFrame;
class QVideoProbe;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoProbe QVideoProbe;
#endif

void QVideoProbe_new(QVideoProbe** outptr_QVideoProbe, QObject** outptr_QObject);
void QVideoProbe_new2(QObject* parent, QVideoProbe** outptr_QVideoProbe, QObject** outptr_QObject);
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
void QVideoProbe_override_virtual_Event(void* self, intptr_t slot);
bool QVideoProbe_virtualbase_Event(void* self, QEvent* event);
void QVideoProbe_override_virtual_EventFilter(void* self, intptr_t slot);
bool QVideoProbe_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QVideoProbe_override_virtual_TimerEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QVideoProbe_override_virtual_ChildEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QVideoProbe_override_virtual_CustomEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_CustomEvent(void* self, QEvent* event);
void QVideoProbe_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QVideoProbe_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QVideoProbe_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QVideoProbe_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QVideoProbe_Delete(QVideoProbe* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
