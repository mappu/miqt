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
class QChildEvent;
class QEvent;
class QMetaMethod;
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
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
typedef struct QStateMachine__SignalEvent QStateMachine__SignalEvent;
typedef struct QStateMachine__WrappedEvent QStateMachine__WrappedEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStateMachine* QStateMachine_new();
QStateMachine* QStateMachine_new2(int childMode);
QStateMachine* QStateMachine_new3(QObject* parent);
QStateMachine* QStateMachine_new4(int childMode, QObject* parent);
void QStateMachine_virtbase(QStateMachine* src, QState** outptr_QState);
QMetaObject* QStateMachine_metaObject(const QStateMachine* self);
void* QStateMachine_metacast(QStateMachine* self, const char* param1);
struct miqt_string QStateMachine_tr(const char* s);
struct miqt_string QStateMachine_trUtf8(const char* s);
void QStateMachine_addState(QStateMachine* self, QAbstractState* state);
void QStateMachine_removeState(QStateMachine* self, QAbstractState* state);
int QStateMachine_error(const QStateMachine* self);
struct miqt_string QStateMachine_errorString(const QStateMachine* self);
void QStateMachine_clearError(QStateMachine* self);
bool QStateMachine_isRunning(const QStateMachine* self);
bool QStateMachine_isAnimated(const QStateMachine* self);
void QStateMachine_setAnimated(QStateMachine* self, bool enabled);
void QStateMachine_addDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
struct miqt_array /* of QAbstractAnimation* */  QStateMachine_defaultAnimations(const QStateMachine* self);
void QStateMachine_removeDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
int QStateMachine_globalRestorePolicy(const QStateMachine* self);
void QStateMachine_setGlobalRestorePolicy(QStateMachine* self, int restorePolicy);
void QStateMachine_postEvent(QStateMachine* self, QEvent* event);
int QStateMachine_postDelayedEvent(QStateMachine* self, QEvent* event, int delay);
bool QStateMachine_cancelDelayedEvent(QStateMachine* self, int id);
struct miqt_array /* set of QAbstractState* */  QStateMachine_configuration(const QStateMachine* self);
bool QStateMachine_eventFilter(QStateMachine* self, QObject* watched, QEvent* event);
void QStateMachine_start(QStateMachine* self);
void QStateMachine_stop(QStateMachine* self);
void QStateMachine_setRunning(QStateMachine* self, bool running);
void QStateMachine_runningChanged(QStateMachine* self, bool running);
void QStateMachine_connect_runningChanged(QStateMachine* self, intptr_t slot);
void QStateMachine_onEntry(QStateMachine* self, QEvent* event);
void QStateMachine_onExit(QStateMachine* self, QEvent* event);
void QStateMachine_beginSelectTransitions(QStateMachine* self, QEvent* event);
void QStateMachine_endSelectTransitions(QStateMachine* self, QEvent* event);
void QStateMachine_beginMicrostep(QStateMachine* self, QEvent* event);
void QStateMachine_endMicrostep(QStateMachine* self, QEvent* event);
bool QStateMachine_event(QStateMachine* self, QEvent* e);
struct miqt_string QStateMachine_tr2(const char* s, const char* c);
struct miqt_string QStateMachine_tr3(const char* s, const char* c, int n);
struct miqt_string QStateMachine_trUtf82(const char* s, const char* c);
struct miqt_string QStateMachine_trUtf83(const char* s, const char* c, int n);
void QStateMachine_postEvent2(QStateMachine* self, QEvent* event, int priority);
bool QStateMachine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStateMachine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStateMachine_override_virtual_onEntry(void* self, intptr_t slot);
void QStateMachine_virtualbase_onEntry(void* self, QEvent* event);
bool QStateMachine_override_virtual_onExit(void* self, intptr_t slot);
void QStateMachine_virtualbase_onExit(void* self, QEvent* event);
bool QStateMachine_override_virtual_beginSelectTransitions(void* self, intptr_t slot);
void QStateMachine_virtualbase_beginSelectTransitions(void* self, QEvent* event);
bool QStateMachine_override_virtual_endSelectTransitions(void* self, intptr_t slot);
void QStateMachine_virtualbase_endSelectTransitions(void* self, QEvent* event);
bool QStateMachine_override_virtual_beginMicrostep(void* self, intptr_t slot);
void QStateMachine_virtualbase_beginMicrostep(void* self, QEvent* event);
bool QStateMachine_override_virtual_endMicrostep(void* self, intptr_t slot);
void QStateMachine_virtualbase_endMicrostep(void* self, QEvent* event);
bool QStateMachine_override_virtual_event(void* self, intptr_t slot);
bool QStateMachine_virtualbase_event(void* self, QEvent* e);
bool QStateMachine_override_virtual_timerEvent(void* self, intptr_t slot);
void QStateMachine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStateMachine_override_virtual_childEvent(void* self, intptr_t slot);
void QStateMachine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStateMachine_override_virtual_customEvent(void* self, intptr_t slot);
void QStateMachine_virtualbase_customEvent(void* self, QEvent* event);
bool QStateMachine_override_virtual_connectNotify(void* self, intptr_t slot);
void QStateMachine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStateMachine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStateMachine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QStateMachine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStateMachine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStateMachine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStateMachine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStateMachine_connect_started(QStateMachine* self, intptr_t slot);
void QStateMachine_connect_stopped(QStateMachine* self, intptr_t slot);
void QStateMachine_delete(QStateMachine* self);

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new(QObject* sender, int signalIndex, struct miqt_array /* of QVariant* */  arguments);
QStateMachine__SignalEvent* QStateMachine__SignalEvent_new2(QStateMachine__SignalEvent* param1);
void QStateMachine__SignalEvent_virtbase(QStateMachine__SignalEvent* src, QEvent** outptr_QEvent);
QObject* QStateMachine__SignalEvent_sender(const QStateMachine__SignalEvent* self);
int QStateMachine__SignalEvent_signalIndex(const QStateMachine__SignalEvent* self);
struct miqt_array /* of QVariant* */  QStateMachine__SignalEvent_arguments(const QStateMachine__SignalEvent* self);
void QStateMachine__SignalEvent_delete(QStateMachine__SignalEvent* self);

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new(QObject* object, QEvent* event);
QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new2(QStateMachine__WrappedEvent* param1);
void QStateMachine__WrappedEvent_virtbase(QStateMachine__WrappedEvent* src, QEvent** outptr_QEvent);
QObject* QStateMachine__WrappedEvent_object(const QStateMachine__WrappedEvent* self);
QEvent* QStateMachine__WrappedEvent_event(const QStateMachine__WrappedEvent* self);
void QStateMachine__WrappedEvent_delete(QStateMachine__WrappedEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
