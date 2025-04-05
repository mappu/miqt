#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLPROPERTYMAP_H
#define MIQT_QT6_QML_GEN_QQMLPROPERTYMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQmlPropertyMap;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlPropertyMap QQmlPropertyMap;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QQmlPropertyMap* QQmlPropertyMap_new();
QQmlPropertyMap* QQmlPropertyMap_new2(QObject* parent);
void QQmlPropertyMap_virtbase(QQmlPropertyMap* src, QObject** outptr_QObject);
QMetaObject* QQmlPropertyMap_metaObject(const QQmlPropertyMap* self);
void* QQmlPropertyMap_metacast(QQmlPropertyMap* self, const char* param1);
struct miqt_string QQmlPropertyMap_tr(const char* s);
QVariant* QQmlPropertyMap_value(const QQmlPropertyMap* self, struct miqt_string key);
void QQmlPropertyMap_insert(QQmlPropertyMap* self, struct miqt_string key, QVariant* value);
void QQmlPropertyMap_insertWithValues(QQmlPropertyMap* self, struct miqt_map /* of struct miqt_string to QVariant* */  values);
void QQmlPropertyMap_clear(QQmlPropertyMap* self, struct miqt_string key);
void QQmlPropertyMap_freeze(QQmlPropertyMap* self);
struct miqt_array /* of struct miqt_string */  QQmlPropertyMap_keys(const QQmlPropertyMap* self);
int QQmlPropertyMap_count(const QQmlPropertyMap* self);
int QQmlPropertyMap_size(const QQmlPropertyMap* self);
bool QQmlPropertyMap_isEmpty(const QQmlPropertyMap* self);
bool QQmlPropertyMap_contains(const QQmlPropertyMap* self, struct miqt_string key);
QVariant* QQmlPropertyMap_operatorSubscript(QQmlPropertyMap* self, struct miqt_string key);
QVariant* QQmlPropertyMap_operatorSubscriptWithKey(const QQmlPropertyMap* self, struct miqt_string key);
void QQmlPropertyMap_valueChanged(QQmlPropertyMap* self, struct miqt_string key, QVariant* value);
void QQmlPropertyMap_connect_valueChanged(QQmlPropertyMap* self, intptr_t slot);
QVariant* QQmlPropertyMap_updateValue(QQmlPropertyMap* self, struct miqt_string key, QVariant* input);
struct miqt_string QQmlPropertyMap_tr2(const char* s, const char* c);
struct miqt_string QQmlPropertyMap_tr3(const char* s, const char* c, int n);
bool QQmlPropertyMap_override_virtual_updateValue(void* self, intptr_t slot);
QVariant* QQmlPropertyMap_virtualbase_updateValue(void* self, struct miqt_string key, QVariant* input);
bool QQmlPropertyMap_override_virtual_event(void* self, intptr_t slot);
bool QQmlPropertyMap_virtualbase_event(void* self, QEvent* event);
bool QQmlPropertyMap_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlPropertyMap_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlPropertyMap_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlPropertyMap_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlPropertyMap_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlPropertyMap_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlPropertyMap_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlPropertyMap_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlPropertyMap_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlPropertyMap_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlPropertyMap_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlPropertyMap_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlPropertyMap_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlPropertyMap_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlPropertyMap_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlPropertyMap_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlPropertyMap_delete(QQmlPropertyMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
