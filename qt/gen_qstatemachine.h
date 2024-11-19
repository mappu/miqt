#pragma once
#ifndef MIQT_QT_GEN_QSTATEMACHINE_H
#define MIQT_QT_GEN_QSTATEMACHINE_H

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
class QAbstractState;
class QEvent;
class QMetaObject;
class QObject;
class QState;
class QStateMachine;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__SignalEvent)
typedef QStateMachine::SignalEvent QStateMachine__SignalEvent;
#else
class QStateMachine__SignalEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__WrappedEvent)
typedef QStateMachine::WrappedEvent QStateMachine__WrappedEvent;
#else
class QStateMachine__WrappedEvent;
#endif
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
typedef struct QStateMachine__SignalEvent QStateMachine__SignalEvent;
typedef struct QStateMachine__WrappedEvent QStateMachine__WrappedEvent;
#endif

void QStateMachine_new(QStateMachine** outptr_QStateMachine, QState** outptr_QState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject);
void QStateMachine_new2(int childMode, QStateMachine** outptr_QStateMachine, QState** outptr_QState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject);
void QStateMachine_new3(QObject* parent, QStateMachine** outptr_QStateMachine, QState** outptr_QState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject);
void QStateMachine_new4(int childMode, QObject* parent, QStateMachine** outptr_QStateMachine, QState** outptr_QState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject);
QMetaObject* QStateMachine_MetaObject(const QStateMachine* self);
void* QStateMachine_Metacast(QStateMachine* self, const char* param1);
struct miqt_string QStateMachine_Tr(const char* s);
struct miqt_string QStateMachine_TrUtf8(const char* s);
void QStateMachine_AddState(QStateMachine* self, QAbstractState* state);
void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state);
int QStateMachine_Error(const QStateMachine* self);
struct miqt_string QStateMachine_ErrorString(const QStateMachine* self);
void QStateMachine_ClearError(QStateMachine* self);
bool QStateMachine_IsRunning(const QStateMachine* self);
bool QStateMachine_IsAnimated(const QStateMachine* self);
void QStateMachine_SetAnimated(QStateMachine* self, bool enabled);
void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
struct miqt_array /* of QAbstractAnimation* */  QStateMachine_DefaultAnimations(const QStateMachine* self);
void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
int QStateMachine_GlobalRestorePolicy(const QStateMachine* self);
void QStateMachine_SetGlobalRestorePolicy(QStateMachine* self, int restorePolicy);
void QStateMachine_PostEvent(QStateMachine* self, QEvent* event);
int QStateMachine_PostDelayedEvent(QStateMachine* self, QEvent* event, int delay);
bool QStateMachine_CancelDelayedEvent(QStateMachine* self, int id);
struct miqt_array /* set of QAbstractState* */  QStateMachine_Configuration(const QStateMachine* self);
bool QStateMachine_EventFilter(QStateMachine* self, QObject* watched, QEvent* event);
void QStateMachine_Start(QStateMachine* self);
void QStateMachine_Stop(QStateMachine* self);
void QStateMachine_SetRunning(QStateMachine* self, bool running);
void QStateMachine_RunningChanged(QStateMachine* self, bool running);
void QStateMachine_connect_RunningChanged(QStateMachine* self, intptr_t slot);
void QStateMachine_OnEntry(QStateMachine* self, QEvent* event);
void QStateMachine_OnExit(QStateMachine* self, QEvent* event);
void QStateMachine_BeginSelectTransitions(QStateMachine* self, QEvent* event);
void QStateMachine_EndSelectTransitions(QStateMachine* self, QEvent* event);
void QStateMachine_BeginMicrostep(QStateMachine* self, QEvent* event);
void QStateMachine_EndMicrostep(QStateMachine* self, QEvent* event);
bool QStateMachine_Event(QStateMachine* self, QEvent* e);
struct miqt_string QStateMachine_Tr2(const char* s, const char* c);
struct miqt_string QStateMachine_Tr3(const char* s, const char* c, int n);
struct miqt_string QStateMachine_TrUtf82(const char* s, const char* c);
struct miqt_string QStateMachine_TrUtf83(const char* s, const char* c, int n);
void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, int priority);
void QStateMachine_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStateMachine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QStateMachine_override_virtual_OnEntry(void* self, intptr_t slot);
void QStateMachine_virtualbase_OnEntry(void* self, QEvent* event);
void QStateMachine_override_virtual_OnExit(void* self, intptr_t slot);
void QStateMachine_virtualbase_OnExit(void* self, QEvent* event);
void QStateMachine_override_virtual_BeginSelectTransitions(void* self, intptr_t slot);
void QStateMachine_virtualbase_BeginSelectTransitions(void* self, QEvent* event);
void QStateMachine_override_virtual_EndSelectTransitions(void* self, intptr_t slot);
void QStateMachine_virtualbase_EndSelectTransitions(void* self, QEvent* event);
void QStateMachine_override_virtual_BeginMicrostep(void* self, intptr_t slot);
void QStateMachine_virtualbase_BeginMicrostep(void* self, QEvent* event);
void QStateMachine_override_virtual_EndMicrostep(void* self, intptr_t slot);
void QStateMachine_virtualbase_EndMicrostep(void* self, QEvent* event);
void QStateMachine_override_virtual_Event(void* self, intptr_t slot);
bool QStateMachine_virtualbase_Event(void* self, QEvent* e);
void QStateMachine_Delete(QStateMachine* self, bool isSubclass);

void QStateMachine__SignalEvent_new(QStateMachine__SignalEvent* param1, QStateMachine__SignalEvent** outptr_QStateMachine__SignalEvent, QEvent** outptr_QEvent);
QObject* QStateMachine__SignalEvent_Sender(const QStateMachine__SignalEvent* self);
int QStateMachine__SignalEvent_SignalIndex(const QStateMachine__SignalEvent* self);
void QStateMachine__SignalEvent_Delete(QStateMachine__SignalEvent* self, bool isSubclass);

void QStateMachine__WrappedEvent_new(QObject* object, QEvent* event, QStateMachine__WrappedEvent** outptr_QStateMachine__WrappedEvent, QEvent** outptr_QEvent);
void QStateMachine__WrappedEvent_new2(QStateMachine__WrappedEvent* param1, QStateMachine__WrappedEvent** outptr_QStateMachine__WrappedEvent, QEvent** outptr_QEvent);
QObject* QStateMachine__WrappedEvent_Object(const QStateMachine__WrappedEvent* self);
QEvent* QStateMachine__WrappedEvent_Event(const QStateMachine__WrappedEvent* self);
void QStateMachine__WrappedEvent_Delete(QStateMachine__WrappedEvent* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
