#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTANIMATION_H
#define MIQT_QT6_GEN_QABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAnimationDriver;
class QAnimationGroup;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationDriver QAnimationDriver;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAbstractAnimation* QAbstractAnimation_new();
QAbstractAnimation* QAbstractAnimation_new2(QObject* parent);
void QAbstractAnimation_virtbase(QAbstractAnimation* src, QObject** outptr_QObject);
QMetaObject* QAbstractAnimation_metaObject(const QAbstractAnimation* self);
void* QAbstractAnimation_metacast(QAbstractAnimation* self, const char* param1);
struct miqt_string QAbstractAnimation_tr(const char* s);
int QAbstractAnimation_state(const QAbstractAnimation* self);
QAnimationGroup* QAbstractAnimation_group(const QAbstractAnimation* self);
int QAbstractAnimation_direction(const QAbstractAnimation* self);
void QAbstractAnimation_setDirection(QAbstractAnimation* self, int direction);
int QAbstractAnimation_currentTime(const QAbstractAnimation* self);
int QAbstractAnimation_currentLoopTime(const QAbstractAnimation* self);
int QAbstractAnimation_loopCount(const QAbstractAnimation* self);
void QAbstractAnimation_setLoopCount(QAbstractAnimation* self, int loopCount);
int QAbstractAnimation_currentLoop(const QAbstractAnimation* self);
int QAbstractAnimation_duration(const QAbstractAnimation* self);
int QAbstractAnimation_totalDuration(const QAbstractAnimation* self);
void QAbstractAnimation_finished(QAbstractAnimation* self);
void QAbstractAnimation_connect_finished(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_stateChanged(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_connect_stateChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_currentLoopChanged(QAbstractAnimation* self, int currentLoop);
void QAbstractAnimation_connect_currentLoopChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_directionChanged(QAbstractAnimation* self, int param1);
void QAbstractAnimation_connect_directionChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_start(QAbstractAnimation* self);
void QAbstractAnimation_pause(QAbstractAnimation* self);
void QAbstractAnimation_resume(QAbstractAnimation* self);
void QAbstractAnimation_setPaused(QAbstractAnimation* self, bool paused);
void QAbstractAnimation_stop(QAbstractAnimation* self);
void QAbstractAnimation_setCurrentTime(QAbstractAnimation* self, int msecs);
bool QAbstractAnimation_event(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_updateCurrentTime(QAbstractAnimation* self, int currentTime);
void QAbstractAnimation_updateState(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_updateDirection(QAbstractAnimation* self, int direction);
struct miqt_string QAbstractAnimation_tr2(const char* s, const char* c);
struct miqt_string QAbstractAnimation_tr3(const char* s, const char* c, int n);
void QAbstractAnimation_start1(QAbstractAnimation* self, int policy);
bool QAbstractAnimation_override_virtual_duration(void* self, intptr_t slot);
int QAbstractAnimation_virtualbase_duration(const void* self);
bool QAbstractAnimation_override_virtual_event(void* self, intptr_t slot);
bool QAbstractAnimation_virtualbase_event(void* self, QEvent* event);
bool QAbstractAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_updateCurrentTime(void* self, int currentTime);
bool QAbstractAnimation_override_virtual_updateState(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_updateState(void* self, int newState, int oldState);
bool QAbstractAnimation_override_virtual_updateDirection(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_updateDirection(void* self, int direction);
bool QAbstractAnimation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractAnimation_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractAnimation_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractAnimation_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractAnimation_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAbstractAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAbstractAnimation_delete(QAbstractAnimation* self);

QAnimationDriver* QAnimationDriver_new();
QAnimationDriver* QAnimationDriver_new2(QObject* parent);
void QAnimationDriver_virtbase(QAnimationDriver* src, QObject** outptr_QObject);
QMetaObject* QAnimationDriver_metaObject(const QAnimationDriver* self);
void* QAnimationDriver_metacast(QAnimationDriver* self, const char* param1);
struct miqt_string QAnimationDriver_tr(const char* s);
void QAnimationDriver_advance(QAnimationDriver* self);
void QAnimationDriver_install(QAnimationDriver* self);
void QAnimationDriver_uninstall(QAnimationDriver* self);
bool QAnimationDriver_isRunning(const QAnimationDriver* self);
long long QAnimationDriver_elapsed(const QAnimationDriver* self);
void QAnimationDriver_started(QAnimationDriver* self);
void QAnimationDriver_connect_started(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_stopped(QAnimationDriver* self);
void QAnimationDriver_connect_stopped(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_start(QAnimationDriver* self);
void QAnimationDriver_stop(QAnimationDriver* self);
struct miqt_string QAnimationDriver_tr2(const char* s, const char* c);
struct miqt_string QAnimationDriver_tr3(const char* s, const char* c, int n);
bool QAnimationDriver_override_virtual_advance(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_advance(void* self);
bool QAnimationDriver_override_virtual_elapsed(void* self, intptr_t slot);
long long QAnimationDriver_virtualbase_elapsed(const void* self);
bool QAnimationDriver_override_virtual_start(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_start(void* self);
bool QAnimationDriver_override_virtual_stop(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_stop(void* self);
bool QAnimationDriver_override_virtual_event(void* self, intptr_t slot);
bool QAnimationDriver_virtualbase_event(void* self, QEvent* event);
bool QAnimationDriver_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAnimationDriver_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAnimationDriver_override_virtual_timerEvent(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAnimationDriver_override_virtual_childEvent(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAnimationDriver_override_virtual_customEvent(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_customEvent(void* self, QEvent* event);
bool QAnimationDriver_override_virtual_connectNotify(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAnimationDriver_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAnimationDriver_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAnimationDriver_protectedbase_advanceAnimation(bool* _dynamic_cast_ok, void* self);
QObject* QAnimationDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAnimationDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAnimationDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAnimationDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAnimationDriver_delete(QAnimationDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
