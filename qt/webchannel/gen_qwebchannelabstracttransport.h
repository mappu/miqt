#pragma once
#ifndef MIQT_QT_WEBCHANNEL_GEN_QWEBCHANNELABSTRACTTRANSPORT_H
#define MIQT_QT_WEBCHANNEL_GEN_QWEBCHANNELABSTRACTTRANSPORT_H

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
QMetaObject* QWebChannelAbstractTransport_MetaObject(const QWebChannelAbstractTransport* self);
void* QWebChannelAbstractTransport_Metacast(QWebChannelAbstractTransport* self, const char* param1);
struct miqt_string QWebChannelAbstractTransport_Tr(const char* s);
struct miqt_string QWebChannelAbstractTransport_TrUtf8(const char* s);
void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, QJsonObject* message);
void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport);
void QWebChannelAbstractTransport_connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot);
struct miqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c);
struct miqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebChannelAbstractTransport_TrUtf82(const char* s, const char* c);
struct miqt_string QWebChannelAbstractTransport_TrUtf83(const char* s, const char* c, int n);
void QWebChannelAbstractTransport_override_virtual_SendMessage(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_SendMessage(void* self, QJsonObject* message);
void QWebChannelAbstractTransport_override_virtual_Event(void* self, intptr_t slot);
bool QWebChannelAbstractTransport_virtualbase_Event(void* self, QEvent* event);
void QWebChannelAbstractTransport_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebChannelAbstractTransport_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebChannelAbstractTransport_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebChannelAbstractTransport_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebChannelAbstractTransport_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebChannelAbstractTransport_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebChannelAbstractTransport_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebChannelAbstractTransport_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
