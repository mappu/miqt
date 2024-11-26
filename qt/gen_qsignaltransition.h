#pragma once
#ifndef MIQT_QT_GEN_QSIGNALTRANSITION_H
#define MIQT_QT_GEN_QSIGNALTRANSITION_H

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
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
#endif

void QSignalTransition_new(QSignalTransition** outptr_QSignalTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QSignalTransition_new2(QObject* sender, const char* signal, QSignalTransition** outptr_QSignalTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QSignalTransition_new3(QState* sourceState, QSignalTransition** outptr_QSignalTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
void QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState, QSignalTransition** outptr_QSignalTransition, QAbstractTransition** outptr_QAbstractTransition, QObject** outptr_QObject);
QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self);
void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1);
struct miqt_string QSignalTransition_Tr(const char* s);
struct miqt_string QSignalTransition_TrUtf8(const char* s);
QObject* QSignalTransition_SenderObject(const QSignalTransition* self);
void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender);
struct miqt_string QSignalTransition_Signal(const QSignalTransition* self);
void QSignalTransition_SetSignal(QSignalTransition* self, struct miqt_string signal);
bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event);
bool QSignalTransition_Event(QSignalTransition* self, QEvent* e);
struct miqt_string QSignalTransition_Tr2(const char* s, const char* c);
struct miqt_string QSignalTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QSignalTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QSignalTransition_TrUtf83(const char* s, const char* c, int n);
void QSignalTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_EventTest(void* self, QEvent* event);
void QSignalTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QSignalTransition_virtualbase_OnTransition(void* self, QEvent* event);
void QSignalTransition_override_virtual_Event(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_Event(void* self, QEvent* e);
void QSignalTransition_Delete(QSignalTransition* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
