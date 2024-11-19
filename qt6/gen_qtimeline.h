#pragma once
#ifndef MIQT_QT6_GEN_QTIMELINE_H
#define MIQT_QT6_GEN_QTIMELINE_H

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

void QTimeLine_new(QTimeLine** outptr_QTimeLine, QObject** outptr_QObject);
void QTimeLine_new2(int duration, QTimeLine** outptr_QTimeLine, QObject** outptr_QObject);
void QTimeLine_new3(int duration, QObject* parent, QTimeLine** outptr_QTimeLine, QObject** outptr_QObject);
QMetaObject* QTimeLine_MetaObject(const QTimeLine* self);
void* QTimeLine_Metacast(QTimeLine* self, const char* param1);
struct miqt_string QTimeLine_Tr(const char* s);
int QTimeLine_State(const QTimeLine* self);
int QTimeLine_LoopCount(const QTimeLine* self);
void QTimeLine_SetLoopCount(QTimeLine* self, int count);
int QTimeLine_Direction(const QTimeLine* self);
void QTimeLine_SetDirection(QTimeLine* self, int direction);
int QTimeLine_Duration(const QTimeLine* self);
void QTimeLine_SetDuration(QTimeLine* self, int duration);
int QTimeLine_StartFrame(const QTimeLine* self);
void QTimeLine_SetStartFrame(QTimeLine* self, int frame);
int QTimeLine_EndFrame(const QTimeLine* self);
void QTimeLine_SetEndFrame(QTimeLine* self, int frame);
void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_UpdateInterval(const QTimeLine* self);
void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval);
QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self);
void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve);
int QTimeLine_CurrentTime(const QTimeLine* self);
int QTimeLine_CurrentFrame(const QTimeLine* self);
double QTimeLine_CurrentValue(const QTimeLine* self);
int QTimeLine_FrameForTime(const QTimeLine* self, int msec);
double QTimeLine_ValueForTime(const QTimeLine* self, int msec);
void QTimeLine_Start(QTimeLine* self);
void QTimeLine_Resume(QTimeLine* self);
void QTimeLine_Stop(QTimeLine* self);
void QTimeLine_SetPaused(QTimeLine* self, bool paused);
void QTimeLine_SetCurrentTime(QTimeLine* self, int msec);
void QTimeLine_ToggleDirection(QTimeLine* self);
void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event);
struct miqt_string QTimeLine_Tr2(const char* s, const char* c);
struct miqt_string QTimeLine_Tr3(const char* s, const char* c, int n);
void QTimeLine_override_virtual_ValueForTime(void* self, intptr_t slot);
double QTimeLine_virtualbase_ValueForTime(const void* self, int msec);
void QTimeLine_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QTimeLine_override_virtual_Event(void* self, intptr_t slot);
bool QTimeLine_virtualbase_Event(void* self, QEvent* event);
void QTimeLine_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTimeLine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QTimeLine_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QTimeLine_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTimeLine_virtualbase_CustomEvent(void* self, QEvent* event);
void QTimeLine_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTimeLine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QTimeLine_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTimeLine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTimeLine_Delete(QTimeLine* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
