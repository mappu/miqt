#pragma once
#ifndef MIQT_QT_GEN_QTIMELINE_H
#define MIQT_QT_GEN_QTIMELINE_H

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
class QEasingCurve;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimeLine;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimeLine QTimeLine;
typedef struct QTimerEvent QTimerEvent;
#endif

QTimeLine* QTimeLine_new();
QTimeLine* QTimeLine_new2(int duration);
QTimeLine* QTimeLine_new3(int duration, QObject* parent);
void QTimeLine_virtbase(QTimeLine* src, QObject** outptr_QObject);
QMetaObject* QTimeLine_metaObject(const QTimeLine* self);
void* QTimeLine_metacast(QTimeLine* self, const char* param1);
struct miqt_string QTimeLine_tr(const char* s);
struct miqt_string QTimeLine_trUtf8(const char* s);
int QTimeLine_state(const QTimeLine* self);
int QTimeLine_loopCount(const QTimeLine* self);
void QTimeLine_setLoopCount(QTimeLine* self, int count);
int QTimeLine_direction(const QTimeLine* self);
void QTimeLine_setDirection(QTimeLine* self, int direction);
int QTimeLine_duration(const QTimeLine* self);
void QTimeLine_setDuration(QTimeLine* self, int duration);
int QTimeLine_startFrame(const QTimeLine* self);
void QTimeLine_setStartFrame(QTimeLine* self, int frame);
int QTimeLine_endFrame(const QTimeLine* self);
void QTimeLine_setEndFrame(QTimeLine* self, int frame);
void QTimeLine_setFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_updateInterval(const QTimeLine* self);
void QTimeLine_setUpdateInterval(QTimeLine* self, int interval);
int QTimeLine_curveShape(const QTimeLine* self);
void QTimeLine_setCurveShape(QTimeLine* self, int shape);
QEasingCurve* QTimeLine_easingCurve(const QTimeLine* self);
void QTimeLine_setEasingCurve(QTimeLine* self, QEasingCurve* curve);
int QTimeLine_currentTime(const QTimeLine* self);
int QTimeLine_currentFrame(const QTimeLine* self);
double QTimeLine_currentValue(const QTimeLine* self);
int QTimeLine_frameForTime(const QTimeLine* self, int msec);
double QTimeLine_valueForTime(const QTimeLine* self, int msec);
void QTimeLine_start(QTimeLine* self);
void QTimeLine_resume(QTimeLine* self);
void QTimeLine_stop(QTimeLine* self);
void QTimeLine_setPaused(QTimeLine* self, bool paused);
void QTimeLine_setCurrentTime(QTimeLine* self, int msec);
void QTimeLine_toggleDirection(QTimeLine* self);
void QTimeLine_timerEvent(QTimeLine* self, QTimerEvent* event);
struct miqt_string QTimeLine_tr2(const char* s, const char* c);
struct miqt_string QTimeLine_tr3(const char* s, const char* c, int n);
struct miqt_string QTimeLine_trUtf82(const char* s, const char* c);
struct miqt_string QTimeLine_trUtf83(const char* s, const char* c, int n);
bool QTimeLine_override_virtual_valueForTime(void* self, intptr_t slot);
double QTimeLine_virtualbase_valueForTime(const void* self, int msec);
bool QTimeLine_override_virtual_timerEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTimeLine_override_virtual_event(void* self, intptr_t slot);
bool QTimeLine_virtualbase_event(void* self, QEvent* event);
bool QTimeLine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTimeLine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTimeLine_override_virtual_childEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTimeLine_override_virtual_customEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_customEvent(void* self, QEvent* event);
bool QTimeLine_override_virtual_connectNotify(void* self, intptr_t slot);
void QTimeLine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTimeLine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTimeLine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTimeLine_delete(QTimeLine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
