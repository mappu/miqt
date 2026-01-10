#pragma once
#ifndef MIQT_QT6_STATEMACHINE_GEN_QFINALSTATE_H
#define MIQT_QT6_STATEMACHINE_GEN_QFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractState;
class QChildEvent;
class QEvent;
class QFinalState;
class QMetaMethod;
class QMetaObject;
class QObject;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFinalState QFinalState;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QFinalState* QFinalState_new();
QFinalState* QFinalState_new2(QState* parent);
void QFinalState_virtbase(QFinalState* src, QAbstractState** outptr_QAbstractState);
QMetaObject* QFinalState_metaObject(const QFinalState* self);
void* QFinalState_metacast(QFinalState* self, const char* param1);
struct miqt_string QFinalState_tr(const char* s);
void QFinalState_onEntry(QFinalState* self, QEvent* event);
void QFinalState_onExit(QFinalState* self, QEvent* event);
bool QFinalState_event(QFinalState* self, QEvent* e);
struct miqt_string QFinalState_tr2(const char* s, const char* c);
struct miqt_string QFinalState_tr3(const char* s, const char* c, int n);

bool QFinalState_override_virtual_onEntry(void* self, intptr_t slot);
void QFinalState_virtualbase_onEntry(void* self, QEvent* event);
bool QFinalState_override_virtual_onExit(void* self, intptr_t slot);
void QFinalState_virtualbase_onExit(void* self, QEvent* event);
bool QFinalState_override_virtual_event(void* self, intptr_t slot);
bool QFinalState_virtualbase_event(void* self, QEvent* e);
bool QFinalState_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFinalState_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFinalState_override_virtual_timerEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFinalState_override_virtual_childEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFinalState_override_virtual_customEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_customEvent(void* self, QEvent* event);
bool QFinalState_override_virtual_connectNotify(void* self, intptr_t slot);
void QFinalState_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFinalState_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFinalState_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QFinalState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFinalState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFinalState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFinalState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QFinalState_delete(QFinalState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
