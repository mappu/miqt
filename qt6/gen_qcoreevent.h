#pragma once
#ifndef MIQT_QT6_GEN_QCOREEVENT_H
#define MIQT_QT6_GEN_QCOREEVENT_H

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
int QEvent_type(const QEvent* self);
bool QEvent_spontaneous(const QEvent* self);
void QEvent_setAccepted(QEvent* self, bool accepted);
bool QEvent_isAccepted(const QEvent* self);
void QEvent_accept(QEvent* self);
void QEvent_ignore(QEvent* self);
bool QEvent_isInputEvent(const QEvent* self);
bool QEvent_isPointerEvent(const QEvent* self);
bool QEvent_isSinglePointEvent(const QEvent* self);
int QEvent_registerEventType();
QEvent* QEvent_clone(const QEvent* self);
int QEvent_registerEventTypeWithHint(int hint);
bool QEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QEvent_virtualbase_clone(const void* self);
void QEvent_delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent);
QTimerEvent* QTimerEvent_clone(const QTimerEvent* self);
int QTimerEvent_timerId(const QTimerEvent* self);
bool QTimerEvent_override_virtual_clone(void* self, intptr_t slot);
QTimerEvent* QTimerEvent_virtualbase_clone(const void* self);
bool QTimerEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted);
void QTimerEvent_delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(int type, QObject* child);
void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent);
QChildEvent* QChildEvent_clone(const QChildEvent* self);
QObject* QChildEvent_child(const QChildEvent* self);
bool QChildEvent_added(const QChildEvent* self);
bool QChildEvent_polished(const QChildEvent* self);
bool QChildEvent_removed(const QChildEvent* self);
bool QChildEvent_override_virtual_clone(void* self, intptr_t slot);
QChildEvent* QChildEvent_virtualbase_clone(const void* self);
bool QChildEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QChildEvent_virtualbase_setAccepted(void* self, bool accepted);
void QChildEvent_delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name);
void QDynamicPropertyChangeEvent_virtbase(QDynamicPropertyChangeEvent* src, QEvent** outptr_QEvent);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_clone(const QDynamicPropertyChangeEvent* self);
struct miqt_string QDynamicPropertyChangeEvent_propertyName(const QDynamicPropertyChangeEvent* self);
bool QDynamicPropertyChangeEvent_override_virtual_clone(void* self, intptr_t slot);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_virtualbase_clone(const void* self);
bool QDynamicPropertyChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QDynamicPropertyChangeEvent_virtualbase_setAccepted(void* self, bool accepted);
void QDynamicPropertyChangeEvent_delete(QDynamicPropertyChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
