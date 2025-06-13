#pragma once
#ifndef MIQT_QT_GEN_QSIGNALTRANSITION_H
#define MIQT_QT_GEN_QSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractTransition;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QSignalTransition* QSignalTransition_new();
QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal);
QSignalTransition* QSignalTransition_new3(QState* sourceState);
QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState);
void QSignalTransition_virtbase(QSignalTransition* src, QAbstractTransition** outptr_QAbstractTransition);
QMetaObject* QSignalTransition_metaObject(const QSignalTransition* self);
void* QSignalTransition_metacast(QSignalTransition* self, const char* param1);
struct miqt_string QSignalTransition_tr(const char* s);
struct miqt_string QSignalTransition_trUtf8(const char* s);
QObject* QSignalTransition_senderObject(const QSignalTransition* self);
void QSignalTransition_setSenderObject(QSignalTransition* self, QObject* sender);
struct miqt_string QSignalTransition_signal(const QSignalTransition* self);
void QSignalTransition_setSignal(QSignalTransition* self, struct miqt_string signal);
bool QSignalTransition_eventTest(QSignalTransition* self, QEvent* event);
void QSignalTransition_onTransition(QSignalTransition* self, QEvent* event);
bool QSignalTransition_event(QSignalTransition* self, QEvent* e);
struct miqt_string QSignalTransition_tr2(const char* s, const char* c);
struct miqt_string QSignalTransition_tr3(const char* s, const char* c, int n);
struct miqt_string QSignalTransition_trUtf82(const char* s, const char* c);
struct miqt_string QSignalTransition_trUtf83(const char* s, const char* c, int n);

bool QSignalTransition_override_virtual_eventTest(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_eventTest(void* self, QEvent* event);
bool QSignalTransition_override_virtual_onTransition(void* self, intptr_t slot);
void QSignalTransition_virtualbase_onTransition(void* self, QEvent* event);
bool QSignalTransition_override_virtual_event(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_event(void* self, QEvent* e);
bool QSignalTransition_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSignalTransition_override_virtual_timerEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSignalTransition_override_virtual_childEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSignalTransition_override_virtual_customEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_customEvent(void* self, QEvent* event);
bool QSignalTransition_override_virtual_connectNotify(void* self, intptr_t slot);
void QSignalTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSignalTransition_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSignalTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QSignalTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSignalTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSignalTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSignalTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSignalTransition_connect_senderObjectChanged(QSignalTransition* self, intptr_t slot);
void QSignalTransition_connect_signalChanged(QSignalTransition* self, intptr_t slot);

void QSignalTransition_delete(QSignalTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
