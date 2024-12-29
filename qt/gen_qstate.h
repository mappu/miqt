#pragma once
#ifndef MIQT_QT_GEN_QSTATE_H
#define MIQT_QT_GEN_QSTATE_H

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
class QEvent;
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
class QVariant;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QVariant QVariant;
#endif

QState* QState_new();
QState* QState_new2(int childMode);
QState* QState_new3(QState* parent);
QState* QState_new4(int childMode, QState* parent);
void QState_virtbase(QState* src, QAbstractState** outptr_QAbstractState);
QMetaObject* QState_MetaObject(const QState* self);
void* QState_Metacast(QState* self, const char* param1);
struct miqt_string QState_Tr(const char* s);
struct miqt_string QState_TrUtf8(const char* s);
QAbstractState* QState_ErrorState(const QState* self);
void QState_SetErrorState(QState* self, QAbstractState* state);
void QState_AddTransition(QState* self, QAbstractTransition* transition);
QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target);
QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target);
void QState_RemoveTransition(QState* self, QAbstractTransition* transition);
struct miqt_array /* of QAbstractTransition* */  QState_Transitions(const QState* self);
QAbstractState* QState_InitialState(const QState* self);
void QState_SetInitialState(QState* self, QAbstractState* state);
int QState_ChildMode(const QState* self);
void QState_SetChildMode(QState* self, int mode);
void QState_AssignProperty(QState* self, QObject* object, const char* name, QVariant* value);
void QState_OnEntry(QState* self, QEvent* event);
void QState_OnExit(QState* self, QEvent* event);
bool QState_Event(QState* self, QEvent* e);
struct miqt_string QState_Tr2(const char* s, const char* c);
struct miqt_string QState_Tr3(const char* s, const char* c, int n);
struct miqt_string QState_TrUtf82(const char* s, const char* c);
struct miqt_string QState_TrUtf83(const char* s, const char* c, int n);
void QState_override_virtual_OnEntry(void* self, intptr_t slot);
void QState_virtualbase_OnEntry(void* self, QEvent* event);
void QState_override_virtual_OnExit(void* self, intptr_t slot);
void QState_virtualbase_OnExit(void* self, QEvent* event);
void QState_override_virtual_Event(void* self, intptr_t slot);
bool QState_virtualbase_Event(void* self, QEvent* e);
void QState_Delete(QState* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
