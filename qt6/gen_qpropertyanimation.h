#pragma once
#ifndef MIQT_QT6_GEN_QPROPERTYANIMATION_H
#define MIQT_QT6_GEN_QPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPropertyAnimation;
class QTimerEvent;
class QVariant;
class QVariantAnimation;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPropertyAnimation QPropertyAnimation;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent);
void QPropertyAnimation_virtbase(QPropertyAnimation* src, QVariantAnimation** outptr_QVariantAnimation);
QMetaObject* QPropertyAnimation_metaObject(const QPropertyAnimation* self);
void* QPropertyAnimation_metacast(QPropertyAnimation* self, const char* param1);
struct miqt_string QPropertyAnimation_tr(const char* s);
QObject* QPropertyAnimation_targetObject(const QPropertyAnimation* self);
void QPropertyAnimation_setTargetObject(QPropertyAnimation* self, QObject* target);
struct miqt_string QPropertyAnimation_propertyName(const QPropertyAnimation* self);
void QPropertyAnimation_setPropertyName(QPropertyAnimation* self, struct miqt_string propertyName);
bool QPropertyAnimation_event(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_updateCurrentValue(QPropertyAnimation* self, QVariant* value);
void QPropertyAnimation_updateState(QPropertyAnimation* self, int newState, int oldState);
struct miqt_string QPropertyAnimation_tr2(const char* s, const char* c);
struct miqt_string QPropertyAnimation_tr3(const char* s, const char* c, int n);
bool QPropertyAnimation_override_virtual_event(void* self, intptr_t slot);
bool QPropertyAnimation_virtualbase_event(void* self, QEvent* event);
bool QPropertyAnimation_override_virtual_updateCurrentValue(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value);
bool QPropertyAnimation_override_virtual_updateState(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_updateState(void* self, int newState, int oldState);
bool QPropertyAnimation_override_virtual_duration(void* self, intptr_t slot);
int QPropertyAnimation_virtualbase_duration(const void* self);
bool QPropertyAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_updateCurrentTime(void* self, int param1);
bool QPropertyAnimation_override_virtual_interpolated(void* self, intptr_t slot);
QVariant* QPropertyAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress);
bool QPropertyAnimation_override_virtual_updateDirection(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_updateDirection(void* self, int direction);
bool QPropertyAnimation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPropertyAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPropertyAnimation_override_virtual_timerEvent(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPropertyAnimation_override_virtual_childEvent(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPropertyAnimation_override_virtual_customEvent(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_customEvent(void* self, QEvent* event);
bool QPropertyAnimation_override_virtual_connectNotify(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPropertyAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPropertyAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPropertyAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPropertyAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPropertyAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPropertyAnimation_delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
