#pragma once
#ifndef MIQT_QT_GEN_QSEQUENTIALANIMATIONGROUP_H
#define MIQT_QT_GEN_QSEQUENTIALANIMATIONGROUP_H

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
QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self);
void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1);
struct miqt_string QSequentialAnimationGroup_Tr(const char* s);
struct miqt_string QSequentialAnimationGroup_TrUtf8(const char* s);
QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction);
struct miqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n);
struct miqt_string QSequentialAnimationGroup_TrUtf82(const char* s, const char* c);
struct miqt_string QSequentialAnimationGroup_TrUtf83(const char* s, const char* c, int n);
bool QSequentialAnimationGroup_override_virtual_Duration(void* self, intptr_t slot);
int QSequentialAnimationGroup_virtualbase_Duration(const void* self);
bool QSequentialAnimationGroup_override_virtual_Event(void* self, intptr_t slot);
bool QSequentialAnimationGroup_virtualbase_Event(void* self, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int param1);
bool QSequentialAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState);
bool QSequentialAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_UpdateDirection(void* self, int direction);
bool QSequentialAnimationGroup_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSequentialAnimationGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSequentialAnimationGroup_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSequentialAnimationGroup_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSequentialAnimationGroup_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSequentialAnimationGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSequentialAnimationGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
