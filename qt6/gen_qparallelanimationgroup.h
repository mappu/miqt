#pragma once
#ifndef MIQT_QT6_GEN_QPARALLELANIMATIONGROUP_H
#define MIQT_QT6_GEN_QPARALLELANIMATIONGROUP_H

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
class QParallelAnimationGroup;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QParallelAnimationGroup QParallelAnimationGroup;
typedef struct QTimerEvent QTimerEvent;
#endif

QParallelAnimationGroup* QParallelAnimationGroup_new();
QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent);
void QParallelAnimationGroup_virtbase(QParallelAnimationGroup* src, QAnimationGroup** outptr_QAnimationGroup);
QMetaObject* QParallelAnimationGroup_metaObject(const QParallelAnimationGroup* self);
void* QParallelAnimationGroup_metacast(QParallelAnimationGroup* self, const char* param1);
struct miqt_string QParallelAnimationGroup_tr(const char* s);
int QParallelAnimationGroup_duration(const QParallelAnimationGroup* self);
bool QParallelAnimationGroup_event(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_updateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_updateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_updateDirection(QParallelAnimationGroup* self, int direction);
struct miqt_string QParallelAnimationGroup_tr2(const char* s, const char* c);
struct miqt_string QParallelAnimationGroup_tr3(const char* s, const char* c, int n);
bool QParallelAnimationGroup_override_virtual_duration(void* self, intptr_t slot);
int QParallelAnimationGroup_virtualbase_duration(const void* self);
bool QParallelAnimationGroup_override_virtual_event(void* self, intptr_t slot);
bool QParallelAnimationGroup_virtualbase_event(void* self, QEvent* event);
bool QParallelAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_updateCurrentTime(void* self, int currentTime);
bool QParallelAnimationGroup_override_virtual_updateState(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState);
bool QParallelAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_updateDirection(void* self, int direction);
bool QParallelAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot);
bool QParallelAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QParallelAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QParallelAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event);
bool QParallelAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_customEvent(void* self, QEvent* event);
bool QParallelAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QParallelAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QParallelAnimationGroup_delete(QParallelAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
