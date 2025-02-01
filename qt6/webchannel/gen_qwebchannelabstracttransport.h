#pragma once
#ifndef MIQT_QT6_WEBCHANNEL_GEN_QWEBCHANNELABSTRACTTRANSPORT_H
#define MIQT_QT6_WEBCHANNEL_GEN_QWEBCHANNELABSTRACTTRANSPORT_H

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
class QJsonObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWebChannelAbstractTransport;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJsonObject QJsonObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
#endif

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new();
QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent);
void QWebChannelAbstractTransport_virtbase(QWebChannelAbstractTransport* src, QObject** outptr_QObject);
QMetaObject* QWebChannelAbstractTransport_metaObject(const QWebChannelAbstractTransport* self);
void* QWebChannelAbstractTransport_metacast(QWebChannelAbstractTransport* self, const char* param1);
struct miqt_string QWebChannelAbstractTransport_tr(const char* s);
void QWebChannelAbstractTransport_sendMessage(QWebChannelAbstractTransport* self, QJsonObject* message);
void QWebChannelAbstractTransport_messageReceived(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport);
void QWebChannelAbstractTransport_connect_messageReceived(QWebChannelAbstractTransport* self, intptr_t slot);
struct miqt_string QWebChannelAbstractTransport_tr2(const char* s, const char* c);
struct miqt_string QWebChannelAbstractTransport_tr3(const char* s, const char* c, int n);
bool QWebChannelAbstractTransport_override_virtual_sendMessage(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_sendMessage(void* self, QJsonObject* message);
bool QWebChannelAbstractTransport_override_virtual_event(void* self, intptr_t slot);
bool QWebChannelAbstractTransport_virtualbase_event(void* self, QEvent* event);
bool QWebChannelAbstractTransport_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebChannelAbstractTransport_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebChannelAbstractTransport_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebChannelAbstractTransport_override_virtual_childEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebChannelAbstractTransport_override_virtual_customEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_customEvent(void* self, QEvent* event);
bool QWebChannelAbstractTransport_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebChannelAbstractTransport_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QWebChannelAbstractTransport_delete(QWebChannelAbstractTransport* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
