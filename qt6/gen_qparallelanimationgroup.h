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
QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self);
void* QParallelAnimationGroup_Metacast(QParallelAnimationGroup* self, const char* param1);
struct miqt_string QParallelAnimationGroup_Tr(const char* s);
int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self);
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction);
struct miqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n);
bool QParallelAnimationGroup_override_virtual_Duration(void* self, intptr_t slot);
int QParallelAnimationGroup_virtualbase_Duration(const void* self);
bool QParallelAnimationGroup_override_virtual_Event(void* self, intptr_t slot);
bool QParallelAnimationGroup_virtualbase_Event(void* self, QEvent* event);
bool QParallelAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int currentTime);
bool QParallelAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState);
bool QParallelAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_UpdateDirection(void* self, int direction);
bool QParallelAnimationGroup_override_virtual_EventFilter(void* self, intptr_t slot);
bool QParallelAnimationGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QParallelAnimationGroup_override_virtual_TimerEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QParallelAnimationGroup_override_virtual_ChildEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QParallelAnimationGroup_override_virtual_CustomEvent(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_CustomEvent(void* self, QEvent* event);
bool QParallelAnimationGroup_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QParallelAnimationGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QParallelAnimationGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
