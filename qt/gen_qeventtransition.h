#pragma once
#ifndef MIQT_QT_GEN_QEVENTTRANSITION_H
#define MIQT_QT_GEN_QEVENTTRANSITION_H

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
class QEventTransition;
class QMetaMethod;
class QMetaObject;
class QObject;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QEventTransition QEventTransition;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QEventTransition* QEventTransition_new();
QEventTransition* QEventTransition_new2(QObject* object, int type);
QEventTransition* QEventTransition_new3(QState* sourceState);
QEventTransition* QEventTransition_new4(QObject* object, int type, QState* sourceState);
void QEventTransition_virtbase(QEventTransition* src, QAbstractTransition** outptr_QAbstractTransition);
QMetaObject* QEventTransition_metaObject(const QEventTransition* self);
void* QEventTransition_metacast(QEventTransition* self, const char* param1);
struct miqt_string QEventTransition_tr(const char* s);
struct miqt_string QEventTransition_trUtf8(const char* s);
QObject* QEventTransition_eventSource(const QEventTransition* self);
void QEventTransition_setEventSource(QEventTransition* self, QObject* object);
int QEventTransition_eventType(const QEventTransition* self);
void QEventTransition_setEventType(QEventTransition* self, int type);
bool QEventTransition_eventTest(QEventTransition* self, QEvent* event);
void QEventTransition_onTransition(QEventTransition* self, QEvent* event);
bool QEventTransition_event(QEventTransition* self, QEvent* e);
struct miqt_string QEventTransition_tr2(const char* s, const char* c);
struct miqt_string QEventTransition_tr3(const char* s, const char* c, int n);
struct miqt_string QEventTransition_trUtf82(const char* s, const char* c);
struct miqt_string QEventTransition_trUtf83(const char* s, const char* c, int n);
bool QEventTransition_override_virtual_eventTest(void* self, intptr_t slot);
bool QEventTransition_virtualbase_eventTest(void* self, QEvent* event);
bool QEventTransition_override_virtual_onTransition(void* self, intptr_t slot);
void QEventTransition_virtualbase_onTransition(void* self, QEvent* event);
bool QEventTransition_override_virtual_event(void* self, intptr_t slot);
bool QEventTransition_virtualbase_event(void* self, QEvent* e);
bool QEventTransition_override_virtual_eventFilter(void* self, intptr_t slot);
bool QEventTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QEventTransition_override_virtual_timerEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QEventTransition_override_virtual_childEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_childEvent(void* self, QChildEvent* event);
bool QEventTransition_override_virtual_customEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_customEvent(void* self, QEvent* event);
bool QEventTransition_override_virtual_connectNotify(void* self, intptr_t slot);
void QEventTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QEventTransition_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QEventTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QEventTransition_delete(QEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
