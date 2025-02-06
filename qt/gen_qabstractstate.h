#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTSTATE_H
#define MIQT_QT_GEN_QABSTRACTSTATE_H

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
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QState;
class QStateMachine;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
#endif

void QAbstractState_virtbase(QAbstractState* src, QObject** outptr_QObject);
QMetaObject* QAbstractState_metaObject(const QAbstractState* self);
void* QAbstractState_metacast(QAbstractState* self, const char* param1);
struct miqt_string QAbstractState_tr(const char* s);
struct miqt_string QAbstractState_trUtf8(const char* s);
QState* QAbstractState_parentState(const QAbstractState* self);
QStateMachine* QAbstractState_machine(const QAbstractState* self);
bool QAbstractState_active(const QAbstractState* self);
void QAbstractState_activeChanged(QAbstractState* self, bool active);
void QAbstractState_connect_activeChanged(QAbstractState* self, intptr_t slot);
void QAbstractState_onEntry(QAbstractState* self, QEvent* event);
void QAbstractState_onExit(QAbstractState* self, QEvent* event);
bool QAbstractState_event(QAbstractState* self, QEvent* e);
struct miqt_string QAbstractState_tr2(const char* s, const char* c);
struct miqt_string QAbstractState_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractState_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractState_trUtf83(const char* s, const char* c, int n);
void QAbstractState_delete(QAbstractState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
