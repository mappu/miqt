#pragma once
#ifndef MIQT_QT_GEN_QMOVIE_H
#define MIQT_QT_GEN_QMOVIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QColor;
class QEvent;
class QIODevice;
class QImage;
class QMetaMethod;
class QMetaObject;
class QMovie;
class QObject;
class QPixmap;
class QRect;
class QSize;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QMovie* QMovie_new();
QMovie* QMovie_new2(QIODevice* device);
QMovie* QMovie_new3(struct miqt_string fileName);
QMovie* QMovie_new4(QObject* parent);
QMovie* QMovie_new5(QIODevice* device, struct miqt_string format);
QMovie* QMovie_new6(QIODevice* device, struct miqt_string format, QObject* parent);
QMovie* QMovie_new7(struct miqt_string fileName, struct miqt_string format);
QMovie* QMovie_new8(struct miqt_string fileName, struct miqt_string format, QObject* parent);
void QMovie_virtbase(QMovie* src, QObject** outptr_QObject);
QMetaObject* QMovie_metaObject(const QMovie* self);
void* QMovie_metacast(QMovie* self, const char* param1);
struct miqt_string QMovie_tr(const char* s);
struct miqt_string QMovie_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QMovie_supportedFormats();
void QMovie_setDevice(QMovie* self, QIODevice* device);
QIODevice* QMovie_device(const QMovie* self);
void QMovie_setFileName(QMovie* self, struct miqt_string fileName);
struct miqt_string QMovie_fileName(const QMovie* self);
void QMovie_setFormat(QMovie* self, struct miqt_string format);
struct miqt_string QMovie_format(const QMovie* self);
void QMovie_setBackgroundColor(QMovie* self, QColor* color);
QColor* QMovie_backgroundColor(const QMovie* self);
int QMovie_state(const QMovie* self);
QRect* QMovie_frameRect(const QMovie* self);
QImage* QMovie_currentImage(const QMovie* self);
QPixmap* QMovie_currentPixmap(const QMovie* self);
bool QMovie_isValid(const QMovie* self);
int QMovie_lastError(const QMovie* self);
struct miqt_string QMovie_lastErrorString(const QMovie* self);
bool QMovie_jumpToFrame(QMovie* self, int frameNumber);
int QMovie_loopCount(const QMovie* self);
int QMovie_frameCount(const QMovie* self);
int QMovie_nextFrameDelay(const QMovie* self);
int QMovie_currentFrameNumber(const QMovie* self);
int QMovie_speed(const QMovie* self);
QSize* QMovie_scaledSize(QMovie* self);
void QMovie_setScaledSize(QMovie* self, QSize* size);
int QMovie_cacheMode(const QMovie* self);
void QMovie_setCacheMode(QMovie* self, int mode);
void QMovie_started(QMovie* self);
void QMovie_connect_started(QMovie* self, intptr_t slot);
void QMovie_resized(QMovie* self, QSize* size);
void QMovie_connect_resized(QMovie* self, intptr_t slot);
void QMovie_updated(QMovie* self, QRect* rect);
void QMovie_connect_updated(QMovie* self, intptr_t slot);
void QMovie_stateChanged(QMovie* self, int state);
void QMovie_connect_stateChanged(QMovie* self, intptr_t slot);
void QMovie_error(QMovie* self, int error);
void QMovie_connect_error(QMovie* self, intptr_t slot);
void QMovie_finished(QMovie* self);
void QMovie_connect_finished(QMovie* self, intptr_t slot);
void QMovie_frameChanged(QMovie* self, int frameNumber);
void QMovie_connect_frameChanged(QMovie* self, intptr_t slot);
void QMovie_start(QMovie* self);
bool QMovie_jumpToNextFrame(QMovie* self);
void QMovie_setPaused(QMovie* self, bool paused);
void QMovie_stop(QMovie* self);
void QMovie_setSpeed(QMovie* self, int percentSpeed);
struct miqt_string QMovie_tr2(const char* s, const char* c);
struct miqt_string QMovie_tr3(const char* s, const char* c, int n);
struct miqt_string QMovie_trUtf82(const char* s, const char* c);
struct miqt_string QMovie_trUtf83(const char* s, const char* c, int n);
bool QMovie_override_virtual_event(void* self, intptr_t slot);
bool QMovie_virtualbase_event(void* self, QEvent* event);
bool QMovie_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMovie_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMovie_override_virtual_timerEvent(void* self, intptr_t slot);
void QMovie_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMovie_override_virtual_childEvent(void* self, intptr_t slot);
void QMovie_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMovie_override_virtual_customEvent(void* self, intptr_t slot);
void QMovie_virtualbase_customEvent(void* self, QEvent* event);
bool QMovie_override_virtual_connectNotify(void* self, intptr_t slot);
void QMovie_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMovie_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMovie_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QMovie_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMovie_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMovie_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMovie_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QMovie_delete(QMovie* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
