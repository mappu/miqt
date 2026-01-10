#pragma once
#ifndef MIQT_QT6_STATEMACHINE_GEN_QABSTRACTTRANSITION_H
#define MIQT_QT6_STATEMACHINE_GEN_QABSTRACTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAbstractState;
class QAbstractTransition;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QState;
class QStateMachine;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
typedef struct QTimerEvent QTimerEvent;
#endif

QAbstractTransition* QAbstractTransition_new();
QAbstractTransition* QAbstractTransition_new2(QState* sourceState);
void QAbstractTransition_virtbase(QAbstractTransition* src, QObject** outptr_QObject);
QMetaObject* QAbstractTransition_metaObject(const QAbstractTransition* self);
void* QAbstractTransition_metacast(QAbstractTransition* self, const char* param1);
struct miqt_string QAbstractTransition_tr(const char* s);
QState* QAbstractTransition_sourceState(const QAbstractTransition* self);
QAbstractState* QAbstractTransition_targetState(const QAbstractTransition* self);
void QAbstractTransition_setTargetState(QAbstractTransition* self, QAbstractState* target);
struct miqt_array /* of QAbstractState* */  QAbstractTransition_targetStates(const QAbstractTransition* self);
void QAbstractTransition_setTargetStates(QAbstractTransition* self, struct miqt_array /* of QAbstractState* */  targets);
int QAbstractTransition_transitionType(const QAbstractTransition* self);
void QAbstractTransition_setTransitionType(QAbstractTransition* self, int type);
QStateMachine* QAbstractTransition_machine(const QAbstractTransition* self);
void QAbstractTransition_addAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
void QAbstractTransition_removeAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
struct miqt_array /* of QAbstractAnimation* */  QAbstractTransition_animations(const QAbstractTransition* self);
bool QAbstractTransition_eventTest(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_onTransition(QAbstractTransition* self, QEvent* event);
bool QAbstractTransition_event(QAbstractTransition* self, QEvent* e);
struct miqt_string QAbstractTransition_tr2(const char* s, const char* c);
struct miqt_string QAbstractTransition_tr3(const char* s, const char* c, int n);

bool QAbstractTransition_override_virtual_eventTest(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_eventTest(void* self, QEvent* event);
bool QAbstractTransition_override_virtual_onTransition(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_onTransition(void* self, QEvent* event);
bool QAbstractTransition_override_virtual_event(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_event(void* self, QEvent* e);
bool QAbstractTransition_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractTransition_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractTransition_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractTransition_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractTransition_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractTransition_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAbstractTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAbstractTransition_connect_triggered(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_connect_targetStateChanged(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_connect_targetStatesChanged(QAbstractTransition* self, intptr_t slot);

void QAbstractTransition_delete(QAbstractTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
