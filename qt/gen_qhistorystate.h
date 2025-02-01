#pragma once
#ifndef MIQT_QT_GEN_QHISTORYSTATE_H
#define MIQT_QT_GEN_QHISTORYSTATE_H

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
class QAbstractTransition;
class QChildEvent;
class QEvent;
class QHistoryState;
class QMetaMethod;
class QMetaObject;
class QObject;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHistoryState QHistoryState;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QHistoryState* QHistoryState_new();
QHistoryState* QHistoryState_new2(int type);
QHistoryState* QHistoryState_new3(QState* parent);
QHistoryState* QHistoryState_new4(int type, QState* parent);
void QHistoryState_virtbase(QHistoryState* src, QAbstractState** outptr_QAbstractState);
QMetaObject* QHistoryState_metaObject(const QHistoryState* self);
void* QHistoryState_metacast(QHistoryState* self, const char* param1);
struct miqt_string QHistoryState_tr(const char* s);
struct miqt_string QHistoryState_trUtf8(const char* s);
QAbstractTransition* QHistoryState_defaultTransition(const QHistoryState* self);
void QHistoryState_setDefaultTransition(QHistoryState* self, QAbstractTransition* transition);
QAbstractState* QHistoryState_defaultState(const QHistoryState* self);
void QHistoryState_setDefaultState(QHistoryState* self, QAbstractState* state);
int QHistoryState_historyType(const QHistoryState* self);
void QHistoryState_setHistoryType(QHistoryState* self, int type);
void QHistoryState_onEntry(QHistoryState* self, QEvent* event);
void QHistoryState_onExit(QHistoryState* self, QEvent* event);
bool QHistoryState_event(QHistoryState* self, QEvent* e);
struct miqt_string QHistoryState_tr2(const char* s, const char* c);
struct miqt_string QHistoryState_tr3(const char* s, const char* c, int n);
struct miqt_string QHistoryState_trUtf82(const char* s, const char* c);
struct miqt_string QHistoryState_trUtf83(const char* s, const char* c, int n);
bool QHistoryState_override_virtual_onEntry(void* self, intptr_t slot);
void QHistoryState_virtualbase_onEntry(void* self, QEvent* event);
bool QHistoryState_override_virtual_onExit(void* self, intptr_t slot);
void QHistoryState_virtualbase_onExit(void* self, QEvent* event);
bool QHistoryState_override_virtual_event(void* self, intptr_t slot);
bool QHistoryState_virtualbase_event(void* self, QEvent* e);
bool QHistoryState_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHistoryState_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHistoryState_override_virtual_timerEvent(void* self, intptr_t slot);
void QHistoryState_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHistoryState_override_virtual_childEvent(void* self, intptr_t slot);
void QHistoryState_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHistoryState_override_virtual_customEvent(void* self, intptr_t slot);
void QHistoryState_virtualbase_customEvent(void* self, QEvent* event);
bool QHistoryState_override_virtual_connectNotify(void* self, intptr_t slot);
void QHistoryState_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHistoryState_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHistoryState_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QHistoryState_delete(QHistoryState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
