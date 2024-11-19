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
class QEvent;
class QEventTransition;
class QKeyEventTransition;
class QMetaObject;
class QObject;
class QState;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QEvent QEvent;
typedef struct QEventTransition QEventTransition;
typedef struct QKeyEventTransition QKeyEventTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
#endif

void QKeyEventTransition_new(QKeyEventTransition** outptr_QKeyEventTransition, QEventTransition** outptr_QEventTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QKeyEventTransition_new2(QObject* object, int typeVal, int key, QKeyEventTransition** outptr_QKeyEventTransition, QEventTransition** outptr_QEventTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QKeyEventTransition_new3(QState* sourceState, QKeyEventTransition** outptr_QKeyEventTransition, QEventTransition** outptr_QEventTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState, QKeyEventTransition** outptr_QKeyEventTransition, QEventTransition** outptr_QEventTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
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
void QKeyEventTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QKeyEventTransition_virtualbase_OnTransition(void* self, QEvent* event);
void QKeyEventTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_EventTest(void* self, QEvent* event);
void QKeyEventTransition_override_virtual_Event(void* self, intptr_t slot);
bool QKeyEventTransition_virtualbase_Event(void* self, QEvent* e);
void QKeyEventTransition_Delete(QKeyEventTransition* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
