#pragma once
#ifndef MIQT_QT_GEN_QFINALSTATE_H
#define MIQT_QT_GEN_QFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QMetaObject* QFinalState_MetaObject(const QFinalState* self);
void* QFinalState_Metacast(QFinalState* self, const char* param1);
struct miqt_string QFinalState_Tr(const char* s);
struct miqt_string QFinalState_TrUtf8(const char* s);
void QFinalState_OnEntry(QFinalState* self, QEvent* event);
void QFinalState_OnExit(QFinalState* self, QEvent* event);
bool QFinalState_Event(QFinalState* self, QEvent* e);
struct miqt_string QFinalState_Tr2(const char* s, const char* c);
struct miqt_string QFinalState_Tr3(const char* s, const char* c, int n);
struct miqt_string QFinalState_TrUtf82(const char* s, const char* c);
struct miqt_string QFinalState_TrUtf83(const char* s, const char* c, int n);
bool QFinalState_override_virtual_OnEntry(void* self, intptr_t slot);
void QFinalState_virtualbase_OnEntry(void* self, QEvent* event);
bool QFinalState_override_virtual_OnExit(void* self, intptr_t slot);
void QFinalState_virtualbase_OnExit(void* self, QEvent* event);
bool QFinalState_override_virtual_Event(void* self, intptr_t slot);
bool QFinalState_virtualbase_Event(void* self, QEvent* e);
bool QFinalState_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFinalState_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QFinalState_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QFinalState_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QFinalState_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFinalState_virtualbase_CustomEvent(void* self, QEvent* event);
bool QFinalState_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFinalState_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QFinalState_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFinalState_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFinalState_Delete(QFinalState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
