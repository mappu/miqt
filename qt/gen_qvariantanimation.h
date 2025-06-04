#pragma once
#ifndef MIQT_QT_GEN_QVARIANTANIMATION_H
#define MIQT_QT_GEN_QVARIANTANIMATION_H

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
class QEasingCurve;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
class QVariantAnimation;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QChildEvent QChildEvent;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QVariantAnimation* QVariantAnimation_new();
QVariantAnimation* QVariantAnimation_new2(QObject* parent);
void QVariantAnimation_virtbase(QVariantAnimation* src, QAbstractAnimation** outptr_QAbstractAnimation);
QMetaObject* QVariantAnimation_metaObject(const QVariantAnimation* self);
void* QVariantAnimation_metacast(QVariantAnimation* self, const char* param1);
struct miqt_string QVariantAnimation_tr(const char* s);
struct miqt_string QVariantAnimation_trUtf8(const char* s);
QVariant* QVariantAnimation_startValue(const QVariantAnimation* self);
void QVariantAnimation_setStartValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_endValue(const QVariantAnimation* self);
void QVariantAnimation_setEndValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_keyValueAt(const QVariantAnimation* self, double step);
void QVariantAnimation_setKeyValueAt(QVariantAnimation* self, double step, QVariant* value);
struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  QVariantAnimation_keyValues(const QVariantAnimation* self);
void QVariantAnimation_setKeyValues(QVariantAnimation* self, struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  values);
QVariant* QVariantAnimation_currentValue(const QVariantAnimation* self);
int QVariantAnimation_duration(const QVariantAnimation* self);
void QVariantAnimation_setDuration(QVariantAnimation* self, int msecs);
QEasingCurve* QVariantAnimation_easingCurve(const QVariantAnimation* self);
void QVariantAnimation_setEasingCurve(QVariantAnimation* self, QEasingCurve* easing);
void QVariantAnimation_valueChanged(QVariantAnimation* self, QVariant* value);
void QVariantAnimation_connect_valueChanged(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_event(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_updateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_updateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_updateCurrentValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_interpolated(const QVariantAnimation* self, QVariant* from, QVariant* to, double progress);
struct miqt_string QVariantAnimation_tr2(const char* s, const char* c);
struct miqt_string QVariantAnimation_tr3(const char* s, const char* c, int n);
struct miqt_string QVariantAnimation_trUtf82(const char* s, const char* c);
struct miqt_string QVariantAnimation_trUtf83(const char* s, const char* c, int n);

bool QVariantAnimation_override_virtual_duration(void* self, intptr_t slot);
int QVariantAnimation_virtualbase_duration(const void* self);
bool QVariantAnimation_override_virtual_event(void* self, intptr_t slot);
bool QVariantAnimation_virtualbase_event(void* self, QEvent* event);
bool QVariantAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_updateCurrentTime(void* self, int param1);
bool QVariantAnimation_override_virtual_updateState(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_updateState(void* self, int newState, int oldState);
bool QVariantAnimation_override_virtual_updateCurrentValue(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value);
bool QVariantAnimation_override_virtual_interpolated(void* self, intptr_t slot);
QVariant* QVariantAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress);
bool QVariantAnimation_override_virtual_updateDirection(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_updateDirection(void* self, int direction);
bool QVariantAnimation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVariantAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVariantAnimation_override_virtual_timerEvent(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVariantAnimation_override_virtual_childEvent(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVariantAnimation_override_virtual_customEvent(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_customEvent(void* self, QEvent* event);
bool QVariantAnimation_override_virtual_connectNotify(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVariantAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QVariantAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVariantAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVariantAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVariantAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVariantAnimation_delete(QVariantAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
