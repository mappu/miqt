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
class QMetaObject;
class QObject;
class QState;
class QStateMachine;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
#endif

QMetaObject* QAbstractState_MetaObject(const QAbstractState* self);
void* QAbstractState_Metacast(QAbstractState* self, const char* param1);
struct miqt_string QAbstractState_Tr(const char* s);
struct miqt_string QAbstractState_TrUtf8(const char* s);
QState* QAbstractState_ParentState(const QAbstractState* self);
QStateMachine* QAbstractState_Machine(const QAbstractState* self);
bool QAbstractState_Active(const QAbstractState* self);
void QAbstractState_ActiveChanged(QAbstractState* self, bool active);
void QAbstractState_connect_ActiveChanged(QAbstractState* self, intptr_t slot);
void QAbstractState_OnEntry(QAbstractState* self, QEvent* event);
void QAbstractState_OnExit(QAbstractState* self, QEvent* event);
bool QAbstractState_Event(QAbstractState* self, QEvent* e);
struct miqt_string QAbstractState_Tr2(const char* s, const char* c);
struct miqt_string QAbstractState_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractState_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractState_TrUtf83(const char* s, const char* c, int n);
void QAbstractState_Delete(QAbstractState* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
