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
QEventTransition* QEventTransition_new2(QObject* object, int typeVal);
QEventTransition* QEventTransition_new3(QState* sourceState);
QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState);
void QEventTransition_virtbase(QEventTransition* src, QAbstractTransition** outptr_QAbstractTransition);
QMetaObject* QEventTransition_MetaObject(const QEventTransition* self);
void* QEventTransition_Metacast(QEventTransition* self, const char* param1);
struct miqt_string QEventTransition_Tr(const char* s);
struct miqt_string QEventTransition_TrUtf8(const char* s);
QObject* QEventTransition_EventSource(const QEventTransition* self);
void QEventTransition_SetEventSource(QEventTransition* self, QObject* object);
int QEventTransition_EventType(const QEventTransition* self);
void QEventTransition_SetEventType(QEventTransition* self, int typeVal);
bool QEventTransition_EventTest(QEventTransition* self, QEvent* event);
void QEventTransition_OnTransition(QEventTransition* self, QEvent* event);
bool QEventTransition_Event(QEventTransition* self, QEvent* e);
struct miqt_string QEventTransition_Tr2(const char* s, const char* c);
struct miqt_string QEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QEventTransition_TrUtf83(const char* s, const char* c, int n);
bool QEventTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QEventTransition_virtualbase_EventTest(void* self, QEvent* event);
bool QEventTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QEventTransition_virtualbase_OnTransition(void* self, QEvent* event);
bool QEventTransition_override_virtual_Event(void* self, intptr_t slot);
bool QEventTransition_virtualbase_Event(void* self, QEvent* e);
bool QEventTransition_override_virtual_EventFilter(void* self, intptr_t slot);
bool QEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot);
void QEventTransition_virtualbase_CustomEvent(void* self, QEvent* event);
bool QEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QEventTransition_Delete(QEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
