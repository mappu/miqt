#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QHTTPMULTIPART_H
#define MIQT_QT6_NETWORK_GEN_QHTTPMULTIPART_H

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
class QHttpMultiPart;
class QHttpPart;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QHttpPart QHttpPart;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QHttpPart* QHttpPart_new();
QHttpPart* QHttpPart_new2(QHttpPart* other);
void QHttpPart_operatorAssign(QHttpPart* self, QHttpPart* other);
void QHttpPart_swap(QHttpPart* self, QHttpPart* other);
bool QHttpPart_operatorEqual(const QHttpPart* self, QHttpPart* other);
bool QHttpPart_operatorNotEqual(const QHttpPart* self, QHttpPart* other);
void QHttpPart_setHeader(QHttpPart* self, int header, QVariant* value);
void QHttpPart_setRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue);
void QHttpPart_setBody(QHttpPart* self, struct miqt_string body);
void QHttpPart_setBodyDevice(QHttpPart* self, QIODevice* device);

void QHttpPart_delete(QHttpPart* self);

QHttpMultiPart* QHttpMultiPart_new();
QHttpMultiPart* QHttpMultiPart_new2(int contentType);
QHttpMultiPart* QHttpMultiPart_new3(QObject* parent);
QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent);
void QHttpMultiPart_virtbase(QHttpMultiPart* src, QObject** outptr_QObject);
QMetaObject* QHttpMultiPart_metaObject(const QHttpMultiPart* self);
void* QHttpMultiPart_metacast(QHttpMultiPart* self, const char* param1);
struct miqt_string QHttpMultiPart_tr(const char* s);
void QHttpMultiPart_append(QHttpMultiPart* self, QHttpPart* httpPart);
void QHttpMultiPart_setContentType(QHttpMultiPart* self, int contentType);
struct miqt_string QHttpMultiPart_boundary(const QHttpMultiPart* self);
void QHttpMultiPart_setBoundary(QHttpMultiPart* self, struct miqt_string boundary);
struct miqt_string QHttpMultiPart_tr2(const char* s, const char* c);
struct miqt_string QHttpMultiPart_tr3(const char* s, const char* c, int n);

bool QHttpMultiPart_override_virtual_event(void* self, intptr_t slot);
bool QHttpMultiPart_virtualbase_event(void* self, QEvent* event);
bool QHttpMultiPart_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHttpMultiPart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHttpMultiPart_override_virtual_timerEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHttpMultiPart_override_virtual_childEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHttpMultiPart_override_virtual_customEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_customEvent(void* self, QEvent* event);
bool QHttpMultiPart_override_virtual_connectNotify(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHttpMultiPart_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QHttpMultiPart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHttpMultiPart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHttpMultiPart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHttpMultiPart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHttpMultiPart_delete(QHttpMultiPart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
