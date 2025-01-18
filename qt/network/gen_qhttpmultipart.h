#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QHTTPMULTIPART_H
#define MIQT_QT_NETWORK_GEN_QHTTPMULTIPART_H

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
void QHttpPart_OperatorAssign(QHttpPart* self, QHttpPart* other);
void QHttpPart_Swap(QHttpPart* self, QHttpPart* other);
bool QHttpPart_OperatorEqual(const QHttpPart* self, QHttpPart* other);
bool QHttpPart_OperatorNotEqual(const QHttpPart* self, QHttpPart* other);
void QHttpPart_SetHeader(QHttpPart* self, int header, QVariant* value);
void QHttpPart_SetRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue);
void QHttpPart_SetBody(QHttpPart* self, struct miqt_string body);
void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device);
void QHttpPart_Delete(QHttpPart* self);

QHttpMultiPart* QHttpMultiPart_new();
QHttpMultiPart* QHttpMultiPart_new2(int contentType);
QHttpMultiPart* QHttpMultiPart_new3(QObject* parent);
QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent);
void QHttpMultiPart_virtbase(QHttpMultiPart* src, QObject** outptr_QObject);
QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self);
void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1);
struct miqt_string QHttpMultiPart_Tr(const char* s);
struct miqt_string QHttpMultiPart_TrUtf8(const char* s);
void QHttpMultiPart_Append(QHttpMultiPart* self, QHttpPart* httpPart);
void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType);
struct miqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self);
void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, struct miqt_string boundary);
struct miqt_string QHttpMultiPart_Tr2(const char* s, const char* c);
struct miqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n);
struct miqt_string QHttpMultiPart_TrUtf82(const char* s, const char* c);
struct miqt_string QHttpMultiPart_TrUtf83(const char* s, const char* c, int n);
bool QHttpMultiPart_override_virtual_Event(void* self, intptr_t slot);
bool QHttpMultiPart_virtualbase_Event(void* self, QEvent* event);
bool QHttpMultiPart_override_virtual_EventFilter(void* self, intptr_t slot);
bool QHttpMultiPart_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QHttpMultiPart_override_virtual_TimerEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QHttpMultiPart_override_virtual_ChildEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QHttpMultiPart_override_virtual_CustomEvent(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_CustomEvent(void* self, QEvent* event);
bool QHttpMultiPart_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QHttpMultiPart_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QHttpMultiPart_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QHttpMultiPart_Delete(QHttpMultiPart* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
