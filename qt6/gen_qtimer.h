#pragma once
#ifndef MIQT_QT6_GEN_QTIMER_H
#define MIQT_QT6_GEN_QTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimer;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimer QTimer;
typedef struct QTimerEvent QTimerEvent;
#endif

void QTimer_new(QTimer** outptr_QTimer, QObject** outptr_QObject);
void QTimer_new2(QObject* parent, QTimer** outptr_QTimer, QObject** outptr_QObject);
QMetaObject* QTimer_MetaObject(const QTimer* self);
void* QTimer_Metacast(QTimer* self, const char* param1);
struct miqt_string QTimer_Tr(const char* s);
bool QTimer_IsActive(const QTimer* self);
int QTimer_TimerId(const QTimer* self);
void QTimer_SetInterval(QTimer* self, int msec);
int QTimer_Interval(const QTimer* self);
int QTimer_RemainingTime(const QTimer* self);
void QTimer_SetTimerType(QTimer* self, int atype);
int QTimer_TimerType(const QTimer* self);
void QTimer_SetSingleShot(QTimer* self, bool singleShot);
bool QTimer_IsSingleShot(const QTimer* self);
void QTimer_Start(QTimer* self, int msec);
void QTimer_Start2(QTimer* self);
void QTimer_Stop(QTimer* self);
void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1);
struct miqt_string QTimer_Tr2(const char* s, const char* c);
struct miqt_string QTimer_Tr3(const char* s, const char* c, int n);
void QTimer_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTimer_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QTimer_override_virtual_Event(void* self, intptr_t slot);
bool QTimer_virtualbase_Event(void* self, QEvent* event);
void QTimer_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTimer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QTimer_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTimer_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QTimer_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTimer_virtualbase_CustomEvent(void* self, QEvent* event);
void QTimer_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTimer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QTimer_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTimer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTimer_Delete(QTimer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
