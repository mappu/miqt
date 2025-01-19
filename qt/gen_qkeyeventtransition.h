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
QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key);
QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState);
QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState);
void QKeyEventTransition_virtbase(QKeyEventTransition* src, QEventTransition** outptr_QEventTransition);
QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self);
void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1);
struct miqt_string QKeyEventTransition_Tr(const char* s);
struct miqt_string QKeyEventTransition_TrUtf8(const char* s);
int QKeyEventTransition_Key(const QKeyEventTransition* self);
void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key);
int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self);
void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers);
void QKeyEventTransition_OnTransition(QKeyEventTransition* self, QEvent* event);
bool QKeyEventTransition_EventTest(QKeyEventTransition* self, QEvent* event);
struct miqt_string QKeyEventTransition_Tr2(const char* s, const char* c);
struct miqt_string QKeyEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QKeyEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QKeyEventTransition_TrUtf83(const char* s, const char* c, int n);
bool QKeyEventTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_OnTransition(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_EventTest(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_Event(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_Event(void* self, QEvent* e);
bool QKeyEventTransition_override_virtual_EventFilter(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QKeyEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QKeyEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QKeyEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_CustomEvent(void* self, QEvent* event);
bool QKeyEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QKeyEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QKeyEventTransition_Delete(QKeyEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
