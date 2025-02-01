#pragma once
#ifndef MIQT_QT_GEN_QKEYEVENTTRANSITION_H
#define MIQT_QT_GEN_QKEYEVENTTRANSITION_H

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
class QKeyEventTransition;
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
typedef struct QKeyEventTransition QKeyEventTransition;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QKeyEventTransition* QKeyEventTransition_new();
QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int type, int key);
QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState);
QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int type, int key, QState* sourceState);
void QKeyEventTransition_virtbase(QKeyEventTransition* src, QEventTransition** outptr_QEventTransition);
QMetaObject* QKeyEventTransition_metaObject(const QKeyEventTransition* self);
void* QKeyEventTransition_metacast(QKeyEventTransition* self, const char* param1);
struct miqt_string QKeyEventTransition_tr(const char* s);
struct miqt_string QKeyEventTransition_trUtf8(const char* s);
int QKeyEventTransition_key(const QKeyEventTransition* self);
void QKeyEventTransition_setKey(QKeyEventTransition* self, int key);
int QKeyEventTransition_modifierMask(const QKeyEventTransition* self);
void QKeyEventTransition_setModifierMask(QKeyEventTransition* self, int modifiers);
void QKeyEventTransition_onTransition(QKeyEventTransition* self, QEvent* event);
bool QKeyEventTransition_eventTest(QKeyEventTransition* self, QEvent* event);
struct miqt_string QKeyEventTransition_tr2(const char* s, const char* c);
struct miqt_string QKeyEventTransition_tr3(const char* s, const char* c, int n);
struct miqt_string QKeyEventTransition_trUtf82(const char* s, const char* c);
struct miqt_string QKeyEventTransition_trUtf83(const char* s, const char* c, int n);
bool QKeyEventTransition_override_virtual_onTransition(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_onTransition(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_eventTest(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_eventTest(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_event(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_event(void* self, QEvent* e);
bool QKeyEventTransition_override_virtual_eventFilter(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QKeyEventTransition_override_virtual_timerEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QKeyEventTransition_override_virtual_childEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_childEvent(void* self, QChildEvent* event);
bool QKeyEventTransition_override_virtual_customEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_customEvent(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_connectNotify(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QKeyEventTransition_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QKeyEventTransition_delete(QKeyEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
