#pragma once
#ifndef MIQT_QT_GEN_QANIMATIONGROUP_H
#define MIQT_QT_GEN_QANIMATIONGROUP_H

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
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAnimationGroup* QAnimationGroup_new();
QAnimationGroup* QAnimationGroup_new2(QObject* parent);
void QAnimationGroup_virtbase(QAnimationGroup* src, QAbstractAnimation** outptr_QAbstractAnimation);
QMetaObject* QAnimationGroup_metaObject(const QAnimationGroup* self);
void* QAnimationGroup_metacast(QAnimationGroup* self, const char* param1);
struct miqt_string QAnimationGroup_tr(const char* s);
struct miqt_string QAnimationGroup_trUtf8(const char* s);
QAbstractAnimation* QAnimationGroup_animationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_animationCount(const QAnimationGroup* self);
int QAnimationGroup_indexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_addAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_insertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_removeAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_takeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_clear(QAnimationGroup* self);
bool QAnimationGroup_event(QAnimationGroup* self, QEvent* event);
struct miqt_string QAnimationGroup_tr2(const char* s, const char* c);
struct miqt_string QAnimationGroup_tr3(const char* s, const char* c, int n);
struct miqt_string QAnimationGroup_trUtf82(const char* s, const char* c);
struct miqt_string QAnimationGroup_trUtf83(const char* s, const char* c, int n);
bool QAnimationGroup_override_virtual_event(void* self, intptr_t slot);
bool QAnimationGroup_virtualbase_event(void* self, QEvent* event);
bool QAnimationGroup_override_virtual_duration(void* self, intptr_t slot);
int QAnimationGroup_virtualbase_duration(const void* self);
bool QAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_updateCurrentTime(void* self, int currentTime);
bool QAnimationGroup_override_virtual_updateState(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState);
bool QAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_updateDirection(void* self, int direction);
bool QAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_customEvent(void* self, QEvent* event);
bool QAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAnimationGroup_delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
