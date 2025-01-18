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
class QEvent;
class QHistoryState;
class QMetaObject;
class QObject;
class QState;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QEvent QEvent;
typedef struct QHistoryState QHistoryState;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
#endif

QHistoryState* QHistoryState_new();
QHistoryState* QHistoryState_new2(int typeVal);
QHistoryState* QHistoryState_new3(QState* parent);
QHistoryState* QHistoryState_new4(int typeVal, QState* parent);
void QHistoryState_virtbase(QHistoryState* src, QAbstractState** outptr_QAbstractState);
QMetaObject* QHistoryState_MetaObject(const QHistoryState* self);
void* QHistoryState_Metacast(QHistoryState* self, const char* param1);
struct miqt_string QHistoryState_Tr(const char* s);
struct miqt_string QHistoryState_TrUtf8(const char* s);
QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self);
void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition);
QAbstractState* QHistoryState_DefaultState(const QHistoryState* self);
void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state);
int QHistoryState_HistoryType(const QHistoryState* self);
void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal);
void QHistoryState_OnEntry(QHistoryState* self, QEvent* event);
void QHistoryState_OnExit(QHistoryState* self, QEvent* event);
bool QHistoryState_Event(QHistoryState* self, QEvent* e);
struct miqt_string QHistoryState_Tr2(const char* s, const char* c);
struct miqt_string QHistoryState_Tr3(const char* s, const char* c, int n);
struct miqt_string QHistoryState_TrUtf82(const char* s, const char* c);
struct miqt_string QHistoryState_TrUtf83(const char* s, const char* c, int n);
bool QHistoryState_override_virtual_OnEntry(void* self, intptr_t slot);
void QHistoryState_virtualbase_OnEntry(void* self, QEvent* event);
bool QHistoryState_override_virtual_OnExit(void* self, intptr_t slot);
void QHistoryState_virtualbase_OnExit(void* self, QEvent* event);
bool QHistoryState_override_virtual_Event(void* self, intptr_t slot);
bool QHistoryState_virtualbase_Event(void* self, QEvent* e);
void QHistoryState_Delete(QHistoryState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
