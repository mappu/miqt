#pragma once
#ifndef MIQT_QT_GEN_QCOREEVENT_H
#define MIQT_QT_GEN_QCOREEVENT_H

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
class QDynamicPropertyChangeEvent;
class QEvent;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDynamicPropertyChangeEvent QDynamicPropertyChangeEvent;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QEvent* QEvent_new(int type);
QEvent* QEvent_new2(QEvent* other);
void QEvent_operatorAssign(QEvent* self, QEvent* other);
int QEvent_type(const QEvent* self);
bool QEvent_spontaneous(const QEvent* self);
void QEvent_setAccepted(QEvent* self, bool accepted);
bool QEvent_isAccepted(const QEvent* self);
void QEvent_accept(QEvent* self);
void QEvent_ignore(QEvent* self);
int QEvent_registerEventType();
int QEvent_registerEventTypeWithHint(int hint);
void QEvent_delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
QTimerEvent* QTimerEvent_new2(QTimerEvent* param1);
void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent);
int QTimerEvent_timerId(const QTimerEvent* self);
void QTimerEvent_delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(int type, QObject* child);
QChildEvent* QChildEvent_new2(QChildEvent* param1);
void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent);
QObject* QChildEvent_child(const QChildEvent* self);
bool QChildEvent_added(const QChildEvent* self);
bool QChildEvent_polished(const QChildEvent* self);
bool QChildEvent_removed(const QChildEvent* self);
void QChildEvent_delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1);
void QDynamicPropertyChangeEvent_virtbase(QDynamicPropertyChangeEvent* src, QEvent** outptr_QEvent);
struct miqt_string QDynamicPropertyChangeEvent_propertyName(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_delete(QDynamicPropertyChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
