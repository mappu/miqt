#pragma once
#ifndef MIQT_QT6_GEN_QSEQUENTIALANIMATIONGROUP_H
#define MIQT_QT6_GEN_QSEQUENTIALANIMATIONGROUP_H

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
class QAnimationGroup;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPauseAnimation;
class QSequentialAnimationGroup;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QSequentialAnimationGroup QSequentialAnimationGroup;
typedef struct QTimerEvent QTimerEvent;
#endif

QSequentialAnimationGroup* QSequentialAnimationGroup_new();
QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent);
void QSequentialAnimationGroup_virtbase(QSequentialAnimationGroup* src, QAnimationGroup** outptr_QAnimationGroup);
QMetaObject* QSequentialAnimationGroup_metaObject(const QSequentialAnimationGroup* self);
void* QSequentialAnimationGroup_metacast(QSequentialAnimationGroup* self, const char* param1);
struct miqt_string QSequentialAnimationGroup_tr(const char* s);
QPauseAnimation* QSequentialAnimationGroup_addPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_insertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_currentAnimation(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_duration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_currentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_connect_currentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_event(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_updateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_updateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_updateDirection(QSequentialAnimationGroup* self, int direction);
struct miqt_string QSequentialAnimationGroup_tr2(const char* s, const char* c);
struct miqt_string QSequentialAnimationGroup_tr3(const char* s, const char* c, int n);
bool QSequentialAnimationGroup_override_virtual_duration(void* self, intptr_t slot);
int QSequentialAnimationGroup_virtualbase_duration(const void* self);
bool QSequentialAnimationGroup_override_virtual_event(void* self, intptr_t slot);
bool QSequentialAnimationGroup_virtualbase_event(void* self, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_updateCurrentTime(void* self, int param1);
bool QSequentialAnimationGroup_override_virtual_updateState(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState);
bool QSequentialAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_updateDirection(void* self, int direction);
bool QSequentialAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSequentialAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSequentialAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSequentialAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_customEvent(void* self, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSequentialAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSequentialAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSequentialAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSequentialAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSequentialAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSequentialAnimationGroup_delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
