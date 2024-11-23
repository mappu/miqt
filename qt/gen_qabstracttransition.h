#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTTRANSITION_H
#define MIQT_QT_GEN_QABSTRACTTRANSITION_H

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

void QAbstractTransition_new(QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QAbstractTransition_new2(QState* sourceState, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
QMetaObject* QAbstractTransition_MetaObject(const QAbstractTransition* self);
void* QAbstractTransition_Metacast(QAbstractTransition* self, const char* param1);
struct miqt_string QAbstractTransition_Tr(const char* s);
struct miqt_string QAbstractTransition_TrUtf8(const char* s);
QState* QAbstractTransition_SourceState(const QAbstractTransition* self);
QAbstractState* QAbstractTransition_TargetState(const QAbstractTransition* self);
void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target);
struct miqt_array /* of QAbstractState* */  QAbstractTransition_TargetStates(const QAbstractTransition* self);
void QAbstractTransition_SetTargetStates(QAbstractTransition* self, struct miqt_array /* of QAbstractState* */  targets);
int QAbstractTransition_TransitionType(const QAbstractTransition* self);
void QAbstractTransition_SetTransitionType(QAbstractTransition* self, int typeVal);
QStateMachine* QAbstractTransition_Machine(const QAbstractTransition* self);
void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
struct miqt_array /* of QAbstractAnimation* */  QAbstractTransition_Animations(const QAbstractTransition* self);
bool QAbstractTransition_EventTest(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_OnTransition(QAbstractTransition* self, QEvent* event);
bool QAbstractTransition_Event(QAbstractTransition* self, QEvent* e);
struct miqt_string QAbstractTransition_Tr2(const char* s, const char* c);
struct miqt_string QAbstractTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractTransition_TrUtf83(const char* s, const char* c, int n);
void QAbstractTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_EventTest(void* self, QEvent* event);
void QAbstractTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_OnTransition(void* self, QEvent* event);
void QAbstractTransition_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_Event(void* self, QEvent* e);
void QAbstractTransition_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractTransition_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractTransition_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractTransition_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractTransition_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractTransition_Delete(QAbstractTransition* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
